/* ========================================
 *
 * Copyright The College of New Jersey, 2016
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include <project.h>
#include <stdio.h>

static void DmaRxConfiguration(void);
static void DmaTxConfiguration(void);

/* DMA Configuration for RxDMA */
#define RxDMA_BYTES_PER_BURST       (2u)
#define RxDMA_REQUEST_PER_BURST     (1u)
#define RxDMA_SRC_BASE              (CYDEV_PERIPH_BASE)
#define RxDMA_DST_BASE              (CYDEV_SRAM_BASE)

/* DMA Configuration for TxDMA */
#define TxDMA_BYTES_PER_BURST       (2u)
#define TxDMA_REQUEST_PER_BURST     (1u)
#define TxDMA_SRC_BASE              (CYDEV_PERIPH_BASE)
#define TxDMA_DST_BASE              (CYDEV_PERIPH_BASE)

/* Variable declarations for RxDMA */
static uint8_t RxDMA_Chan;
static uint8_t RxDMA_TD[1];

/* Variable declarations for TxDMA */
static uint8_t TxDMA_0_Chan;
static uint8_t TxDMA_0_TD[1];    
static uint8_t TxDMA_1_Chan;
static uint8_t TxDMA_1_TD[1];

static uint16_t ReceivedData[16384];    /* IN buffer */

int main()
{
	uint32_t i;
	for(i = 0; i < 16384; i++)
    {
        ReceivedData[i] = 0;
    }
	
	CyGlobalIntEnable;
	
	WaveDAC8_Start(); // Start the waveform DAC
	ADC_Start();
	
	ADC_StartConvert();
	
	 /* Enable I2S component */
    I2S_Start();
    
    /* Configure DMAs for each direction */ 
    DmaRxConfiguration();
    DmaTxConfiguration();
	
	I2S_EnableRx();
    I2S_EnableTx();     /* Enable Tx direction */
   
	CyDelay(5000);		/* Wait for data transmissions to complete */
	
	UART_Start();     	/* Enabling the UART */
	
	// Send the data through the UART component
	for(i = 0; i < 16384; i++)
	{
		uint8_t part1 = (ReceivedData[i] >> 8) & 0x00ff;		// get first byte
		uint8_t part2 = (ReceivedData[i] >> 0) & 0x00ff;		// get second byte
		char part1_string[5];
		char part2_string[5];
		sprintf(part1_string, "%d", part1);
		sprintf(part2_string, "%d", part2);
		UART_PutString(part1_string);					
		UART_PutString(", ");							
		UART_PutString(part2_string);					
		UART_PutString("\n\r");							
	}
	for(;;);
}

// Rx DMA Config
void DmaRxConfiguration(void)
{
    // Init DMA, 2 byte bursts, each burst requires a request
    RxDMA_Chan = RxDMA_DmaInitialize(RxDMA_BYTES_PER_BURST, RxDMA_REQUEST_PER_BURST, 
                                     HI16(RxDMA_SRC_BASE), HI16(RxDMA_DST_BASE));
	
    RxDMA_TD[0u] = CyDmaTdAllocate();
	
	// Configure this Td chain
    CyDmaTdSetConfiguration(RxDMA_TD[0], 2, RxDMA_TD[0], TD_INC_DST_ADR);
	
    /* From the I2S to the memory */
    CyDmaTdSetAddress(RxDMA_TD[0], LO16((uint32)I2S_RX_CH0_F0_PTR), LO16((uint32)ReceivedData));
	
    /* Associate the TD with the channel */
    CyDmaChSetInitialTd(RxDMA_Chan, RxDMA_TD[0]);
	
    /* Enable the channel */
    CyDmaChEnable(RxDMA_Chan, 1);
}

// Tx DMA Config
void DmaTxConfiguration(void)
{
    // Init DMA, 2 byte bursts, each burst requires a request 
    TxDMA_0_Chan = TxDMA_0_DmaInitialize(TxDMA_BYTES_PER_BURST, TxDMA_REQUEST_PER_BURST, 
                                    HI16(TxDMA_SRC_BASE), HI16(TxDMA_DST_BASE));
	TxDMA_1_Chan = TxDMA_1_DmaInitialize(TxDMA_BYTES_PER_BURST, TxDMA_REQUEST_PER_BURST, 
                                    HI16(TxDMA_SRC_BASE), HI16(TxDMA_DST_BASE));
	
    TxDMA_0_TD[0] = CyDmaTdAllocate();
    TxDMA_1_TD[0] = CyDmaTdAllocate();

	// Configure this Td chain
    CyDmaTdSetConfiguration(TxDMA_0_TD[0], 2, TxDMA_0_TD[0], TxDMA_0__TD_TERMOUT_EN);
    CyDmaTdSetConfiguration(TxDMA_1_TD[0], 2, TxDMA_1_TD[0], TxDMA_1__TD_TERMOUT_EN);
	
	// From the ADC to the I2S
    CyDmaTdSetAddress(TxDMA_0_TD[0], LO16((uint32)ADC_DEC_SAMP_PTR), LO16((uint32)I2S_TX_CH0_F0_PTR));
    CyDmaTdSetAddress(TxDMA_1_TD[0], LO16((uint32)ADC_DEC_SAMP_PTR), LO16((uint32)I2S_TX_CH0_F1_PTR));

	// Associate the TD with the channel
    CyDmaChSetInitialTd(TxDMA_0_Chan, TxDMA_0_TD[0]);
    CyDmaChSetInitialTd(TxDMA_1_Chan, TxDMA_1_TD[0]);

	// Enable the channel
    CyDmaChEnable(TxDMA_0_Chan, 1);
    CyDmaChEnable(TxDMA_1_Chan, 1);
}

/* [] END OF FILE */
