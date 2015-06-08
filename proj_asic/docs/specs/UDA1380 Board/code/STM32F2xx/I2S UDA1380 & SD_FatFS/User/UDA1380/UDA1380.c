#include "UDA1380.h"
#include "usart.h"

/* 
 *声音大小控制
 */
//#define	LOUD				      			0x0
//#define	SOFT				      			0x0f
//#define DUMB				      			0x3f


#define UDA1380_WRITE_ADDRESS     0x30

#define UDA1380_REG_EVALCLK	      0x00
#define UDA1380_REG_I2S		      0x01
#define UDA1380_REG_PWRCTRL	      0x02
#define UDA1380_REG_ANAMIX	      0x03
#define UDA1380_REG_HEADAMP	      0x04
#define UDA1380_REG_MSTRVOL	      0x10
#define UDA1380_REG_MIXVOL	      0x11
#define UDA1380_REG_MODEBBT	      0x12
#define UDA1380_REG_MSTRMUTE      0x13
#define UDA1380_REG_MIXSDO	      0x14
#define UDA1380_REG_DECVOL	      0x20
#define UDA1380_REG_PGA		      0x21
#define UDA1380_REG_ADC		      0x22
#define UDA1380_REG_AGC		      0x23

#define UDA1380_REG_L3		      0x7f
#define UDA1380_REG_HEADPHONE     0x18
#define UDA1380_REG_DEC		      0x28

uint8_t UDA1380InitData[][3] =
{
	/*
	 *Enable all power for now
	 */
	{UDA1380_REG_PWRCTRL,     0xA5, 0xDF},
	
	/*
	 *CODEC ADC and DAC clock from WSPLL, all clocks enabled
	 */ 
	{UDA1380_REG_EVALCLK,     0x0F, 0x39},
	
	/*
	 *I2S bus data I/O formats, use digital mixer for output
	 *BCKO is slave
	 */
	{UDA1380_REG_I2S,         0x00, 0x00},

	/*
	 *Full mixer analog input gain
	 */
	{UDA1380_REG_ANAMIX,      0x00, 0x00},
	
	/* 
	 *Enable headphone short circuit protection
	 */
	{UDA1380_REG_HEADAMP,     0x02, 0x02},
	
	/*
	 *Full master volume
	 */
	{UDA1380_REG_MSTRVOL,     0x77, 0x77},
	
	/*
	 *Enable full mixer volume on both channels
	 */
	{UDA1380_REG_MIXVOL,      0x00, 0x00},
	
	/*
	 *Bass and treble boost set to flat
	 */
	{UDA1380_REG_MODEBBT,     0x55, 0x15},
	
	/*
	 *Disable mute and de-emphasis
	 */
	{UDA1380_REG_MSTRMUTE,    0x00, 0x00},
	
	/*
	 *Mixer off, other settings off
	 */
	{UDA1380_REG_MIXSDO,      0x00, 0x00},
	
	/*
	 *ADC decimator volume to max
	 */
	{UDA1380_REG_DECVOL,      0x00, 0x00},
	
	/*
	 *No PGA mute, full gain
	 */ 
	{UDA1380_REG_PGA,         0x00, 0x00},
	
	/*
	 *Select line in and MIC, max MIC gain
	 */
	{UDA1380_REG_ADC,         0x0F, 0x02},
	
	/*
	 *AGC
	 */
	{UDA1380_REG_AGC,         0x00, 0x00},
	
	/*
	 *Disable clocks to save power
     *{UDA1380_REG_EVALCLK,     0x00, 0x32},
     *disable power to input to save power
     *{UDA1380_REG_PWRCTRL,     0xA5, 0xC0},
	 */
	 
    /*
     *End of list
	 */
	{0xFF,                    0xFF, 0xFF}
};

uint32_t AudioTotalSize = 0xFFFF; /* This variable holds the total size of the audio file */
uint32_t AudioRemSize   = 0xFFFF; /* This variable holds the remaining data in audio file */
uint16_t *CurrentPos;             /* This variable holds the current position of audio pointer */

#define DMA_MAX(x)           (((x) <= DMA_MAX_SZE)? (x):DMA_MAX_SZE)

/*********************************************************************************************************
**函数名称：UDA1380Init																												
**函数功能：初始化内容见代码内注释				
**入口参数: 无																
**出口参数: 无	
**函数说明：															
*********************************************************************************************************/
uint8_t  UDA1380_Configuration(void)
{
	uint8_t dev_addr = UDA1380_WRITE_ADDRESS;
	uint8_t i=0;
	uint8_t errorcode;
	CODEC_I2C_Configuration();
	while (UDA1380InitData[i][0]!=0xff) 
	{
		errorcode = CODEC_I2C_Write(dev_addr,3,UDA1380InitData[i]);
		if(!errorcode)
		{
			i++;
		}
		else
		{
			printf("I2c ERROR : 0x%x\r\n",errorcode);
			return ERROR;
		}   
	}
	printf("UDA1380 Init OK!\r\n");	
	return SUCCESS;
}


uint32_t AUDIO_Play(uint16_t* pBuffer, uint32_t Size)
{ 
  /* Set the total number of data to be played (count in half-word) */
  AudioTotalSize = Size;
  
  /* Update the Media layer and enable it for play */  
  Audio_MAL_Play((uint32_t)pBuffer, (uint32_t)(DMA_MAX(Size/4)));
  
  /* Update the remaining number of data to be played */
  AudioRemSize = (Size/2) - DMA_MAX(AudioTotalSize);
  
  /* Update the current audio pointer position */
  CurrentPos = pBuffer + DMA_MAX(AudioTotalSize);
  
  return 0;
}

uint32_t AudioFlashPlay(uint16_t* pBuffer, uint32_t FullSize, uint32_t StartAdd)
{ 
  AUDIO_Play((uint16_t*)pBuffer, (FullSize - StartAdd));
  return 0;
}

/*********************************************************************************************************
**End Of File
********************************************************************************************************/
