#include "I2C.h"
#include "usart.h"

__IO uint32_t  I2C_TIMEOUT_MAX = I2C_x_FLAG_TIMEOUT;
static uint32_t I2C_TIMEOUT_UserCallback(void);

/*******************************************************************************
* Function Name  : I2Cx_GPIO_Config
* Description    : 
* Input          : None
* Output         : None
* Return         : None
* Attention		 : None
*******************************************************************************/
void CODEC_I2C_Configuration(void)
{
	I2C_InitTypeDef  I2C_InitStructure;
	GPIO_InitTypeDef  GPIO_InitStructure;
	/* If the I2C peripheral is already enabled, don't reconfigure it */	

	RCC_AHB1PeriphClockCmd(I2C_x_SDA_GPIO_CLK | I2C_x_SCL_GPIO_CLK,ENABLE);
	
	RCC_APB1PeriphClockCmd(I2C_x_CLK,ENABLE);
	
	GPIO_PinAFConfig(I2C_x_SDA_GPIO_PORT, I2C_x_SDA_SOURCE, I2C_x_SDA_AF);
	GPIO_PinAFConfig(I2C_x_SCL_GPIO_PORT, I2C_x_SCL_SOURCE, I2C_x_SCL_AF);
	
	GPIO_InitStructure.GPIO_Pin =  I2C_x_SDA_PIN;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_OD;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(I2C_x_SDA_GPIO_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin =  I2C_x_SCL_PIN;
	GPIO_Init(I2C_x_SCL_GPIO_PORT, &GPIO_InitStructure);

	I2C_DeInit(I2C_x);
	I2C_InitStructure.I2C_Mode = I2C_Mode_I2C;
	I2C_InitStructure.I2C_DutyCycle = I2C_DutyCycle_2;
	I2C_InitStructure.I2C_OwnAddress1 = I2Cx_SLAVE_ADDRESS7;
	I2C_InitStructure.I2C_Ack = I2C_Ack_Enable;
	I2C_InitStructure.I2C_AcknowledgedAddress = I2C_AcknowledgedAddress_7bit;
	I2C_InitStructure.I2C_ClockSpeed = I2Cx_SPEED;
	
	I2C_Init(I2C_x, &I2C_InitStructure);
	
	//I2C_AcknowledgeConfig(I2C_x, ENABLE);

	I2C_Cmd(I2C_x, ENABLE);	
}

/**
  * @brief  Writes a byte at a specific Camera register
  * @param  Device: I2C write address.
  * @param  Addr: I2C register address. 
  * @param  Data: data to be written to the specific register 
  * @retval 0x00 if write operation is OK. 
  *         0xFF if timeout condition occured (device not connected or bus error).
  */
uint8_t CODEC_I2C_Write(uint8_t DEVICE_WRITE_ADDRESS, uint8_t length, uint8_t *Data)
{
  	uint32_t timeout = I2C_TIMEOUT_MAX;
  	uint8_t i=0;
		   /*
	while(I2C_GetFlagStatus(I2C_x, I2C_FLAG_BUSY))
  	{
    	if((timeout--) == 0) return 0xf1;
  	}
		  */
  	I2C_GenerateSTART(I2C_x, ENABLE);
	timeout = I2C_TIMEOUT_MAX; /* Initialize timeout value */
	while(!I2C_CheckEvent(I2C_x, I2C_EVENT_MASTER_MODE_SELECT))
	{
		if((timeout--) == 0) return 0xf2;
	}

	I2C_Send7bitAddress(I2C_x, DEVICE_WRITE_ADDRESS, I2C_Direction_Transmitter);
	timeout = I2C_TIMEOUT_MAX; /* Initialize timeout value */
 	while(!I2C_CheckEvent(I2C_x, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED))
	{
    	if((timeout--) == 0) return 0xf3;
  	}

	for(i=0;i<length;i++)
	{
		timeout = I2C_TIMEOUT_MAX; /* Initialize timeout value */
		if(i<length-1)
		{
		  	I2C_SendData(I2C_x,*Data);
			Data++; 
		  	while(!I2C_CheckEvent(I2C_x, I2C_EVENT_MASTER_BYTE_TRANSMITTING))
			{
		    	if((timeout--) == 0) return 0xf4;
		  	}
		}
		else
		{
			I2C_SendData(I2C_x,*Data);
			while(!I2C_GetFlagStatus(I2C_x, I2C_FLAG_BTF))
			{
		    	if((timeout--) == 0) return 0xf4;
		  	}	
		} 
	}
  	I2C_GenerateSTOP(I2C_x, ENABLE);
  
  	//I2C_AcknowledgePolling(I2C_x,DEVICE_WRITE_ADDRESS);

	//I2C_delay(1000);

	return 0;
}

static uint32_t I2C_TIMEOUT_UserCallback(void)
{
  /* The following code allows I2C error recovery and return to normal communication
     if the error source doesn’t still exist (ie. hardware issue..) */
  I2C_InitTypeDef  I2C_InitStructure;
  
  /* LCD_ErrLog("> I2C Timeout error occurred\n"); */
		 
  I2C_GenerateSTOP(I2C_x, ENABLE);	
  I2C_SoftwareResetCmd(I2C_x, ENABLE);
  I2C_SoftwareResetCmd(I2C_x, DISABLE);
    							 
  /* CODEC_I2C peripheral configuration */
  I2C_InitStructure.I2C_Mode = I2C_Mode_I2C;
	I2C_InitStructure.I2C_DutyCycle = I2C_DutyCycle_2;
	I2C_InitStructure.I2C_OwnAddress1 = I2Cx_SLAVE_ADDRESS7;
	I2C_InitStructure.I2C_Ack = I2C_Ack_Enable;
	I2C_InitStructure.I2C_AcknowledgedAddress = I2C_AcknowledgedAddress_7bit;
	I2C_InitStructure.I2C_ClockSpeed = I2Cx_SPEED;
	
	I2C_Cmd(I2C_x, ENABLE);
	I2C_Init(I2C_x, &I2C_InitStructure);;  

  /* At this stage the I2C error should be recovered and device can communicate
     again (except if the error source still exist).
     User can implement mechanism (ex. test on max trial number) to manage situation
     when the I2C can't recover from current error. */

  /* printf("> I2C error recovered.\n"); */

  return 0;
}



