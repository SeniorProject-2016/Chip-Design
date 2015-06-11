#include "lpc17xx.h"
#include "lpc17xx_libcfg.h"
#include "lpc17xx_gpio.h"
#include "systen_delay.h"
#include "debug_frmwrk.h"
#include "i2c.h" 
#include "i2s.h"
#include "UDA1380.h"


#define	  SNDTHELAST		(I2SSndPt  > WAVFILESIZ - 4)
/* 
 *  �����ļ���С 
 */
#define	  WAVFILESIZ		119384
#define   MusicStartPos		45

uint32_t	Snd_End=0;			                /* Ϊ1ʱ,����WAV�ļ��Ѿ��������*/
uint32_t 	I2SSndPt=0;			                /*  WAV��������ָ��   	 */
uint8_t test;
								 


/* Support required entry point for other toolchain */

int main (void)
{
//	uint32_t WavDat = 0;
    volatile uint32_t value;			                    /* Ϊ1ʱ,����WAV�ļ��Ѿ��������*/

    debug_frmwrk_init();
	delay_init();
    _printf("Welcome to use Open1768 development board of the I2S test:\r\n"); 
	i2c_init();
    _printf("I2C initialization OK \r\n");
	i2s_init();

    _printf("I2S Initialization OK:\r\n");
	UDA1380Init();
	while(1);
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

