/* ========================================
 *
 * Copyright The College of New Jersey, 2016
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF TCNJ.
 *
 * ========================================
*/

#include <project.h>
#include <stdio.h>
#include <stdlib.h>

void DmaRxConfiguration(void);
void DmaTxConfiguration(void);

/* DMA Configuration for RxDMA */
#define RxDMA_BYTES_PER_BURST       1
#define RxDMA_REQUEST_PER_BURST     1
#define RxDMA_SRC_BASE              (CYDEV_PERIPH_BASE)
#define RxDMA_DST_BASE              (CYDEV_SRAM_BASE)

/* DMA Configuration for TxDMA */
#define TxDMA_BYTES_PER_BURST       1
#define TxDMA_REQUEST_PER_BURST     1
#define TxDMA_SRC_BASE              (CYDEV_SRAM_BASE)
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

/* The "N" that MATLAB prints */
#define TRANSFER_COUNT 48

/* Copy data that MATLAB produces in "data.txt" file */
volatile uint16_t signal1[TRANSFER_COUNT] = 
	{0x0, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
	0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
	0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};

volatile uint16_t signal2[TRANSFER_COUNT] = 
	{0x0, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
	0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
	0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};

#define BUFFER_SIZE 1024				/* number of samples to receive */
volatile uint16_t * ReceivedData;    	/* left IN buffer */
volatile uint16_t * dummy;			/* right IN buffer, ignored */

int main()
{
	uint16_t i = 0;
	ReceivedData = malloc(BUFFER_SIZE*sizeof(uint16_t));
	dummy = malloc(BUFFER_SIZE*sizeof(uint16_t));
	
	/* Enable global interrupts */
	CyGlobalIntEnable;
	
	/* Initialize received data array */
	for (i = 0; i < BUFFER_SIZE; i++)
		ReceivedData[i] = i;

    /* Configure DMAs for each direction */ 
    DmaRxConfiguration();
    DmaTxConfiguration();
	
	/* Enable I2S component */
    I2S_EnableTx();     /* Enable Tx direction */
	I2S_1_EnableRx();		/* Enable Rx direction */
    I2S_Start();
    I2S_1_Start();
    	
	CyDelay(3000);		/* Wait for data transmissions to complete */
	/* There's probably a better way to do that than simply waiting... */
		
	UART_Start();     	/* Enabling the UART */
	
	/* Send the data to computer through the UART component, serial to USB */
	for(i = 0; i < BUFFER_SIZE; i++)
	{
		uint8_t part1 = (ReceivedData[i] >> 8) & 0x00ff;	/* get first byte */
		uint8_t part2 = (ReceivedData[i] >> 0) & 0x00ff;	/* get second byte */
		char part1_string[5];
		char part2_string[5];
		sprintf(part1_string, "%02X", part1);
		sprintf(part2_string, "%02X", part2);
		UART_PutString(part1_string);						/* print first byte through UART */			
		UART_PutString(", ");							
		UART_PutString(part2_string);						/* print second byte through UART */
		UART_PutString("\n\r");
	}
	
	/* Wait forever */
	for(;;);
}

/* Rx DMA Config */
void DmaRxConfiguration(void)
{
    /* Init DMA, 1 byte bursts, each burst requires a request */
    RxDMA_Chan_0 = RxDMA_0_DmaInitialize(RxDMA_BYTES_PER_BURST, RxDMA_REQUEST_PER_BURST, 
                                     HI16(RxDMA_SRC_BASE), HI16(RxDMA_DST_BASE));
	RxDMA_Chan_1 = RxDMA_1_DmaInitialize(RxDMA_BYTES_PER_BURST, RxDMA_REQUEST_PER_BURST, 
                                     HI16(RxDMA_SRC_BASE), HI16(RxDMA_DST_BASE));
	
    RxDMA_TD_0[0] = CyDmaTdAllocate();
	RxDMA_TD_1[0] = CyDmaTdAllocate();
	
	/* Configure this Td chain, get BUFFER_SIZE samples */
    CyDmaTdSetConfiguration(RxDMA_TD_0[0], 2*BUFFER_SIZE, DMA_DISABLE_TD, TD_INC_DST_ADR | RxDMA_0__TD_TERMOUT_EN | CY_DMA_TD_SWAP_EN);
	CyDmaTdSetConfiguration(RxDMA_TD_1[0], 2*BUFFER_SIZE, DMA_DISABLE_TD, TD_INC_DST_ADR | RxDMA_1__TD_TERMOUT_EN | CY_DMA_TD_SWAP_EN);

    /* From the I2S to the memory */
    CyDmaTdSetAddress(RxDMA_TD_0[0], LO16((uint32)I2S_1_RX_CH0_F0_PTR), LO16((uint32)ReceivedData));
	CyDmaTdSetAddress(RxDMA_TD_1[0], LO16((uint32)I2S_1_RX_CH0_F1_PTR), LO16((uint32)dummy));
	
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
    /* Init DMA, 1 byte bursts, each burst requires a request */
    TxDMA_0_Chan = TxDMA_0_DmaInitialize(TxDMA_BYTES_PER_BURST, TxDMA_REQUEST_PER_BURST, 
                                    HI16(TxDMA_SRC_BASE), HI16(TxDMA_DST_BASE));
	TxDMA_1_Chan = TxDMA_1_DmaInitialize(TxDMA_BYTES_PER_BURST, TxDMA_REQUEST_PER_BURST, 
                                    HI16(TxDMA_SRC_BASE), HI16(TxDMA_DST_BASE));
	
    TxDMA_0_TD[0] = CyDmaTdAllocate();
    TxDMA_1_TD[0] = CyDmaTdAllocate();

	/* Configure this Td chain, send TRANSFER_COUNT samples and then restarts itself */
	CyDmaTdSetConfiguration(TxDMA_0_TD[0], 2*TRANSFER_COUNT, TxDMA_0_TD[0], TD_INC_SRC_ADR);
    CyDmaTdSetConfiguration(TxDMA_1_TD[0], 2*TRANSFER_COUNT, TxDMA_1_TD[0], TD_INC_SRC_ADR);
	
	/* From the ADC to the I2S */
    CyDmaTdSetAddress(TxDMA_0_TD[0], LO16((uint32)signal1), LO16((uint32)I2S_TX_CH0_F0_PTR));
    CyDmaTdSetAddress(TxDMA_1_TD[0], LO16((uint32)signal2), LO16((uint32)I2S_TX_CH0_F1_PTR));

	/* Associate the TD with the channel */
    CyDmaChSetInitialTd(TxDMA_0_Chan, TxDMA_0_TD[0]);
    CyDmaChSetInitialTd(TxDMA_1_Chan, TxDMA_1_TD[0]);

	/* Enable the channel */
    CyDmaChEnable(TxDMA_0_Chan, 1);
    CyDmaChEnable(TxDMA_1_Chan, 1);
}

/* END OF FILE */
