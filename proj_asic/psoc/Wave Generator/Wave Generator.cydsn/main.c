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

void DmaRxConfiguration(void);
void DmaTxConfiguration(void);

/* DMA Configuration for RxDMA */
#define RxDMA_BYTES_PER_BURST       1
#define RxDMA_REQUEST_PER_BURST     1
#define RxDMA_SRC_BASE              (CYDEV_PERIPH_BASE)
#define RxDMA_DST_BASE              (CYDEV_SRAM_BASE)

/* DMA Configuration for TxDMA */
#define TxDMA_BYTES_PER_BURST       2
#define TxDMA_REQUEST_PER_BURST     1
#define TxDMA_SRC_BASE              (CYDEV_PERIPH_BASE)
//#define TxDMA_SRC_BASE              (CYDEV_SRAM_BASE)
#define TxDMA_DST_BASE              (CYDEV_PERIPH_BASE)

/* Variable declarations for RxDMA */
uint8_t RxDMA_Chan_0;
uint8_t RxDMA_TD_0[1];
uint8_t RxDMA_Chan_1;
uint8_t RxDMA_TD_1[1];

/* Variable declarations for TxDMA */
uint8_t TxDMA_0_Chan;
uint8_t TxDMA_0_TD[1];    
uint8_t TxDMA_1_Chan;
uint8_t TxDMA_1_TD[1];

uint16_t ReceivedData[8192] = {0};    /* IN buffer */
uint16_t dummy[8192]; 

#if (CY_PSOC5LP)
	#if !defined(DMA_DISABLE_TD)
	    #define DMA_DISABLE_TD          0xFEu
	#endif
#endif  /* (CY_PSOC5LP) */

uint16_t blah[15] = {
	0xABCD,
	0x1234	};

int main()
{
	uint32_t i = 0;
	
	/* Enable global interrupts */
	CyGlobalIntEnable;
	for (i=0; i<8192;++i)
		ReceivedData[i]=i;
		
	/* Start the waveform DAC and ADC */
	WaveDAC8_Start(); 
	ADC_SAR_Start();
	ADC_SAR_StartConvert();
	
    /* Configure DMAs for each direction */ 
    DmaRxConfiguration();
    DmaTxConfiguration();
	
	/* Enable I2S component */
    I2S_Start();
	I2S_EnableRx();		/* Enable Rx direction */
    I2S_EnableTx();     /* Enable Tx direction */
    
	
	CyDelay(2000);		/* Wait for data transmissions to complete */
	
	//I2S_Stop();			/* Stop the I2S component */
	
	UART_Start();     	/* Enabling the UART */
	
	/* Send the data to computer through the UART component, serial to USB */
	for(i = 0; i < 8192; i++)
	{
		uint8_t part1 = (ReceivedData[i] >> 8) & 0x00ff;		/* get first byte */
		uint8_t part2 = (ReceivedData[i] >> 0) & 0x00ff;		/* get second byte */
		char part1_string[5];
		char part2_string[5];
		sprintf(part1_string, "%02X", part1);
		sprintf(part2_string, "%02X", part2);
		UART_PutString(part1_string);					
		UART_PutString(", ");							
		UART_PutString(part2_string);					
		UART_PutString("\n\r");		
	}
	
	for(;;);
}

/* Rx DMA Config */
void DmaRxConfiguration(void)
{
    /* Init DMA, 2 byte bursts, each burst requires a request */
    RxDMA_Chan_0 = RxDMA_0_DmaInitialize(RxDMA_BYTES_PER_BURST, RxDMA_REQUEST_PER_BURST, 
                                     HI16(RxDMA_SRC_BASE), HI16(RxDMA_DST_BASE));
	RxDMA_Chan_1 = RxDMA_1_DmaInitialize(RxDMA_BYTES_PER_BURST, RxDMA_REQUEST_PER_BURST, 
                                     HI16(RxDMA_SRC_BASE), HI16(RxDMA_DST_BASE));
	
    RxDMA_TD_0[0] = CyDmaTdAllocate();
	RxDMA_TD_1[0] = CyDmaTdAllocate();
	
	/* Configure this Td chain, get 8192 samples */
    CyDmaTdSetConfiguration(RxDMA_TD_0[0], 16384, RxDMA_TD_0[0], TD_INC_DST_ADR | RxDMA_0__TD_TERMOUT_EN | CY_DMA_TD_SWAP_EN);
	CyDmaTdSetConfiguration(RxDMA_TD_1[0], 16384, RxDMA_TD_1[0], TD_INC_DST_ADR | RxDMA_1__TD_TERMOUT_EN | CY_DMA_TD_SWAP_EN);

    /* From the I2S to the memory */
    CyDmaTdSetAddress(RxDMA_TD_0[0], LO16((uint32)I2S_RX_CH0_F0_PTR), LO16((uint32)ReceivedData));
	CyDmaTdSetAddress(RxDMA_TD_1[0], LO16((uint32)I2S_RX_CH0_F1_PTR), LO16((uint32)dummy));
	
    /* Associate the TD with the channel */
    CyDmaChSetInitialTd(RxDMA_Chan_0, RxDMA_TD_0[0]);
	CyDmaChSetInitialTd(RxDMA_Chan_1, RxDMA_TD_1[0]);
	
    /* Enable the channel */
    CyDmaChEnable(RxDMA_Chan_0, 1);
	CyDmaChEnable(RxDMA_Chan_1, 1);
}

/* Tx DMA Config */
void DmaTxConfiguration(void)
{
    /* Init DMA, 2 byte bursts, each burst requires a request */
    TxDMA_0_Chan = TxDMA_0_DmaInitialize(TxDMA_BYTES_PER_BURST, TxDMA_REQUEST_PER_BURST, 
                                    HI16(TxDMA_SRC_BASE), HI16(TxDMA_DST_BASE));
	TxDMA_1_Chan = TxDMA_1_DmaInitialize(TxDMA_BYTES_PER_BURST, TxDMA_REQUEST_PER_BURST, 
                                    HI16(TxDMA_SRC_BASE), HI16(TxDMA_DST_BASE));
	
    TxDMA_0_TD[0] = CyDmaTdAllocate();
    TxDMA_1_TD[0] = CyDmaTdAllocate();

	/* Configure this Td chain */
	CyDmaTdSetConfiguration(TxDMA_0_TD[0], 2, TxDMA_0_TD[0], TxDMA_0__TD_TERMOUT_EN);
    CyDmaTdSetConfiguration(TxDMA_1_TD[0], 2, TxDMA_1_TD[0], TxDMA_1__TD_TERMOUT_EN);
	//CyDmaTdSetConfiguration(TxDMA_0_TD[0], 4, TxDMA_0_TD[0], TD_INC_SRC_ADR);
    //CyDmaTdSetConfiguration(TxDMA_1_TD[0], 4, TxDMA_1_TD[0], TD_INC_SRC_ADR);
	
	/* From the ADC to the I2S */
    CyDmaTdSetAddress(TxDMA_0_TD[0], LO16((uint32)ADC_SAR_SAR_WRK0_PTR), LO16((uint32)I2S_TX_CH0_F0_PTR));
//    CyDmaTdSetAddress(TxDMA_0_TD[0], LO16((uint32)&blah), LO16((uint32)I2S_TX_CH0_F0_PTR));
    CyDmaTdSetAddress(TxDMA_1_TD[0], LO16((uint32)ADC_SAR_SAR_WRK0_PTR), LO16((uint32)I2S_TX_CH0_F1_PTR));
//    CyDmaTdSetAddress(TxDMA_1_TD[0], LO16((uint32)&blah), LO16((uint32)I2S_TX_CH0_F1_PTR));

	/* Associate the TD with the channel */
    CyDmaChSetInitialTd(TxDMA_0_Chan, TxDMA_0_TD[0]);
    CyDmaChSetInitialTd(TxDMA_1_Chan, TxDMA_1_TD[0]);

	/* Enable the channel */
    CyDmaChEnable(TxDMA_0_Chan, 1);
    CyDmaChEnable(TxDMA_1_Chan, 1);
}

/* END OF FILE */