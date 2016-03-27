/*******************************************************************************
* File Name: I2S.h
* Version 2.60
*
* Description:
*  This file provides constants and parameter values and API definition for the
*  I2S Component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_I2S_I2S_H)
#define CY_I2S_I2S_H

#include "I2S_PVT.h"


/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 enableState;

} I2S_BACKUP_STRUCT;


/***************************************
*        Function Prototypes
***************************************/

void  I2S_Start(void) ;
void  I2S_Stop(void) ;
void  I2S_Init(void) ;
void  I2S_Enable(void) ;
void  I2S_Sleep(void) ;
void  I2S_Wakeup(void) ;

#if (I2S_DYNAMIC_BIT_RESOLUTION)
    cystatus I2S_SetDataBits(uint8 dataBits) ;
#endif /* I2S_DYNAMIC_BIT_RESOLUTION */

#if (I2S_TX_DIRECTION_ENABLE)
    void   I2S_EnableTx(void)          ;
    void   I2S_DisableTx(void)         ;
    void   I2S_ClearTxFIFO(void)       ;
#endif /* (I2S_TX_DIRECTION_ENABLE) */

#if (I2S_RX_DIRECTION_ENABLE)
    void   I2S_EnableRx(void)          ;
    void   I2S_DisableRx(void)         ;
    void   I2S_ClearRxFIFO(void)       ;
#endif /* I2S_RX_DIRECTION_ENABLE */


/***************************************
*   Variable with external linkage
***************************************/

extern uint8 I2S_initVar;


/***************************************
*           API Constants
***************************************/

/* One stereo channel supports data channels (left and right) */
#define I2S_TX_LEFT_CHANNEL        (0x00u)
#define I2S_TX_RIGHT_CHANNEL       (0x01u)
#define I2S_RX_LEFT_CHANNEL        (0x00u)
#define I2S_RX_RIGHT_CHANNEL       (0x01u)

/* Interrupt masks and channel status */
#define I2S_TX_FIFO_UNDERFLOW      (0x01u)
#define I2S_TX_FIFO_0_NOT_FULL     (0x02u)
#define I2S_TX_FIFO_1_NOT_FULL     (0x04u)
#define I2S_RX_FIFO_OVERFLOW       (0x01u)
#define I2S_RX_FIFO_0_NOT_EMPTY    (0x02u)
#define I2S_RX_FIFO_1_NOT_EMPTY    (0x04u)

#define I2S_TX_CH0_UNDERFLOW       (0x01u)
#define I2S_TX_CH0_F0_NOT_FULL     (0x02u)
#define I2S_TX_CH0_F1_NOT_FULL     (0x04u)
#define I2S_RX_CH0_OVERFLOW        (0x01u)
#define I2S_RX_CH0_F0_NOT_EMPTY    (0x02u)
#define I2S_RX_CH0_F1_NOT_EMPTY    (0x04u)

#define I2S_TX_CH1_UNDERFLOW       (0x08u)
#define I2S_TX_CH1_F0_NOT_FULL     (0x10u)
#define I2S_TX_CH1_F1_NOT_FULL     (0x20u)
#define I2S_RX_CH1_OVERFLOW        (0x08u)
#define I2S_RX_CH1_F0_NOT_EMPTY    (0x10u)
#define I2S_RX_CH1_F1_NOT_EMPTY    (0x20u)

#define I2S_TX_CH2_UNDERFLOW       (0x01u)
#define I2S_TX_CH2_F0_NOT_FULL     (0x02u)
#define I2S_TX_CH2_F1_NOT_FULL     (0x04u)
#define I2S_RX_CH2_OVERFLOW        (0x01u)
#define I2S_RX_CH2_F0_NOT_EMPTY    (0x02u)
#define I2S_RX_CH2_F1_NOT_EMPTY    (0x04u)

#define I2S_TX_CH3_UNDERFLOW       (0x08u)
#define I2S_TX_CH3_F0_NOT_FULL     (0x10u)
#define I2S_TX_CH3_F1_NOT_FULL     (0x20u)
#define I2S_RX_CH3_OVERFLOW        (0x08u)
#define I2S_RX_CH3_F0_NOT_EMPTY    (0x10u)
#define I2S_RX_CH3_F1_NOT_EMPTY    (0x20u)

#define I2S_TX_CH4_UNDERFLOW       (0x01u)
#define I2S_TX_CH4_F0_NOT_FULL     (0x02u)
#define I2S_TX_CH4_F1_NOT_FULL     (0x04u)
#define I2S_RX_CH4_OVERFLOW        (0x01u)
#define I2S_RX_CH4_F0_NOT_EMPTY    (0x02u)
#define I2S_RX_CH4_F1_NOT_EMPTY    (0x04u)

/* Data bits values for dynamic bit resolution */
#define I2S_8BIT_DATA              (8u)
#define I2S_16BIT_DATA             (16u)
#define I2S_24BIT_DATA             (24u)
#define I2S_32BIT_DATA             (32u)

/* Stereo channels */
#define I2S_STEREO_0               (0u)
#define I2S_STEREO_1               (1u)
#define I2S_STEREO_2               (2u)
#define I2S_STEREO_3               (3u)
#define I2S_STEREO_4               (4u)


/***************************************
*    Initial Parameter Constants
***************************************/

/* Default interrupt source */
#define I2S_INT_SOURCE             (0u)
#define I2S_RX_INT_SOURCE          (0u)
#define I2S_TX_INT_SOURCE          (0u)
#define I2S_DATA_BITS              (16u)


/***************************************
*             Registers
***************************************/

/* Global control register */
#define I2S_CONTROL_REG                (* (reg8 *) I2S_bI2S_CtlReg__CONTROL_REG)
#define I2S_CONTROL_PTR                (  (reg8 *) I2S_bI2S_CtlReg__CONTROL_REG)

/* Transmit stereo channel 0 (channel 0 and channel 1) registers */
#if (I2S_TX_DIRECTION_ENABLE)
    #define I2S_TX_CH0_F0_PTR          (  (reg8 *) I2S_bI2S_Tx_CH_0__dpTx_u0__F0_REG)
    #define I2S_TX_CH0_F1_PTR          (  (reg8 *) I2S_bI2S_Tx_CH_0__dpTx_u0__F1_REG)
    #define I2S_TX_CH0_STS_REG         (* (reg8 *) I2S_bI2S_Tx_STS_0__Sts__STATUS_REG)
    #define I2S_TX_CH0_STS_PTR         (  (reg8 *) I2S_bI2S_Tx_STS_0__Sts__STATUS_REG)

/* Transmit stereo 1 (channel 2 and channel 3) registers */
#if (I2S_TX_STEREO_1_PRESENT)
    #define I2S_TX_CH1_F0_PTR          (  (reg8 *) I2S_bI2S_Tx_CH_1__dpTx_u0__F0_REG)
    #define I2S_TX_CH1_F1_PTR          (  (reg8 *) I2S_bI2S_Tx_CH_1__dpTx_u0__F1_REG)
    #define I2S_TX_CH1_STS_REG         (* (reg8 *) I2S_bI2S_Tx_STS_0__Sts__STATUS_REG)
    #define I2S_TX_CH1_STS_PTR         (  (reg8 *) I2S_bI2S_Tx_STS_0__Sts__STATUS_REG)
#endif /* I2S_TX_STEREO_1_PRESENT */

/* Transmit stereo 2 (channel 4 and channel 5) registers */
#if (I2S_TX_STEREO_2_PRESENT)
    #define I2S_TX_CH2_F0_PTR          (  (reg8 *) I2S_bI2S_Tx_CH_2__dpTx_u0__F0_REG)
    #define I2S_TX_CH2_F1_PTR          (  (reg8 *) I2S_bI2S_Tx_CH_2__dpTx_u0__F1_REG)
    #define I2S_TX_CH2_STS_REG         (* (reg8 *) I2S_bI2S_Tx_STS_2__Sts__STATUS_REG)
    #define I2S_TX_CH2_STS_PTR         (  (reg8 *) I2S_bI2S_Tx_STS_2__Sts__STATUS_REG)
#endif /* I2S_TX_STEREO_2_PRESENT */

/* Transmit stereo 3 (channel 6 and channel 7) registers */
#if (I2S_TX_STEREO_3_PRESENT)
    #define I2S_TX_CH3_F0_PTR          (  (reg8 *) I2S_bI2S_Tx_CH_3__dpTx_u0__F0_REG)
    #define I2S_TX_CH3_F1_PTR          (  (reg8 *) I2S_bI2S_Tx_CH_3__dpTx_u0__F1_REG)
    #define I2S_TX_CH3_STS_REG         (* (reg8 *) I2S_bI2S_Tx_STS_2__Sts__STATUS_REG)
    #define I2S_TX_CH3_STS_PTR         (  (reg8 *) I2S_bI2S_Tx_STS_2__Sts__STATUS_REG)
#endif /* I2S_TX_STEREO_3_PRESENT */

/* Transmit stereo 4 (channel 8 and channel 9) registers */
#if (I2S_TX_STEREO_4_PRESENT)   
    #define I2S_TX_CH4_F0_PTR          (  (reg8 *) I2S_bI2S_Tx_CH_4__dpTx_u0__F0_REG)
    #define I2S_TX_CH4_F1_PTR          (  (reg8 *) I2S_bI2S_Tx_CH_4__dpTx_u0__F1_REG)
    #define I2S_TX_CH4_STS_REG         (* (reg8 *) I2S_bI2S_Tx_STS_4__Sts__STATUS_REG)
    #define I2S_TX_CH4_STS_PTR         (  (reg8 *) I2S_bI2S_Tx_STS_4__Sts__STATUS_REG)
#endif /* I2S_TX_STEREO_4_PRESENT */
#endif /* I2S_TX_DIRECTION_ENABLE */

/* Receive stereo 0 (channel 0 and channel 1) registers */
#if (I2S_RX_DIRECTION_ENABLE)  
    #define I2S_RX_CH0_F0_PTR          (  (reg8 *) I2S_bI2S_Rx_CH_0__dpRx_u0__F0_REG)
    #define I2S_RX_CH0_F1_PTR          (  (reg8 *) I2S_bI2S_Rx_CH_0__dpRx_u0__F1_REG)
    #define I2S_RX_CH0_STS_REG         (* (reg8 *) I2S_bI2S_Rx_STS_0__Sts__STATUS_REG)
    #define I2S_RX_CH0_STS_PTR         (  (reg8 *) I2S_bI2S_Rx_STS_0__Sts__STATUS_REG)

/* Receive stereo 1 (channel 2 and channel 3) registers */
#if (I2S_RX_STEREO_1_PRESENT)
    #define I2S_RX_CH1_F0_PTR          (  (reg8 *) I2S_bI2S_Rx_CH_1__dpRx_u0__F0_REG)
    #define I2S_RX_CH1_F1_PTR          (  (reg8 *) I2S_bI2S_Rx_CH_1__dpRx_u0__F1_REG)
    #define I2S_RX_CH1_STS_REG         (* (reg8 *) I2S_bI2S_Rx_STS_0__Sts__STATUS_REG)
    #define I2S_RX_CH1_STS_PTR         (  (reg8 *) I2S_bI2S_Rx_STS_0__Sts__STATUS_REG)
#endif /* I2S_RX_STEREO_1_PRESENT */

/* Stereo 2 (channel 4 and channel 5) registers */
#if (I2S_RX_STEREO_2_PRESENT)  
    #define I2S_RX_CH2_F0_PTR          (  (reg8 *) I2S_bI2S_Rx_CH_2__dpRx_u0__F0_REG)
    #define I2S_RX_CH2_F1_PTR          (  (reg8 *) I2S_bI2S_Rx_CH_2__dpRx_u0__F1_REG)
    #define I2S_RX_CH2_STS_REG         (* (reg8 *) I2S_bI2S_Rx_STS_2__Sts__STATUS_REG)
    #define I2S_RX_CH2_STS_PTR         (  (reg8 *) I2S_bI2S_Rx_STS_2__Sts__STATUS_REG)
#endif /* I2S_RX_STEREO_2_PRESENT */

/* Stereo 3 (channel 6 and channel 7) registers */
#if (I2S_RX_STEREO_3_PRESENT)
    #define I2S_RX_CH3_F0_PTR          (  (reg8 *) I2S_bI2S_Rx_CH_3__dpRx_u0__F0_REG)
    #define I2S_RX_CH3_F1_PTR          (  (reg8 *) I2S_bI2S_Rx_CH_3__dpRx_u0__F1_REG)
    #define I2S_RX_CH3_STS_REG         (* (reg8 *) I2S_bI2S_Rx_STS_2__Sts__STATUS_REG)
    #define I2S_RX_CH3_STS_PTR         (  (reg8 *) I2S_bI2S_Rx_STS_2__Sts__STATUS_REG)
#endif /* I2S_RX_STEREO_3_PRESENT */

/* Stereo 4 (channel 8 and channel 9) registers */
#if (I2S_RX_STEREO_4_PRESENT)
    #define I2S_RX_CH4_F0_PTR          (  (reg8 *) I2S_bI2S_Rx_CH_4__dpRx_u0__F0_REG)
    #define I2S_RX_CH4_F1_PTR          (  (reg8 *) I2S_bI2S_Rx_CH_4__dpRx_u0__F1_REG)
    #define I2S_RX_CH4_STS_REG         (* (reg8 *) I2S_bI2S_Rx_STS_4__Sts__STATUS_REG)
    #define I2S_RX_CH4_STS_PTR         (  (reg8 *) I2S_bI2S_Rx_STS_4__Sts__STATUS_REG)
#endif /* I2S_RX_STEREO_4_PRESENT */
#endif /* I2S_RX_DIRECTION_ENABLE */


/***************************************
*       Register Constants
***************************************/

/* Control register bits */
#define I2S_TX_EN              (0x01u)
#define I2S_RX_EN              (0x02u)
#define I2S_EN                 (0x04u)
#define I2S_8BIT_MODE          (0x00u)
#define I2S_16BIT_MODE         (0x08u)
#define I2S_24BIT_MODE         (0x10u)
#define I2S_32BIT_MODE         (0x18u)

/* FIFO control bits */
#define I2S_FIFO0_CLR          (0x01u)
#define I2S_FIFO1_CLR          (0x02u)
#define I2S_FIFO0_LVL          (0x04u) 
#define I2S_FIFO1_LVL          (0x08u)

/* Interrupt mask and enable bits */ 
#define I2S_STS_MASK           (0x3Fu)      
#define I2S_INT_EN             (0x10u)

/* Bit counter control bits */
#define I2S_CNT_START          (0x20u)


#if (I2S_TX_DIRECTION_ENABLE)

    /*******************************************************************************
    * Function Name: I2S_WriteByte
    ********************************************************************************
    *
    * Summary:
    *  This macro writes a single byte into the Tx FIFO for the specified stereo
    *  channel. You have to check the Tx status before this call to confirm that
    *  the Tx FIFO is not full.
    *
    * Parameters:
    *  channel (for Tx multi-channel only): Specifies the stereo channel number.
    *   Note The macro expects channel parameter only when more than one stereo
    *   channel is selected for the Tx direction.
    *    CH0 - Stereo channel 0
    *    CH1 - Stereo channel 1
    *    CH2 - Stereo channel 2
    *    CH3 - Stereo channel 3
    *    CH4 - Stereo channel 4
    *  wrData: Byte containing the data to transmit.
    *  wordSelect: Indicates to write to the Left (0) or Right (1) channel. In the
    *    interleaved mode this parameter is ignored.
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    #if (I2S_TX_STEREO_0_ONLY)
        #define I2S_WriteByte(wrData, wordSelect) I2S_WRITE_BYTE(CH0, wrData, wordSelect)
    #else
        #define I2S_WriteByte(channel, wrData, wordSelect) I2S_WRITE_BYTE(channel, wrData, wordSelect)
    #endif /* I2S_TX_STEREO_0_ONLY */


    /***************************************************************************
    * Function Name: I2S_ReadTxStatus
    ****************************************************************************
    *
    * Summary:
    *  Returns the status of the specified stereo channel(s).
    *  In multi-channel configuration, the status bits of stereo channel 0 are
    *  combined with stereo channel 1, and the bits of channel 2 are combined
    *  with channel 3. Therefore the API will return the combined status of
    *  stereo channel 0 and stereo channel 1 if the status for channel 0 or
    *  channel 1 is requested.
    *
    * Parameters:
    *  channel (for Tx multi-channel only): Specifies the stereo channel number.
    *   Note The macro expects channel parameter only when more than one stereo
    *   channel is selected for Tx direction.
    *    CH0  - Stereo channel 0
    *    CH1  - Stereo channel 1
    *    CH2  - Stereo channel 2
    *    CH3  - Stereo channel 3
    *    CH4  - Stereo channel 4
    *
    * Return:
    *  Status bits associated with the specified stereo channel.
    *    Bits 
    *    0   CH0/CH2/CH4 underflow status (Clear on Read)
    *    1   CH0/CH2/CH4 FIFO 0 not full status
    *    2   CH0/CH2/CH4 FIFO 1 not full status
    *    3   CH1/CH3 underflow status (Clear on Read)
    *    4   CH1/CH3 FIFO 0 not full status
    *    5   CH1/CH3 FIFO 1 not full status
    *
    * Side Effects:
    *  Clears the status register bits that are Clear on Read.
    *
    *******************************************************************************/
    #define I2S_ReadTxStatus(channel) (I2S_TX_##channel##_STS_REG & I2S_STS_MASK)


    /*******************************************************************************
    * Function Name: I2S_SetTxInterruptMode
    ********************************************************************************
    *
    * Summary:
    *  Sets the interrupt source for the specified Tx stereo channel. Multiple
    *  sources may be ORed.
    *
    * Parameters:
    *  channel (for Tx multi-channel only): Specifies the stereo channel number.
    *   Note The macro expects channel parameter only when more than one stereo
    *   channel is selected for Tx direction.
    *    CH0 - Stereo channel 0
    *    CH1 - Stereo channel 1
    *    CH2 - Stereo channel 2
    *    CH3 - Stereo channel 3
    *    CH4 - Stereo channel 4
    *  interruptSource: Specifies the constant for the selected interrupt sources.
    *    I2S_TX_FIFO_UNDERFLOW
    *    I2S_TX_FIFO_0_NOT_FULL
    *    I2S_TX_FIFO_1_NOT_FULL
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    #if (I2S_TX_STEREO_0_ONLY)
        #define I2S_SetTxInterruptMode(interruptSource) (I2S_TX_CH0_STS_MASK_REG = (uint8)(interruptSource))
    #else
        #define I2S_SetTxInterruptMode(channel, interruptSource) I2S_SET_TX_INT_MASK(channel, interruptSource)
    #endif /* I2S_TX_STEREO_0_ONLY */

#endif /* I2S_TX_DIRECTION_ENABLE */

#if (I2S_RX_DIRECTION_ENABLE)

    /*******************************************************************************
    * Function Name: I2S_ReadByte
    ********************************************************************************
    *
    * Summary:
    *  Returns a single byte from the Rx FIFO of the specified channel.
    *
    * Parameters:
    *  channel (for Rx multi-channel only): Specifies the stereo channel number.
    *   Note The macro expects channel parameter only when more than one stereo
    *   channel is selected for Rx direction.
    *    CH0  - Stereo channel 0
    *    CH1  - Stereo channel 1
    *    CH2  - Stereo channel 2
    *    CH3  - Stereo channel 3
    *    CH4  - Stereo channel 4
    *  wordSelect: Indicates to read from the Left (0) or Right (1) channel. In the
    *    interleaved mode this parameter is ignored.
    *
    * Return:
    *  Byte containing the data received.
    *
    *******************************************************************************/
    #if (I2S_RX_STEREO_0_ONLY)
        #define I2S_ReadByte(wordSelect) I2S_READ_BYTE(CH0, wordSelect)
    #else
        #define I2S_ReadByte(channel, wordSelect) I2S_READ_BYTE(channel, wordSelect)
    #endif /* I2S_RX_STEREO_0_ONLY */


    /***************************************************************************
    * Function Name: I2S_ReadRxStatus
    ****************************************************************************
    *
    * Summary:
    *  Returns the status of the specified stereo channel(s).
    *  In multi-channel configuration, the status bits of stereo channel 0 are
    *  combined with stereo channel 1, and the bits of channel 2 are combined
    *  with channel 3. Therefore the API will return the combined status of
    *  stereo channel 0 and stereo channel 1 if the status for channel 0 or
    *  channel 1 is requested.
    *
    * Parameters:
    *  channel (for Rx multi-channel only): Specifies the stereo channel number.
    *   Note The macro expects channel parameter only when more than one stereo
    *   channel is selected for Rx direction. 
    *    CH0  - Stereo channel 0
    *    CH1  - Stereo channel 1
    *    CH2  - Stereo channel 2
    *    CH3  - Stereo channel 3
    *    CH4  - Stereo channel 4
    *
    * Return:
    *  Status bits associated with the specified stereo channel.
    *    Bits 
    *    0   CH0/CH2/CH4 overflow status (Clear on Read)
    *    1   CH0/CH2/CH4 FIFO 0 not empty status
    *    2   CH0/CH2/CH4 FIFO 1 not empty status
    *    3   CH1/CH3 overflow status (Clear on Read)
    *    4   CH1/CH3 FIFO 0 not empty status
    *    5   CH1/CH3 FIFO 1 not empty status
    *
    * Side Effects:
    *  Clears the status register bits that are Clear on Read.
    *
    *******************************************************************************/
    #define I2S_ReadRxStatus(channel) (I2S_RX_##channel##_STS_REG & I2S_STS_MASK)


    /*******************************************************************************
    * Function Name: I2S_SetRxInterruptMode
    ********************************************************************************
    *
    * Summary:
    *  Sets the interrupt source for the specified Rx stereo channel. Multiple
    *  sources may be ORed.
    *
    * Parameters:
    *  channel (for Rx multi-channel only): Specifies the stereo channel number.
    *   Note The macro expects channel parameter only when more than one stereo
    *   channel is selected for Rx direction.
    *    CH0 - Stereo channel 0
    *    CH1 - Stereo channel 1
    *    CH2 - Stereo channel 2
    *    CH3 - Stereo channel 3
    *    CH4 - Stereo channel 4
    *  interruptSource: Specifies the constant for the selected interrupt sources.
    *    I2S_RX_FIFO_OVERFLOW
    *    I2S_RX_FIFO_0_NOT_EMPTY
    *    I2S_RX_FIFO_1_NOT_EMPTY
    *
    * Return:
    *  None.
    *
    *******************************************************************************/
    #if (I2S_RX_STEREO_0_ONLY)
        #define I2S_SetRxInterruptMode(interruptSource) (I2S_RX_CH0_STS_MASK_REG = (uint8)(interruptSource))
    #else
        #define I2S_SetRxInterruptMode(channel, interruptSource) I2S_SET_RX_INT_MASK(channel, interruptSource)
    #endif /* I2S_RX_STEREO_0_ONLY */


    /*******************************************************************************
    * Function Name: I2S_SetPositiveClipThreshold
    ********************************************************************************
    *
    * Summary:
    *  Sets the 8-bit positive clip detection threshold for the specified channel.
    *  This API is available if the Enable rx clip detection parameter is selected
    *  in the Configure dialog.
    *
    * Parameters:
    *  channel (for Rx multi-channel only): Specifies the stereo channel number.
    *   Note The macro expects channel parameter only when more than one stereo
    *   channel is selected for the Rx direction.  
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
    #if (I2S_RX_STEREO_0_ONLY)
        #define I2S_SetPositiveClipThreshold(threshold) I2S_SET_POS_THRESHOLD(CH0, threshold)
    #else
        #define I2S_SetPositiveClipThreshold(channel, threshold) I2S_SET_POS_THRESHOLD(channel, threshold)
    #endif /* I2S_RX_STEREO_0_ONLY */

    /*******************************************************************************
    * Function Name: I2S_SetNegativeClipThreshold
    ********************************************************************************
    *
    * Summary:
    *  Sets the 8-bit negative clip detection threshold for the specified channel.
    *  This API is available if the Enable rx clip detection parameter is selected
    *  in the Configure dialog.
    *
    * Parameters:
    *  channel (for Rx multi-channel only): Specifies the stereo channel number.
    *   Note The macro expects channel parameter only when more than one stereo
    *   channel is selected for Rx direction.
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
    #if (I2S_RX_STEREO_0_ONLY)
        #define I2S_SetNegativeClipThreshold(threshold) I2S_SET_NEG_THRESHOLD(CH0, threshold)
    #else
        #define I2S_SetNegativeClipThreshold(channel, threshold) I2S_SET_NEG_THRESHOLD(channel, threshold)
    #endif /* I2S_RX_STEREO_0_ONLY */

#endif /* I2S_RX_DIRECTION_ENABLE */


#endif /* CY_I2S_I2S_H */


/* [] END OF FILE */
