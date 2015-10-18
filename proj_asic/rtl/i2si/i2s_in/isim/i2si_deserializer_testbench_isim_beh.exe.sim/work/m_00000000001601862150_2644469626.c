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
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/i2si/i2s_in/deserializer_test.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {43690U, 0U};
static unsigned int ng4[] = {65535U, 0U};
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
static int ng30[] = {11, 0};
static int ng31[] = {16, 0};



static void Initial_38_0(char *t0)
{
    char t5[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);

LAB4:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3776);
    xsi_process_wait(t2, 694000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng13)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng13)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng16)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng16)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng19)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng19)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng20)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng20)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng22)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng22)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng25)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng25)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng28)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng28)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB48;

LAB49:    goto LAB1;

LAB6:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB7;

LAB8:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB9;

LAB10:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB11;

LAB12:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB13;

LAB14:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB15;

LAB16:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB17;

LAB18:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB19;

LAB20:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB21;

LAB22:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB23;

LAB24:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB25;

LAB26:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB27;

LAB28:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB29;

LAB30:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB31;

LAB32:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB33;

LAB34:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB35;

LAB36:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB37;

LAB38:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB39;

LAB40:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB41;

LAB42:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB43;

LAB44:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB45;

LAB46:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB47;

LAB48:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), t24);
    goto LAB49;

}

static void Always_77_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5032);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);

LAB5:    xsi_set_current_line(78, ng0);
    xsi_set_current_line(78, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng30)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(78, ng0);

LAB9:    xsi_set_current_line(79, ng0);
    xsi_set_current_line(79, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 3048);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB10:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng31)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t5) == 0)
        goto LAB15;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB18:    t13 = (t6 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t6) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB20;

LAB19:    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 2248);
    xsi_vlogvar_assign_value(t23, t6, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB11:    xsi_set_current_line(79, ng0);

LAB13:    xsi_set_current_line(80, ng0);
    t13 = (t0 + 4024);
    xsi_process_wait(t13, 694000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB10;

LAB15:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB20:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB19;

}

static void Always_86_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4272);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_88_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4520);
    xsi_process_wait(t2, 347000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2088);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}


extern void work_m_00000000001601862150_2644469626_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Always_77_1,(void *)Always_86_2,(void *)Always_88_3};
	xsi_register_didat("work_m_00000000001601862150_2644469626", "isim/i2si_deserializer_testbench_isim_beh.exe.sim/work/m_00000000001601862150_2644469626.didat");
	xsi_register_executes(pe);
}
