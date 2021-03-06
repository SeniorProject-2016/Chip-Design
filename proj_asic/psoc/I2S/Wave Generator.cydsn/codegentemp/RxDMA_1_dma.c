/***************************************************************************
* File Name: RxDMA_1_dma.c  
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
#include <RxDMA_1_dma.H>



/****************************************************************************
* 
* The following defines are available in Cyfitter.h
* 
* 
* 
* RxDMA_1__DRQ_CTL_REG
* 
* 
* RxDMA_1__DRQ_NUMBER
* 
* Number of TD's used by this channel.
* RxDMA_1__NUMBEROF_TDS
* 
* Priority of this channel.
* RxDMA_1__PRIORITY
* 
* True if RxDMA_1_TERMIN_SEL is used.
* RxDMA_1__TERMIN_EN
* 
* TERMIN interrupt line to signal terminate.
* RxDMA_1__TERMIN_SEL
* 
* 
* True if RxDMA_1_TERMOUT0_SEL is used.
* RxDMA_1__TERMOUT0_EN
* 
* 
* TERMOUT0 interrupt line to signal completion.
* RxDMA_1__TERMOUT0_SEL
* 
* 
* True if RxDMA_1_TERMOUT1_SEL is used.
* RxDMA_1__TERMOUT1_EN
* 
* 
* TERMOUT1 interrupt line to signal completion.
* RxDMA_1__TERMOUT1_SEL
* 
****************************************************************************/


/* Zero based index of RxDMA_1 dma channel */
uint8 RxDMA_1_DmaHandle = DMA_INVALID_CHANNEL;

/*********************************************************************
* Function Name: uint8 RxDMA_1_DmaInitalize
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
uint8 RxDMA_1_DmaInitialize(uint8 BurstCount, uint8 ReqestPerBurst, uint16 UpperSrcAddress, uint16 UpperDestAddress) 
{

    /* Allocate a DMA channel. */
    RxDMA_1_DmaHandle = (uint8)RxDMA_1__DRQ_NUMBER;

    /* Configure the channel. */
    (void)CyDmaChSetConfiguration(RxDMA_1_DmaHandle,
                                  BurstCount,
                                  ReqestPerBurst,
                                  (uint8)RxDMA_1__TERMOUT0_SEL,
                                  (uint8)RxDMA_1__TERMOUT1_SEL,
                                  (uint8)RxDMA_1__TERMIN_SEL);

    /* Set the extended address for the transfers */
    (void)CyDmaChSetExtendedAddress(RxDMA_1_DmaHandle, UpperSrcAddress, UpperDestAddress);

    /* Set the priority for this channel */
    (void)CyDmaChPriority(RxDMA_1_DmaHandle, (uint8)RxDMA_1__PRIORITY);
    
    return RxDMA_1_DmaHandle;
}

/*********************************************************************
* Function Name: void RxDMA_1_DmaRelease
**********************************************************************
* Summary:
*   Frees the channel associated with RxDMA_1.
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
void RxDMA_1_DmaRelease(void) 
{
    /* Disable the channel */
    (void)CyDmaChDisable(RxDMA_1_DmaHandle);
}

