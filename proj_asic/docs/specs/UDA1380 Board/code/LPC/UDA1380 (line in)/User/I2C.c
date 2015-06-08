#include "i2c.h"

void i2c_init(void)
{
	PINSEL_CFG_Type PinCfg;
	/*
	 * Init I2C pin connect
	 */
	PinCfg.OpenDrain = PINSEL_PINMODE_OPENDRAIN;
	PinCfg.Pinmode = PINSEL_PINMODE_PULLUP;
	PinCfg.Funcnum = 2;

	PinCfg.Portnum = 0;	
	PinCfg.Pinnum = 10;	//P0.10 SDA2
	PINSEL_ConfigPin(&PinCfg);
	PinCfg.Pinnum = 11;	//P0.11 SCL2
	PINSEL_ConfigPin(&PinCfg);	

	/* I2C block ------------------------------------------------------------------- */
	// Initialize I2C peripheral
	I2C_Init(LPC_I2C2, 30000);

	/* Enable I2C2 operation */
	I2C_Cmd(LPC_I2C2, ENABLE);
			
}





