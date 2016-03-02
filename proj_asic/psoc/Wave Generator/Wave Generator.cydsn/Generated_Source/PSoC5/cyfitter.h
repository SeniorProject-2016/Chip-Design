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

/* ADC_DEC */
#define ADC_DEC__COHER CYREG_DEC_COHER
#define ADC_DEC__CR CYREG_DEC_CR
#define ADC_DEC__DR1 CYREG_DEC_DR1
#define ADC_DEC__DR2 CYREG_DEC_DR2
#define ADC_DEC__DR2H CYREG_DEC_DR2H
#define ADC_DEC__GCOR CYREG_DEC_GCOR
#define ADC_DEC__GCORH CYREG_DEC_GCORH
#define ADC_DEC__GVAL CYREG_DEC_GVAL
#define ADC_DEC__OCOR CYREG_DEC_OCOR
#define ADC_DEC__OCORH CYREG_DEC_OCORH
#define ADC_DEC__OCORM CYREG_DEC_OCORM
#define ADC_DEC__OUTSAMP CYREG_DEC_OUTSAMP
#define ADC_DEC__OUTSAMPH CYREG_DEC_OUTSAMPH
#define ADC_DEC__OUTSAMPM CYREG_DEC_OUTSAMPM
#define ADC_DEC__OUTSAMPS CYREG_DEC_OUTSAMPS
#define ADC_DEC__PM_ACT_CFG CYREG_PM_ACT_CFG10
#define ADC_DEC__PM_ACT_MSK 0x01u
#define ADC_DEC__PM_STBY_CFG CYREG_PM_STBY_CFG10
#define ADC_DEC__PM_STBY_MSK 0x01u
#define ADC_DEC__SHIFT1 CYREG_DEC_SHIFT1
#define ADC_DEC__SHIFT2 CYREG_DEC_SHIFT2
#define ADC_DEC__SR CYREG_DEC_SR
#define ADC_DEC__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DEC_M1
#define ADC_DEC__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DEC_M2
#define ADC_DEC__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DEC_M3
#define ADC_DEC__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DEC_M4
#define ADC_DEC__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DEC_M5
#define ADC_DEC__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DEC_M6
#define ADC_DEC__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DEC_M7
#define ADC_DEC__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DEC_M8

/* ADC_DSM */
#define ADC_DSM__BUF0 CYREG_DSM0_BUF0
#define ADC_DSM__BUF1 CYREG_DSM0_BUF1
#define ADC_DSM__BUF2 CYREG_DSM0_BUF2
#define ADC_DSM__BUF3 CYREG_DSM0_BUF3
#define ADC_DSM__CLK CYREG_DSM0_CLK
#define ADC_DSM__CR0 CYREG_DSM0_CR0
#define ADC_DSM__CR1 CYREG_DSM0_CR1
#define ADC_DSM__CR10 CYREG_DSM0_CR10
#define ADC_DSM__CR11 CYREG_DSM0_CR11
#define ADC_DSM__CR12 CYREG_DSM0_CR12
#define ADC_DSM__CR13 CYREG_DSM0_CR13
#define ADC_DSM__CR14 CYREG_DSM0_CR14
#define ADC_DSM__CR15 CYREG_DSM0_CR15
#define ADC_DSM__CR16 CYREG_DSM0_CR16
#define ADC_DSM__CR17 CYREG_DSM0_CR17
#define ADC_DSM__CR2 CYREG_DSM0_CR2
#define ADC_DSM__CR3 CYREG_DSM0_CR3
#define ADC_DSM__CR4 CYREG_DSM0_CR4
#define ADC_DSM__CR5 CYREG_DSM0_CR5
#define ADC_DSM__CR6 CYREG_DSM0_CR6
#define ADC_DSM__CR7 CYREG_DSM0_CR7
#define ADC_DSM__CR8 CYREG_DSM0_CR8
#define ADC_DSM__CR9 CYREG_DSM0_CR9
#define ADC_DSM__DEM0 CYREG_DSM0_DEM0
#define ADC_DSM__DEM1 CYREG_DSM0_DEM1
#define ADC_DSM__MISC CYREG_DSM0_MISC
#define ADC_DSM__OUT0 CYREG_DSM0_OUT0
#define ADC_DSM__OUT1 CYREG_DSM0_OUT1
#define ADC_DSM__REF0 CYREG_DSM0_REF0
#define ADC_DSM__REF1 CYREG_DSM0_REF1
#define ADC_DSM__REF2 CYREG_DSM0_REF2
#define ADC_DSM__REF3 CYREG_DSM0_REF3
#define ADC_DSM__RSVD1 CYREG_DSM0_RSVD1
#define ADC_DSM__SW0 CYREG_DSM0_SW0
#define ADC_DSM__SW2 CYREG_DSM0_SW2
#define ADC_DSM__SW3 CYREG_DSM0_SW3
#define ADC_DSM__SW4 CYREG_DSM0_SW4
#define ADC_DSM__SW6 CYREG_DSM0_SW6
#define ADC_DSM__TR0 CYREG_NPUMP_DSM_TR0
#define ADC_DSM__TST0 CYREG_DSM0_TST0
#define ADC_DSM__TST1 CYREG_DSM0_TST1

/* ADC_Ext_CP_Clk */
#define ADC_Ext_CP_Clk__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define ADC_Ext_CP_Clk__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define ADC_Ext_CP_Clk__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define ADC_Ext_CP_Clk__CFG2_SRC_SEL_MASK 0x07u
#define ADC_Ext_CP_Clk__INDEX 0x00u
#define ADC_Ext_CP_Clk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_Ext_CP_Clk__PM_ACT_MSK 0x01u
#define ADC_Ext_CP_Clk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_Ext_CP_Clk__PM_STBY_MSK 0x01u

/* ADC_IRQ */
#define ADC_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_IRQ__INTC_MASK 0x20000000u
#define ADC_IRQ__INTC_NUMBER 29u
#define ADC_IRQ__INTC_PRIOR_NUM 7u
#define ADC_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_29
#define ADC_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ADC_theACLK */
#define ADC_theACLK__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define ADC_theACLK__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define ADC_theACLK__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define ADC_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_theACLK__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define ADC_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define ADC_theACLK__INDEX 0x00u
#define ADC_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define ADC_theACLK__PM_ACT_MSK 0x01u
#define ADC_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define ADC_theACLK__PM_STBY_MSK 0x01u

/* I2S_bI2S */
#define I2S_bI2S_BitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define I2S_bI2S_BitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB02_03_CTL
#define I2S_bI2S_BitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB02_03_CTL
#define I2S_bI2S_BitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB02_03_CTL
#define I2S_bI2S_BitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB02_03_CTL
#define I2S_bI2S_BitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB02_03_MSK
#define I2S_bI2S_BitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB02_03_MSK
#define I2S_bI2S_BitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB02_03_MSK
#define I2S_bI2S_BitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB02_03_MSK
#define I2S_bI2S_BitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define I2S_bI2S_BitCounter__CONTROL_REG CYREG_B0_UDB02_CTL
#define I2S_bI2S_BitCounter__CONTROL_ST_REG CYREG_B0_UDB02_ST_CTL
#define I2S_bI2S_BitCounter__COUNT_REG CYREG_B0_UDB02_CTL
#define I2S_bI2S_BitCounter__COUNT_ST_REG CYREG_B0_UDB02_ST_CTL
#define I2S_bI2S_BitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define I2S_bI2S_BitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define I2S_bI2S_BitCounter__PERIOD_REG CYREG_B0_UDB02_MSK
#define I2S_bI2S_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define I2S_bI2S_BitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB02_03_ST
#define I2S_bI2S_BitCounter_ST__MASK_REG CYREG_B0_UDB02_MSK
#define I2S_bI2S_BitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define I2S_bI2S_BitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define I2S_bI2S_BitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define I2S_bI2S_BitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB02_ST_CTL
#define I2S_bI2S_BitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB02_ST_CTL
#define I2S_bI2S_BitCounter_ST__STATUS_REG CYREG_B0_UDB02_ST
#define I2S_bI2S_CtlReg__0__MASK 0x01u
#define I2S_bI2S_CtlReg__0__POS 0
#define I2S_bI2S_CtlReg__1__MASK 0x02u
#define I2S_bI2S_CtlReg__1__POS 1
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
#define I2S_bI2S_CtlReg__MASK 0x07u
#define I2S_bI2S_CtlReg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB01_MSK_ACTL
#define I2S_bI2S_CtlReg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB01_MSK_ACTL
#define I2S_bI2S_CtlReg__PERIOD_REG CYREG_B0_UDB01_MSK
#define I2S_bI2S_Rx_CH_0__dpRx_u0__16BIT_A0_REG CYREG_B0_UDB05_06_A0
#define I2S_bI2S_Rx_CH_0__dpRx_u0__16BIT_A1_REG CYREG_B0_UDB05_06_A1
#define I2S_bI2S_Rx_CH_0__dpRx_u0__16BIT_D0_REG CYREG_B0_UDB05_06_D0
#define I2S_bI2S_Rx_CH_0__dpRx_u0__16BIT_D1_REG CYREG_B0_UDB05_06_D1
#define I2S_bI2S_Rx_CH_0__dpRx_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define I2S_bI2S_Rx_CH_0__dpRx_u0__16BIT_F0_REG CYREG_B0_UDB05_06_F0
#define I2S_bI2S_Rx_CH_0__dpRx_u0__16BIT_F1_REG CYREG_B0_UDB05_06_F1
#define I2S_bI2S_Rx_CH_0__dpRx_u0__A0_A1_REG CYREG_B0_UDB05_A0_A1
#define I2S_bI2S_Rx_CH_0__dpRx_u0__A0_REG CYREG_B0_UDB05_A0
#define I2S_bI2S_Rx_CH_0__dpRx_u0__A1_REG CYREG_B0_UDB05_A1
#define I2S_bI2S_Rx_CH_0__dpRx_u0__D0_D1_REG CYREG_B0_UDB05_D0_D1
#define I2S_bI2S_Rx_CH_0__dpRx_u0__D0_REG CYREG_B0_UDB05_D0
#define I2S_bI2S_Rx_CH_0__dpRx_u0__D1_REG CYREG_B0_UDB05_D1
#define I2S_bI2S_Rx_CH_0__dpRx_u0__DP_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define I2S_bI2S_Rx_CH_0__dpRx_u0__F0_F1_REG CYREG_B0_UDB05_F0_F1
#define I2S_bI2S_Rx_CH_0__dpRx_u0__F0_REG CYREG_B0_UDB05_F0
#define I2S_bI2S_Rx_CH_0__dpRx_u0__F1_REG CYREG_B0_UDB05_F1
#define I2S_bI2S_Rx_STS_0__Sts__0__MASK 0x01u
#define I2S_bI2S_Rx_STS_0__Sts__0__POS 0
#define I2S_bI2S_Rx_STS_0__Sts__1__MASK 0x02u
#define I2S_bI2S_Rx_STS_0__Sts__1__POS 1
#define I2S_bI2S_Rx_STS_0__Sts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define I2S_bI2S_Rx_STS_0__Sts__16BIT_STATUS_REG CYREG_B0_UDB05_06_ST
#define I2S_bI2S_Rx_STS_0__Sts__2__MASK 0x04u
#define I2S_bI2S_Rx_STS_0__Sts__2__POS 2
#define I2S_bI2S_Rx_STS_0__Sts__MASK 0x07u
#define I2S_bI2S_Rx_STS_0__Sts__MASK_REG CYREG_B0_UDB05_MSK
#define I2S_bI2S_Rx_STS_0__Sts__STATUS_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define I2S_bI2S_Rx_STS_0__Sts__STATUS_REG CYREG_B0_UDB05_ST
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
#define I2S_Clock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define I2S_Clock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define I2S_Clock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define I2S_Clock__CFG2_SRC_SEL_MASK 0x07u
#define I2S_Clock__INDEX 0x01u
#define I2S_Clock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define I2S_Clock__PM_ACT_MSK 0x02u
#define I2S_Clock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define I2S_Clock__PM_STBY_MSK 0x02u

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

/* SDI */
#define SDI__0__INTTYPE CYREG_PICU4_INTTYPE7
#define SDI__0__MASK 0x80u
#define SDI__0__PC CYREG_PRT4_PC7
#define SDI__0__PORT 4u
#define SDI__0__SHIFT 7
#define SDI__AG CYREG_PRT4_AG
#define SDI__AMUX CYREG_PRT4_AMUX
#define SDI__BIE CYREG_PRT4_BIE
#define SDI__BIT_MASK CYREG_PRT4_BIT_MASK
#define SDI__BYP CYREG_PRT4_BYP
#define SDI__CTL CYREG_PRT4_CTL
#define SDI__DM0 CYREG_PRT4_DM0
#define SDI__DM1 CYREG_PRT4_DM1
#define SDI__DM2 CYREG_PRT4_DM2
#define SDI__DR CYREG_PRT4_DR
#define SDI__INP_DIS CYREG_PRT4_INP_DIS
#define SDI__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define SDI__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define SDI__LCD_EN CYREG_PRT4_LCD_EN
#define SDI__MASK 0x80u
#define SDI__PORT 4u
#define SDI__PRT CYREG_PRT4_PRT
#define SDI__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define SDI__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define SDI__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define SDI__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define SDI__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define SDI__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define SDI__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define SDI__PS CYREG_PRT4_PS
#define SDI__SHIFT 7
#define SDI__SLW CYREG_PRT4_SLW

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
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B0_UDB04_05_A0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B0_UDB04_05_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B0_UDB04_05_D0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B0_UDB04_05_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB04_05_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B0_UDB04_05_F0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B0_UDB04_05_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB04_A0_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB04_A0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB04_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB04_D0_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB04_D0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB04_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB04_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB04_F0_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB04_F0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB04_F1
#define UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB03_04_A0
#define UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB03_04_A1
#define UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB03_04_D0
#define UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB03_04_D1
#define UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB03_04_ACTL
#define UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB03_04_F0
#define UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB03_04_F1
#define UART_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB03_A0_A1
#define UART_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB03_A0
#define UART_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB03_A1
#define UART_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB03_D0_D1
#define UART_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB03_D0
#define UART_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB03_D1
#define UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB03_ACTL
#define UART_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB03_F0_F1
#define UART_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB03_F0
#define UART_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB03_F1
#define UART_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_BUART_sTX_TxSts__0__POS 0
#define UART_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_BUART_sTX_TxSts__1__POS 1
#define UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB00_01_ACTL
#define UART_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B0_UDB00_01_ST
#define UART_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_BUART_sTX_TxSts__2__POS 2
#define UART_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_BUART_sTX_TxSts__3__POS 3
#define UART_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_BUART_sTX_TxSts__MASK_REG CYREG_B0_UDB00_MSK
#define UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB00_ACTL
#define UART_BUART_sTX_TxSts__STATUS_REG CYREG_B0_UDB00_ST

/* UART_IntClock */
#define UART_IntClock__CFG0 CYREG_CLKDIST_DCFG2_CFG0
#define UART_IntClock__CFG1 CYREG_CLKDIST_DCFG2_CFG1
#define UART_IntClock__CFG2 CYREG_CLKDIST_DCFG2_CFG2
#define UART_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_IntClock__INDEX 0x02u
#define UART_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_IntClock__PM_ACT_MSK 0x04u
#define UART_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_IntClock__PM_STBY_MSK 0x04u

/* RxDMA */
#define RxDMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define RxDMA__DRQ_NUMBER 0u
#define RxDMA__NUMBEROF_TDS 0u
#define RxDMA__PRIORITY 2u
#define RxDMA__TERMIN_EN 0u
#define RxDMA__TERMIN_SEL 0u
#define RxDMA__TERMOUT0_EN 0u
#define RxDMA__TERMOUT0_SEL 0u
#define RxDMA__TERMOUT1_EN 0u
#define RxDMA__TERMOUT1_SEL 0u

/* TxDMA_0 */
#define TxDMA_0__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define TxDMA_0__DRQ_NUMBER 1u
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
#define TxDMA_1__DRQ_NUMBER 2u
#define TxDMA_1__NUMBEROF_TDS 0u
#define TxDMA_1__PRIORITY 2u
#define TxDMA_1__TERMIN_EN 0u
#define TxDMA_1__TERMIN_SEL 0u
#define TxDMA_1__TERMOUT0_EN 0u
#define TxDMA_1__TERMOUT0_SEL 0u
#define TxDMA_1__TERMOUT1_EN 0u
#define TxDMA_1__TERMOUT1_SEL 0u

/* WaveDAC8_DacClk */
#define WaveDAC8_DacClk__CFG0 CYREG_CLKDIST_DCFG3_CFG0
#define WaveDAC8_DacClk__CFG1 CYREG_CLKDIST_DCFG3_CFG1
#define WaveDAC8_DacClk__CFG2 CYREG_CLKDIST_DCFG3_CFG2
#define WaveDAC8_DacClk__CFG2_SRC_SEL_MASK 0x07u
#define WaveDAC8_DacClk__INDEX 0x03u
#define WaveDAC8_DacClk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define WaveDAC8_DacClk__PM_ACT_MSK 0x08u
#define WaveDAC8_DacClk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define WaveDAC8_DacClk__PM_STBY_MSK 0x08u

/* WaveDAC8_VDAC8_viDAC8 */
#define WaveDAC8_VDAC8_viDAC8__CR0 CYREG_DAC2_CR0
#define WaveDAC8_VDAC8_viDAC8__CR1 CYREG_DAC2_CR1
#define WaveDAC8_VDAC8_viDAC8__D CYREG_DAC2_D
#define WaveDAC8_VDAC8_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define WaveDAC8_VDAC8_viDAC8__PM_ACT_MSK 0x04u
#define WaveDAC8_VDAC8_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define WaveDAC8_VDAC8_viDAC8__PM_STBY_MSK 0x04u
#define WaveDAC8_VDAC8_viDAC8__STROBE CYREG_DAC2_STROBE
#define WaveDAC8_VDAC8_viDAC8__SW0 CYREG_DAC2_SW0
#define WaveDAC8_VDAC8_viDAC8__SW2 CYREG_DAC2_SW2
#define WaveDAC8_VDAC8_viDAC8__SW3 CYREG_DAC2_SW3
#define WaveDAC8_VDAC8_viDAC8__SW4 CYREG_DAC2_SW4
#define WaveDAC8_VDAC8_viDAC8__TR CYREG_DAC2_TR
#define WaveDAC8_VDAC8_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC2_M1
#define WaveDAC8_VDAC8_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC2_M2
#define WaveDAC8_VDAC8_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC2_M3
#define WaveDAC8_VDAC8_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC2_M4
#define WaveDAC8_VDAC8_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC2_M5
#define WaveDAC8_VDAC8_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC2_M6
#define WaveDAC8_VDAC8_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC2_M7
#define WaveDAC8_VDAC8_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC2_M8
#define WaveDAC8_VDAC8_viDAC8__TST CYREG_DAC2_TST

/* WaveDAC8_Wave1_DMA */
#define WaveDAC8_Wave1_DMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define WaveDAC8_Wave1_DMA__DRQ_NUMBER 3u
#define WaveDAC8_Wave1_DMA__NUMBEROF_TDS 0u
#define WaveDAC8_Wave1_DMA__PRIORITY 2u
#define WaveDAC8_Wave1_DMA__TERMIN_EN 0u
#define WaveDAC8_Wave1_DMA__TERMIN_SEL 0u
#define WaveDAC8_Wave1_DMA__TERMOUT0_EN 0u
#define WaveDAC8_Wave1_DMA__TERMOUT0_SEL 0u
#define WaveDAC8_Wave1_DMA__TERMOUT1_EN 0u
#define WaveDAC8_Wave1_DMA__TERMOUT1_SEL 0u

/* WaveDAC8_Wave2_DMA */
#define WaveDAC8_Wave2_DMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL1
#define WaveDAC8_Wave2_DMA__DRQ_NUMBER 4u
#define WaveDAC8_Wave2_DMA__NUMBEROF_TDS 0u
#define WaveDAC8_Wave2_DMA__PRIORITY 2u
#define WaveDAC8_Wave2_DMA__TERMIN_EN 0u
#define WaveDAC8_Wave2_DMA__TERMIN_SEL 0u
#define WaveDAC8_Wave2_DMA__TERMOUT0_EN 0u
#define WaveDAC8_Wave2_DMA__TERMOUT0_SEL 0u
#define WaveDAC8_Wave2_DMA__TERMOUT1_EN 0u
#define WaveDAC8_Wave2_DMA__TERMOUT1_SEL 0u

/* Wave_Output */
#define Wave_Output__0__INTTYPE CYREG_PICU1_INTTYPE6
#define Wave_Output__0__MASK 0x40u
#define Wave_Output__0__PC CYREG_PRT1_PC6
#define Wave_Output__0__PORT 1u
#define Wave_Output__0__SHIFT 6
#define Wave_Output__AG CYREG_PRT1_AG
#define Wave_Output__AMUX CYREG_PRT1_AMUX
#define Wave_Output__BIE CYREG_PRT1_BIE
#define Wave_Output__BIT_MASK CYREG_PRT1_BIT_MASK
#define Wave_Output__BYP CYREG_PRT1_BYP
#define Wave_Output__CTL CYREG_PRT1_CTL
#define Wave_Output__DM0 CYREG_PRT1_DM0
#define Wave_Output__DM1 CYREG_PRT1_DM1
#define Wave_Output__DM2 CYREG_PRT1_DM2
#define Wave_Output__DR CYREG_PRT1_DR
#define Wave_Output__INP_DIS CYREG_PRT1_INP_DIS
#define Wave_Output__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define Wave_Output__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Wave_Output__LCD_EN CYREG_PRT1_LCD_EN
#define Wave_Output__MASK 0x40u
#define Wave_Output__PORT 1u
#define Wave_Output__PRT CYREG_PRT1_PRT
#define Wave_Output__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Wave_Output__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Wave_Output__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Wave_Output__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Wave_Output__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Wave_Output__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Wave_Output__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Wave_Output__PS CYREG_PRT1_PS
#define Wave_Output__SHIFT 6
#define Wave_Output__SLW CYREG_PRT1_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "Wave Generator"
#define CY_VERSION "PSoC Creator  3.3 CP1"
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
#define DMA_CHANNELS_USED__MASK0 0x0000001Fu
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
