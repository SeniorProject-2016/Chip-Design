/***************************************************************************
* File Name: TxDMA_1_dma.c  
* Version 1.70
*
*  Description:
*   Provides an API for the DMAC component. The API includes functions
*   for the DMA controller, DMA channels and Transfer Descriptors.
*
*
*   Note:
*     This module requires the developer to finish or fill in the auto
*     generated funcions and setup the dma channel and TD's.
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/
#include <CYLIB.H>
#include <CYDMAC.H>
#include <TxDMA_1_dma.H>



/****************************************************************************
* 
* The following defines are available in Cyfitter.h
* 
* 
* 
* TxDMA_1__DRQ_CTL_REG
* 
* 
* TxDMA_1__DRQ_NUMBER
* 
* Number of TD's used by this channel.
* TxDMA_1__NUMBEROF_TDS
* 
* Priority of this channel.
* TxDMA_1__PRIORITY
* 
* True if TxDMA_1_TERMIN_SEL is used.
* TxDMA_1__TERMIN_EN
* 
* TERMIN interrupt line to signal terminate.
* TxDMA_1__TERMIN_SEL
* 
* 
* True if TxDMA_1_TERMOUT0_SEL is used.
* TxDMA_1__TERMOUT0_EN
* 
* 
* TERMOUT0 interrupt line to signal completion.
* TxDMA_1__TERMOUT0_SEL
* 
* 
* True if TxDMA_1_TERMOUT1_SEL is used.
* TxDMA_1__TERMOUT1_EN
* 
* 
* TERMOUT1 interrupt line to signal completion.
* TxDMA_1__TERMOUT1_SEL
* 
****************************************************************************/


/* Zero based index of TxDMA_1 dma channel */
uint8 TxDMA_1_DmaHandle = DMA_INVALID_CHANNEL;

/*********************************************************************
* Function Name: uint8 TxDMA_1_DmaInitalize
**********************************************************************
* Summary:
*   Allocates and initialises a channel of the DMAC to be used by the
*   caller.
*
* Parameters:
*   BurstCount.
*       
*       
*   ReqestPerBurst.
*       
*       
*   UpperSrcAddress.
*       
*       
*   UpperDestAddress.
*       
*
* Return:
*   The channel that can be used by the caller for DMA activity.
*   DMA_INVALID_CHANNEL (0xFF) if there are no channels left. 
*
*
*******************************************************************/
uint8 TxDMA_1_DmaInitialize(uint8 BurstCount, uint8 ReqestPerBurst, uint16 UpperSrcAddress, uint16 UpperDestAddress) 
{

    /* Allocate a DMA channel. */
    TxDMA_1_DmaHandle = (uint8)TxDMA_1__DRQ_NUMBER;

    /* Configure the channel. */
    (void)CyDmaChSetConfiguration(TxDMA_1_DmaHandle,
                                  BurstCount,
                                  ReqestPerBurst,
                                  (uint8)TxDMA_1__TERMOUT0_SEL,
                                  (uint8)TxDMA_1__TERMOUT1_SEL,
                                  (uint8)TxDMA_1__TERMIN_SEL);

    /* Set the extended address for the transfers */
    (void)CyDmaChSetExtendedAddress(TxDMA_1_DmaHandle, UpperSrcAddress, UpperDestAddress);

    /* Set the priority for this channel */
    (void)CyDmaChPriority(TxDMA_1_DmaHandle, (uint8)TxDMA_1__PRIORITY);
    
    return TxDMA_1_DmaHandle;
}

/*********************************************************************
* Function Name: void TxDMA_1_DmaRelease
**********************************************************************
* Summary:
*   Frees the channel associated with TxDMA_1.
*
*
* Parameters:
*   void.
*
*
*
* Return:
*   void.
*
*******************************************************************/
void TxDMA_1_DmaRelease(void) 
{
    /* Disable the channel */
    (void)CyDmaChDisable(TxDMA_1_DmaHandle);
}

