/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/chip.v";



static void Cont_96_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 172928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 171288U);
    t4 = *((char **)t2);
    t2 = (t0 + 171128U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t5, 16, t4, 16);
    t2 = (t0 + 173592);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 173496);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_97_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 173176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 171608U);
    t4 = *((char **)t2);
    t2 = (t0 + 171448U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t5, 16, t4, 16);
    t2 = (t0 + 173656);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 173512);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000001594958355_0068154608_init()
{
	static char *pe[] = {(void *)Cont_96_0,(void *)Cont_97_1};
	xsi_register_didat("work_m_00000000001594958355_0068154608", "isim/chip_test_isim_beh.exe.sim/work/m_00000000001594958355_0068154608.didat");
	xsi_register_executes(pe);
}
