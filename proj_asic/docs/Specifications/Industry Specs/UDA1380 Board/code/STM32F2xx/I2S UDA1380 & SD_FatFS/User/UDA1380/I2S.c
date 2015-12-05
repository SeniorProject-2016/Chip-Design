#include "I2S.h"
#include "usart.h"
#include "UDA1380.h"

/* Codec audio Standards */
#ifdef I2S_STANDARD_PHILLIPS
 #define  CODEC_STANDARD                0x04
 #define I2S_STANDARD                   I2S_Standard_Phillips         
#elif defined(I2S_STANDARD_MSB)
 #define  CODEC_STANDARD                0x00
 #define I2S_STANDARD                   I2S_Standard_MSB    
#elif defined(I2S_STANDARD_LSB)
 #define  CODEC_STANDARD                0x08
 #define I2S_STANDARD                   I2S_Standard_LSB    
#else 
 #error "Error: No audio communication standard selected !"
#endif

  /*
static void Audio_MAL_Init(void);			  */
static DMA_InitTypeDef DMA_InitStructure;	 

#define DMA_MAX(x)           (((x) <= DMA_MAX_SZE)? (x):DMA_MAX_SZE)

void CODEC_I2S_Configuration(uint32_t SD_I2S_AudioFreq)
{
	I2S_InitTypeDef I2S_InitStructure;
	GPIO_InitTypeDef  GPIO_InitStructure;
	#if defined(AUDIO_MAL_DMA_IT_TC_EN) || defined(AUDIO_MAL_DMA_IT_HT_EN) || defined(AUDIO_MAL_DMA_IT_TE_EN)
  		NVIC_InitTypeDef NVIC_InitStructure;
	#endif

  /******************************************************************************/
  /*                          I2S clock configuration                           */
  /*                        if use I2S,must set the I2S clock					*/
  /******************************************************************************/
	
  /* PLLI2S clock used as I2S clock source */
  RCC->CFGR &= ~RCC_CFGR_I2SSRC;

  /* Configure PLLI2S */
  RCC->PLLI2SCFGR = (PLLI2S_N << 6) | (PLLI2S_R << 28);

  /* Enable PLLI2S */
  RCC->CR |= ((uint32_t)RCC_CR_PLLI2SON);

  /* Wait till PLLI2S is ready */
  while((RCC->CR & RCC_CR_PLLI2SRDY) == 0)
  {
  }
  /******************************************************************************/

	/* Enable the CODEC_I2S peripheral clock */
  RCC_AHB1PeriphClockCmd(CODEC_I2S_GPIO_CLOCK, ENABLE);



	/* CODEC_I2S pins configuration: WS, SCK and SD pins -----------------------------*/
  GPIO_InitStructure.GPIO_Pin = CODEC_I2S_WS_PIN; 
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
  GPIO_Init(CODEC_I2S_WS_GPIO, &GPIO_InitStructure);

  GPIO_InitStructure.GPIO_Pin = CODEC_I2S_SCK_PIN; 
  GPIO_Init(CODEC_I2S_SCK_GPIO, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = CODEC_I2S_SD_PIN; 
  GPIO_Init(CODEC_I2S_SD_GPIO, &GPIO_InitStructure);
	
  /* Connect pins to I2S peripheral  */
  GPIO_PinAFConfig(CODEC_I2S_WS_GPIO, CODEC_I2S_WS_PINSRC, CODEC_I2S_GPIO_AF);  
  GPIO_PinAFConfig(CODEC_I2S_SCK_GPIO, CODEC_I2S_SCK_PINSRC, CODEC_I2S_GPIO_AF);
  GPIO_PinAFConfig(CODEC_I2S_SD_GPIO, CODEC_I2S_SD_PINSRC, CODEC_I2S_GPIO_AF);

 #ifdef CODEC_MCLK_ENABLED
  /* CODEC_I2S pins configuration: MCK pin */
  GPIO_InitStructure.GPIO_Pin = CODEC_I2S_MCK_PIN; 
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
  GPIO_Init(CODEC_I2S_MCK_GPIO, &GPIO_InitStructure);   
  /* Connect pins to I2S peripheral  */
  GPIO_PinAFConfig(CODEC_I2S_MCK_GPIO, CODEC_I2S_MCK_PINSRC, CODEC_I2S_GPIO_AF); 
 #endif /* CODEC_MCLK_ENABLED */ 
 
	
  /* Enable the CODEC_I2S peripheral clock */
  RCC_APB1PeriphClockCmd(CODEC_I2S_CLK, ENABLE);

  /* CODEC_I2S peripheral configuration */
  SPI_I2S_DeInit(CODEC_I2S);
  I2S_InitStructure.I2S_AudioFreq = SD_I2S_AudioFreq;
  I2S_InitStructure.I2S_Standard = I2S_STANDARD;
  I2S_InitStructure.I2S_DataFormat = I2S_DataFormat_16b;
  I2S_InitStructure.I2S_CPOL = I2S_CPOL_Low;
  I2S_InitStructure.I2S_Mode = I2S_Mode_MasterTx;
#ifdef CODEC_MCLK_ENABLED
  I2S_InitStructure.I2S_MCLKOutput = I2S_MCLKOutput_Enable;
#elif defined(CODEC_MCLK_DISABLED)
  I2S_InitStructure.I2S_MCLKOutput = I2S_MCLKOutput_Disable;
#else
 #error "No selection for the MCLK output has been defined !"
#endif /* CODEC_MCLK_ENABLED */
	
  /* Initialize the I2S peripheral with the structure above */
  I2S_Init(CODEC_I2S, &I2S_InitStructure);
  	
	/* Disable the I2S2 TXE Interrupt */ 
  SPI_I2S_ITConfig(CODEC_I2S, SPI_I2S_IT_TXE, DISABLE);
  /* The I2S peripheral will be enabled only in the EVAL_AUDIO_Play() function 
       or by user functions if DMA mode not enabled */
  
  /* Enable the DMA clock */
  RCC_AHB1PeriphClockCmd(AUDIO_MAL_DMA_CLOCK, ENABLE); 
  
  /* Configure the DMA Stream */
  DMA_Cmd(AUDIO_MAL_DMA_STREAM, DISABLE);
  DMA_DeInit(AUDIO_MAL_DMA_STREAM);
  /* Set the parameters to be configured */
  DMA_InitStructure.DMA_Channel = AUDIO_MAL_DMA_CHANNEL;  
  DMA_InitStructure.DMA_PeripheralBaseAddr = CODEC_I2S_ADDRESS;
  DMA_InitStructure.DMA_Memory0BaseAddr = (uint32_t)0;      /* This field will be configured in play function */
  DMA_InitStructure.DMA_DIR = DMA_DIR_MemoryToPeripheral;
  DMA_InitStructure.DMA_BufferSize = (uint32_t)0xfffe;      /* This field will be configured in play function */
  DMA_InitStructure.DMA_PeripheralInc = DMA_PeripheralInc_Disable;
  DMA_InitStructure.DMA_MemoryInc = DMA_MemoryInc_Enable;
  DMA_InitStructure.DMA_PeripheralDataSize = AUDIO_MAL_DMA_PERIPH_DATA_SIZE;
  DMA_InitStructure.DMA_MemoryDataSize = AUDIO_MAL_DMA_MEM_DATA_SIZE; 
#ifdef AUDIO_MAL_MODE_NORMAL
  DMA_InitStructure.DMA_Mode = DMA_Mode_Normal;
#elif defined(AUDIO_MAL_MODE_CIRCULAR)
  DMA_InitStructure.DMA_Mode = DMA_Mode_Circular;
#else
  #error "AUDIO_MAL_MODE_NORMAL or AUDIO_MAL_MODE_CIRCULAR should be selected !!"
#endif /* AUDIO_MAL_MODE_NORMAL */  
  DMA_InitStructure.DMA_Priority = DMA_Priority_High;
  DMA_InitStructure.DMA_FIFOMode = DMA_FIFOMode_Enable;         
  DMA_InitStructure.DMA_FIFOThreshold = DMA_FIFOThreshold_Full;
  DMA_InitStructure.DMA_MemoryBurst = DMA_MemoryBurst_Single;
  DMA_InitStructure.DMA_PeripheralBurst = DMA_PeripheralBurst_Single;  
  DMA_Init(AUDIO_MAL_DMA_STREAM, &DMA_InitStructure);  
 
#ifdef AUDIO_MAL_DMA_IT_TC_EN
    DMA_ITConfig(AUDIO_MAL_DMA_STREAM, DMA_IT_TC, ENABLE);
#endif /* AUDIO_MAL_DMA_IT_TC_EN */
#ifdef AUDIO_MAL_DMA_IT_HT_EN
    DMA_ITConfig(AUDIO_MAL_DMA_STREAM, DMA_IT_HT, ENABLE);
#endif /* AUDIO_MAL_DMA_IT_HT_EN */
#ifdef AUDIO_MAL_DMA_IT_TE_EN
    DMA_ITConfig(AUDIO_MAL_DMA_STREAM, DMA_IT_TE | DMA_IT_FE | DMA_IT_DME, ENABLE);
#endif /* AUDIO_MAL_DMA_IT_TE_EN */

#if defined(AUDIO_MAL_DMA_IT_TC_EN) || defined(AUDIO_MAL_DMA_IT_HT_EN) || defined(AUDIO_MAL_DMA_IT_TE_EN)
    /* I2S DMA IRQ Channel configuration */
    NVIC_InitStructure.NVIC_IRQChannel = AUDIO_MAL_DMA_IRQ;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = EVAL_AUDIO_IRQ_PREPRIO;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = EVAL_AUDIO_IRQ_SUBRIO;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
#endif
 	
  /* Enable the I2S DMA request */
  SPI_I2S_DMACmd(CODEC_I2S, SPI_I2S_DMAReq_Tx, ENABLE);
}

/*--------------------------------
Callbacks implementation:
the callbacks prototypes are defined in the stm324xg_eval_audio_codec.h file
and their implementation should be done in the user code if they are needed.
Below some examples of callback implementations.
--------------------------------------------------------*/
/**
* @brief  Calculates the remaining file size and new position of the pointer.
* @param  None
* @retval None
*/

void Audio_MAL_Play(uint32_t Addr, uint32_t Size)
{         
    /* Configure the buffer address and size */
    DMA_InitStructure.DMA_Memory0BaseAddr = (uint32_t)Addr;
    DMA_InitStructure.DMA_BufferSize = (uint32_t)Size/2;
    
    /* Configure the DMA Stream with the new parameters */
    DMA_Init(AUDIO_MAL_DMA_STREAM, &DMA_InitStructure);
    
    /* Enable the I2S DMA Stream*/
    DMA_Cmd(AUDIO_MAL_DMA_STREAM, ENABLE);  
  
  /* If the I2S peripheral is still not enabled, enable it */
  if ((CODEC_I2S->I2SCFGR & I2S_ENABLE_MASK) == 0)
  {
    I2S_Cmd(CODEC_I2S, ENABLE);
  }
}

extern uint32_t AudioTotalSize;  /* This variable holds the total size of the audio file */
extern uint32_t AudioRemSize;    /* This variable holds the remaining data in audio file */
extern uint16_t *CurrentPos;    /* This variable holds the current position of audio pointer */
extern void AUDIO_TransferComplete_CallBack(uint32_t pBuffer, uint32_t Size);

void Audio_MAL_IRQHandler(void)
{    
#ifndef AUDIO_MAL_MODE_NORMAL
  uint16_t *pAddr = (uint16_t *)CurrentPos;
  uint32_t Size = AudioRemSize;
#endif /* AUDIO_MAL_MODE_NORMAL */
  
#ifdef AUDIO_MAL_DMA_IT_TC_EN
  /* Transfer complete interrupt */
  if (DMA_GetFlagStatus(AUDIO_MAL_DMA_STREAM, AUDIO_MAL_DMA_FLAG_TC) != RESET)
  {         
 #ifdef AUDIO_MAL_MODE_NORMAL
    /* Check if the end of file has been reached */
    if (AudioRemSize > 0)
    {      
      /* Wait the DMA Stream to be effectively disabled */
      while (DMA_GetCmdStatus(AUDIO_MAL_DMA_STREAM) != DISABLE)
      {}
      
      /* Clear the Interrupt flag */
      DMA_ClearFlag(AUDIO_MAL_DMA_STREAM, AUDIO_MAL_DMA_FLAG_TC); 
           
      /* Re-Configure the buffer address and size */
      DMA_InitStructure.DMA_Memory0BaseAddr = (uint32_t)CurrentPos;
      DMA_InitStructure.DMA_BufferSize = (uint32_t) (DMA_MAX(AudioRemSize));
            
      /* Configure the DMA Stream with the new parameters */
      DMA_Init(AUDIO_MAL_DMA_STREAM, &DMA_InitStructure);
      
      /* Enable the I2S DMA Stream*/
      DMA_Cmd(AUDIO_MAL_DMA_STREAM, ENABLE);    
      
      /* Update the current pointer position */
      CurrentPos += DMA_MAX(AudioRemSize);        
      
      /* Update the remaining number of data to be played */
      AudioRemSize -= DMA_MAX(AudioRemSize);   
        /* Enable the I2S DMA Stream*/
      DMA_Cmd(AUDIO_MAL_DMA_STREAM, ENABLE); 
    }
    else
    {
      /* Disable the I2S DMA Stream*/
      DMA_Cmd(AUDIO_MAL_DMA_STREAM, DISABLE);   
      
      /* Clear the Interrupt flag */
      DMA_ClearFlag(AUDIO_MAL_DMA_STREAM, AUDIO_MAL_DMA_FLAG_TC);       
      
      /* Manage the remaining file size and new address offset: This function 
      should be coded by user (its prototype is already declared in stm32f4_discovery_audio_codec.h) */  
      AUDIO_TransferComplete_CallBack((uint32_t)CurrentPos, 0);       
    }
 #endif /* AUDIO_MAL_MODE_NORMAL */  
  }
#endif /* AUDIO_MAL_DMA_IT_TC_EN */

#ifdef AUDIO_MAL_DMA_IT_HT_EN  
  /* Half Transfer complete interrupt */
  if (DMA_GetFlagStatus(AUDIO_MAL_DMA_STREAM, AUDIO_MAL_DMA_FLAG_HT) != RESET)
  {
    /* Manage the remaining file size and new address offset: This function 
       should be coded by user (its prototype is already declared in stm32f4_discovery_audio_codec.h) */  
    EVAL_AUDIO_HalfTransfer_CallBack((uint32_t)pAddr, Size);    
   
    /* Clear the Interrupt flag */
    DMA_ClearFlag(AUDIO_MAL_DMA_STREAM, AUDIO_MAL_DMA_FLAG_HT);    
  }
#endif /* AUDIO_MAL_DMA_IT_HT_EN */
  
#ifdef AUDIO_MAL_DMA_IT_TE_EN  
  /* FIFO Error interrupt */
  if ((DMA_GetFlagStatus(AUDIO_MAL_DMA_STREAM, AUDIO_MAL_DMA_FLAG_TE) != RESET) || \
     (DMA_GetFlagStatus(AUDIO_MAL_DMA_STREAM, AUDIO_MAL_DMA_FLAG_FE) != RESET) || \
     (DMA_GetFlagStatus(AUDIO_MAL_DMA_STREAM, AUDIO_MAL_DMA_FLAG_DME) != RESET))
    
  {
    /* Manage the error generated on DMA FIFO: This function 
       should be coded by user (its prototype is already declared in stm32f4_discovery_audio_codec.h) */  
    EVAL_AUDIO_Error_CallBack((uint32_t*)&pAddr);    
    
    /* Clear the Interrupt flag */
    DMA_ClearFlag(AUDIO_MAL_DMA_STREAM, AUDIO_MAL_DMA_FLAG_TE | AUDIO_MAL_DMA_FLAG_FE | \
                                        AUDIO_MAL_DMA_FLAG_DME);
  }  
#endif /* AUDIO_MAL_DMA_IT_TE_EN */
//printf("I2S DMA!\r\n");
}
