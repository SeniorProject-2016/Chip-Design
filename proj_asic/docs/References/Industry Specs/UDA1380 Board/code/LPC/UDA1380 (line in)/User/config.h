/****************************************Copyright (c)****************************************************
**                               Guangzou ZLG-MCU Development Co.,LTD.
**                                      graduate school
**                                 http://www.zlgmcu.com
**
**--------------File Info---------------------------------------------------------------------------------
** File Name:           config.h
** Last modified Date:  2009-05-15
** Last Version:        V1.01
** Descriptions:        User Configurable File
**
**--------------------------------------------------------------------------------------------------------
** Created By:          LinEnqiang
** Created date:        2009-06-12
** Version:             V1.00
** Descriptions:        First version
**
**--------------------------------------------------------------------------------------------------------
** Modified by:        
** Modified date:       
** Version:             
** Descriptions:       
**
*********************************************************************************************************/
#ifndef __CONFIG_H 
#define __CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif
  
#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef TRUE
#define TRUE  1
#endif                                                                  /*  TRUE                        */

#ifndef FALSE
#define FALSE 0
#endif                                                                  /*  FALSE                       */

typedef unsigned char  uint8;                                           /*  无符号8位整型变量           */
typedef signed   char  int8;                                            /*  有符号8位整型变量           */
typedef unsigned short uint16;                                          /*  无符号16位整型变量          */
typedef signed   short int16;                                           /*  有符号16位整型变量          */
typedef unsigned int   uint32;                                          /*  无符号32位整型变量          */
typedef signed   int   int32;                                           /*  有符号32位整型变量          */
typedef float          fp32;                                            /*  单精度浮点数（32位长度）    */
typedef double         fp64;                                            /*  双精度浮点数（64位长度）    */

typedef unsigned char  INT8U;                                           /*  无符号8位整型变量           */
typedef signed   char  INT8S;                                           /*  有符号8位整型变量           */
typedef unsigned short INT16U;                                          /*  无符号16位整型变量          */
typedef signed   short INT16S;                                          /*  有符号16位整型变量          */
typedef unsigned int   INT32U;                                          /*  无符号32位整型变量          */
typedef signed   int   INT32S;                                          /*  有符号32位整型变量          */
typedef float          FP32;                                            /*  单精度浮点数（32位长度）    */
typedef double         FP64;                                            /*  双精度浮点数（64位长度）    */

/*********************************************************************************************************
    ARM的特殊代码                    
*********************************************************************************************************/
//这一段无需改动

//#include   "lpc1700.h"
//#include    "target.h"
//#include    "vicControl.h"

/*********************************************************************************************************
    应用程序配置             
*********************************************************************************************************/
#include    <stdio.h>
#include    <ctype.h>
#include    <stdlib.h>
#include    <setjmp.h>
#include    <intrinsics.h>
/*********************************************************************************************************
    本例程的配置  
*********************************************************************************************************/
#define	USE_USB		    1
#define Fosc            12000000                                        /*	OSC = 12MHz                 */
#define CCLKDivValue    4                                               /*  只能是1和偶数值             */

#define Fcclk	        (Fosc  * 8)											    
#define Fcco            (Fcclk * CCLKDivValue)	
#define Fpclk	        (Fcclk / 4)
	
#define PLL_NValue      1	
#define PLL_MValue      ((Fcco / Fosc) * (PLL_NValue) / 2)
#if USE_USB	== 1	
    #define Fusbclk	    48000000	
    #define Fucco	    (Fusbclk * 2)		                            /*  必须为2、4、8或16倍         */
#endif	                                                                /*  USE_USB                     */
#ifdef __cplusplus
	}
#endif

#endif

/********************************************************************************************************
**                                      End Of File
********************************************************************************************************/
