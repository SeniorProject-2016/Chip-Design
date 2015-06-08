#ifndef _CONFIG_H
#define _CONFIG_H

#include <stdio.h>
#include "stm32f2xx.h"

/**
 * @brief Definition for COM port1, connected to USART1
 */ 
#define Open207V_USART                        USART1
#define Open207V_USART_CLK                    RCC_APB2Periph_USART1

#define Open207V_USART_TX_PIN                 GPIO_Pin_9
#define Open207V_USART_TX_GPIO_PORT           GPIOA
#define Open207V_USART_TX_GPIO_CLK            RCC_AHB1Periph_GPIOA
#define Open207V_USART_TX_SOURCE              GPIO_PinSource9
#define Open207V_USART_TX_AF                  GPIO_AF_USART1


#define Open207V_USART_RX_PIN                 GPIO_Pin_10
#define Open207V_USART_RX_GPIO_PORT           GPIOA
#define Open207V_USART_RX_GPIO_CLK            RCC_AHB1Periph_GPIOA
#define Open207V_USART_RX_SOURCE              GPIO_PinSource9
#define Open207V_USART_RX_AF                  GPIO_AF_USART1

#define Open207V_USART_IRQn                   USART1_IRQn

#endif	  /*_CONFIG_H*/

