/*********************************************************************************************************
*
* File                : main.c
* Hardware Environment: 
* Build Environment   : RealView MDK-ARM  Version: 4.20
* Version             : V1.0
* By                  : 
*
*                                  (c) Copyright 2005-2011, WaveShare
*                                       http://www.waveshare.net
*                                          All Rights Reserved
*
*********************************************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "stm32f2xx.h"
#include "sdcard.h"
#include "usart.h"
#include "string.h"
#include "diskio.h"
#include "ff.h"
#include "UDA1380.h"

typedef enum
{
  LittleEndian,
  BigEndian
}Endianness;

typedef struct
{
  uint32_t  RIFFchunksize;
  uint16_t  FormatTag;
  uint16_t  NumChannels;
  uint32_t  SampleRate;
  uint32_t  ByteRate;
  uint16_t  BlockAlign;
  uint16_t  BitsPerSample;
  uint32_t  DataSize;
}
WAVE_FormatTypeDef;

typedef enum
{
  Valid_WAVE_File = 0,
  Unvalid_RIFF_ID,
  Unvalid_WAVE_Format,
  Unvalid_FormatChunk_ID,
  Unsupporetd_FormatTag,
  Unsupporetd_Number_Of_Channel,
  Unsupporetd_Sample_Rate,
  Unsupporetd_Bits_Per_Sample,
  Unvalid_DataChunk_ID,
  Unsupporetd_ExtraFormatBytes,
  Unvalid_FactChunk_ID
} ErrorCode;

/* Exported constants --------------------------------------------------------*/
#define  CHUNK_ID                            0x52494646  /* correspond to the letters 'RIFF' */
#define  FILE_FORMAT                         0x57415645  /* correspond to the letters 'WAVE' */
#define  FORMAT_ID                           0x666D7420  /* correspond to the letters 'fmt ' */
#define  DATA_ID                             0x64617461  /* correspond to the letters 'data' */
#define  FACT_ID                             0x66616374  /* correspond to the letters 'fact' */
#define  WAVE_FORMAT_PCM                     0x01
#define  FORMAT_CHNUK_SIZE                   0x10
#define  CHANNEL_MONO                        0x01
#define  CHANNEL_STEREO                      0x02
#define  SAMPLE_RATE_8000                    8000
#define  SAMPLE_RATE_11025                   11025
#define  SAMPLE_RATE_22050                   22050
#define  SAMPLE_RATE_44100                   44100
#define  BITS_PER_SAMPLE_8                   8
#define  BITS_PER_SAMPLE_16                  16

WAVE_FormatTypeDef WAVE_Format;

__IO uint32_t WaveDataLength = 0;
__IO ErrorCode WaveFileStatus = Unvalid_RIFF_ID;
static __IO uint32_t SpeechDataOffset = 0x00;
__IO uint32_t WaveCounter;

#define	BUFF_MAX_SS		1024	/* 512, 1024, 2048 or 4096 */

__IO uint32_t XferCplt = 0;/* wait for DMA transfert complete Flag*/
/* Private functions ---------------------------------------------------------*/
FATFS fs;            // Work area (file system object) for logical drive
FIL fileR;      // file objects
uint16_t buffer1[BUFF_MAX_SS] ={0x00};
uint16_t buffer2[BUFF_MAX_SS] ={0x00};
FRESULT res;         // FatFs function common result code
UINT BytesRead;         // File R/W count

#if _USE_LFN
char Fs_LongFileName[_MAX_LFN * (_DF1S ? 2 : 1) + 1];
#endif


void NVIC_Configuration(void);
void OutPutFile(void);
void AUDIO_TransferComplete_CallBack(uint32_t pBuffer, uint32_t Size);
ErrorCode WavePlayer_WaveParsing(uint32_t *FileLen);
uint32_t ReadUnit(uint8_t *buffer, uint8_t idx, uint8_t NbrOfBytes, Endianness BytesFormat);
void Audio_Play(uint32_t SD_I2S_AudioFreq);
void GET_SYSclock(void);
/*******************************************************************************
* Function Name  : NVIC_Config
* Description    : Configures SDIO IRQ channel.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void NVIC_Configuration(void)
{
  NVIC_InitTypeDef NVIC_InitStructure;

  /* Configure the NVIC Preemption Priority Bits */
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);

  NVIC_InitStructure.NVIC_IRQChannel = SDIO_IRQn;
  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;
  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
  NVIC_Init(&NVIC_InitStructure);

  NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQn;
  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 2;
  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;  
  NVIC_Init(&NVIC_InitStructure);
}
 
void OutPutFile(void)
{ 
	static uint32_t wavelen = 0;
	DIR dirs;
	char path[]="0:/";  

	printf("磁盘初始化:%d\r\n",disk_initialize(0));
	printf("挂载磁盘:%d\r\n",f_mount(0, &fs));

	printf("\r\n开始解析Audio.wav文件！\r\n");
	if (f_opendir(&dirs, path) == FR_OK) 
	{
    	if(f_open(&fileR, "0:Audio.wav", FA_OPEN_EXISTING | FA_READ)!=FR_OK)
		{
			printf("\r\nAudio.wav文件打开失败！\r\n");
			while(1);
		}
			
		if(f_read (&fileR, buffer1, BUFF_MAX_SS, &BytesRead)!=FR_OK)
		{
			printf("\r\n----------Audio.wav文件读取失败！----------\r\n");
			while(1);
		}

		WaveFileStatus = WavePlayer_WaveParsing(&wavelen);
		if (WaveFileStatus == Valid_WAVE_File)  /* the .WAV file is valid */
	      {
	        /* Set WaveDataLenght to the Speech wave length */
	        WaveDataLength = WAVE_Format.DataSize;
			printf("有效的WAV文件!\r\n");
  			printf("WAV文件解析完毕！\r\n\r\n");
	      }
		else
			printf("----------无WAV文件或者WAV文件错误！----------\r\n\r\n");
	}
	else
		printf("----------打开SD卡失败！----------\r\n");	
}

void AUDIO_TransferComplete_CallBack(uint32_t pBuffer, uint32_t Size)
{
  /* Calculate the remaining audio data in the file and the new size 
  for the DMA transfer. If the Audio files size is less than the DMA max 
  data transfer size, so there is no calculation to be done, just restart 
  from the beginning of the file ... */
  /* Check if the end of file has been reached */
  
#ifdef AUDIO_MAL_MODE_NORMAL 
  XferCplt = 1;
  if (WaveDataLength) WaveDataLength -= BUFF_MAX_SS;
  if (WaveDataLength < BUFF_MAX_SS) WaveDataLength = 0;
    
#endif /* AUDIO_MAL_MODE_CIRCULAR */
}

/**
* @brief  Reads a number of bytes from the SPI Flash and reorder them in Big
*         or little endian.
* @param  NbrOfBytes: number of bytes to read.
*         This parameter must be a number between 1 and 4.
* @param  ReadAddr: external memory address to read from.
* @param  Endians: specifies the bytes endianness.
*         This parameter can be one of the following values:
*             - LittleEndian
*             - BigEndian
* @retval Bytes read from the SPI Flash.
*/
uint32_t ReadUnit(uint8_t *buffer, uint8_t idx, uint8_t NbrOfBytes, Endianness BytesFormat)
{
  uint32_t index = 0;
  uint32_t temp = 0;

  for (index = 0; index < NbrOfBytes; index++)
  {
    temp |= buffer[idx + index] << (index * 8);
  }
  
  if (BytesFormat == BigEndian)
  {
    temp = __REV(temp);
  }
  return temp;
}

/**
  * @brief  Checks the format of the .WAV file and gets information about
  *   the audio format. This is done by reading the value of a
  *   number of parameters stored in the file header and comparing
  *   these to the values expected authenticates the format of a
  *   standard .WAV  file (44 bytes will be read). If  it is a valid
  *   .WAV file format, it continues reading the header to determine
  *   the  audio format such as the sample rate and the sampled data
  *   size. If the audio format is supported by this application,
  *   it retrieves the audio format in WAVE_Format structure and
  *   returns a zero value. Otherwise the function fails and the
  *   return value is nonzero.In this case, the return value specifies
  *   the cause of  the function fails. The error codes that can be
  *   returned by this function are declared in the header file.
  * @param  None
  * @retval Zero value if the function succeed, otherwise it return
  *         a nonzero value which specifies the error code.
  */
ErrorCode WavePlayer_WaveParsing(uint32_t *FileLen)
{
  uint32_t temp = 0x00;
  uint32_t extraformatbytes = 0;
  
  /* Read chunkID, must be 'RIFF' */
  temp = ReadUnit((uint8_t*)buffer1, 0, 4, BigEndian);
  if (temp != CHUNK_ID)
  {
    return(Unvalid_RIFF_ID);
  }
  printf(" >RIFF_ID:0x%x\r\n",temp);

  /* Read the file length */
  WAVE_Format.RIFFchunksize = ReadUnit((uint8_t*)buffer1, 4, 4, LittleEndian);
  printf(" >RIFFchunksize:%d\r\n",WAVE_Format.RIFFchunksize);

  /* Read the file format, must be 'WAVE' */
  temp = ReadUnit((uint8_t*)buffer1, 8, 4, BigEndian);
  if (temp != FILE_FORMAT)
  {
    return(Unvalid_WAVE_Format);
  }
  printf(" >WAVE_Format:0x%x\r\n",temp);

  /* Read the format chunk, must be'fmt ' */
  temp = ReadUnit((uint8_t*)buffer1, 12, 4, BigEndian);
  if (temp != FORMAT_ID)
  {
    return(Unvalid_FormatChunk_ID);
  }
  printf(" >FormatChunk_ID:0x%x\r\n",temp);

  /* Read the length of the 'fmt' data, must be 0x10 -------------------------*/
  temp = ReadUnit((uint8_t*)buffer1, 16, 4, LittleEndian);
  if (temp != 0x10)
  {
    extraformatbytes = 1;
  }
  printf(" >fmt data:%d\r\n",temp);

  /* Read the audio format, must be 0x01 (PCM) */
  WAVE_Format.FormatTag = ReadUnit((uint8_t*)buffer1, 20, 2, LittleEndian);
  if (WAVE_Format.FormatTag != WAVE_FORMAT_PCM)
  {
    printf(" >Unsupporetd_FormatTag: Not PCM\r\n");
    return(Unsupporetd_FormatTag);
  }
  printf(" >Unsupporetd_FormatTag: PCM\r\n");
  
  /* Read the number of channels, must be 0x01 (Mono) or 0x02 (Stereo) */
  WAVE_Format.NumChannels = ReadUnit((uint8_t*)buffer1, 22, 2, LittleEndian);
  if(WAVE_Format.NumChannels == 0x01)
  	printf(" >number of channels: Mono单声道\r\n");
  else if(WAVE_Format.NumChannels == 0x02)
  	printf(" >number of channels: Stereo立体声\r\n");

  /* Read the Sample Rate */
  WAVE_Format.SampleRate = ReadUnit((uint8_t*)buffer1, 24, 4, LittleEndian);
  printf(" >Sample Rate采样频率: %dHz\r\n",WAVE_Format.SampleRate);

  /* Read the Byte Rate */
  WAVE_Format.ByteRate = ReadUnit((uint8_t*)buffer1, 28, 4, LittleEndian);
  printf(" >Byte Rate比特率: %d\r\n",WAVE_Format.ByteRate);  

  /* Read the block alignment */
  WAVE_Format.BlockAlign = ReadUnit((uint8_t*)buffer1, 32, 2, LittleEndian);
  
  /* Read the number of bits per sample */
  WAVE_Format.BitsPerSample = ReadUnit((uint8_t*)buffer1, 34, 2, LittleEndian);
  if (WAVE_Format.BitsPerSample != BITS_PER_SAMPLE_16) 
  {
    printf(" >number of bits per sample每字节比特数不是16bit\r\n");
    return(Unsupporetd_Bits_Per_Sample);
  }
  printf(" >number of bits per sample每字节比特数: %d\r\n",WAVE_Format.BitsPerSample);

  SpeechDataOffset = 36;
  /* If there is Extra format bytes, these bytes will be defined in "Fact Chunk" */
  if (extraformatbytes == 1)
  {
    /* Read th Extra format bytes, must be 0x00 */
    temp = ReadUnit((uint8_t*)buffer1, 36, 2, LittleEndian);
    if (temp != 0x00)
    {
      return(Unsupporetd_ExtraFormatBytes);
    }
    /* Read the Fact chunk, must be 'fact' */
    temp = ReadUnit((uint8_t*)buffer1, 38, 4, BigEndian);
    if (temp != FACT_ID)
    {
      return(Unvalid_FactChunk_ID);
    }
    /* Read Fact chunk data Size */
    temp = ReadUnit((uint8_t*)buffer1, 42, 4, LittleEndian);
    
    SpeechDataOffset += 10 + temp;
  }
  /* Read the Data chunk, must be 'data' */
  temp = ReadUnit((uint8_t*)buffer1, SpeechDataOffset, 4, BigEndian);
  SpeechDataOffset += 4;
  if (temp != DATA_ID)
  {
    return(Unvalid_DataChunk_ID);
  }
  
  /* Read the number of sample data */
  WAVE_Format.DataSize = ReadUnit((uint8_t*)buffer1, SpeechDataOffset, 4, LittleEndian);
  SpeechDataOffset += 4;
  WaveCounter =  SpeechDataOffset;
  return(Valid_WAVE_File);
}



void Audio_Play(uint32_t SD_I2S_AudioFreq)
{
	uint8_t buffer_switch = 1;
	XferCplt = 0;
	
	printf("Welcome to use UDA1380 I2S test:\r\n");


	f_lseek(&fileR, WaveCounter);
  	f_read (&fileR, buffer1, BUFF_MAX_SS, &BytesRead); 
  	f_read (&fileR, buffer2, BUFF_MAX_SS, &BytesRead);
 	
	printf("开始传输\r\n");
	
	CODEC_I2S_Configuration(SD_I2S_AudioFreq);
  	/* Start playing wave */
	Audio_MAL_Play((uint32_t)buffer1, BUFF_MAX_SS);
	UDA1380_Configuration();
	
	printf("  >WaveDataLength : %dM\r\n",WaveDataLength/1000/1000);
	while(WaveDataLength != 0)
  	{
		while(XferCplt == 0)
		{
			/* wait for DMA transfert complete */
			/* You can write some code for operate on UDA1380 */
		}
		XferCplt = 0;

		if(buffer_switch == 0)
		{
			/* Play data from buffer1 */	
			Audio_MAL_Play((uint32_t)buffer1, BUFF_MAX_SS);
			/* Store data in buffer2 */
			f_read (&fileR, buffer2, BUFF_MAX_SS, &BytesRead);
			buffer_switch = 1;
		}
		else 
		{   
			/* Play data from buffer2 */
			Audio_MAL_Play((uint32_t)buffer2, BUFF_MAX_SS);
			/* Store data in buffer1 */
			f_read (&fileR, buffer1, BUFF_MAX_SS, &BytesRead);
			buffer_switch = 0;
		}
	} 
	printf("传输完成\r\n");
}

void GET_SYSclock(void)
{
	RCC_ClocksTypeDef  thistest;
	u8 SYSCLKSource;
	printf("\r\n");
	/*the clock source used as system clock*/
	SYSCLKSource = RCC_GetSYSCLKSource();
	if(SYSCLKSource==0x04)
		printf(" >SYSCLKSource is HSE!\r\n");
	else if(SYSCLKSource==0x00)
		printf(" >SYSCLKSource is HSI!\r\n");
	else if(SYSCLKSource==0x08)
		printf(" >SYSCLKSource is PLL!\r\n");
	/**/
	RCC_GetClocksFreq(&thistest);
	printf("  >SYS clock = %dMHz \r\n",(uint32_t)thistest.SYSCLK_Frequency/1000000);
	printf("  >HCLK clock = %dMHz \r\n",(uint32_t)thistest.HCLK_Frequency/1000000);
	printf("  >PCLK1 clock = %dMHz \r\n",(uint32_t)thistest.PCLK1_Frequency/1000000);
	printf("  >PCLK2_clock = %dMHz \r\n",(uint32_t)thistest.PCLK2_Frequency/1000000);	
}

/*******************************************************************************
* Function Name  : main
* Description    : Main program.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
int main(void)
{    
  NVIC_Configuration();/* Interrupt Config */

  USART_Configuration();  

  GET_SYSclock();

  OutPutFile();
  
  Audio_Play(WAVE_Format.SampleRate);
  /* Infinite loop */
  while (1)
  {}
}


/******************* (C) COPYRIGHT 2008 STMicroelectronics *****END OF FILE****/
