#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* TX */
#define TX__0__INTTYPE CYREG_PICU5_INTTYPE0
#define TX__0__MASK 0x01u
#define TX__0__PC CYREG_PRT5_PC0
#define TX__0__PORT 5u
#define TX__0__SHIFT 0
#define TX__AG CYREG_PRT5_AG
#define TX__AMUX CYREG_PRT5_AMUX
#define TX__BIE CYREG_PRT5_BIE
#define TX__BIT_MASK CYREG_PRT5_BIT_MASK
#define TX__BYP CYREG_PRT5_BYP
#define TX__CTL CYREG_PRT5_CTL
#define TX__DM0 CYREG_PRT5_DM0
#define TX__DM1 CYREG_PRT5_DM1
#define TX__DM2 CYREG_PRT5_DM2
#define TX__DR CYREG_PRT5_DR
#define TX__INP_DIS CYREG_PRT5_INP_DIS
#define TX__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU5_BASE
#define TX__LCD_COM_SEG CYREG_PRT5_LCD_COM_SEG
#define TX__LCD_EN CYREG_PRT5_LCD_EN
#define TX__MASK 0x01u
#define TX__PORT 5u
#define TX__PRT CYREG_PRT5_PRT
#define TX__PRTDSI__CAPS_SEL CYREG_PRT5_CAPS_SEL
#define TX__PRTDSI__DBL_SYNC_IN CYREG_PRT5_DBL_SYNC_IN
#define TX__PRTDSI__OE_SEL0 CYREG_PRT5_OE_SEL0
#define TX__PRTDSI__OE_SEL1 CYREG_PRT5_OE_SEL1
#define TX__PRTDSI__OUT_SEL0 CYREG_PRT5_OUT_SEL0
#define TX__PRTDSI__OUT_SEL1 CYREG_PRT5_OUT_SEL1
#define TX__PRTDSI__SYNC_OUT CYREG_PRT5_SYNC_OUT
#define TX__PS CYREG_PRT5_PS
#define TX__SHIFT 0
#define TX__SLW CYREG_PRT5_SLW

/* WS */
#define WS__0__INTTYPE CYREG_PICU4_INTTYPE2
#define WS__0__MASK 0x04u
#define WS__0__PC CYREG_PRT4_PC2
#define WS__0__PORT 4u
#define WS__0__SHIFT 2
#define WS__AG CYREG_PRT4_AG
#define WS__AMUX CYREG_PRT4_AMUX
#define WS__BIE CYREG_PRT4_BIE
#define WS__BIT_MASK CYREG_PRT4_BIT_MASK
#define WS__BYP CYREG_PRT4_BYP
#define WS__CTL CYREG_PRT4_CTL
#define WS__DM0 CYREG_PRT4_DM0
#define WS__DM1 CYREG_PRT4_DM1
#define WS__DM2 CYREG_PRT4_DM2
#define WS__DR CYREG_PRT4_DR
#define WS__INP_DIS CYREG_PRT4_INP_DIS
#define WS__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define WS__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define WS__LCD_EN CYREG_PRT4_LCD_EN
#define WS__MASK 0x04u
#define WS__PORT 4u
#define WS__PRT CYREG_PRT4_PRT
#define WS__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define WS__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define WS__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define WS__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define WS__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define WS__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define WS__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define WS__PS CYREG_PRT4_PS
#define WS__SHIFT 2
#define WS__SLW CYREG_PRT4_SLW

/* WS_1 */
#define WS_1__0__INTTYPE CYREG_PICU4_INTTYPE4
#define WS_1__0__MASK 0x10u
#define WS_1__0__PC CYREG_PRT4_PC4
#define WS_1__0__PORT 4u
#define WS_1__0__SHIFT 4
#define WS_1__AG CYREG_PRT4_AG
#define WS_1__AMUX CYREG_PRT4_AMUX
#define WS_1__BIE CYREG_PRT4_BIE
#define WS_1__BIT_MASK CYREG_PRT4_BIT_MASK
#define WS_1__BYP CYREG_PRT4_BYP
#define WS_1__CTL CYREG_PRT4_CTL
#define WS_1__DM0 CYREG_PRT4_DM0
#define WS_1__DM1 CYREG_PRT4_DM1
#define WS_1__DM2 CYREG_PRT4_DM2
#define WS_1__DR CYREG_PRT4_DR
#define WS_1__INP_DIS CYREG_PRT4_INP_DIS
#define WS_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define WS_1__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define WS_1__LCD_EN CYREG_PRT4_LCD_EN
#define WS_1__MASK 0x10u
#define WS_1__PORT 4u
#define WS_1__PRT CYREG_PRT4_PRT
#define WS_1__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define WS_1__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define WS_1__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define WS_1__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define WS_1__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define WS_1__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define WS_1__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define WS_1__PS CYREG_PRT4_PS
#define WS_1__SHIFT 4
#define WS_1__SLW CYREG_PRT4_SLW

/* I2S_1_bI2S */
#define I2S_1_bI2S_BitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB03_04_ACTL
#define I2S_1_bI2S_BitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB03_04_CTL
#define I2S_1_bI2S_BitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB03_04_CTL
#define I2S_1_bI2S_BitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB03_04_CTL
#define I2S_1_bI2S_BitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB03_04_CTL
#define I2S_1_bI2S_BitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB03_04_MSK
#define I2S_1_bI2S_BitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB03_04_MSK
#define I2S_1_bI2S_BitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB03_04_MSK
#define I2S_1_bI2S_BitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB03_04_MSK
#define I2S_1_bI2S_BitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB03_ACTL
#define I2S_1_bI2S_BitCounter__CONTROL_REG CYREG_B0_UDB03_CTL
#define I2S_1_bI2S_BitCounter__CONTROL_ST_REG CYREG_B0_UDB03_ST_CTL
#define I2S_1_bI2S_BitCounter__COUNT_REG CYREG_B0_UDB03_CTL
#define I2S_1_bI2S_BitCounter__COUNT_ST_REG CYREG_B0_UDB03_ST_CTL
#define I2S_1_bI2S_BitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB03_MSK_ACTL
#define I2S_1_bI2S_BitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB03_MSK_ACTL
#define I2S_1_bI2S_BitCounter__PERIOD_REG CYREG_B0_UDB03_MSK
#define I2S_1_bI2S_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB03_04_ACTL
#define I2S_1_bI2S_BitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB03_04_ST
#define I2S_1_bI2S_BitCounter_ST__MASK_REG CYREG_B0_UDB03_MSK
#define I2S_1_bI2S_BitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB03_MSK_ACTL
#define I2S_1_bI2S_BitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB03_MSK_ACTL
#define I2S_1_bI2S_BitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB03_ACTL
#define I2S_1_bI2S_BitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB03_ST_CTL
#define I2S_1_bI2S_BitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB03_ST_CTL
#define I2S_1_bI2S_BitCounter_ST__STATUS_REG CYREG_B0_UDB03_ST
#define I2S_1_bI2S_CtlReg__1__MASK 0x02u
#define I2S_1_bI2S_CtlReg__1__POS 1
#define I2S_1_bI2S_CtlReg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB04_05_ACTL
#define I2S_1_bI2S_CtlReg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB04_05_CTL
#define I2S_1_bI2S_CtlReg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB04_05_CTL
#define I2S_1_bI2S_CtlReg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB04_05_CTL
#define I2S_1_bI2S_CtlReg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB04_05_CTL
#define I2S_1_bI2S_CtlReg__16BIT_MASK_MASK_REG CYREG_B0_UDB04_05_MSK
#define I2S_1_bI2S_CtlReg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB04_05_MSK
#define I2S_1_bI2S_CtlReg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB04_05_MSK
#define I2S_1_bI2S_CtlReg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB04_05_MSK
#define I2S_1_bI2S_CtlReg__2__MASK 0x04u
#define I2S_1_bI2S_CtlReg__2__POS 2
#define I2S_1_bI2S_CtlReg__CONTROL_AUX_CTL_REG CYREG_B0_UDB04_ACTL
#define I2S_1_bI2S_CtlReg__CONTROL_REG CYREG_B0_UDB04_CTL
#define I2S_1_bI2S_CtlReg__CONTROL_ST_REG CYREG_B0_UDB04_ST_CTL
#define I2S_1_bI2S_CtlReg__COUNT_REG CYREG_B0_UDB04_CTL
#define I2S_1_bI2S_CtlReg__COUNT_ST_REG CYREG_B0_UDB04_ST_CTL
#define I2S_1_bI2S_CtlReg__MASK 0x06u
#define I2S_1_bI2S_CtlReg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB04_MSK_ACTL
#define I2S_1_bI2S_CtlReg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB04_MSK_ACTL
#define I2S_1_bI2S_CtlReg__PERIOD_REG CYREG_B0_UDB04_MSK
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_A0_REG CYREG_B0_UDB03_04_A0
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_A1_REG CYREG_B0_UDB03_04_A1
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_D0_REG CYREG_B0_UDB03_04_D0
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_D1_REG CYREG_B0_UDB03_04_D1
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB03_04_ACTL
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_F0_REG CYREG_B0_UDB03_04_F0
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_F1_REG CYREG_B0_UDB03_04_F1
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__A0_A1_REG CYREG_B0_UDB03_A0_A1
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__A0_REG CYREG_B0_UDB03_A0
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__A1_REG CYREG_B0_UDB03_A1
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__D0_D1_REG CYREG_B0_UDB03_D0_D1
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__D0_REG CYREG_B0_UDB03_D0
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__D1_REG CYREG_B0_UDB03_D1
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__DP_AUX_CTL_REG CYREG_B0_UDB03_ACTL
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__F0_F1_REG CYREG_B0_UDB03_F0_F1
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__F0_REG CYREG_B0_UDB03_F0
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__F1_REG CYREG_B0_UDB03_F1
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB03_MSK_ACTL
#define I2S_1_bI2S_Rx_CH_0__dpRx_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB03_MSK_ACTL
#define I2S_1_bI2S_Rx_STS_0__Sts__0__MASK 0x01u
#define I2S_1_bI2S_Rx_STS_0__Sts__0__POS 0
#define I2S_1_bI2S_Rx_STS_0__Sts__1__MASK 0x02u
#define I2S_1_bI2S_Rx_STS_0__Sts__1__POS 1
#define I2S_1_bI2S_Rx_STS_0__Sts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define I2S_1_bI2S_Rx_STS_0__Sts__16BIT_STATUS_REG CYREG_B0_UDB02_03_ST
#define I2S_1_bI2S_Rx_STS_0__Sts__2__MASK 0x04u
#define I2S_1_bI2S_Rx_STS_0__Sts__2__POS 2
#define I2S_1_bI2S_Rx_STS_0__Sts__MASK 0x07u
#define I2S_1_bI2S_Rx_STS_0__Sts__MASK_REG CYREG_B0_UDB02_MSK
#define I2S_1_bI2S_Rx_STS_0__Sts__STATUS_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define I2S_1_bI2S_Rx_STS_0__Sts__STATUS_REG CYREG_B0_UDB02_ST

/* I2S_bI2S */
#define I2S_bI2S_BitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB00_01_ACTL
#define I2S_bI2S_BitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB00_01_CTL
#define I2S_bI2S_BitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB00_01_CTL
#define I2S_bI2S_BitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB00_01_CTL
#define I2S_bI2S_BitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB00_01_CTL
#define I2S_bI2S_BitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB00_01_MSK
#define I2S_bI2S_BitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB00_01_MSK
#define I2S_bI2S_BitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB00_01_MSK
#define I2S_bI2S_BitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB00_01_MSK
#define I2S_bI2S_BitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB00_ACTL
#define I2S_bI2S_BitCounter__CONTROL_REG CYREG_B0_UDB00_CTL
#define I2S_bI2S_BitCounter__CONTROL_ST_REG CYREG_B0_UDB00_ST_CTL
#define I2S_bI2S_BitCounter__COUNT_REG CYREG_B0_UDB00_CTL
#define I2S_bI2S_BitCounter__COUNT_ST_REG CYREG_B0_UDB00_ST_CTL
#define I2S_bI2S_BitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB00_MSK_ACTL
#define I2S_bI2S_BitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB00_MSK_ACTL
#define I2S_bI2S_BitCounter__PERIOD_REG CYREG_B0_UDB00_MSK
#define I2S_bI2S_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB00_01_ACTL
#define I2S_bI2S_BitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB00_01_ST
#define I2S_bI2S_BitCounter_ST__MASK_REG CYREG_B0_UDB00_MSK
#define I2S_bI2S_BitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB00_MSK_ACTL
#define I2S_bI2S_BitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB00_MSK_ACTL
#define I2S_bI2S_BitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB00_ACTL
#define I2S_bI2S_BitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB00_ST_CTL
#define I2S_bI2S_BitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB00_ST_CTL
#define I2S_bI2S_BitCounter_ST__STATUS_REG CYREG_B0_UDB00_ST
#define I2S_bI2S_CtlReg__0__MASK 0x01u
#define I2S_bI2S_CtlReg__0__POS 0
#define I2S_bI2S_CtlReg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB01_02_ACTL
#define I2S_bI2S_CtlReg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB01_02_CTL
#define I2S_bI2S_CtlReg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB01_02_CTL
#define I2S_bI2S_CtlReg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB01_02_CTL
#define I2S_bI2S_CtlReg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB01_02_CTL
#define I2S_bI2S_CtlReg__16BIT_MASK_MASK_REG CYREG_B0_UDB01_02_MSK
#define I2S_bI2S_CtlReg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB01_02_MSK
#define I2S_bI2S_CtlReg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB01_02_MSK
#define I2S_bI2S_CtlReg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB01_02_MSK
#define I2S_bI2S_CtlReg__2__MASK 0x04u
#define I2S_bI2S_CtlReg__2__POS 2
#define I2S_bI2S_CtlReg__CONTROL_AUX_CTL_REG CYREG_B0_UDB01_ACTL
#define I2S_bI2S_CtlReg__CONTROL_REG CYREG_B0_UDB01_CTL
#define I2S_bI2S_CtlReg__CONTROL_ST_REG CYREG_B0_UDB01_ST_CTL
#define I2S_bI2S_CtlReg__COUNT_REG CYREG_B0_UDB01_CTL
#define I2S_bI2S_CtlReg__COUNT_ST_REG CYREG_B0_UDB01_ST_CTL
#define I2S_bI2S_CtlReg__MASK 0x05u
#define I2S_bI2S_CtlReg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB01_MSK_ACTL
#define I2S_bI2S_CtlReg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB01_MSK_ACTL
#define I2S_bI2S_CtlReg__PERIOD_REG CYREG_B0_UDB01_MSK
#define I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_A0_REG CYREG_B0_UDB01_02_A0
#define I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_A1_REG CYREG_B0_UDB01_02_A1
#define I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_D0_REG CYREG_B0_UDB01_02_D0
#define I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_D1_REG CYREG_B0_UDB01_02_D1
#define I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB01_02_ACTL
#define I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_F0_REG CYREG_B0_UDB01_02_F0
#define I2S_bI2S_Tx_CH_0__dpTx_u0__16BIT_F1_REG CYREG_B0_UDB01_02_F1
#define I2S_bI2S_Tx_CH_0__dpTx_u0__A0_A1_REG CYREG_B0_UDB01_A0_A1
#define I2S_bI2S_Tx_CH_0__dpTx_u0__A0_REG CYREG_B0_UDB01_A0
#define I2S_bI2S_Tx_CH_0__dpTx_u0__A1_REG CYREG_B0_UDB01_A1
#define I2S_bI2S_Tx_CH_0__dpTx_u0__D0_D1_REG CYREG_B0_UDB01_D0_D1
#define I2S_bI2S_Tx_CH_0__dpTx_u0__D0_REG CYREG_B0_UDB01_D0
#define I2S_bI2S_Tx_CH_0__dpTx_u0__D1_REG CYREG_B0_UDB01_D1
#define I2S_bI2S_Tx_CH_0__dpTx_u0__DP_AUX_CTL_REG CYREG_B0_UDB01_ACTL
#define I2S_bI2S_Tx_CH_0__dpTx_u0__F0_F1_REG CYREG_B0_UDB01_F0_F1
#define I2S_bI2S_Tx_CH_0__dpTx_u0__F0_REG CYREG_B0_UDB01_F0
#define I2S_bI2S_Tx_CH_0__dpTx_u0__F1_REG CYREG_B0_UDB01_F1
#define I2S_bI2S_Tx_CH_0__dpTx_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB01_MSK_ACTL
#define I2S_bI2S_Tx_CH_0__dpTx_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB01_MSK_ACTL
#define I2S_bI2S_Tx_STS_0__Sts__0__MASK 0x01u
#define I2S_bI2S_Tx_STS_0__Sts__0__POS 0
#define I2S_bI2S_Tx_STS_0__Sts__1__MASK 0x02u
#define I2S_bI2S_Tx_STS_0__Sts__1__POS 1
#define I2S_bI2S_Tx_STS_0__Sts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB01_02_ACTL
#define I2S_bI2S_Tx_STS_0__Sts__16BIT_STATUS_REG CYREG_B0_UDB01_02_ST
#define I2S_bI2S_Tx_STS_0__Sts__2__MASK 0x04u
#define I2S_bI2S_Tx_STS_0__Sts__2__POS 2
#define I2S_bI2S_Tx_STS_0__Sts__MASK 0x07u
#define I2S_bI2S_Tx_STS_0__Sts__MASK_REG CYREG_B0_UDB01_MSK
#define I2S_bI2S_Tx_STS_0__Sts__MASK_ST_AUX_CTL_REG CYREG_B0_UDB01_MSK_ACTL
#define I2S_bI2S_Tx_STS_0__Sts__PER_ST_AUX_CTL_REG CYREG_B0_UDB01_MSK_ACTL
#define I2S_bI2S_Tx_STS_0__Sts__STATUS_AUX_CTL_REG CYREG_B0_UDB01_ACTL
#define I2S_bI2S_Tx_STS_0__Sts__STATUS_CNT_REG CYREG_B0_UDB01_ST_CTL
#define I2S_bI2S_Tx_STS_0__Sts__STATUS_CONTROL_REG CYREG_B0_UDB01_ST_CTL
#define I2S_bI2S_Tx_STS_0__Sts__STATUS_REG CYREG_B0_UDB01_ST

/* I2S_Clock */
#define I2S_Clock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define I2S_Clock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define I2S_Clock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define I2S_Clock__CFG2_SRC_SEL_MASK 0x07u
#define I2S_Clock__INDEX 0x00u
#define I2S_Clock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define I2S_Clock__PM_ACT_MSK 0x01u
#define I2S_Clock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define I2S_Clock__PM_STBY_MSK 0x01u

/* LCD_LCDPort */
#define LCD_LCDPort__0__INTTYPE CYREG_PICU2_INTTYPE0
#define LCD_LCDPort__0__MASK 0x01u
#define LCD_LCDPort__0__PC CYREG_PRT2_PC0
#define LCD_LCDPort__0__PORT 2u
#define LCD_LCDPort__0__SHIFT 0
#define LCD_LCDPort__1__INTTYPE CYREG_PICU2_INTTYPE1
#define LCD_LCDPort__1__MASK 0x02u
#define LCD_LCDPort__1__PC CYREG_PRT2_PC1
#define LCD_LCDPort__1__PORT 2u
#define LCD_LCDPort__1__SHIFT 1
#define LCD_LCDPort__2__INTTYPE CYREG_PICU2_INTTYPE2
#define LCD_LCDPort__2__MASK 0x04u
#define LCD_LCDPort__2__PC CYREG_PRT2_PC2
#define LCD_LCDPort__2__PORT 2u
#define LCD_LCDPort__2__SHIFT 2
#define LCD_LCDPort__3__INTTYPE CYREG_PICU2_INTTYPE3
#define LCD_LCDPort__3__MASK 0x08u
#define LCD_LCDPort__3__PC CYREG_PRT2_PC3
#define LCD_LCDPort__3__PORT 2u
#define LCD_LCDPort__3__SHIFT 3
#define LCD_LCDPort__4__INTTYPE CYREG_PICU2_INTTYPE4
#define LCD_LCDPort__4__MASK 0x10u
#define LCD_LCDPort__4__PC CYREG_PRT2_PC4
#define LCD_LCDPort__4__PORT 2u
#define LCD_LCDPort__4__SHIFT 4
#define LCD_LCDPort__5__INTTYPE CYREG_PICU2_INTTYPE5
#define LCD_LCDPort__5__MASK 0x20u
#define LCD_LCDPort__5__PC CYREG_PRT2_PC5
#define LCD_LCDPort__5__PORT 2u
#define LCD_LCDPort__5__SHIFT 5
#define LCD_LCDPort__6__INTTYPE CYREG_PICU2_INTTYPE6
#define LCD_LCDPort__6__MASK 0x40u
#define LCD_LCDPort__6__PC CYREG_PRT2_PC6
#define LCD_LCDPort__6__PORT 2u
#define LCD_LCDPort__6__SHIFT 6
#define LCD_LCDPort__AG CYREG_PRT2_AG
#define LCD_LCDPort__AMUX CYREG_PRT2_AMUX
#define LCD_LCDPort__BIE CYREG_PRT2_BIE
#define LCD_LCDPort__BIT_MASK CYREG_PRT2_BIT_MASK
#define LCD_LCDPort__BYP CYREG_PRT2_BYP
#define LCD_LCDPort__CTL CYREG_PRT2_CTL
#define LCD_LCDPort__DM0 CYREG_PRT2_DM0
#define LCD_LCDPort__DM1 CYREG_PRT2_DM1
#define LCD_LCDPort__DM2 CYREG_PRT2_DM2
#define LCD_LCDPort__DR CYREG_PRT2_DR
#define LCD_LCDPort__INP_DIS CYREG_PRT2_INP_DIS
#define LCD_LCDPort__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define LCD_LCDPort__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LCD_LCDPort__LCD_EN CYREG_PRT2_LCD_EN
#define LCD_LCDPort__MASK 0x7Fu
#define LCD_LCDPort__PORT 2u
#define LCD_LCDPort__PRT CYREG_PRT2_PRT
#define LCD_LCDPort__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LCD_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LCD_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LCD_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LCD_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LCD_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LCD_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LCD_LCDPort__PS CYREG_PRT2_PS
#define LCD_LCDPort__SHIFT 0
#define LCD_LCDPort__SLW CYREG_PRT2_SLW

/* SCK */
#define SCK__0__INTTYPE CYREG_PICU4_INTTYPE0
#define SCK__0__MASK 0x01u
#define SCK__0__PC CYREG_PRT4_PC0
#define SCK__0__PORT 4u
#define SCK__0__SHIFT 0
#define SCK__AG CYREG_PRT4_AG
#define SCK__AMUX CYREG_PRT4_AMUX
#define SCK__BIE CYREG_PRT4_BIE
#define SCK__BIT_MASK CYREG_PRT4_BIT_MASK
#define SCK__BYP CYREG_PRT4_BYP
#define SCK__CTL CYREG_PRT4_CTL
#define SCK__DM0 CYREG_PRT4_DM0
#define SCK__DM1 CYREG_PRT4_DM1
#define SCK__DM2 CYREG_PRT4_DM2
#define SCK__DR CYREG_PRT4_DR
#define SCK__INP_DIS CYREG_PRT4_INP_DIS
#define SCK__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define SCK__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define SCK__LCD_EN CYREG_PRT4_LCD_EN
#define SCK__MASK 0x01u
#define SCK__PORT 4u
#define SCK__PRT CYREG_PRT4_PRT
#define SCK__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define SCK__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define SCK__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define SCK__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define SCK__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define SCK__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define SCK__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define SCK__PS CYREG_PRT4_PS
#define SCK__SHIFT 0
#define SCK__SLW CYREG_PRT4_SLW

/* SCK_1 */
#define SCK_1__0__INTTYPE CYREG_PICU4_INTTYPE3
#define SCK_1__0__MASK 0x08u
#define SCK_1__0__PC CYREG_PRT4_PC3
#define SCK_1__0__PORT 4u
#define SCK_1__0__SHIFT 3
#define SCK_1__AG CYREG_PRT4_AG
#define SCK_1__AMUX CYREG_PRT4_AMUX
#define SCK_1__BIE CYREG_PRT4_BIE
#define SCK_1__BIT_MASK CYREG_PRT4_BIT_MASK
#define SCK_1__BYP CYREG_PRT4_BYP
#define SCK_1__CTL CYREG_PRT4_CTL
#define SCK_1__DM0 CYREG_PRT4_DM0
#define SCK_1__DM1 CYREG_PRT4_DM1
#define SCK_1__DM2 CYREG_PRT4_DM2
#define SCK_1__DR CYREG_PRT4_DR
#define SCK_1__INP_DIS CYREG_PRT4_INP_DIS
#define SCK_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define SCK_1__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define SCK_1__LCD_EN CYREG_PRT4_LCD_EN
#define SCK_1__MASK 0x08u
#define SCK_1__PORT 4u
#define SCK_1__PRT CYREG_PRT4_PRT
#define SCK_1__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define SCK_1__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define SCK_1__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define SCK_1__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define SCK_1__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define SCK_1__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define SCK_1__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define SCK_1__PS CYREG_PRT4_PS
#define SCK_1__SHIFT 3
#define SCK_1__SLW CYREG_PRT4_SLW

/* SDO */
#define SDO__0__INTTYPE CYREG_PICU4_INTTYPE1
#define SDO__0__MASK 0x02u
#define SDO__0__PC CYREG_PRT4_PC1
#define SDO__0__PORT 4u
#define SDO__0__SHIFT 1
#define SDO__AG CYREG_PRT4_AG
#define SDO__AMUX CYREG_PRT4_AMUX
#define SDO__BIE CYREG_PRT4_BIE
#define SDO__BIT_MASK CYREG_PRT4_BIT_MASK
#define SDO__BYP CYREG_PRT4_BYP
#define SDO__CTL CYREG_PRT4_CTL
#define SDO__DM0 CYREG_PRT4_DM0
#define SDO__DM1 CYREG_PRT4_DM1
#define SDO__DM2 CYREG_PRT4_DM2
#define SDO__DR CYREG_PRT4_DR
#define SDO__INP_DIS CYREG_PRT4_INP_DIS
#define SDO__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define SDO__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define SDO__LCD_EN CYREG_PRT4_LCD_EN
#define SDO__MASK 0x02u
#define SDO__PORT 4u
#define SDO__PRT CYREG_PRT4_PRT
#define SDO__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define SDO__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define SDO__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define SDO__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define SDO__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define SDO__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define SDO__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define SDO__PS CYREG_PRT4_PS
#define SDO__SHIFT 1
#define SDO__SLW CYREG_PRT4_SLW

/* UART_BUART */
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B0_UDB05_06_A0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B0_UDB05_06_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B0_UDB05_06_D0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B0_UDB05_06_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B0_UDB05_06_F0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B0_UDB05_06_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB05_A0_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB05_A0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB05_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB05_D0_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB05_D0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB05_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB05_F0_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB05_F0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB05_F1
#define UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB04_05_A0
#define UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB04_05_A1
#define UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB04_05_D0
#define UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB04_05_D1
#define UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB04_05_ACTL
#define UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB04_05_F0
#define UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB04_05_F1
#define UART_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB04_A0_A1
#define UART_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB04_A0
#define UART_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB04_A1
#define UART_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB04_D0_D1
#define UART_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB04_D0
#define UART_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB04_D1
#define UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB04_ACTL
#define UART_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB04_F0_F1
#define UART_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB04_F0
#define UART_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB04_F1
#define UART_BUART_sTX_TxShifter_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB04_MSK_ACTL
#define UART_BUART_sTX_TxShifter_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB04_MSK_ACTL
#define UART_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_BUART_sTX_TxSts__0__POS 0
#define UART_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_BUART_sTX_TxSts__1__POS 1
#define UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define UART_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B0_UDB05_06_ST
#define UART_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_BUART_sTX_TxSts__2__POS 2
#define UART_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_BUART_sTX_TxSts__3__POS 3
#define UART_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_BUART_sTX_TxSts__MASK_REG CYREG_B0_UDB05_MSK
#define UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define UART_BUART_sTX_TxSts__STATUS_REG CYREG_B0_UDB05_ST

/* UART_IntClock */
#define UART_IntClock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define UART_IntClock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define UART_IntClock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define UART_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_IntClock__INDEX 0x01u
#define UART_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_IntClock__PM_ACT_MSK 0x02u
#define UART_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_IntClock__PM_STBY_MSK 0x02u

/* Pin_1 */
#define Pin_1__0__INTTYPE CYREG_PICU1_INTTYPE6
#define Pin_1__0__MASK 0x40u
#define Pin_1__0__PC CYREG_PRT1_PC6
#define Pin_1__0__PORT 1u
#define Pin_1__0__SHIFT 6
#define Pin_1__AG CYREG_PRT1_AG
#define Pin_1__AMUX CYREG_PRT1_AMUX
#define Pin_1__BIE CYREG_PRT1_BIE
#define Pin_1__BIT_MASK CYREG_PRT1_BIT_MASK
#define Pin_1__BYP CYREG_PRT1_BYP
#define Pin_1__CTL CYREG_PRT1_CTL
#define Pin_1__DM0 CYREG_PRT1_DM0
#define Pin_1__DM1 CYREG_PRT1_DM1
#define Pin_1__DM2 CYREG_PRT1_DM2
#define Pin_1__DR CYREG_PRT1_DR
#define Pin_1__INP_DIS CYREG_PRT1_INP_DIS
#define Pin_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define Pin_1__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Pin_1__LCD_EN CYREG_PRT1_LCD_EN
#define Pin_1__MASK 0x40u
#define Pin_1__PORT 1u
#define Pin_1__PRT CYREG_PRT1_PRT
#define Pin_1__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Pin_1__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Pin_1__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Pin_1__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Pin_1__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Pin_1__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Pin_1__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Pin_1__PS CYREG_PRT1_PS
#define Pin_1__SHIFT 6
#define Pin_1__SLW CYREG_PRT1_SLW

/* SDI_1 */
#define SDI_1__0__INTTYPE CYREG_PICU4_INTTYPE5
#define SDI_1__0__MASK 0x20u
#define SDI_1__0__PC CYREG_PRT4_PC5
#define SDI_1__0__PORT 4u
#define SDI_1__0__SHIFT 5
#define SDI_1__AG CYREG_PRT4_AG
#define SDI_1__AMUX CYREG_PRT4_AMUX
#define SDI_1__BIE CYREG_PRT4_BIE
#define SDI_1__BIT_MASK CYREG_PRT4_BIT_MASK
#define SDI_1__BYP CYREG_PRT4_BYP
#define SDI_1__CTL CYREG_PRT4_CTL
#define SDI_1__DM0 CYREG_PRT4_DM0
#define SDI_1__DM1 CYREG_PRT4_DM1
#define SDI_1__DM2 CYREG_PRT4_DM2
#define SDI_1__DR CYREG_PRT4_DR
#define SDI_1__INP_DIS CYREG_PRT4_INP_DIS
#define SDI_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define SDI_1__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define SDI_1__LCD_EN CYREG_PRT4_LCD_EN
#define SDI_1__MASK 0x20u
#define SDI_1__PORT 4u
#define SDI_1__PRT CYREG_PRT4_PRT
#define SDI_1__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define SDI_1__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define SDI_1__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define SDI_1__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define SDI_1__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define SDI_1__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define SDI_1__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define SDI_1__PS CYREG_PRT4_PS
#define SDI_1__SHIFT 5
#define SDI_1__SLW CYREG_PRT4_SLW

/* isr_1 */
#define isr_1__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr_1__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr_1__INTC_MASK 0x01u
#define isr_1__INTC_NUMBER 0u
#define isr_1__INTC_PRIOR_NUM 7u
#define isr_1__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define isr_1__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr_1__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* TxDMA_0 */
#define TxDMA_0__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define TxDMA_0__DRQ_NUMBER 0u
#define TxDMA_0__NUMBEROF_TDS 0u
#define TxDMA_0__PRIORITY 2u
#define TxDMA_0__TERMIN_EN 0u
#define TxDMA_0__TERMIN_SEL 0u
#define TxDMA_0__TERMOUT0_EN 0u
#define TxDMA_0__TERMOUT0_SEL 0u
#define TxDMA_0__TERMOUT1_EN 0u
#define TxDMA_0__TERMOUT1_SEL 0u

/* TxDMA_1 */
#define TxDMA_1__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define TxDMA_1__DRQ_NUMBER 1u
#define TxDMA_1__NUMBEROF_TDS 0u
#define TxDMA_1__PRIORITY 2u
#define TxDMA_1__TERMIN_EN 0u
#define TxDMA_1__TERMIN_SEL 0u
#define TxDMA_1__TERMOUT0_EN 0u
#define TxDMA_1__TERMOUT0_SEL 0u
#define TxDMA_1__TERMOUT1_EN 0u
#define TxDMA_1__TERMOUT1_SEL 0u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "Wave Generator"
#define CY_VERSION "PSoC Creator  3.3 CP2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 18u
#define CYDEV_CHIP_DIE_PSOC4A 10u
#define CYDEV_CHIP_DIE_PSOC5LP 17u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 10u
#define CYDEV_CHIP_MEMBER_4C 15u
#define CYDEV_CHIP_MEMBER_4D 6u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 11u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 9u
#define CYDEV_CHIP_MEMBER_4I 14u
#define CYDEV_CHIP_MEMBER_4J 7u
#define CYDEV_CHIP_MEMBER_4K 8u
#define CYDEV_CHIP_MEMBER_4L 13u
#define CYDEV_CHIP_MEMBER_4M 12u
#define CYDEV_CHIP_MEMBER_4N 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 17u
#define CYDEV_CHIP_MEMBER_5B 16u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x1000
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x4000
#define CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP 
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000003u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
