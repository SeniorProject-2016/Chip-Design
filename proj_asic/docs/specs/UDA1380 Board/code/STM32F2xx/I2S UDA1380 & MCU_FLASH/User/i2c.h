#ifndef __I2C_H__
#define __I2C_H__

/* Includes ------------------------------------------------------------------*/
#include "stm32f2xx.h"

/* Private define ------------------------------------------------------------*/
#define I2C_PAGESIZE	4


/* Maximum Timeout values for flags and events waiting loops. These timeouts are
   not based on accurate values, they just guarantee that the application will 
   not remain stuck if the I2C communication is corrupted.
   You may modify these timeout values depending on CPU frequency and application
   conditions (interrupts routines ...). */   
#define I2C_x_FLAG_TIMEOUT         				10000


#define I2Cx_SPEED               					30000
#define I2Cx_SLAVE_ADDRESS7      					0xfe


	#define I2C_x                        		I2C1			  
	#define I2C_x_CLK                    		RCC_APB1Periph_I2C1
	
	#define I2C_x_SDA_PIN                 	GPIO_Pin_7
	#define I2C_x_SDA_GPIO_PORT           	GPIOB
	#define I2C_x_SDA_GPIO_CLK            	RCC_AHB1Periph_GPIOB
	#define I2C_x_SDA_SOURCE              	GPIO_PinSource7
	#define I2C_x_SDA_AF                  	GPIO_AF_I2C1
	
	#define I2C_x_SCL_PIN                 	GPIO_Pin_6
	#define I2C_x_SCL_GPIO_PORT           	GPIOB
	#define I2C_x_SCL_GPIO_CLK            	RCC_AHB1Periph_GPIOB
	#define I2C_x_SCL_SOURCE              	GPIO_PinSource6
	#define I2C_x_SCL_AF                  	GPIO_AF_I2C1

/* Private function prototypes -----------------------------------------------*/
void CODEC_I2C_Configuration(void);
uint8_t CODEC_I2C_Write(uint8_t DEVICE_WRITE_ADDRESS, uint8_t length, uint8_t *Data);

#endif  // __I2C_H__

/*********************************************************************************************************
      END FILE
*********************************************************************************************************/
