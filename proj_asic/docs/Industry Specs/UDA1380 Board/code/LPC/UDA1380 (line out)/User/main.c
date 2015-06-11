#include "lpc17xx.h"
#include "lpc17xx_libcfg.h"
#include "lpc17xx_gpio.h"
#include "systen_delay.h"
#include "debug_frmwrk.h"
#include "i2c.h" 
#include "i2s.h"
#include "UDA1380.h"
#include "waveDate.h"

#define	  SNDTHELAST		(I2SSndPt  > WAVFILESIZ - 4)
/* 
 *  声音文件大小 
 */
#define	  WAVFILESIZ		4800000
#define   MusicStartPos		45

uint32_t	Snd_End=0;			                /* 为1时,表明WAV文件已经播放完毕*/
uint32_t 	I2SSndPt=0;			                /*  WAV声音数据指针   	 */
uint8_t test;

void  I2S_SndNchar( const unsigned char * datbuf, uint32_t* datbufpt_pt, uint32_t snd_N) ;
								 


/* Support required entry point for other toolchain */

int main (void)
{
//	uint32_t WavDat = 0;
    volatile uint32_t LastDatToSnd_N;
    volatile uint32_t Snd_End 	;			                    /* 为1时,表明WAV文件已经播放完毕*/

    debug_frmwrk_init();
	delay_init();
    _printf("Welcome to use Open1768 development board of the I2S test:\r\n"); 
	i2c_init();
    _printf("I2C initialization OK \r\n");
	i2s_init();


    _printf("I2S Initialization OK:\r\n");
	//UDA1380Init();
	delay_ms(1000);
	I2SSndPt = MusicStartPos;                                           /* 指向WAV文件里的声音数据起始处*/
	 	 
    while (Snd_End == 0)
    {   	
        if (SNDTHELAST) 
        {					                            /* 需发送的数据已经不足4个，按照*/
                                                                        /* 剩下的数据字节数目为1、2、3的*/
                                                                        /* 情况分类处理                 */	
	    LastDatToSnd_N = WAVFILESIZ - I2SSndPt;
	    I2S_SndNchar(WaveData, &I2SSndPt, LastDatToSnd_N); 
	    Snd_End = 1;		
		} 
        else 
        {
	    	I2S_SndNchar(WaveData, &I2SSndPt, 4); 
		} 	  
    }		   

//	I2SOUT_STOP();                                                      /* 停止和复位I2S输出            */
	
	while  (1);
}


/*********************************************************************************************************
** Function name:       I2S_SndNchar
** Descriptions:        从数据缓存datbuf的某处开始发送指定数目的字节到I2S_FIFO,并自动调整数据缓存的发送指针
** input parameters:    uint8*  datbuf:        需发送出去的数据缓存首地址
**                      uint32* datbufpt_pt:   从datbuf[*datbufpt_pt]开始发送4个字节
**                      uint32  snd_N:         需发送的数据个数		
** output parameters:   无
** Returned value:      无
*********************************************************************************************************/
//void  I2S_SndNchar( uint8_t* datbuf, uint32_t* datbufpt_pt, uint32_t snd_N) 
void  I2S_SndNchar( const unsigned char * datbuf, uint32_t* datbufpt_pt, uint32_t snd_N) 
{
    uint32_t WavDat = 0;  	
    switch (snd_N){
  		
    case 4:
       WavDat	= (datbuf[*datbufpt_pt  + 2]  << 24)
		| (datbuf[*datbufpt_pt + 3]   << 16)
		| (datbuf[*datbufpt_pt]       << 8)
		| (datbuf[*datbufpt_pt + 1]);
       break;
    case 3:
	WavDat 	= (datbuf[*datbufpt_pt + 2]   << 24)
		| (datbuf[*datbufpt_pt]       << 8)
		| (datbuf[*datbufpt_pt + 1]);
	break;
    case 2:
	WavDat  = (datbuf[*datbufpt_pt]       << 8)
		| (datbuf[*datbufpt_pt + 1]);
	break;
    case 1:
	WavDat  = datbuf[*datbufpt_pt];
	break;
    default:
        break;
    }
	I2S_Send(LPC_I2S,WavDat);	
    *datbufpt_pt   += snd_N;				
	while (I2S_GetLevel(LPC_I2S,I2S_TX_MODE) != 0);
}




#ifdef  DEBUG
/*******************************************************************************
* @brief		Reports the name of the source file and the source line number
* 				where the CHECK_PARAM error has occurred.
* @param[in]	file Pointer to the source file name
* @param[in]    line assert_param error line source number
* @return		None
*******************************************************************************/
void check_failed(uint8_t *file, uint32_t line)
{
	/* User can add his own implementation to report the file name and line number,
	 ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

	/* Infinite loop */
	while(1);
}
#endif

