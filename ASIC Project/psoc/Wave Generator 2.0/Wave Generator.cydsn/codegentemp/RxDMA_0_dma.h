/******************************************************************************
* File Name: RxDMA_0_dma.h  
* Version 1.70
*
*  Description:
*   Provides the function definitions for the DMA Controller.
*
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/
#if !defined(CY_DMA_RxDMA_0_DMA_H__)
#define CY_DMA_RxDMA_0_DMA_H__



#include <CYDMAC.H>
#include <CYFITTER.H>

#define RxDMA_0__TD_TERMOUT_EN (((0 != RxDMA_0__TERMOUT0_EN) ? TD_TERMOUT0_EN : 0) | \
    (RxDMA_0__TERMOUT1_EN ? TD_TERMOUT1_EN : 0))

/* Zero based index of RxDMA_0 dma channel */
extern uint8 RxDMA_0_DmaHandle;


uint8 RxDMA_0_DmaInitialize(uint8 BurstCount, uint8 ReqestPerBurst, uint16 UpperSrcAddress, uint16 UpperDestAddress) ;
void  RxDMA_0_DmaRelease(void) ;


/* CY_DMA_RxDMA_0_DMA_H__ */
#endif
