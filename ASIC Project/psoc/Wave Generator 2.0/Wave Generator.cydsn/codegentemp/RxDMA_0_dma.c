/***************************************************************************
* File Name: RxDMA_0_dma.c  
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
#include <RxDMA_0_dma.H>



/****************************************************************************
* 
* The following defines are available in Cyfitter.h
* 
* 
* 
* RxDMA_0__DRQ_CTL_REG
* 
* 
* RxDMA_0__DRQ_NUMBER
* 
* Number of TD's used by this channel.
* RxDMA_0__NUMBEROF_TDS
* 
* Priority of this channel.
* RxDMA_0__PRIORITY
* 
* True if RxDMA_0_TERMIN_SEL is used.
* RxDMA_0__TERMIN_EN
* 
* TERMIN interrupt line to signal terminate.
* RxDMA_0__TERMIN_SEL
* 
* 
* True if RxDMA_0_TERMOUT0_SEL is used.
* RxDMA_0__TERMOUT0_EN
* 
* 
* TERMOUT0 interrupt line to signal completion.
* RxDMA_0__TERMOUT0_SEL
* 
* 
* True if RxDMA_0_TERMOUT1_SEL is used.
* RxDMA_0__TERMOUT1_EN
* 
* 
* TERMOUT1 interrupt line to signal completion.
* RxDMA_0__TERMOUT1_SEL
* 
****************************************************************************/


/* Zero based index of RxDMA_0 dma channel */
uint8 RxDMA_0_DmaHandle = DMA_INVALID_CHANNEL;

/*********************************************************************
* Function Name: uint8 RxDMA_0_DmaInitalize
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
uint8 RxDMA_0_DmaInitialize(uint8 BurstCount, uint8 ReqestPerBurst, uint16 UpperSrcAddress, uint16 UpperDestAddress) 
{

    /* Allocate a DMA channel. */
    RxDMA_0_DmaHandle = (uint8)RxDMA_0__DRQ_NUMBER;

    /* Configure the channel. */
    (void)CyDmaChSetConfiguration(RxDMA_0_DmaHandle,
                                  BurstCount,
                                  ReqestPerBurst,
                                  (uint8)RxDMA_0__TERMOUT0_SEL,
                                  (uint8)RxDMA_0__TERMOUT1_SEL,
                                  (uint8)RxDMA_0__TERMIN_SEL);

    /* Set the extended address for the transfers */
    (void)CyDmaChSetExtendedAddress(RxDMA_0_DmaHandle, UpperSrcAddress, UpperDestAddress);

    /* Set the priority for this channel */
    (void)CyDmaChPriority(RxDMA_0_DmaHandle, (uint8)RxDMA_0__PRIORITY);
    
    return RxDMA_0_DmaHandle;
}

/*********************************************************************
* Function Name: void RxDMA_0_DmaRelease
**********************************************************************
* Summary:
*   Frees the channel associated with RxDMA_0.
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
void RxDMA_0_DmaRelease(void) 
{
    /* Disable the channel */
    (void)CyDmaChDisable(RxDMA_0_DmaHandle);
}

