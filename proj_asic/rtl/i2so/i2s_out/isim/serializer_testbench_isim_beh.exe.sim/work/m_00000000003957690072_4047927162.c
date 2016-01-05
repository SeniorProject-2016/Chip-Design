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
static const char *ng0 = "C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/i2so/i2s_out/serializer_testbench.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {65535U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {65280U, 0U};
static unsigned int ng6[] = {255U, 0U};
static unsigned int ng7[] = {43690U, 0U};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {52428U, 0U};
static unsigned int ng10[] = {4369U, 0U};
static int ng11[] = {3, 0};
static unsigned int ng12[] = {13107U, 0U};
static unsigned int ng13[] = {29592U, 0U};
static int ng14[] = {4, 0};
static unsigned int ng15[] = {65501U, 0U};
static int ng16[] = {5, 0};
static unsigned int ng17[] = {22914U, 0U};
static unsigned int ng18[] = {1U, 0U};
static int ng19[] = {6, 0};
static unsigned int ng20[] = {5240U, 0U};
static int ng21[] = {7, 0};
static unsigned int ng22[] = {41913U, 0U};
static unsigned int ng23[] = {63701U, 0U};
static int ng24[] = {8, 0};
static unsigned int ng25[] = {54618U, 0U};
static unsigned int ng26[] = {39365U, 0U};
static int ng27[] = {9, 0};
static unsigned int ng28[] = {29749U, 0U};
static int ng29[] = {20, 0};



static void Initial_44_0(char *t0)
{
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    unsigned int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    int t24;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);

LAB4:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng14)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng14)));
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng16)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng16)));
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng19)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng19)));
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng21)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng21)));
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng24)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng24)));
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng27)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 3848);
    t6 = (t0 + 3848);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng27)));
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, 694000LL);
    *((char **)t1) = &&LAB45;

LAB1:    return;
LAB5:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB6;

LAB7:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB10;

LAB11:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB12;

LAB13:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB14;

LAB15:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB16;

LAB17:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB18;

LAB19:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB20;

LAB21:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB22;

LAB23:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB24;

LAB25:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB26;

LAB27:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB28;

LAB29:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB30;

LAB31:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB32;

LAB33:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB34;

LAB35:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB36;

LAB37:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB38;

LAB39:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB40;

LAB41:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB42;

LAB43:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB44;

LAB45:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    goto LAB1;

}

static void Always_83_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);

LAB4:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(87, ng0);

LAB6:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4824);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 2088);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t7) == 0)
        goto LAB8;

LAB10:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB11:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB12:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2088);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB5;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB13:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB12;

LAB14:    goto LAB2;

}

static void Always_95_2(char *t0)
{
    char t8[8];
    char t12[8];
    char t28[8];
    char t32[8];
    char t40[8];
    char t81[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6576);
    *((int *)t2) = 1;
    t3 = (t0 + 5296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(96, ng0);

LAB5:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 3688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;

LAB9:    memset(t12, 0, 8);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t13) != 0)
        goto LAB13;

LAB14:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB15;

LAB16:    memcpy(t40, t12, 8);

LAB17:    t72 = (t40 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB14;

LAB13:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB15:    t24 = (t0 + 3688);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng27)));
    memset(t28, 0, 8);
    t29 = (t26 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB19;

LAB18:    t30 = (t27 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t26) > *((unsigned int *)t27))
        goto LAB21;

LAB20:    *((unsigned int *)t28) = 1;

LAB21:    memset(t32, 0, 8);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t33) != 0)
        goto LAB25;

LAB26:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t12 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t31 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t32) = 1;
    goto LAB26;

LAB25:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB26;

LAB27:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t12 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB29;

LAB30:    xsi_set_current_line(98, ng0);

LAB33:    xsi_set_current_line(99, ng0);
    t78 = (t0 + 3848);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    t82 = (t0 + 3848);
    t83 = (t82 + 72U);
    t84 = *((char **)t83);
    t85 = (t0 + 3848);
    t86 = (t85 + 64U);
    t87 = *((char **)t86);
    t88 = (t0 + 3688);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    t91 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t81, 16, t80, t84, t87, 2, 2, t90, 32, 2, t91, 32, 1);
    t92 = (t0 + 2408);
    xsi_vlogvar_assign_value(t92, t81, 0, 0, 16);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3848);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = (t0 + 3848);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 3688);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t24 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t8, 16, t4, t7, t11, 2, 2, t20, 32, 2, t24, 32, 1);
    t25 = (t0 + 2568);
    xsi_vlogvar_assign_value(t25, t8, 0, 0, 16);
    goto LAB32;

}

static void Always_105_3(char *t0)
{
    char t4[8];
    char t19[8];
    char t26[8];
    char t68[8];
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
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t69;

LAB0:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 6592);
    *((int *)t2) = 1;
    t3 = (t0 + 5544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t5 = (t0 + 1048U);
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

LAB11:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t6) == 0)
        goto LAB14;

LAB16:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB17:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t2) != 0)
        goto LAB24;

LAB25:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB26;

LAB27:    memcpy(t26, t4, 8);

LAB28:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB36;

LAB37:
LAB38:
LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(108, ng0);

LAB13:    xsi_set_current_line(109, ng0);
    t20 = ((char*)((ng4)));
    memset(t19, 0, 8);
    xsi_vlog_signed_unary_minus(t19, 32, t20, 32);
    t21 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t21, t19, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(112, ng0);

LAB21:    xsi_set_current_line(113, ng0);
    t20 = ((char*)((ng18)));
    t21 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 1, 0LL);
    goto LAB20;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB24:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB25;

LAB26:    t12 = (t0 + 3528);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    memset(t19, 0, 8);
    t21 = (t20 + 4);
    t17 = *((unsigned int *)t21);
    t18 = (~(t17));
    t22 = *((unsigned int *)t20);
    t23 = (t22 & t18);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t21) != 0)
        goto LAB31;

LAB32:    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t4 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB28;

LAB29:    *((unsigned int *)t19) = 1;
    goto LAB32;

LAB31:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB32;

LAB33:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t4 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t4);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB35;

LAB36:    xsi_set_current_line(116, ng0);

LAB39:    xsi_set_current_line(117, ng0);
    t64 = (t0 + 3688);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = ((char*)((ng4)));
    memset(t68, 0, 8);
    xsi_vlog_unsigned_add(t68, 32, t66, 32, t67, 32);
    t69 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t69, t68, 0, 0, 32, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB38;

}

static void Always_124_4(char *t0)
{
    char t4[8];
    char t21[8];
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
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 5760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 6608);
    *((int *)t2) = 1;
    t3 = (t0 + 5792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(125, ng0);

LAB5:    xsi_set_current_line(126, ng0);
    t5 = (t0 + 1048U);
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

LAB11:    xsi_set_current_line(134, ng0);

LAB14:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3048);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t13, 32, t19, 32);
    memset(t21, 0, 8);
    t20 = (t5 + 4);
    t22 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t22);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t20);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t23 = (~(t18));
    t24 = (t15 & t23);
    if (t24 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t21) = 1;

LAB18:    t26 = (t21 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);

LAB21:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB29;

LAB30:
LAB31:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(127, ng0);

LAB13:    xsi_set_current_line(128, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t25 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(137, ng0);

LAB22:    xsi_set_current_line(138, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t6) == 0)
        goto LAB23;

LAB25:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB26:    t13 = (t4 + 4);
    t19 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB28;

LAB27:    t24 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t24 & 1U);
    t27 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t27 & 1U);
    t20 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);
    goto LAB21;

LAB23:    *((unsigned int *)t4) = 1;
    goto LAB26;

LAB28:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t18 | t23);
    goto LAB27;

LAB29:    xsi_set_current_line(147, ng0);
    t5 = (t0 + 3688);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t12, 32, t13, 32);
    t19 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t19, t4, 0, 0, 32, 0LL);
    goto LAB31;

}

static void Cont_153_5(char *t0)
{
    char t3[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 6008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng29)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB4:    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB6;

LAB7:    memset(t3, 0, 8);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t11) == 0)
        goto LAB9;

LAB11:    t17 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t17) = 1;

LAB12:    t18 = (t0 + 6720);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 1U;
    t24 = t23;
    t25 = (t3 + 4);
    t26 = *((unsigned int *)t3);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 0);
    t31 = (t0 + 6624);
    *((int *)t31) = 1;

LAB1:    return;
LAB5:    t10 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t3) = 1;
    goto LAB12;

}

static void Cont_154_6(char *t0)
{
    char t5[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;

LAB0:    t1 = (t0 + 6256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2728);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t9) == 0)
        goto LAB4;

LAB6:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;

LAB7:    t16 = (t5 + 4);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    *((unsigned int *)t5) = t19;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB9;

LAB8:    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 1U);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t5);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t4 + 4);
    t31 = (t5 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB10;

LAB11:
LAB12:    t58 = (t0 + 6784);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t62, 0, 8);
    t63 = 1U;
    t64 = t63;
    t65 = (t26 + 4);
    t66 = *((unsigned int *)t26);
    t63 = (t63 & t66);
    t67 = *((unsigned int *)t65);
    t64 = (t64 & t67);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t69 | t63);
    t70 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t70 | t64);
    xsi_driver_vfirst_trans(t58, 0, 0);
    t71 = (t0 + 6640);
    *((int *)t71) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t5) = (t20 | t21);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t22 | t23);
    goto LAB8;

LAB10:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t4 + 4);
    t41 = (t5 + 4);
    t42 = *((unsigned int *)t4);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t5);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB12;

}


extern void work_m_00000000003957690072_4047927162_init()
{
	static char *pe[] = {(void *)Initial_44_0,(void *)Always_83_1,(void *)Always_95_2,(void *)Always_105_3,(void *)Always_124_4,(void *)Cont_153_5,(void *)Cont_154_6};
	xsi_register_didat("work_m_00000000003957690072_4047927162", "isim/serializer_testbench_isim_beh.exe.sim/work/m_00000000003957690072_4047927162.didat");
	xsi_register_executes(pe);
}
