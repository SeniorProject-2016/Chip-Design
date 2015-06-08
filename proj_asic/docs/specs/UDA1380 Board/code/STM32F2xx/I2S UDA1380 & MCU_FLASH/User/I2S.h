#ifndef __I2S_H__
#define __I2S_H__

/* Includes ------------------------------------------------------------------*/

#include "stm32f2xx.h"

/* PLLI2S_VCO = (HSE_VALUE Or HSI_VALUE / PLL_M) * PLLI2S_N
   I2SCLK = PLLI2S_VCO / PLLI2S_R */
#define PLLI2S_N   258
#define PLLI2S_R   3

/* I2S peripheral configuration defines */
#define CODEC_I2S                      SPI2
#define CODEC_I2S_CLK                  RCC_APB1Periph_SPI2
#define CODEC_I2S_ADDRESS              0x4000380C
#define CODEC_I2S_GPIO_AF              GPIO_AF_SPI2
#define CODEC_I2S_IRQ                  SPI2_IRQn
#define CODEC_I2S_GPIO_CLOCK           (RCC_AHB1Periph_GPIOC | RCC_AHB1Periph_GPIOB)
#define CODEC_I2S_WS_PIN               GPIO_Pin_9
#define CODEC_I2S_SCK_PIN              GPIO_Pin_10
#define CODEC_I2S_SD_PIN               GPIO_Pin_3
#define CODEC_I2S_MCK_PIN              GPIO_Pin_6
#define CODEC_I2S_WS_PINSRC            GPIO_PinSource9
#define CODEC_I2S_SCK_PINSRC           GPIO_PinSource10
#define CODEC_I2S_SD_PINSRC            GPIO_PinSource3
#define CODEC_I2S_MCK_PINSRC           GPIO_PinSource6
#define CODEC_I2S_WS_GPIO              GPIOB
#define CODEC_I2S_SCK_GPIO             GPIOB
#define CODEC_I2S_SD_GPIO              GPIOC
#define CODEC_I2S_MCK_GPIO             GPIOC

/* I2S DMA Stream definitions */
#define AUDIO_MAL_DMA_CLOCK            RCC_AHB1Periph_DMA1
#define AUDIO_MAL_DMA_STREAM           DMA1_Stream4
#define AUDIO_MAL_DMA_CHANNEL          DMA_Channel_0
#define AUDIO_MAL_DMA_IRQ              DMA1_Stream4_IRQn
#define AUDIO_MAL_DMA_FLAG_TC          DMA_FLAG_TCIF4
#define AUDIO_MAL_DMA_FLAG_HT          DMA_FLAG_HTIF4
#define AUDIO_MAL_DMA_FLAG_FE          DMA_FLAG_FEIF4
#define AUDIO_MAL_DMA_FLAG_TE          DMA_FLAG_TEIF4
#define AUDIO_MAL_DMA_FLAG_DME         DMA_FLAG_DMEIF4
#define AUDIO_MAL_DMA_PERIPH_DATA_SIZE DMA_PeripheralDataSize_HalfWord
#define AUDIO_MAL_DMA_MEM_DATA_SIZE    DMA_MemoryDataSize_HalfWord
#define DMA_MAX_SZE                    0xFFFF

#define Audio_MAL_IRQHandler           DMA1_Stream4_IRQHandler

/* Audio Transfer mode (DMA, Interrupt or Polling) */
#define AUDIO_MAL_MODE_NORMAL         /* Uncomment this line to enable the audio 	  */
                                        /* Transfer using DMA */
//#define AUDIO_MAL_MODE_CIRCULAR  /* Uncomment this line to enable the audio  */
                                     /*    Transfer using DMA */

/* For the DMA modes select the interrupt that will be used */
#define AUDIO_MAL_DMA_IT_TC_EN   /* Uncomment this line to enable DMA Transfer Complete interrupt */
/* #define AUDIO_MAL_DMA_IT_HT_EN */  /* Uncomment this line to enable DMA Half Transfer Complete interrupt */
/* #define AUDIO_MAL_DMA_IT_TE_EN */  /* Uncomment this line to enable DMA Transfer Error interrupt */

/* Select the interrupt preemption priority and subpriority for the DMA interrupt */
#define EVAL_AUDIO_IRQ_PREPRIO           0   /* Select the preemption priority level(0 is the highest) */
#define EVAL_AUDIO_IRQ_SUBRIO            0   /* Select the sub-priority level (0 is the highest) */

/* Mask for the bit EN of the I2S CFGR register */
#define I2S_ENABLE_MASK                 0x0400

#ifndef CODEC_MCLK_DISABLED
	#define CODEC_MCLK_DISABLED	
#endif

#ifndef I2S_STANDARD_PHILLIPS
	#define I2S_STANDARD_PHILLIPS
#endif


void CODEC_I2S_Configuration(void);
void Audio_MAL_Play(uint32_t Addr, uint32_t Size);

#endif  // __I2S_H__

