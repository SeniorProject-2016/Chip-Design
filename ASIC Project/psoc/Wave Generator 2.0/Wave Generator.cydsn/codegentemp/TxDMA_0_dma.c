/***************************************************************************
* File Name: TxDMA_0_dma.c  
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
#include <TxDMA_0_dma.H>



/****************************************************************************
* 
* The following defines are available in Cyfitter.h
* 
* 
* 
* TxDMA_0__DRQ_CTL_REG
* 
* 
* TxDMA_0__DRQ_NUMBER
* 
* Number of TD's used by this channel.
* TxDMA_0__NUMBEROF_TDS
* 
* Priority of this channel.
* TxDMA_0__PRIORITY
* 
* True if TxDMA_0_TERMIN_SEL is used.
* TxDMA_0__TERMIN_EN
* 
* TERMIN interrupt line to signal terminate.
* TxDMA_0__TERMIN_SEL
* 
* 
* True if TxDMA_0_TERMOUT0_SEL is used.
* TxDMA_0__TERMOUT0_EN
* 
* 
* TERMOUT0 interrupt line to signal completion.
* TxDMA_0__TERMOUT0_SEL
* 
* 
* True if TxDMA_0_TERMOUT1_SEL is used.
* TxDMA_0__TERMOUT1_EN
* 
* 
* TERMOUT1 interrupt line to signal completion.
* TxDMA_0__TERMOUT1_SEL
* 
****************************************************************************/


/* Zero based index of TxDMA_0 dma channel */
uint8 TxDMA_0_DmaHandle = DMA_INVALID_CHANNEL;

/*********************************************************************
* Function Name: uint8 TxDMA_0_DmaInitalize
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
uint8 TxDMA_0_DmaInitialize(uint8 BurstCount, uint8 ReqestPerBurst, uint16 UpperSrcAddress, uint16 UpperDestAddress) 
{

    /* Allocate a DMA channel. */
    TxDMA_0_DmaHandle = (uint8)TxDMA_0__DRQ_NUMBER;

    /* Configure the channel. */
    (void)CyDmaChSetConfiguration(TxDMA_0_DmaHandle,
                                  BurstCount,
                                  ReqestPerBurst,
                                  (uint8)TxDMA_0__TERMOUT0_SEL,
                                  (uint8)TxDMA_0__TERMOUT1_SEL,
                                  (uint8)TxDMA_0__TERMIN_SEL);

    /* Set the extended address for the transfers */
    (void)CyDmaChSetExtendedAddress(TxDMA_0_DmaHandle, UpperSrcAddress, UpperDestAddress);

    /* Set the priority for this channel */
    (void)CyDmaChPriority(TxDMA_0_DmaHandle, (uint8)TxDMA_0__PRIORITY);
    
    return TxDMA_0_DmaHandle;
}

/*********************************************************************
* Function Name: void TxDMA_0_DmaRelease
**********************************************************************
* Summary:
*   Frees the channel associated with TxDMA_0.
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
void TxDMA_0_DmaRelease(void) 
{
    /* Disable the channel */
    (void)CyDmaChDisable(TxDMA_0_DmaHandle);
}

