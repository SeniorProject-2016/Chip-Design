#include "i2s.h"

void i2s_init(void)
{
	I2S_MODEConf_Type I2S_ClkConfig;
	I2S_CFG_Type I2S_ConfigStruct;
	PINSEL_CFG_Type PinCfg;

	/* Pin configuration:
	 * Assign: 	- P0.23 as I2SRX_CLK
	 * 			- P0.24 as I2SRX_WS
	 * 			- P0.25 as I2SRX_SDA
	 * 			- P2.11 as I2STX_CLK
	 * 			- P2.12 as I2STX_WS
	 * 			- P2.13 as I2STX_SDA  
	 */
	//configuration of PORT2
	PinCfg.Funcnum = 3;	//2nd function
    PinCfg.Portnum = 2;
	PinCfg.Pinnum = 11;	//I2STX_CLK
	PINSEL_ConfigPin(&PinCfg);
	PinCfg.Pinnum = 12;	//I2STX_WS
	PINSEL_ConfigPin(&PinCfg);
	PinCfg.Pinnum = 13;	//I2STX_SDA
	PINSEL_ConfigPin(&PinCfg);

	I2S_Init(LPC_I2S);

	//Setup for I2S: RX is similar with TX
	/* setup:
	 * 		- wordwidth: 16 bits
	 * 		- stereo mode
	 * 		- master mode for I2S_TX and slave for I2S_RX
	 * 		- ws_halfperiod is 31
	 * 		- not use mute mode
	 * 		- use reset and stop mode
	 * 		- select the fractional rate divider clock output as the source,
	 * 		- disable 4-pin mode
	 * 		- MCLK ouput is disable
	 * 		- Frequency = 44.1 kHz (x=8,y=51 - automatic setting)
	 * Because we use mode I2STXMODE[3:0]= 0000, I2SDAO[5]=0 and
	 * I2SRX[3:0]=0000, I2SDAI[5] = 1. So we have I2SRX_CLK = I2STX_CLK
	 * --> I2SRXBITRATE = 1 (not divide TXCLK to produce RXCLK)
	 */

	/* Clock Mode Config*/
	I2S_ClkConfig.clksel = I2S_CLKSEL_FRDCLK;
	I2S_ClkConfig.fpin = I2S_4PIN_DISABLE;
	I2S_ClkConfig.mcena = I2S_MCLK_DISABLE;
	I2S_ModeConfig(LPC_I2S,&I2S_ClkConfig,I2S_TX_MODE);

	/* Audio Config*/
	I2S_ConfigStruct.wordwidth = I2S_WORDWIDTH_16;
	I2S_ConfigStruct.mono = I2S_STEREO;
	I2S_ConfigStruct.stop = I2S_STOP_DISABLE;
	I2S_ConfigStruct.reset = I2S_RESET_ENABLE;
	I2S_ConfigStruct.ws_sel = I2S_MASTER_MODE;
	I2S_ConfigStruct.mute = I2S_MUTE_DISABLE;
	I2S_Config(LPC_I2S,I2S_TX_MODE,&I2S_ConfigStruct);

//	I2S_ConfigStruct.ws_sel = I2S_SLAVE_MODE;
//	I2S_Config(LPC_I2S,I2S_RX_MODE,&I2S_ConfigStruct);

								   
	/* Set up frequency and bit rate*/
	I2S_FreqConfig(LPC_I2S, 44400, I2S_TX_MODE);
//	I2S_IRQCmd(LPC_I2S,I2S_TX_MODE,ENABLE);
	I2S_Start(LPC_I2S); 
	
}




