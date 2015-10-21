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
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/i2si/i2s_in/i2si_bist_gen.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Always_16_0(char *t0)
{
    char t8[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1528U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB15;

LAB14:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB17;

LAB16:    *((unsigned int *)t8) = 1;

LAB17:    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 32, t6, 8);
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t8, 0, 0, 32, 0LL);

LAB21:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(17, ng0);

LAB13:    xsi_set_current_line(18, ng0);
    t30 = (t0 + 1368U);
    t31 = *((char **)t30);
    memcpy(t32, t31, 8);
    t30 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t30, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 1, t4, 1, t5, 1);
    t6 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(21, ng0);

LAB22:    xsi_set_current_line(22, ng0);
    t23 = (t0 + 1368U);
    t24 = *((char **)t23);
    memcpy(t32, t24, 8);
    t23 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t23, t32, 0, 0, 32, 0LL);
    goto LAB21;

}


extern void work_m_00000000000217523093_2968718272_init()
{
	static char *pe[] = {(void *)Always_16_0};
	xsi_register_didat("work_m_00000000000217523093_2968718272", "isim/i2si_bist_gen_isim_beh.exe.sim/work/m_00000000000217523093_2968718272.didat");
	xsi_register_executes(pe);
}
