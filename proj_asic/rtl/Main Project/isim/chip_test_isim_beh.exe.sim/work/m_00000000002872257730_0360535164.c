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
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/project/filter_accumulator.v";
static unsigned int ng1[] = {0U, 0U, 0U, 0U};



static void Cont_11_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 40);
    xsi_driver_vfirst_trans(t5, 0, 39);
    t10 = (t0 + 3736);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_13_1(char *t0)
{
    char t4[8];
    char t21[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 3752);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB13;

LAB14:
LAB15:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(17, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 40, 0LL);
    goto LAB12;

LAB13:    xsi_set_current_line(20, ng0);

LAB16:    xsi_set_current_line(21, ng0);
    t5 = (t0 + 1528U);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1688U);
    t12 = *((char **)t6);
    xsi_vlog_signed_add(t21, 40, t5, 40, t12, 32);
    t6 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t6, t21, 0, 0, 40, 0LL);

LAB19:    goto LAB15;

LAB17:    xsi_set_current_line(22, ng0);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    memcpy(t21, t13, 8);
    t12 = (t21 + 8);
    memset(t12, 0, 8);
    t24 = *((unsigned int *)t13);
    t25 = (t24 & 2147483648U);
    t22 = t25;
    t19 = (t13 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (t26 & 2147483648U);
    t23 = t27;
    t28 = (t25 != 0);
    if (t28 == 1)
        goto LAB20;

LAB21:    t31 = (t27 != 0);
    if (t31 == 1)
        goto LAB22;

LAB23:    t36 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t36, t21, 0, 0, 40, 0LL);
    goto LAB19;

LAB20:    t29 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t29 | 0U);
    t20 = (t21 + 8);
    t30 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t30 | 4294967295U);
    goto LAB21;

LAB22:    t32 = (t21 + 4);
    t33 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t33 | 0U);
    t34 = (t21 + 12);
    t35 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t35 | 4294967295U);
    goto LAB23;

}


extern void work_m_00000000002872257730_0360535164_init()
{
	static char *pe[] = {(void *)Cont_11_0,(void *)Always_13_1};
	xsi_register_didat("work_m_00000000002872257730_0360535164", "isim/chip_test_isim_beh.exe.sim/work/m_00000000002872257730_0360535164.didat");
	xsi_register_executes(pe);
}
