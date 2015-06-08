#ifndef __UDA1380_H__
#define __UDA1380_H__

/* Includes ------------------------------------------------------------------*/
#include "stm32f2xx.h"
#include "I2C.h" 
#include "I2S.h"
#include "usart.h"

uint8_t  UDA1380_Configuration(void);
void UDA1380_SndNchar(const unsigned char * datbuf, uint32_t* datbufpt_pt, uint32_t snd_N);
uint32_t AUDIO_Play(uint16_t* pBuffer, uint32_t Size);
uint32_t AudioFlashPlay(uint16_t* pBuffer, uint32_t FullSize, uint32_t StartAdd);

#endif  // __UDA1380_H__







