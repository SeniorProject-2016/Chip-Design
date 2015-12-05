/****************************************Copyright (c)****************************************************
**                               Guangzou ZLG-MCU Development Co.,LTD.
**                                      graduate school
**                                 http://www.zlgmcu.com
**
**--------------File Info---------------------------------------------------------------------------------
** File name:			ISR.c
** Last modified Date:  2009-05-12
** Last Version:		V1.01
** Descriptions:		中断处理函数,用户根据需要在此添加中断应用程序 
**
**--------------------------------------------------------------------------------------------------------
** Created by:			Liangbaoqiong
** Created date:		2009-06-1
** Version:				V1.00
** Descriptions:		
**--------------------------------------------------------------------------------------------------------
** Modified by:			
** Modified date:		
** Version:				
** Descriptions:		
*********************************************************************************************************/
#include "main.h"

/*********************************************************************************************************
** Function name:	     SysTick_Handler
** Descriptions:	     系统定时器中断函数
** input parameters:     无
** output parameters:    无
** Returned value:       无
*********************************************************************************************************/
void SysTick_Handler(void)
{
	//FIO2PIN_bit.P2_0 = !FIO2PIN_bit.P2_0; 
    volatile INT32U Dummy = STCTRL;                                     /* 清中断标志                   */
}


/*********************************************************************************************************
* Function Name  : NMIException
* Description    : This function handles NMI exception.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void Nmi_Handler(void)
{
    while (1);
}
/*********************************************************************************************************
* Function Name  : DebugMonitor
* Description    : This function handles Debug Monitor exception.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void DebugMon_Handler(void)
{
}

/*********************************************************************************************************
* Function Name  : PendSVC
* Description    : This function handles PendSVC exception.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void PendSV_Handler(void)
{
}

/*********************************************************************************************************
* Function Name  : WWDG_IRQHandler
* Description    : This function handles WWDG interrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void WWDG_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : TIMER0_IRQHandler
* Description    : This function handles TIMER0 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void TIMER0_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : TIMER1_IRQHandler
* Description    : This function handles TIMER1 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void TIMER1_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : TIMER2_IRQHandler
* Description    : This function handles TIMER2 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void TIMER2_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : TIMER3_IRQHandler
* Description    : This function handles TIMER3 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void TIMER3_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : UART0_IRQHandler
* Description    : This function handles UART0 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void UART0_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : UART1_IRQHandler
* Description    : This function handles UART1 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void UART1_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : UART2_IRQHandler
* Description    : This function handles UART2 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void UART2_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : UART3_IRQHandler
* Description    : This function handles UART3 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void UART3_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : PWM1_IRQHandler
* Description    : This function handles PWM1 interrupt request. 
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void PWM1_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : I2C0_IRQHandler
* Description    : This function handles I2C0 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void I2C0_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : I2C1_IRQHandler
* Description    : This function handles I2C1 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void I2C1_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : I2C2_IRQHandler
* Description    : This function handles I2C2 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void I2C2_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : I2C3_IRQHandler
* Description    : This function handles I2C3 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void I2C3_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : SPI_IRQHandler
* Description    : This function handles SPI interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void SPI_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : SSP0_IRQHandler
* Description    : This function handles SSP0 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void SSP0_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : SSP1_IRQHandler
* Description    : This function handles SSP1 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void SSP1_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : PLL0_IRQHandler
* Description    : This function handles PLL0 interrupt request
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void PLL0_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : RTC_IRQHandler
* Description    : This function handles RTC global interrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void RTC_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : EXTI0_IRQHandler
* Description    : This function handles External interrupt Line 0 request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void EINT0_IRQHandler(void)
{

}

/*********************************************************************************************************
* Function Name  : EXTI1_IRQHandler
* Description    : This function handles External interrupt Line 1 request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void EINT1_IRQHandler(void)
{  

}

/*********************************************************************************************************
* Function Name  : EINT2_IRQHandler
* Description    : This function handles External interrupt Line 2 request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void EINT2_IRQHandler(void)
{
}

/*********************************************************************************************************
** Function name:	     EINT3_GPIO_Handler
** Descriptions:	      
** input parameters:     无
** output parameters:    无
** Returned value:       无
**                       Note：EINT3与GPIO共用同一个中断号
*********************************************************************************************************/
void  EINT3_GPIO_Handler(void)
{

}

/*********************************************************************************************************
* Function Name  : ADC_IRQHandler
* Description    : This function handles ADC global interrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void ADC_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : BOD_IRQHandler
* Description    : This function handles BOD interrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void BOD_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : USB_IRQHandler
* Description    : This function handles USB interrupts 
*                  requests.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void USB_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : CAN_IRQHandler
* Description    : This function handles CANinterrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void CAN_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : GPDMA_IRQHandler
* Description    : This function handles DMA interrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void GPDMA_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : I2S_IRQHandler
* Description    : This function handles I2S interrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void I2S_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : Ethernet_IRQHandler
* Description    : This function handles Ethernet interrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void Ethernet_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : RIT_IRQHandler
* Description    : This function handles RIT interrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void RIT_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : MC_IRQHandler
* Description    : This function handles MC interrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void MC_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : QE_IRQHandler
* Description    : This function handles QE interrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void QE_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : PLL1_IRQHandler
* Description    : This function handles PLL1 interrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void PLL1_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : USBAct_IRQHandler
* Description    : This function handles USBAct interrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void USBAct_IRQHandler(void)
{
}

/*********************************************************************************************************
* Function Name  : CANAct_IRQHandler
* Description    : This function handles CANAct interrupt request.
* Input          : None
* Output         : None
* Return         : None
*********************************************************************************************************/
void CANAct_IRQHandler(void)
{
}

/*********************************************************************************************************
**                                      End Of File
*********************************************************************************************************/
