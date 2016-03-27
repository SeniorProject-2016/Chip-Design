/*******************************************************************************
* File Name: I2S.c
* Version 2.60
*
* Description:
*  This file contains the setup, control and status commands for the I2S
*  component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "CyLib.h"
#include "I2S.h"

uint8 I2S_initVar = 0u;


/*******************************************************************************
* Function Name: I2S_Enable
********************************************************************************
*
* Summary:
*  Enables I2S interface. Starts the generation of the sck and ws outputs.
*  The Tx and Rx directions remain disabled. It is not necessary to call
*  I2S_Enable() because the I2S_Start() routine calls this function, which is
*  the preferred method to begin component operation.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void I2S_Enable(void) 
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();
    I2S_AUX_CONTROL_REG |= I2S_CNT_START;
    CyExitCriticalSection(enableInterrupts);

    I2S_CONTROL_REG |= I2S_EN;
}


/*******************************************************************************
* Function Name: I2S_Init
********************************************************************************
*
* Summary:
*  Initializes or restores default I2S configuration provided with customizer.
*  It is not necessary to call I2S_Init() because the I2S_Start() routine calls
*  this function, which is the preferred method to begin component operation.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void I2S_Init(void) 
{
    #if (I2S_CLIP_DETECT_ENABLE)
        static const uint8 CYCODE I2S_posThresholds[] = {0u};
        static const int8  CYCODE I2S_negThresholds[] = {-1};
    #endif /* I2S_CLIP_DETECT_ENABLE */

    #if (I2S_DYNAMIC_BIT_RESOLUTION)
        (void)I2S_SetDataBits(I2S_DATA_BITS);
    #endif /* I2S_DYNAMIC_BIT_RESOLUTION */

    /* Initialize Tx interrupt source selected in customizer */
    #if (I2S_TX_DIRECTION_ENABLE)
        I2S_SET_TX_INT_MASK(CH0, I2S_TX_INT_SOURCE);
        #if (I2S_TX_STEREO_1_PRESENT)
            I2S_SET_TX_INT_MASK(CH1, I2S_TX_INT_SOURCE);
        #endif /* I2S_TX_STEREO_1_PRESENT */
        #if (I2S_TX_STEREO_2_PRESENT)
            I2S_SET_TX_INT_MASK(CH2, I2S_TX_INT_SOURCE);
        #endif /* I2S_TX_STEREO_2_PRESENT */
        #if (I2S_TX_STEREO_3_PRESENT)
            I2S_SET_TX_INT_MASK(CH3, I2S_TX_INT_SOURCE);
        #endif /* I2S_TX_STEREO_3_PRESENT */
        #if (I2S_TX_STEREO_4_PRESENT)
            I2S_SET_TX_INT_MASK(CH4, I2S_TX_INT_SOURCE);
        #endif /* I2S_TX_STEREO_4_PRESENT */
    #endif /* (I2S_TX_DIRECTION_ENABLE) */
    
    /* Initialize Rx interrupt source and clipping thresholds selected in customizer */
    #if (I2S_RX_DIRECTION_ENABLE)
        I2S_SET_RX_INT_MASK(CH0, I2S_RX_INT_SOURCE);
        #if (I2S_CLIP_DETECT_ENABLE)
            I2S_SET_POS_THRESHOLD(CH0, I2S_posThresholds[I2S_STEREO_0]);
            I2S_SET_NEG_THRESHOLD(CH0, I2S_negThresholds[I2S_STEREO_0]);
        #endif /* I2S_CLIP_DETECT_ENABLE */
        #if (I2S_RX_STEREO_1_PRESENT)
            I2S_SET_RX_INT_MASK(CH1, I2S_RX_INT_SOURCE);
            #if (I2S_CLIP_DETECT_ENABLE)
                I2S_SET_POS_THRESHOLD(CH1, I2S_posThresholds[I2S_STEREO_1]);
                I2S_SET_NEG_THRESHOLD(CH1, I2S_negThresholds[I2S_STEREO_1]);
            #endif /* I2S_CLIP_DETECT_ENABLE */
        #endif /* I2S_RX_STEREO_1_PRESENT */
        #if (I2S_RX_STEREO_2_PRESENT)
            I2S_SET_RX_INT_MASK(CH2, I2S_RX_INT_SOURCE);
            #if (I2S_CLIP_DETECT_ENABLE)
                I2S_SET_POS_THRESHOLD(CH2, I2S_posThresholds[I2S_STEREO_2]);
                I2S_SET_NEG_THRESHOLD(CH2, I2S_negThresholds[I2S_STEREO_2]);
            #endif /* I2S_CLIP_DETECT_ENABLE */
        #endif /* I2S_RX_STEREO_2_PRESENT */
        #if (I2S_RX_STEREO_3_PRESENT)
            I2S_SET_RX_INT_MASK(CH3, I2S_RX_INT_SOURCE);
            #if (I2S_CLIP_DETECT_ENABLE)
                I2S_SET_POS_THRESHOLD(CH3, I2S_posThresholds[I2S_STEREO_3]);
                I2S_SET_NEG_THRESHOLD(CH3, I2S_negThresholds[I2S_STEREO_3]);
            #endif /* I2S_CLIP_DETECT_ENABLE */
        #endif /* I2S_RX_STEREO_3_PRESENT */
        #if (I2S_RX_STEREO_4_PRESENT)
            I2S_SET_RX_INT_MASK(CH4, I2S_RX_INT_SOURCE);
            #if (I2S_CLIP_DETECT_ENABLE)
                I2S_SET_POS_THRESHOLD(CH4, I2S_posThresholds[I2S_STEREO_4]);
                I2S_SET_NEG_THRESHOLD(CH4, I2S_negThresholds[I2S_STEREO_4]);
            #endif /* I2S_CLIP_DETECT_ENABLE */
        #endif /* I2S_RX_STEREO_4_PRESENT */
    #endif /* (I2S_RX_DIRECTION_ENABLE) */
}


/*******************************************************************************
* Function Name: I2S_Start
********************************************************************************
*
* Summary:
*  Starts the I2S interface. Starts the generation of the sck and ws outputs.
*  The Tx and Rx directions remain disabled.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  I2S_initVar - used to check initial configuration, modified on
*  first function call.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void I2S_Start(void) 
{
    if(0u == I2S_initVar)
    {
        I2S_Init();
        I2S_initVar = 1u;
    }

    I2S_Enable();
}


/*******************************************************************************
* Function Name: I2S_Stop
********************************************************************************
*
* Summary:
*  Disables the I2S interface. The sck and ws outputs are set to 0. The Tx and
*  Rx directions are disabled and their FIFOs are cleared.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void I2S_Stop(void) 
{
    uint8 enableInterrupts;

    I2S_CONTROL_REG &= (uint8)~I2S_EN;

    enableInterrupts = CyEnterCriticalSection();
    I2S_AUX_CONTROL_REG &= (uint8)~I2S_CNT_START;
    CyExitCriticalSection(enableInterrupts);

    /* Clear counter value to force reload when component is enabled */
    I2S_CNT_COUNT_REG = 0u;

    #if (I2S_TX_DIRECTION_ENABLE)
        I2S_DisableTx();
        I2S_ClearTxFIFO();
    #endif /* (I2S_TX_DIRECTION_ENABLE) */
    
    #if (I2S_RX_DIRECTION_ENABLE)
        I2S_DisableRx();
        I2S_ClearRxFIFO();
    #endif /* (I2S_RX_DIRECTION_ENABLE) */
}

#if (I2S_DYNAMIC_BIT_RESOLUTION)
    /*******************************************************************************
    * Function Name: I2S_SetDataBits
    ********************************************************************************
    *
    * Summary:
    *  Sets the number of data bits for each sample. The component must be stopped
    *  before calling this API.
    *
    * Parameters:
    *  dataBits: the number of data bits for each sample. Valid values - 8/16/24/32.
    *  If Tx or Rx byte swapping is enabled, valid values are 16 and 24.
    *
    * Return:
    *  CYRET_SUCCESS  : Operation is successful
    *  CYRET_BAD_PARAM: Invalid parameter value
    *
    * Side effects:
    *  Calling this API while the component is operating may cause unexpected
    *  behavior.
    *
    *******************************************************************************/
    cystatus I2S_SetDataBits(uint8 dataBits)   
    {
        cystatus status;

        CYASSERT((dataBits >= I2S_MIN_DATA_BITS) && (dataBits <= I2S_MAX_DATA_BITS));

        status = CYRET_SUCCESS;
        /* The component must be stopped prior calling this API. Therefore
        * all the control bits except the bits modified are zeros.
        */
        switch(dataBits)
        {
        case I2S_8BIT_DATA:
            I2S_CONTROL_REG = I2S_8BIT_MODE;
            break;
        case I2S_16BIT_DATA:
            I2S_CONTROL_REG = I2S_16BIT_MODE;
            break;
        case I2S_24BIT_DATA:
            I2S_CONTROL_REG = I2S_24BIT_MODE;
            break;
        case I2S_32BIT_DATA:
            I2S_CONTROL_REG = I2S_32BIT_MODE;
            break;
        default: status = CYRET_BAD_PARAM;
            break;
        }

        return (status);
    }

#endif /* I2S_DYNAMIC_BIT_RESOLUTION */

#if(I2S_TX_DIRECTION_ENABLE)
    /*******************************************************************************
    * Function Name: I2S_EnableTx
    ********************************************************************************
    *
    * Summary:
    *  Enables the Tx direction of the I2S interface.  At the next word
    *  select falling edge transmission will begin.
    *
    * Parameters:
    *  None.
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    void I2S_EnableTx(void) 
    {
        uint8 enableInterrupts;

        enableInterrupts = CyEnterCriticalSection();
        I2S_TX_STS0_1_ACTL_REG |= I2S_INT_EN;
        #ifdef I2S_TX_STS2_3_ACTL_REG
            I2S_TX_STS2_3_ACTL_REG |= I2S_INT_EN;
        #endif /* I2S_TX_STS2_3_ACTL_REG */
        #ifdef I2S_TX_STS4_ACTL_REG
            I2S_TX_STS4_ACTL_REG |= I2S_INT_EN;
        #endif /* I2S_TX_STS4_ACTL_REG */
        CyExitCriticalSection(enableInterrupts);
        
        I2S_CONTROL_REG |= I2S_TX_EN;
    }


    /*******************************************************************************
    * Function Name: I2S_DisableTx
    ********************************************************************************
    *
    * Summary:
    *  Disables the Tx direction of the I2S interface.  At the next word
    *  select falling edge transmission of data will stop and a constant 0 value
    *  will be transmitted.
    *
    * Parameters:
    *  None.
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    void I2S_DisableTx(void) 
    {
        uint8 enableInterrupts;

        I2S_CONTROL_REG &= (uint8)~I2S_TX_EN;

        enableInterrupts = CyEnterCriticalSection();
        I2S_TX_STS0_1_ACTL_REG &= (uint8)~I2S_INT_EN;
        #ifdef I2S_TX_STS2_3_ACTL_REG
            I2S_TX_STS2_3_ACTL_REG &= (uint8)~I2S_INT_EN;
        #endif /* I2S_TX_STS2_3_ACTL_REG */
        #ifdef I2S_TX_STS4_ACTL_REG
            I2S_TX_STS4_ACTL_REG &= (uint8)~I2S_INT_EN;
        #endif /* I2S_TX_STS4_ACTL_REG */
        CyExitCriticalSection(enableInterrupts);
    }


    /*******************************************************************************
    * Function Name: I2S_ClearTxFIFO
    ********************************************************************************
    *
    * Summary:
    *  Clears out the FIFOs for all Tx channels. Any data present in the FIFO will
    *  not be sent. This call should be made only when the Tx direction is disabled.
    *
    * Parameters:
    *  None.
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    void I2S_ClearTxFIFO(void) 
    {
        uint8 enableInterrupts;

        enableInterrupts = CyEnterCriticalSection();
        I2S_CLEAR_TX_FIFO(CH0);
        #if (I2S_TX_STEREO_1_PRESENT)
            I2S_CLEAR_TX_FIFO(CH1);
        #endif /* I2S_TX_STEREO_1_PRESENT */
        #if (I2S_TX_STEREO_2_PRESENT)
            I2S_CLEAR_TX_FIFO(CH2);
        #endif /* I2S_TX_STEREO_2_PRESENT */
        #if (I2S_TX_STEREO_3_PRESENT)
            I2S_CLEAR_TX_FIFO(CH3);
        #endif /* I2S_TX_STEREO_3_PRESENT */
        #if (I2S_TX_STEREO_4_PRESENT)
            I2S_CLEAR_TX_FIFO(CH4);
        #endif /* I2S_TX_STEREO_4_PRESENT */
        CyExitCriticalSection(enableInterrupts);
    }

#endif /* (I2S_TX_DIRECTION_ENABLE) */


#if(I2S_RX_DIRECTION_ENABLE)
    /*******************************************************************************
    * Function Name: I2S_EnableRx
    ********************************************************************************
    *
    * Summary:
    *  Enables the Rx direction of the I2S interface.  At the next word
    *  select falling edge reception of data will begin.
    *
    * Parameters:
    *  None.
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    void I2S_EnableRx(void) 
    {
        uint8 enableInterrupts;

        enableInterrupts = CyEnterCriticalSection();
        I2S_RX_STS0_1_ACTL_REG |= I2S_INT_EN;
        #ifdef I2S_RX_STS2_3_ACTL_REG
            I2S_RX_STS2_3_ACTL_REG |= I2S_INT_EN;
        #endif /* I2S_RX_STS2_3_ACTL_REG */
        #ifdef I2S_RX_STS4_ACTL_REG
            I2S_RX_STS4_ACTL_REG |= I2S_INT_EN;
        #endif /* I2S_RX_STS4_ACTL_REG */
        CyExitCriticalSection(enableInterrupts);
        
        I2S_CONTROL_REG |= I2S_RX_EN;
    }


    /*******************************************************************************
    * Function Name: I2S_DisableRx
    ********************************************************************************
    *
    * Summary:
    *  Disables the Rx direction of the I2S interface.
    *
    * Parameters:
    *  None.
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    void I2S_DisableRx(void) 
    {
        uint8 enableInterrupts;

        I2S_CONTROL_REG &= (uint8)~I2S_RX_EN;

        enableInterrupts = CyEnterCriticalSection();
        I2S_RX_STS0_1_ACTL_REG &= (uint8)~I2S_INT_EN;
        #ifdef I2S_RX_STS2_3_ACTL_REG
            I2S_RX_STS2_3_ACTL_REG &= (uint8)~I2S_INT_EN;
        #endif /* I2S_RX_STS2_3_ACTL_REG */
        #ifdef I2S_RX_STS4_ACTL_REG
            I2S_RX_STS4_ACTL_REG &= (uint8)~I2S_INT_EN;
        #endif /* I2S_RX_STS4_ACTL_REG */
        CyExitCriticalSection(enableInterrupts);
    }


    /*******************************************************************************
    * Function Name: I2S_ClearRxFIFO
    ********************************************************************************
    *
    * Summary:
    *  Clears out the Rx FIFO.  Any data present in the FIFO will be lost.
    *  This call should be made only when the Rx direction is disabled.
    *
    * Parameters:
    *  None.
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    void I2S_ClearRxFIFO(void) 
    {
        uint8 enableInterrupts;

        enableInterrupts = CyEnterCriticalSection();
        I2S_CLEAR_RX_FIFO(CH0);
        #if (I2S_RX_STEREO_1_PRESENT)
            I2S_CLEAR_RX_FIFO(CH1);
        #endif /* I2S_RX_STEREO_1_PRESENT */
        #if (I2S_RX_STEREO_2_PRESENT)
            I2S_CLEAR_RX_FIFO(CH2);
        #endif /* I2S_RX_STEREO_2_PRESENT */
        #if (I2S_RX_STEREO_3_PRESENT)
            I2S_CLEAR_RX_FIFO(CH3);
        #endif /* I2S_RX_STEREO_3_PRESENT */
        #if (I2S_RX_STEREO_4_PRESENT)
            I2S_CLEAR_RX_FIFO(CH4);
        #endif /* I2S_RX_STEREO_4_PRESENT */
        CyExitCriticalSection(enableInterrupts);
    }
#endif /* (I2S_RX_DIRECTION_ENABLE) */


/* [] END OF FILE */
