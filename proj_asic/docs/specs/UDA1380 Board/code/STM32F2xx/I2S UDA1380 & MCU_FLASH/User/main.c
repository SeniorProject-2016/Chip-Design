#include "stm32f2xx.h"
#include "waveDate.h"
#include "UDA1380.h"

//#define AUDIO_FILE_SZE          990000
#define AUIDO_START_ADDRESS     58 /* Offset relative to audio file header size */
#define UDA1380_WRITE_ADDRESS     0x30
uint32_t WaveDataLength=0;
uint8_t XferCplt=0;

void _delay(uint32_t delay)
{
	while(delay--);
}

int main(void)
{
   	USART_Configuration();
	printf(" Welcome to use UDA1380 I2S test:\r\n");
	_delay(0x1ffffff);
	WaveDataLength = sizeof(WaveData) - AUIDO_START_ADDRESS;
	printf("WaveDataLength:%d\r\n",WaveDataLength);
	CODEC_I2S_Configuration();
	printf(" Started to Transmission data.\r\n");
	AudioFlashPlay((uint16_t*)(WaveData + AUIDO_START_ADDRESS),WaveDataLength,AUIDO_START_ADDRESS);
	UDA1380_Configuration();
	while(1)
	{
		while(!XferCplt)
		{
			
		}
		XferCplt=0;
		printf(" Data transmission to complete.\r\n");
			
		WaveDataLength = sizeof(WaveData) - AUIDO_START_ADDRESS;
		printf(" Started to Transmission data.\r\n");
		AudioFlashPlay((uint16_t*)(WaveData + AUIDO_START_ADDRESS),WaveDataLength,AUIDO_START_ADDRESS);
	}
}
