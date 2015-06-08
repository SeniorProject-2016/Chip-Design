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

typedef unsigned char  uint8;                                           /*  �޷���8λ���ͱ���           */
typedef signed   char  int8;                                            /*  �з���8λ���ͱ���           */
typedef unsigned short uint16;                                          /*  �޷���16λ���ͱ���          */
typedef signed   short int16;                                           /*  �з���16λ���ͱ���          */
typedef unsigned int   uint32;                                          /*  �޷���32λ���ͱ���          */
typedef signed   int   int32;                                           /*  �з���32λ���ͱ���          */
typedef float          fp32;                                            /*  �����ȸ�������32λ���ȣ�    */
typedef double         fp64;                                            /*  ˫���ȸ�������64λ���ȣ�    */

typedef unsigned char  INT8U;                                           /*  �޷���8λ���ͱ���           */
typedef signed   char  INT8S;                                           /*  �з���8λ���ͱ���           */
typedef unsigned short INT16U;                                          /*  �޷���16λ���ͱ���          */
typedef signed   short INT16S;                                          /*  �з���16λ���ͱ���          */
typedef unsigned int   INT32U;                                          /*  �޷���32λ���ͱ���          */
typedef signed   int   INT32S;                                          /*  �з���32λ���ͱ���          */
typedef float          FP32;                                            /*  �����ȸ�������32λ���ȣ�    */
typedef double         FP64;                                            /*  ˫���ȸ�������64λ���ȣ�    */

/*********************************************************************************************************
    ARM���������                    
*********************************************************************************************************/
//��һ������Ķ�

//#include   "lpc1700.h"
//#include    "target.h"
//#include    "vicControl.h"

/*********************************************************************************************************
    Ӧ�ó�������             
*********************************************************************************************************/
#include    <stdio.h>
#include    <ctype.h>
#include    <stdlib.h>
#include    <setjmp.h>
#include    <intrinsics.h>
/*********************************************************************************************************
    �����̵�����  
*********************************************************************************************************/
#define	USE_USB		    1
#define Fosc            12000000                                        /*	OSC = 12MHz                 */
#define CCLKDivValue    4                                               /*  ֻ����1��ż��ֵ             */

#define Fcclk	        (Fosc  * 8)											    
#define Fcco            (Fcclk * CCLKDivValue)	
#define Fpclk	        (Fcclk / 4)
	
#define PLL_NValue      1	
#define PLL_MValue      ((Fcco / Fosc) * (PLL_NValue) / 2)
#if USE_USB	== 1	
    #define Fusbclk	    48000000	
    #define Fucco	    (Fusbclk * 2)		                            /*  ����Ϊ2��4��8��16��         */
#endif	                                                                /*  USE_USB                     */
#ifdef __cplusplus
	}
#endif

#endif

/********************************************************************************************************
**                                      End Of File
********************************************************************************************************/
