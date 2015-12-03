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
static const char *ng0 = "C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/i2si/i2s_in/synchronizer_testbench.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {43690U, 0U};
static unsigned int ng3[] = {65535U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {5240U, 0U};
static unsigned int ng6[] = {41913U, 0U};
static unsigned int ng7[] = {52695U, 0U};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {47802U, 0U};
static unsigned int ng10[] = {17476U, 0U};
static int ng11[] = {3, 0};
static unsigned int ng12[] = {29592U, 0U};
static int ng13[] = {4, 0};
static unsigned int ng14[] = {65501U, 0U};
static unsigned int ng15[] = {4369U, 0U};
static int ng16[] = {5, 0};
static unsigned int ng17[] = {22914U, 0U};
static unsigned int ng18[] = {1U, 0U};
static int ng19[] = {6, 0};
static int ng20[] = {7, 0};
static unsigned int ng21[] = {63701U, 0U};
static int ng22[] = {8, 0};
static unsigned int ng23[] = {54618U, 0U};
static unsigned int ng24[] = {39365U, 0U};
static int ng25[] = {9, 0};
static unsigned int ng26[] = {29749U, 0U};
static unsigned int ng27[] = {27097U, 0U};
static int ng28[] = {10, 0};
static unsigned int ng29[] = {43981U, 0U};
static int ng30[] = {20, 0};
static unsigned int ng31[] = {14U, 0U};
static unsigned int ng32[] = {15U, 0U};



static void Initial_43_0(char *t0)
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

LAB0:    t1 = (t0 + 4928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
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

LAB6:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
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

LAB8:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
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

LAB10:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
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

LAB12:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
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

LAB14:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
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

LAB16:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
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

LAB18:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
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

LAB20:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng13)));
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

LAB22:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng13)));
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

LAB24:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
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

LAB26:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
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

LAB28:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
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

LAB30:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
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

LAB32:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng20)));
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

LAB34:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng20)));
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

LAB36:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng22)));
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

LAB38:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng22)));
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

LAB40:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng25)));
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

LAB42:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng25)));
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

LAB44:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng28)));
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
        goto LAB45;

LAB46:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng28)));
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
        goto LAB47;

LAB48:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4736);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB49;

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

LAB45:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB46;

LAB47:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB48;

LAB49:    goto LAB1;

}

static void Always_77_1(char *t0)
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

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);

LAB4:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);

LAB6:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4984);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1928);
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
    t24 = (t0 + 1928);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3048);
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

static void Always_90_2(char *t0)
{
    char t4[8];
    char t9[8];
    char t23[8];
    char t54[8];
    char t70[8];
    char t106[8];
    char t126[8];
    char t142[8];
    char t174[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    int t166;
    int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    char *t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;

LAB0:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5992);
    *((int *)t2) = 1;
    t3 = (t0 + 5456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);

LAB5:    xsi_set_current_line(92, ng0);
    t5 = (t0 + 3048);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng30)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB6:    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB8;

LAB9:    memset(t4, 0, 8);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t13) == 0)
        goto LAB11;

LAB13:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;

LAB14:    t20 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t2 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB16;

LAB15:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t2) > *((unsigned int *)t6))
        goto LAB18;

LAB17:    *((unsigned int *)t4) = 1;

LAB18:    t11 = (t0 + 3368);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng31)));
    memset(t9, 0, 8);
    t20 = (t13 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB21;

LAB20:    t21 = (t19 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t13) > *((unsigned int *)t19))
        goto LAB23;

LAB22:    *((unsigned int *)t9) = 1;

LAB23:    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t9);
    t16 = (t14 & t15);
    *((unsigned int *)t23) = t16;
    t24 = (t4 + 4);
    t25 = (t9 + 4);
    t26 = (t23 + 4);
    t17 = *((unsigned int *)t24);
    t18 = *((unsigned int *)t25);
    t27 = (t17 | t18);
    *((unsigned int *)t26) = t27;
    t28 = *((unsigned int *)t26);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB25;

LAB26:
LAB27:    t50 = (t0 + 3528);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng4)));
    memset(t54, 0, 8);
    t55 = (t52 + 4);
    t56 = (t53 + 4);
    t57 = *((unsigned int *)t52);
    t58 = *((unsigned int *)t53);
    t59 = (t57 ^ t58);
    t60 = *((unsigned int *)t55);
    t61 = *((unsigned int *)t56);
    t62 = (t60 ^ t61);
    t63 = (t59 | t62);
    t64 = *((unsigned int *)t55);
    t65 = *((unsigned int *)t56);
    t66 = (t64 | t65);
    t67 = (~(t66));
    t68 = (t63 & t67);
    if (t68 != 0)
        goto LAB31;

LAB28:    if (t66 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t54) = 1;

LAB31:    t71 = *((unsigned int *)t23);
    t72 = *((unsigned int *)t54);
    t73 = (t71 & t72);
    *((unsigned int *)t70) = t73;
    t74 = (t23 + 4);
    t75 = (t54 + 4);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB32;

LAB33:
LAB34:    t102 = (t0 + 3368);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = ((char*)((ng32)));
    memset(t106, 0, 8);
    t107 = (t104 + 4);
    t108 = (t105 + 4);
    t109 = *((unsigned int *)t104);
    t110 = *((unsigned int *)t105);
    t111 = (t109 ^ t110);
    t112 = *((unsigned int *)t107);
    t113 = *((unsigned int *)t108);
    t114 = (t112 ^ t113);
    t115 = (t111 | t114);
    t116 = *((unsigned int *)t107);
    t117 = *((unsigned int *)t108);
    t118 = (t116 | t117);
    t119 = (~(t118));
    t120 = (t115 & t119);
    if (t120 != 0)
        goto LAB38;

LAB35:    if (t118 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t106) = 1;

LAB38:    t122 = (t0 + 3528);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    t125 = ((char*)((ng1)));
    memset(t126, 0, 8);
    t127 = (t124 + 4);
    t128 = (t125 + 4);
    t129 = *((unsigned int *)t124);
    t130 = *((unsigned int *)t125);
    t131 = (t129 ^ t130);
    t132 = *((unsigned int *)t127);
    t133 = *((unsigned int *)t128);
    t134 = (t132 ^ t133);
    t135 = (t131 | t134);
    t136 = *((unsigned int *)t127);
    t137 = *((unsigned int *)t128);
    t138 = (t136 | t137);
    t139 = (~(t138));
    t140 = (t135 & t139);
    if (t140 != 0)
        goto LAB42;

LAB39:    if (t138 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t126) = 1;

LAB42:    t143 = *((unsigned int *)t106);
    t144 = *((unsigned int *)t126);
    t145 = (t143 & t144);
    *((unsigned int *)t142) = t145;
    t146 = (t106 + 4);
    t147 = (t126 + 4);
    t148 = (t142 + 4);
    t149 = *((unsigned int *)t146);
    t150 = *((unsigned int *)t147);
    t151 = (t149 | t150);
    *((unsigned int *)t148) = t151;
    t152 = *((unsigned int *)t148);
    t153 = (t152 != 0);
    if (t153 == 1)
        goto LAB43;

LAB44:
LAB45:    t175 = *((unsigned int *)t70);
    t176 = *((unsigned int *)t142);
    t177 = (t175 | t176);
    *((unsigned int *)t174) = t177;
    t178 = (t70 + 4);
    t179 = (t142 + 4);
    t180 = (t174 + 4);
    t181 = *((unsigned int *)t178);
    t182 = *((unsigned int *)t179);
    t183 = (t181 | t182);
    *((unsigned int *)t180) = t183;
    t184 = *((unsigned int *)t180);
    t185 = (t184 != 0);
    if (t185 == 1)
        goto LAB46;

LAB47:
LAB48:    t202 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t202, t174, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t10 = (t0 + 2728);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 3688);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 3528);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    xsi_vlog_generic_get_array_select_value(t4, 16, t5, t8, t12, 2, 2, t20, 32, 2, t24, 1, 2);
    t25 = (t0 + 2728);
    t26 = (t25 + 72U);
    t32 = *((char **)t26);
    t33 = (t0 + 4008);
    t50 = (t33 + 56U);
    t51 = *((char **)t50);
    t52 = (t0 + 3368);
    t53 = (t52 + 56U);
    t55 = *((char **)t53);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_minus(t23, 32, t51, 32, t55, 32);
    xsi_vlog_generic_get_index_select_value(t9, 1, t4, t32, 2, t23, 32, 2);
    t56 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t56, t9, 0, 0, 1, 0LL);
    goto LAB2;

LAB7:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB16:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB18;

LAB21:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB23;

LAB25:    t30 = *((unsigned int *)t23);
    t31 = *((unsigned int *)t26);
    *((unsigned int *)t23) = (t30 | t31);
    t32 = (t4 + 4);
    t33 = (t9 + 4);
    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t32);
    t37 = (~(t36));
    t38 = *((unsigned int *)t9);
    t39 = (~(t38));
    t40 = *((unsigned int *)t33);
    t41 = (~(t40));
    t42 = (t35 & t37);
    t43 = (t39 & t41);
    t44 = (~(t42));
    t45 = (~(t43));
    t46 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t46 & t44);
    t47 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t47 & t45);
    t48 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t48 & t44);
    t49 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t49 & t45);
    goto LAB27;

LAB30:    t69 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB31;

LAB32:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t70) = (t82 | t83);
    t84 = (t23 + 4);
    t85 = (t54 + 4);
    t86 = *((unsigned int *)t23);
    t87 = (~(t86));
    t88 = *((unsigned int *)t84);
    t89 = (~(t88));
    t90 = *((unsigned int *)t54);
    t91 = (~(t90));
    t92 = *((unsigned int *)t85);
    t93 = (~(t92));
    t94 = (t87 & t89);
    t95 = (t91 & t93);
    t96 = (~(t94));
    t97 = (~(t95));
    t98 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t98 & t96);
    t99 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t99 & t97);
    t100 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t100 & t96);
    t101 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t101 & t97);
    goto LAB34;

LAB37:    t121 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB38;

LAB41:    t141 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t141) = 1;
    goto LAB42;

LAB43:    t154 = *((unsigned int *)t142);
    t155 = *((unsigned int *)t148);
    *((unsigned int *)t142) = (t154 | t155);
    t156 = (t106 + 4);
    t157 = (t126 + 4);
    t158 = *((unsigned int *)t106);
    t159 = (~(t158));
    t160 = *((unsigned int *)t156);
    t161 = (~(t160));
    t162 = *((unsigned int *)t126);
    t163 = (~(t162));
    t164 = *((unsigned int *)t157);
    t165 = (~(t164));
    t166 = (t159 & t161);
    t167 = (t163 & t165);
    t168 = (~(t166));
    t169 = (~(t167));
    t170 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t170 & t168);
    t171 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t171 & t169);
    t172 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t172 & t168);
    t173 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t173 & t169);
    goto LAB45;

LAB46:    t186 = *((unsigned int *)t174);
    t187 = *((unsigned int *)t180);
    *((unsigned int *)t174) = (t186 | t187);
    t188 = (t70 + 4);
    t189 = (t142 + 4);
    t190 = *((unsigned int *)t188);
    t191 = (~(t190));
    t192 = *((unsigned int *)t70);
    t193 = (t192 & t191);
    t194 = *((unsigned int *)t189);
    t195 = (~(t194));
    t196 = *((unsigned int *)t142);
    t197 = (t196 & t195);
    t198 = (~(t193));
    t199 = (~(t197));
    t200 = *((unsigned int *)t180);
    *((unsigned int *)t180) = (t200 & t198);
    t201 = *((unsigned int *)t180);
    *((unsigned int *)t180) = (t201 & t199);
    goto LAB48;

}

static void Always_97_3(char *t0)
{
    char t4[8];
    char t23[8];
    char t70[8];
    char t96[8];
    char t122[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
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
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t123;

LAB0:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 6008);
    *((int *)t2) = 1;
    t3 = (t0 + 5704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);

LAB5:    xsi_set_current_line(99, ng0);
    t5 = (t0 + 2088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(109, ng0);

LAB14:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3848);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t14 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t8, 32, t14, 32);
    memset(t23, 0, 8);
    t15 = (t5 + 4);
    t21 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t15);
    t13 = *((unsigned int *)t21);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t21);
    t20 = (t18 | t19);
    t24 = (~(t20));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB18;

LAB15:    if (t20 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t23) = 1;

LAB18:    t26 = (t23 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t23);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 32, 0LL);

LAB21:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2888);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t4, 0, 8);
    t14 = (t8 + 4);
    t9 = *((unsigned int *)t14);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t14) == 0)
        goto LAB29;

LAB31:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;

LAB32:    t21 = (t4 + 4);
    t22 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t22) != 0)
        goto LAB34;

LAB33:    t25 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t25 & 1U);
    t27 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t27 & 1U);
    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t4);
    t30 = (t28 & t29);
    *((unsigned int *)t23) = t30;
    t26 = (t5 + 4);
    t32 = (t4 + 4);
    t33 = (t23 + 4);
    t31 = *((unsigned int *)t26);
    t34 = *((unsigned int *)t32);
    t35 = (t31 | t34);
    *((unsigned int *)t33) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB35;

LAB36:
LAB37:    t58 = (t23 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t23);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB38;

LAB39:
LAB40:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(100, ng0);

LAB13:    xsi_set_current_line(101, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t22 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(112, ng0);

LAB22:    xsi_set_current_line(113, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t6) == 0)
        goto LAB23;

LAB25:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB26:    t8 = (t4 + 4);
    t14 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB28;

LAB27:    t25 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t25 & 1U);
    t27 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t27 & 1U);
    t15 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t15, t4, 0, 0, 1, 0LL);
    goto LAB21;

LAB23:    *((unsigned int *)t4) = 1;
    goto LAB26;

LAB28:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t20 | t24);
    goto LAB27;

LAB29:    *((unsigned int *)t4) = 1;
    goto LAB32;

LAB34:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t21) = (t20 | t24);
    goto LAB33;

LAB35:    t38 = *((unsigned int *)t23);
    t39 = *((unsigned int *)t33);
    *((unsigned int *)t23) = (t38 | t39);
    t40 = (t5 + 4);
    t41 = (t4 + 4);
    t42 = *((unsigned int *)t5);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t4);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t56 & t52);
    t57 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t57 & t53);
    goto LAB37;

LAB38:    xsi_set_current_line(122, ng0);

LAB41:    xsi_set_current_line(123, ng0);
    t64 = (t0 + 3368);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t0 + 4008);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    memset(t70, 0, 8);
    t71 = (t66 + 4);
    t72 = (t69 + 4);
    t73 = *((unsigned int *)t66);
    t74 = *((unsigned int *)t69);
    t75 = (t73 ^ t74);
    t76 = *((unsigned int *)t71);
    t77 = *((unsigned int *)t72);
    t78 = (t76 ^ t77);
    t79 = (t75 | t78);
    t80 = *((unsigned int *)t71);
    t81 = *((unsigned int *)t72);
    t82 = (t80 | t81);
    t83 = (~(t82));
    t84 = (t79 & t83);
    if (t84 != 0)
        goto LAB45;

LAB42:    if (t82 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t70) = 1;

LAB45:    t86 = (t70 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t70);
    t90 = (t89 & t88);
    t91 = (t90 != 0);
    if (t91 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 32, 0LL);

LAB48:    goto LAB40;

LAB44:    t85 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(124, ng0);

LAB49:    xsi_set_current_line(125, ng0);
    t92 = (t0 + 3528);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    t95 = ((char*)((ng4)));
    memset(t96, 0, 8);
    t97 = (t94 + 4);
    t98 = (t95 + 4);
    t99 = *((unsigned int *)t94);
    t100 = *((unsigned int *)t95);
    t101 = (t99 ^ t100);
    t102 = *((unsigned int *)t97);
    t103 = *((unsigned int *)t98);
    t104 = (t102 ^ t103);
    t105 = (t101 | t104);
    t106 = *((unsigned int *)t97);
    t107 = *((unsigned int *)t98);
    t108 = (t106 | t107);
    t109 = (~(t108));
    t110 = (t105 & t109);
    if (t110 != 0)
        goto LAB53;

LAB50:    if (t108 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t96) = 1;

LAB53:    t112 = (t96 + 4);
    t113 = *((unsigned int *)t112);
    t114 = (~(t113));
    t115 = *((unsigned int *)t96);
    t116 = (t115 & t114);
    t117 = (t116 != 0);
    if (t117 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB56:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB48;

LAB52:    t111 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(126, ng0);

LAB57:    xsi_set_current_line(127, ng0);
    t118 = (t0 + 3688);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    t121 = ((char*)((ng4)));
    memset(t122, 0, 8);
    xsi_vlog_unsigned_add(t122, 32, t120, 32, t121, 32);
    t123 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t123, t122, 0, 0, 32, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB56;

}


extern void work_m_00000000000070751492_0425882814_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Always_77_1,(void *)Always_90_2,(void *)Always_97_3};
	xsi_register_didat("work_m_00000000000070751492_0425882814", "isim/synchronizer_testbench_isim_beh.exe.sim/work/m_00000000000070751492_0425882814.didat");
	xsi_register_executes(pe);
}
