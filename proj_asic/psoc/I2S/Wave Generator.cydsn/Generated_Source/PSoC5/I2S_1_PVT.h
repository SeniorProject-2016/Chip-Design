/*******************************************************************************
* File Name: I2S_1_PVT.h
* Version 2.60
*
* Description:
*  This file provides private constants and parameter values for the I2S
*  component. This code must not be used in user main code context.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_I2S_PVT_I2S_1_H)
#define CY_I2S_PVT_I2S_1_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*   Conditional Compilation Parameters
***************************************/

#define I2S_1_DIRECTION              (1u)
#define I2S_1_WORD_SELECT            (32u)
#define I2S_1_DYNAMIC_BIT_RESOLUTION (0u == 1u)
#define I2S_1_RX_DATA_INTERLEAVING   (0u)
#define I2S_1_TX_DATA_INTERLEAVING   (0u)

#define I2S_1_DIR_RX                 (0x01u)
#define I2S_1_DIR_TX                 (0x02u)
#define I2S_1_DIR_RX_AND_TX          (0x03u)

#define I2S_1_RX_DIRECTION_ENABLE    (0u != (I2S_1_DIR_RX & I2S_1_DIRECTION))
#define I2S_1_TX_DIRECTION_ENABLE    (0u != (I2S_1_DIR_TX & I2S_1_DIRECTION))

#define I2S_1_NUMBER_RX_CHANNELS     (2u)
#define I2S_1_NUMBER_TX_CHANNELS     (2u)

#define I2S_1_RX_DATA_SEPARATE       (0u == I2S_1_RX_DATA_INTERLEAVING)
#define I2S_1_RX_DATA_INTERLEAVED    (0u != I2S_1_RX_DATA_INTERLEAVING)

#define I2S_1_TX_DATA_SEPARATE       (0u == I2S_1_TX_DATA_INTERLEAVING)
#define I2S_1_TX_DATA_INTERLEAVED    (0u != I2S_1_TX_DATA_INTERLEAVING)

#define I2S_1_RX_BYTE_SWAP_ENABLE    (I2S_1_RX_DIRECTION_ENABLE && (0u != 0u))
#define I2S_1_TX_BYTE_SWAP_ENABLE    (I2S_1_TX_DIRECTION_ENABLE && (0u != 0u))

#define I2S_1_RX_STEREO_0_ONLY       (I2S_1_NUMBER_RX_CHANNELS <= 2u)
#define I2S_1_RX_STEREO_1_PRESENT    (I2S_1_NUMBER_RX_CHANNELS >= 4u)
#define I2S_1_RX_STEREO_2_PRESENT    (I2S_1_NUMBER_RX_CHANNELS >= 6u)
#define I2S_1_RX_STEREO_3_PRESENT    (I2S_1_NUMBER_RX_CHANNELS >= 8u)
#define I2S_1_RX_STEREO_4_PRESENT    (I2S_1_NUMBER_RX_CHANNELS == 10u)

#define I2S_1_TX_STEREO_0_ONLY       (I2S_1_NUMBER_TX_CHANNELS <= 2u)
#define I2S_1_TX_STEREO_1_PRESENT    (I2S_1_NUMBER_TX_CHANNELS >= 4u)
#define I2S_1_TX_STEREO_2_PRESENT    (I2S_1_NUMBER_TX_CHANNELS >= 6u)
#define I2S_1_TX_STEREO_3_PRESENT    (I2S_1_NUMBER_TX_CHANNELS >= 8u)
#define I2S_1_TX_STEREO_4_PRESENT    (I2S_1_NUMBER_TX_CHANNELS == 10u)

#define I2S_1_CLIP_DETECT_ENABLE     (0u != 0u)


/***************************************
*      Internal API Constants
***************************************/

#if (I2S_1_TX_BYTE_SWAP_ENABLE || I2S_1_RX_BYTE_SWAP_ENABLE)
    #define I2S_1_MIN_DATA_BITS             (16u)
    #define I2S_1_MAX_DATA_BITS             (24u)
#else
    #define I2S_1_MIN_DATA_BITS             (8u)
    #define I2S_1_MAX_DATA_BITS             (I2S_1_WORD_SELECT >> 1u)
#endif /* I2S_1_TX_BYTE_SWAP_ENABLE || I2S_1_RX_BYTE_SWAP_ENABLE */

#define I2S_1_CH0_STS_MASK                  (0x07u)
#define I2S_1_CH1_STS_MASK                  (0x38u)
#define I2S_1_CH2_STS_MASK                  (0x07u)
#define I2S_1_CH3_STS_MASK                  (0x38u)
#define I2S_1_CH4_STS_MASK                  (0x07u)
#define I2S_1_CH0_STS_SHIFT                 (0u)
#define I2S_1_CH1_STS_SHIFT                 (3u)
#define I2S_1_CH2_STS_SHIFT                 (0u)
#define I2S_1_CH3_STS_SHIFT                 (3u)
#define I2S_1_CH4_STS_SHIFT                 (0u)

#define I2S_1_BIT_RESOLUTION_MODE_MASK      (0x18u)


/***************************************
*             Registers
***************************************/

/* Bit counter registers */
#define I2S_1_AUX_CONTROL_REG            (* (reg8 *) I2S_1_bI2S_BitCounter__CONTROL_AUX_CTL_REG)
#define I2S_1_AUX_CONTROL_PTR            (  (reg8 *) I2S_1_bI2S_BitCounter__CONTROL_AUX_CTL_REG)
#define I2S_1_CNT_PERIOD_REG             (* (reg8 *) I2S_1_bI2S_BitCounter__PERIOD_REG)
#define I2S_1_CNT_PERIOD_PTR             (  (reg8 *) I2S_1_bI2S_BitCounter__PERIOD_REG)
#define I2S_1_CNT_COUNT_REG              (* (reg8 *) I2S_1_bI2S_BitCounter__COUNT_REG)
#define I2S_1_CNT_COUNT_PTR              (  (reg8 *) I2S_1_bI2S_BitCounter__COUNT_REG)

/* Transmit stereo channel 0 (channel 0 and channel 1) registers */
#if (I2S_1_TX_DIRECTION_ENABLE)
    #define I2S_1_TX_CH0_ACTL_REG        (* (reg8 *) I2S_1_bI2S_Tx_CH_0__dpTx_u0__DP_AUX_CTL_REG)
    #define I2S_1_TX_CH0_ACTL_PTR        (  (reg8 *) I2S_1_bI2S_Tx_CH_0__dpTx_u0__DP_AUX_CTL_REG)
    #define I2S_1_TX__STS_REG            (* (reg8 *) I2S_1_bI2S_Tx_STS_0__Sts__STATUS_REG)
    #define I2S_1_TX_CH0_STS_MASK_REG    (* (reg8 *) I2S_1_bI2S_Tx_STS_0__Sts__MASK_REG)
    #define I2S_1_TX_CH0_STS_MASK_PTR    (  (reg8 *) I2S_1_bI2S_Tx_STS_0__Sts__MASK_REG)
    #define I2S_1_TX_STS0_1_ACTL_REG     (* (reg8 *) I2S_1_bI2S_Tx_STS_0__Sts__STATUS_AUX_CTL_REG)
    #define I2S_1_TX_STS0_1_ACTL_PTR     (  (reg8 *) I2S_1_bI2S_Tx_STS_0__Sts__STATUS_AUX_CTL_REG)

/* Transmit stereo 1 (channel 2 and channel 3) registers */
#if (I2S_1_TX_STEREO_1_PRESENT)
    #define I2S_1_TX_CH1_ACTL_REG        (* (reg8 *) I2S_1_bI2S_Tx_CH_1__dpTx_u0__DP_AUX_CTL_REG)
    #define I2S_1_TX_CH1_ACTL_PTR        (  (reg8 *) I2S_1_bI2S_Tx_CH_1__dpTx_u0__DP_AUX_CTL_REG)
    #define I2S_1_TX_CH1_STS_MASK_REG    (* (reg8 *) I2S_1_bI2S_Tx_STS_0__Sts__MASK_REG)
    #define I2S_1_TX_CH1_STS_MASK_PTR    (  (reg8 *) I2S_1_bI2S_Tx_STS_0__Sts__MASK_REG)
#endif /* I2S_1_TX_STEREO_1_PRESENT */

/* Transmit stereo 2 (channel 4 and channel 5) registers */
#if (I2S_1_TX_STEREO_2_PRESENT)
    #define I2S_1_TX_CH2_ACTL_REG        (* (reg8 *) I2S_1_bI2S_Tx_CH_2__dpTx_u0__DP_AUX_CTL_REG)
    #define I2S_1_TX_CH2_ACTL_PTR        (  (reg8 *) I2S_1_bI2S_Tx_CH_2__dpTx_u0__DP_AUX_CTL_REG)
    #define I2S_1_TX_CH2_STS_MASK_REG    (* (reg8 *) I2S_1_bI2S_Tx_STS_2__Sts__MASK_REG)
    #define I2S_1_TX_CH2_STS_MASK_PTR    (  (reg8 *) I2S_1_bI2S_Tx_STS_2__Sts__MASK_REG)
    #define I2S_1_TX_STS2_3_ACTL_REG     (* (reg8 *) I2S_1_bI2S_Tx_STS_2__Sts__STATUS_AUX_CTL_REG)
    #define I2S_1_TX_STS2_3_ACTL_PTR     (  (reg8 *) I2S_1_bI2S_Tx_STS_2__Sts__STATUS_AUX_CTL_REG)
#endif /* I2S_1_TX_STEREO_2_PRESENT */

/* Transmit stereo 3 (channel 6 and channel 7) registers */
#if (I2S_1_TX_STEREO_3_PRESENT)
    #define I2S_1_TX_CH3_ACTL_REG        (* (reg8 *) I2S_1_bI2S_Tx_CH_3__dpTx_u0__DP_AUX_CTL_REG)
    #define I2S_1_TX_CH3_ACTL_PTR        (  (reg8 *) I2S_1_bI2S_Tx_CH_3__dpTx_u0__DP_AUX_CTL_REG)
    #define I2S_1_TX_CH3_STS_MASK_REG    (* (reg8 *) I2S_1_bI2S_Tx_STS_2__Sts__MASK_REG)
    #define I2S_1_TX_CH3_STS_MASK_PTR    (  (reg8 *) I2S_1_bI2S_Tx_STS_2__Sts__MASK_REG)
#endif /* I2S_1_TX_STEREO_3_PRESENT */

/* Transmit stereo 4 (channel 8 and channel 9) registers */
#if (I2S_1_TX_STEREO_4_PRESENT)   
    #define I2S_1_TX_CH4_ACTL_REG        (* (reg8 *) I2S_1_bI2S_Tx_CH_4__dpTx_u0__DP_AUX_CTL_REG)
    #define I2S_1_TX_CH4_ACTL_PTR        (  (reg8 *) I2S_1_bI2S_Tx_CH_4__dpTx_u0__DP_AUX_CTL_REG)
    #define I2S_1_TX_CH4_STS_MASK_REG    (* (reg8 *) I2S_1_bI2S_Tx_STS_4__Sts__MASK_REG)
    #define I2S_1_TX_CH4_STS_MASK_PTR    (  (reg8 *) I2S_1_bI2S_Tx_STS_4__Sts__MASK_REG)
    #define I2S_1_TX_STS4_ACTL_REG       (* (reg8 *) I2S_1_bI2S_Tx_STS_4__Sts__STATUS_AUX_CTL_REG)
    #define I2S_1_TX_STS4_ACTL_PTR       (  (reg8 *) I2S_1_bI2S_Tx_STS_4__Sts__STATUS_AUX_CTL_REG)
#endif /* I2S_1_TX_STEREO_4_PRESENT */
#endif /* I2S_1_TX_DIRECTION_ENABLE */

/* Receive stereo 0 (channel 0 and channel 1) registers */
#if (I2S_1_RX_DIRECTION_ENABLE)  
    #define I2S_1_RX_CH0_ACTL_REG        (* (reg8 *) I2S_1_bI2S_Rx_CH_0__dpRx_u0__DP_AUX_CTL_REG)
    #define I2S_1_RX_CH0_ACTL_PTR        (  (reg8 *) I2S_1_bI2S_Rx_CH_0__dpRx_u0__DP_AUX_CTL_REG)
    #define I2S_1_RX__STS_REG            (* (reg8 *) I2S_1_bI2S_Rx_STS_0__Sts__STATUS_REG)
    #define I2S_1_RX_CH0_STS_MASK_REG    (* (reg8 *) I2S_1_bI2S_Rx_STS_0__Sts__MASK_REG)
    #define I2S_1_RX_CH0_STS_MASK_PTR    (  (reg8 *) I2S_1_bI2S_Rx_STS_0__Sts__MASK_REG)
    #define I2S_1_RX_STS0_1_ACTL_REG     (* (reg8 *) I2S_1_bI2S_Rx_STS_0__Sts__STATUS_AUX_CTL_REG)
    #define I2S_1_RX_STS0_1_ACTL_PTR     (  (reg8 *) I2S_1_bI2S_Rx_STS_0__Sts__STATUS_AUX_CTL_REG)
    #define I2S_1_RX_CH0_D0_PTR          (  (reg8 *) I2S_1_bI2S_Rx_CH_0__dpRx_u0__D0_REG)
    #define I2S_1_RX_CH0_D1_PTR          (  (reg8 *) I2S_1_bI2S_Rx_CH_0__dpRx_u0__D1_REG)

/* Receive stereo 1 (channel 2 and channel 3) registers */
#if (I2S_1_RX_STEREO_1_PRESENT)
    #define I2S_1_RX_CH1_ACTL_REG        (* (reg8 *) I2S_1_bI2S_Rx_CH_1__dpRx_u0__DP_AUX_CTL_REG)
    #define I2S_1_RX_CH1_ACTL_PTR        (  (reg8 *) I2S_1_bI2S_Rx_CH_1__dpRx_u0__DP_AUX_CTL_REG)
    #define I2S_1_RX_CH1_STS_MASK_REG    (* (reg8 *) I2S_1_bI2S_Rx_STS_0__Sts__MASK_REG)
    #define I2S_1_RX_CH1_STS_MASK_PTR    (  (reg8 *) I2S_1_bI2S_Rx_STS_0__Sts__MASK_REG)
    #define I2S_1_RX_CH1_D0_PTR          (  (reg8 *) I2S_1_bI2S_Rx_CH_1__dpRx_u0__D0_REG)
    #define I2S_1_RX_CH1_D1_PTR          (  (reg8 *) I2S_1_bI2S_Rx_CH_1__dpRx_u0__D1_REG)
#endif /* I2S_1_RX_STEREO_1_PRESENT */

/* Stereo 2 (channel 4 and channel 5) registers */
#if (I2S_1_RX_STEREO_2_PRESENT)  
    #define I2S_1_RX_CH2_ACTL_REG        (* (reg8 *) I2S_1_bI2S_Rx_CH_2__dpRx_u0__DP_AUX_CTL_REG)
    #define I2S_1_RX_CH2_ACTL_PTR        (  (reg8 *) I2S_1_bI2S_Rx_CH_2__dpRx_u0__DP_AUX_CTL_REG)
    #define I2S_1_RX_CH2_STS_MASK_REG    (* (reg8 *) I2S_1_bI2S_Rx_STS_2__Sts__MASK_REG)
    #define I2S_1_RX_CH2_STS_MASK_PTR    (  (reg8 *) I2S_1_bI2S_Rx_STS_2__Sts__MASK_REG)
    #define I2S_1_RX_STS2_3_ACTL_REG     (* (reg8 *) I2S_1_bI2S_Rx_STS_2__Sts__STATUS_AUX_CTL_REG)
    #define I2S_1_RX_STS2_3_ACTL_PTR     (  (reg8 *) I2S_1_bI2S_Rx_STS_2__Sts__STATUS_AUX_CTL_REG)
    #define I2S_1_RX_CH2_D0_PTR          (  (reg8 *) I2S_1_bI2S_Rx_CH_2__dpRx_u0__D0_REG)
    #define I2S_1_RX_CH2_D1_PTR          (  (reg8 *) I2S_1_bI2S_Rx_CH_2__dpRx_u0__D1_REG)
#endif /* I2S_1_RX_STEREO_2_PRESENT */

/* Stereo 3 (channel 6 and channel 7) registers */
#if (I2S_1_RX_STEREO_3_PRESENT)
    #define I2S_1_RX_CH3_ACTL_REG        (* (reg8 *) I2S_1_bI2S_Rx_CH_3__dpRx_u0__DP_AUX_CTL_REG)
    #define I2S_1_RX_CH3_ACTL_PTR        (  (reg8 *) I2S_1_bI2S_Rx_CH_3__dpRx_u0__DP_AUX_CTL_REG)
    #define I2S_1_RX_CH3_STS_MASK_REG    (* (reg8 *) I2S_1_bI2S_Rx_STS_2__Sts__MASK_REG)
    #define I2S_1_RX_CH3_STS_MASK_PTR    (  (reg8 *) I2S_1_bI2S_Rx_STS_2__Sts__MASK_REG)
    #define I2S_1_RX_CH3_D0_PTR          (  (reg8 *) I2S_1_bI2S_Rx_CH_3__dpRx_u0__D0_REG)
    #define I2S_1_RX_CH3_D1_PTR          (  (reg8 *) I2S_1_bI2S_Rx_CH_3__dpRx_u0__D1_REG)
#endif /* I2S_1_RX_STEREO_3_PRESENT */

/* Stereo 4 (channel 8 and channel 9) registers */
#if (I2S_1_RX_STEREO_4_PRESENT)
    #define I2S_1_RX_CH4_ACTL_REG        (* (reg8 *) I2S_1_bI2S_Rx_CH_4__dpRx_u0__DP_AUX_CTL_REG)
    #define I2S_1_RX_CH4_ACTL_PTR        (  (reg8 *) I2S_1_bI2S_Rx_CH_4__dpRx_u0__DP_AUX_CTL_REG)
    #define I2S_1_RX_CH4_STS_MASK_REG    (* (reg8 *) I2S_1_bI2S_Rx_STS_4__Sts__MASK_REG)
    #define I2S_1_RX_CH4_STS_MASK_PTR    (  (reg8 *) I2S_1_bI2S_Rx_STS_4__Sts__MASK_REG)
    #define I2S_1_RX_STS4_ACTL_REG       (* (reg8 *) I2S_1_bI2S_Rx_STS_4__Sts__STATUS_AUX_CTL_REG)
    #define I2S_1_RX_STS4_ACTL_PTR       (  (reg8 *) I2S_1_bI2S_Rx_STS_4__Sts__STATUS_AUX_CTL_REG)
    #define I2S_1_RX_CH4_D0_PTR          (  (reg8 *) I2S_1_bI2S_Rx_CH_4__dpRx_u0__D0_REG)
    #define I2S_1_RX_CH4_D1_PTR          (  (reg8 *) I2S_1_bI2S_Rx_CH_4__dpRx_u0__D1_REG)
#endif /* I2S_1_RX_STEREO_4_PRESENT */
#endif /* I2S_1_RX_DIRECTION_ENABLE */


/***************************************
*               Macros
***************************************/
            
#if (I2S_1_TX_DIRECTION_ENABLE)
    
    /*******************************************************************************
    * Function Name: I2S_1_WRITE_BYTE
    ********************************************************************************
    *
    * Summary:
    *  Writes a single byte into the Tx FIFO for the specified channel.
    *
    * Parameters:
    *  channel:  Specifies the stereo channel number.
    *    CH0 - Stereo channel 0
    *    CH1 - Stereo channel 1
    *    CH2 - Stereo channel 2
    *    CH3 - Stereo channel 3
    *    CH4 - Stereo channel 4
    *  wrData:  Byte containing the data to transmit.
    *  wordSelect:  Indicates to write to the Left (0) or Right (1) channel. In the
    *               interleaved mode this parameter is ignored.
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    #if (I2S_1_TX_DATA_INTERLEAVED)            
        #define I2S_1_WRITE_BYTE(channel, wrData, wordSelect) \
            (* I2S_1_TX_##channel##_F0_PTR = (wrData))
    #else
        #define I2S_1_WRITE_BYTE(channel, wrData, wordSelect) \
            do { \
                if(0u == (wordSelect)) \
                {* I2S_1_TX_##channel##_F0_PTR = (wrData);} \
                else \
                {* I2S_1_TX_##channel##_F1_PTR = (wrData);} \
            } while(0)
    #endif /* I2S_1_TX_DATA_INTERLEAVED */

    /*******************************************************************************
    * Function Name: I2S_1_SET_TX_INT_MASK
    ********************************************************************************
    *
    * Summary:
    *  Sets the interrupt source for the specified Tx stereo channel. Multiple
    *  sources may be ORed.
    *
    * Parameters:
    *  channel:  Specifies the stereo channel number.
    *    CH0 - Stereo channel 0
    *    CH1 - Stereo channel 1
    *    CH2 - Stereo channel 2
    *    CH3 - Stereo channel 3
    *    CH4 - Stereo channel 4
    *  interruptSource:  Specifies the constant for the selected interrupt sources.
    *    I2S_1_TX_FIFO_UNDERFLOW
    *    I2S_1_TX_FIFO_0_NOT_FULL
    *    I2S_1_TX_FIFO_1_NOT_FULL
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    #define I2S_1_SET_TX_INT_MASK(channel, interruptSource) \
        do { \
            I2S_1_TX_##channel##_STS_MASK_REG &= (uint8) ~I2S_1_##channel##_STS_MASK; \
            I2S_1_TX_##channel##_STS_MASK_REG |= (uint8)((interruptSource) << I2S_1_##channel##_STS_SHIFT); \
        } while(0)

    /*******************************************************************************
    * Function Name: I2S_1_CLEAR_TX_FIFO
    ********************************************************************************
    *
    * Summary:
    *  Clears out the Tx FIFO for the specified stereo channel.
    *  NOTE The macro modifies a shared device register (ACTL) that must not be
    *  concurrently accessed. Therefore its execution must be protected by a critical
    *  section to ensure the operation is atomic.
    *
    * Parameters:
    *  channel: Specifies the stereo channel number
    *   CH0 - Stereo channel 0
    *   CH1 - Stereo channel 1
    *   CH2 - Stereo channel 2
    *   CH3 - Stereo channel 3
    *   CH4 - Stereo channel 4
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    #define I2S_1_CLEAR_TX_FIFO(channel) \
        do { \
            I2S_1_TX_##channel##_ACTL_REG |= (uint8) (I2S_1_FIFO0_CLR | I2S_1_FIFO1_CLR); \
            I2S_1_TX_##channel##_ACTL_REG &= (uint8)~(I2S_1_FIFO0_CLR | I2S_1_FIFO1_CLR); \
        } while (0)

#endif /* I2S_1_TX_DIRECTION_ENABLE */

#if (I2S_1_RX_DIRECTION_ENABLE)

    /*******************************************************************************
    * Function Name: I2S_1_READ_BYTE
    ********************************************************************************
    *
    * Summary:
    *  Returns a single byte from the Rx FIFO of the specified channel.
    *
    * Parameters:
    *  channel: Specifies the stereo channel number.
    *    CH0 - Stereo channel 0
    *    CH1 - Stereo channel 1
    *    CH2 - Stereo channel 2
    *    CH3 - Stereo channel 3
    *    CH4 - Stereo channel 4
    *  wordSelect: Indicates to read from the Left (0) or Right (1) channel. In the
    *              interleaved mode this parameter is ignored.
    *
    * Return:
    *  Byte containing the data received.
    *
    *******************************************************************************/
    #if (I2S_1_RX_DATA_INTERLEAVED)
        #define I2S_1_READ_BYTE(channel, wordSelect) (* I2S_1_RX_##channel##_F0_PTR)
    #else
        #define I2S_1_READ_BYTE(channel, wordSelect) \
            ((0u == (wordSelect)) ? (* I2S_1_RX_##channel##_F0_PTR) : (* I2S_1_RX_##channel##_F1_PTR))

    #endif /* I2S_1_RX_DATA_INTERLEAVED */


    /*******************************************************************************
    * Function Name: I2S_1_SET_RX_INT_MASK
    ********************************************************************************
    *
    * Summary:
    *  Sets the interrupt source for the specified Rx stereo channel. Multiple
    *  sources may be ORed.
    *
    * Parameters:
    *  channel:  Specifies the stereo channel number.
    *    CH0 - Stereo channel 0
    *    CH1 - Stereo channel 1
    *    CH2 - Stereo channel 2
    *    CH3 - Stereo channel 3
    *    CH4 - Stereo channel 4
    *  interruptSource:  Specifies the constant for the selected interrupt sources.
    *    I2S_1_RX_FIFO_OVERFLOW
    *    I2S_1_RX_FIFO_0_NOT_EMPTY
    *    I2S_1_RX_FIFO_1_NOT_EMPTY
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    #define I2S_1_SET_RX_INT_MASK(channel, interruptSource) \
        do { \
            I2S_1_RX_##channel##_STS_MASK_REG &= (uint8) ~I2S_1_##channel##_STS_MASK; \
            I2S_1_RX_##channel##_STS_MASK_REG |= (uint8)((interruptSource) << I2S_1_##channel##_STS_SHIFT); \
        } while(0)


    /*******************************************************************************
    * Function Name: I2S_1_CLEAR_RX_FIFO
    ********************************************************************************
    *
    * Summary:
    *  Clears out the Rx FIFO for the specified stereo channel.
    *  NOTE The macro modifies a shared device register (ACTL) that must not be
    *  concurrently accessed. Therefore its execution must be protected by a critical
    *  section to ensure the operation is atomic.
    *
    * Parameters:
    *  channel: Specifies the stereo channel number
    *   CH0 - Stereo channel 0
    *   CH1 - Stereo channel 1
    *   CH2 - Stereo channel 2
    *   CH3 - Stereo channel 3
    *   CH4 - Stereo channel 4
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    #define I2S_1_CLEAR_RX_FIFO(channel) \
        do { \
            I2S_1_RX_##channel##_ACTL_REG |= (uint8) (I2S_1_FIFO0_CLR | I2S_1_FIFO1_CLR); \
            I2S_1_RX_##channel##_ACTL_REG &= (uint8)~(I2S_1_FIFO0_CLR | I2S_1_FIFO1_CLR); \
        } while (0)


    /*******************************************************************************
    * Function Name: I2S_1_SET_POS_THRESHOLD
    ********************************************************************************
    *
    * Summary:
    *  Sets the 8-bit positive clip detection threshold for the specified channel.
    *
    * Parameters:
    *  channel: Specifies the stereo channel number.
    *    CH0 - Stereo channel 0
    *    CH1 - Stereo channel 1
    *    CH2 - Stereo channel 2
    *    CH3 - Stereo channel 3
    *    CH4 - Stereo channel 4
    *  uint8 threshold: Specifies the positive clip detection threshold.
    *    Valid range: 0..127.
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    #define I2S_1_SET_POS_THRESHOLD(channel, threshold) (* I2S_1_RX_##channel##_D0_PTR = (uint8)(threshold))


    /*******************************************************************************
    * Function Name: I2S_1_SET_NEG_THRESHOLD
    ********************************************************************************
    *
    * Summary:
    *  Sets the 8-bit negative clip detection threshold for the specified channel.
    *
    * Parameters:
    *  channel: Specifies the stereo channel number.
    *    CH0 - Stereo channel 0
    *    CH1 - Stereo channel 1
    *    CH2 - Stereo channel 2
    *    CH3 - Stereo channel 3
    *    CH4 - Stereo channel 4
    *  int8 threshold: Specifies the negative clip detection threshold.
    *    Valid range: -1..-128.
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    #define I2S_1_SET_NEG_THRESHOLD(channel, threshold) (* I2S_1_RX_##channel##_D1_PTR = (uint8)(threshold))

#endif /* I2S_1_RX_DIRECTION_ENABLE */


/***************************************
*       Obsolete
***************************************/

/* Following code is OBSOLETE and must not be used for new designs */

void  I2S_1_SaveConfig(void)             ;
void  I2S_1_RestoreConfig(void)          ;

#if(I2S_1_TX_DIRECTION_ENABLE)
    #define I2S_1_TX_REG                         (* (reg8 *) I2S_1_bI2S_Tx_CH_0__dpTx_u0__A0_REG)
    #define I2S_1_TX_PTR                         (  (reg8 *) I2S_1_bI2S_Tx_CH_0__dpTx_u0__A0_REG)
    #define I2S_1_TX_FIFO_0_REG                  (* (reg8 *) I2S_1_bI2S_Tx_CH_0__dpTx_u0__F0_REG)
    #define I2S_1_TX_FIFO_1_REG                  (* (reg8 *) I2S_1_bI2S_Tx_CH_0__dpTx_u0__F1_REG)
    #define I2S_1_TX_FIFO_0_PTR                  (  (reg8 *) I2S_1_bI2S_Tx_CH_0__dpTx_u0__F0_REG)
    #define I2S_1_TX_FIFO_1_PTR                  (  (reg8 *) I2S_1_bI2S_Tx_CH_0__dpTx_u0__F1_REG)
    #define I2S_1_TX_STATUS_REG                  (* (reg8 *) I2S_1_bI2S_Tx_STS_0__Sts__STATUS_REG)
    #define I2S_1_TX_STATUS_PTR                  (  (reg8 *) I2S_1_bI2S_Tx_STS_0__Sts__STATUS_REG)
    #define I2S_1_TX_AUX_CONTROL_REG             I2S_1_TX_CH0_ACTL_REG
    #define I2S_1_TX_AUX_CONTROL_PTR             I2S_1_TX_CH0_ACTL_PTR
    #define I2S_1_TX_STATUS_MASK_REG             I2S_1_TX_CH0_MASK_REG
    #define I2S_1_TX_STATUS_MASK_PTR             I2S_1_TX_CH0_MASK_PTR
    #define I2S_1_TX_STATUS_AUX_CONTROL_REG      I2S_1_TX_STS0_1_ACTL_REG
    #define I2S_1_TX_STATUS_AUX_CONTROL_PTR      I2S_1_TX_STS0_1_ACTL_PTR
#endif /* (I2S_1_TX_DIRECTION_ENABLE) */

#if(I2S_1_RX_DIRECTION_ENABLE)
    #define I2S_1_RX_REG                         (* (reg8 *) I2S_1_bI2S_Rx_CH_0__dpRx_u0__A0_REG)
    #define I2S_1_RX_PTR                         (  (reg8 *) I2S_1_bI2S_Rx_CH_0__dpRx_u0__A0_REG)
    #define I2S_1_RX_FIFO_0_REG                  (* (reg8 *) I2S_1_bI2S_Rx_CH_0__dpRx_u0__F0_REG)
    #define I2S_1_RX_FIFO_1_REG                  (* (reg8 *) I2S_1_bI2S_Rx_CH_0__dpRx_u0__F1_REG)
    #define I2S_1_RX_FIFO_0_PTR                  (  (reg8 *) I2S_1_bI2S_Rx_CH_0__dpRx_u0__F0_REG)
    #define I2S_1_RX_FIFO_1_PTR                  (  (reg8 *) I2S_1_bI2S_Rx_CH_0__dpRx_u0__F1_REG)
    #define I2S_1_RX_STATUS_REG                  (* (reg8 *) I2S_1_bI2S_Rx_STS_0__Sts__STATUS_REG)
    #define I2S_1_RX_STATUS_PTR                  (  (reg8 *) I2S_1_bI2S_Rx_STS_0__Sts__STATUS_REG)
    #define I2S_1_RX_AUX_CONTROL_REG             I2S_1_RX_CH0_ACTL_REG
    #define I2S_1_RX_AUX_CONTROL_PTR             I2S_1_RX_CH0_ACTL_PTR
    #define I2S_1_RX_STATUS_MASK_REG             I2S_1_RX_CH0_STS_MASK_REG
    #define I2S_1_RX_STATUS_MASK_PTR             I2S_1_RX_CH0_STS_MASK_PTR
    #define I2S_1_RX_STATUS_AUX_CONTROL_REG      I2S_1_RX_STS0_1_ACTL_REG
    #define I2S_1_RX_STATUS_AUX_CONTROL_PTR      I2S_1_RX_STS0_1_ACTL_PTR
#endif /* (I2S_1_RX_DIRECTION_ENABLE) */

/* Direction enum. */
#define I2S_1__TX        (I2S_1_DIR_TX)
#define I2S_1__RX        (I2S_1_DIR_RX)
#define I2S_1__RX_AND_TX (I2S_1_DIR_RX_AND_TX)

/* Data interleaving enum. */
#define I2S_1__SEPARATE      (I2S_1_DATA_SEPARATE)
#define I2S_1__INTERLEAVED   (I2S_1_DATA_INTERLEAVED)

#endif /* (CY_I2S_PVT_I2S_1_H) */


/* [] END OF FILE */
