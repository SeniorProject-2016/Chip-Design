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
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/i2s_in_test.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {25U, 0U};
static const char *ng4 = "i2s_in_test_output.txt";
static unsigned int ng5[] = {43690U, 0U};
static unsigned int ng6[] = {65535U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {52428U, 0U};
static unsigned int ng9[] = {52695U, 0U};
static int ng10[] = {2, 0};
static unsigned int ng11[] = {47802U, 0U};
static unsigned int ng12[] = {17476U, 0U};
static int ng13[] = {3, 0};
static unsigned int ng14[] = {29592U, 0U};
static int ng15[] = {4, 0};
static unsigned int ng16[] = {65501U, 0U};
static unsigned int ng17[] = {4369U, 0U};
static int ng18[] = {5, 0};
static unsigned int ng19[] = {22914U, 0U};
static int ng20[] = {6, 0};
static unsigned int ng21[] = {5240U, 0U};
static int ng22[] = {7, 0};
static unsigned int ng23[] = {41913U, 0U};
static unsigned int ng24[] = {63701U, 0U};
static int ng25[] = {8, 0};
static unsigned int ng26[] = {54618U, 0U};
static unsigned int ng27[] = {39365U, 0U};
static int ng28[] = {9, 0};
static unsigned int ng29[] = {29749U, 0U};
static unsigned int ng30[] = {27097U, 0U};
static int ng31[] = {10, 0};
static unsigned int ng32[] = {43981U, 0U};
static int ng33[] = {20, 0};
static unsigned int ng34[] = {14U, 0U};
static unsigned int ng35[] = {15U, 0U};
static int ng36[] = {11, 0};
static int ng37[] = {20000, 0};
static const char *ng38 = "No matches found. Test failed";
static const char *ng39 = "word: %h";
static const char *ng40 = "       ---      i2si_data: %h";
static const char *ng41 = "       ---      Pass";
static unsigned int ng42[] = {4294967295U, 4294967295U};
static const char *ng43 = "       ---      Fail";



static void Initial_85_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;

LAB0:    xsi_set_current_line(85, ng0);

LAB2:    xsi_set_current_line(86, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname(ng4);
    t1 = (t3 + 4);
    *((int *)t1) = 0;
    t2 = (t0 + 6408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(100, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(101, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(102, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(103, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(104, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng10)));
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(105, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng10)));
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(106, ng0);
    t1 = ((char*)((ng12)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng13)));
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(107, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng13)));
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(108, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng15)));
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(109, ng0);
    t1 = ((char*)((ng16)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng15)));
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(110, ng0);
    t1 = ((char*)((ng17)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng18)));
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(111, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng18)));
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(112, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng20)));
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(113, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng20)));
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(114, ng0);
    t1 = ((char*)((ng21)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng22)));
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(115, ng0);
    t1 = ((char*)((ng23)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng22)));
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(116, ng0);
    t1 = ((char*)((ng24)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng25)));
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(117, ng0);
    t1 = ((char*)((ng26)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng25)));
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(118, ng0);
    t1 = ((char*)((ng27)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng28)));
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(119, ng0);
    t1 = ((char*)((ng29)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng28)));
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(120, ng0);
    t1 = ((char*)((ng30)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng31)));
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(121, ng0);
    t1 = ((char*)((ng32)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng31)));
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 2, t11, 32, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB45;

LAB46:
LAB1:    return;
LAB3:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB4;

LAB5:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB6;

LAB7:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB8;

LAB9:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB10;

LAB11:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB12;

LAB13:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB14;

LAB15:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB16;

LAB17:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB18;

LAB19:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB20;

LAB21:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB22;

LAB23:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB24;

LAB25:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB26;

LAB27:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB28;

LAB29:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB30;

LAB31:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB32;

LAB33:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB34;

LAB35:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB36;

LAB37:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB38;

LAB39:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB40;

LAB41:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB42;

LAB43:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB44;

LAB45:    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t23);
    goto LAB46;

}

static void Always_127_1(char *t0)
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

LAB0:    t1 = (t0 + 7576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);

LAB4:    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(130, ng0);

LAB5:    xsi_set_current_line(131, ng0);

LAB6:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 7384);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(132, ng0);
    t3 = (t0 + 2888);
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
    t24 = (t0 + 2888);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4328);
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

static void Always_139_2(char *t0)
{
    char t4[8];
    char t21[8];
    char t70[8];
    char t96[8];
    char t122[8];
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

LAB0:    t1 = (t0 + 7824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 9632);
    *((int *)t2) = 1;
    t3 = (t0 + 7856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(140, ng0);

LAB5:    xsi_set_current_line(141, ng0);
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

LAB11:    xsi_set_current_line(151, ng0);

LAB14:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5128);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng7)));
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

LAB20:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);

LAB21:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4168);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t19 = (t13 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t13);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t19) == 0)
        goto LAB29;

LAB31:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;

LAB32:    t22 = (t4 + 4);
    t25 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB34;

LAB33:    t24 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t24 & 1U);
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t27 & 1U);
    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t4);
    t30 = (t28 & t29);
    *((unsigned int *)t21) = t30;
    t26 = (t5 + 4);
    t32 = (t4 + 4);
    t33 = (t21 + 4);
    t31 = *((unsigned int *)t26);
    t34 = *((unsigned int *)t32);
    t35 = (t31 | t34);
    *((unsigned int *)t33) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB35;

LAB36:
LAB37:    t58 = (t21 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t21);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB38;

LAB39:
LAB40:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(142, ng0);

LAB13:    xsi_set_current_line(143, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t25 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(154, ng0);

LAB22:    xsi_set_current_line(155, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 3048);
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
    t20 = (t0 + 3048);
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

LAB29:    *((unsigned int *)t4) = 1;
    goto LAB32;

LAB34:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t25);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t22);
    t23 = *((unsigned int *)t25);
    *((unsigned int *)t22) = (t18 | t23);
    goto LAB33;

LAB35:    t38 = *((unsigned int *)t21);
    t39 = *((unsigned int *)t33);
    *((unsigned int *)t21) = (t38 | t39);
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
    t56 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t56 & t52);
    t57 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t57 & t53);
    goto LAB37;

LAB38:    xsi_set_current_line(164, ng0);

LAB41:    xsi_set_current_line(165, ng0);
    t64 = (t0 + 4648);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t0 + 5288);
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

LAB47:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);

LAB48:    goto LAB40;

LAB44:    t85 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(166, ng0);

LAB49:    xsi_set_current_line(167, ng0);
    t92 = (t0 + 4808);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    t95 = ((char*)((ng7)));
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

LAB55:    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB56:    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB48;

LAB52:    t111 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(168, ng0);

LAB57:    xsi_set_current_line(169, ng0);
    t118 = (t0 + 4968);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    t121 = ((char*)((ng7)));
    memset(t122, 0, 8);
    xsi_vlog_unsigned_add(t122, 32, t120, 32, t121, 32);
    t123 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t123, t122, 0, 0, 32, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB56;

}

static void Cont_183_3(char *t0)
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

LAB0:    t1 = (t0 + 8072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng33)));
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

LAB12:    t18 = (t0 + 9808);
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
    t31 = (t0 + 9648);
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

static void Cont_184_4(char *t0)
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

LAB0:    t1 = (t0 + 8320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng33)));
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

LAB12:    t18 = (t0 + 9872);
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
    t31 = (t0 + 9664);
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

static void Cont_185_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 8568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 9936);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 9680);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_186_6(char *t0)
{
    char t6[8];
    char t14[8];
    char t18[8];
    char t54[8];
    char t70[8];
    char t106[8];
    char t126[8];
    char t142[8];
    char t174[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
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
    char *t203;
    char *t204;
    char *t205;
    char *t206;
    unsigned int t207;
    unsigned int t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    char *t215;

LAB0:    t1 = (t0 + 8816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t2 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t2) > *((unsigned int *)t5))
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB7:    t10 = (t0 + 4648);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng34)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t16 = (t13 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB10;

LAB13:    if (*((unsigned int *)t12) > *((unsigned int *)t13))
        goto LAB12;

LAB11:    *((unsigned int *)t14) = 1;

LAB12:    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t14);
    t21 = (t19 & t20);
    *((unsigned int *)t18) = t21;
    t22 = (t6 + 4);
    t23 = (t14 + 4);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t22);
    t26 = *((unsigned int *)t23);
    t27 = (t25 | t26);
    *((unsigned int *)t24) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB14;

LAB15:
LAB16:    t50 = (t0 + 4808);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng7)));
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
        goto LAB20;

LAB17:    if (t66 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t54) = 1;

LAB20:    t71 = *((unsigned int *)t18);
    t72 = *((unsigned int *)t54);
    t73 = (t71 & t72);
    *((unsigned int *)t70) = t73;
    t74 = (t18 + 4);
    t75 = (t54 + 4);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB21;

LAB22:
LAB23:    t102 = (t0 + 4648);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = ((char*)((ng35)));
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
        goto LAB27;

LAB24:    if (t118 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t106) = 1;

LAB27:    t122 = (t0 + 4808);
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
        goto LAB31;

LAB28:    if (t138 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t126) = 1;

LAB31:    t143 = *((unsigned int *)t106);
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
        goto LAB32;

LAB33:
LAB34:    t175 = *((unsigned int *)t70);
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
        goto LAB35;

LAB36:
LAB37:    t202 = (t0 + 10000);
    t203 = (t202 + 56U);
    t204 = *((char **)t203);
    t205 = (t204 + 56U);
    t206 = *((char **)t205);
    memset(t206, 0, 8);
    t207 = 1U;
    t208 = t207;
    t209 = (t174 + 4);
    t210 = *((unsigned int *)t174);
    t207 = (t207 & t210);
    t211 = *((unsigned int *)t209);
    t208 = (t208 & t211);
    t212 = (t206 + 4);
    t213 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t213 | t207);
    t214 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t214 | t208);
    xsi_driver_vfirst_trans(t202, 0, 0);
    t215 = (t0 + 9696);
    *((int *)t215) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB10:    t17 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB12;

LAB14:    t30 = *((unsigned int *)t18);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t18) = (t30 | t31);
    t32 = (t6 + 4);
    t33 = (t14 + 4);
    t34 = *((unsigned int *)t6);
    t35 = (~(t34));
    t36 = *((unsigned int *)t32);
    t37 = (~(t36));
    t38 = *((unsigned int *)t14);
    t39 = (~(t38));
    t40 = *((unsigned int *)t33);
    t41 = (~(t40));
    t42 = (t35 & t37);
    t43 = (t39 & t41);
    t44 = (~(t42));
    t45 = (~(t43));
    t46 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t46 & t44);
    t47 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t47 & t45);
    t48 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t48 & t44);
    t49 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t49 & t45);
    goto LAB16;

LAB19:    t69 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB20;

LAB21:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t70) = (t82 | t83);
    t84 = (t18 + 4);
    t85 = (t54 + 4);
    t86 = *((unsigned int *)t18);
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
    goto LAB23;

LAB26:    t121 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB27;

LAB30:    t141 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t141) = 1;
    goto LAB31;

LAB32:    t154 = *((unsigned int *)t142);
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
    goto LAB34;

LAB35:    t186 = *((unsigned int *)t174);
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
    goto LAB37;

}

static void Cont_187_7(char *t0)
{
    char t5[8];
    char t18[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 9064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 4008);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4008);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 4968);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 4808);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 2, t14, 32, 2, t17, 1, 2);
    t19 = (t0 + 4008);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 5288);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 4648);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_minus(t28, 32, t24, 32, t27, 32);
    xsi_vlog_generic_get_index_select_value(t18, 1, t5, t21, 2, t28, 32, 2);
    t29 = (t0 + 10064);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t18 + 4);
    t37 = *((unsigned int *)t18);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 9712);
    *((int *)t42) = 1;

LAB1:    return;
}

static void Always_191_8(char *t0)
{
    char t6[8];
    char t19[8];
    char t26[8];
    char t64[8];
    char t95[8];
    char t96[8];
    char t97[8];
    char t101[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
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
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
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
    char *t93;
    char *t94;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
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
    int t120;
    int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;

LAB0:    t1 = (t0 + 9312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 9728);
    *((int *)t2) = 1;
    t3 = (t0 + 9344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(192, ng0);

LAB5:    xsi_set_current_line(193, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t26, t6, 8);

LAB12:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 1688U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB16:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB16;

LAB17:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
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
    goto LAB19;

LAB20:    xsi_set_current_line(194, ng0);

LAB23:    xsi_set_current_line(196, ng0);
    t65 = (t0 + 5928);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    memset(t64, 0, 8);
    t68 = (t67 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t67);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t68) == 0)
        goto LAB24;

LAB26:    t74 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t74) = 1;

LAB27:    t75 = (t64 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t64);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng37)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB50;

LAB49:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB50;

LAB53:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB51;

LAB52:    memset(t19, 0, 8);
    t18 = (t6 + 4);
    t7 = *((unsigned int *)t18);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t18) != 0)
        goto LAB56;

LAB57:    t30 = (t19 + 4);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t30);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB58;

LAB59:    memcpy(t95, t19, 8);

LAB60:    memset(t96, 0, 8);
    t82 = (t95 + 4);
    t69 = *((unsigned int *)t82);
    t70 = (~(t69));
    t71 = *((unsigned int *)t95);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t82) != 0)
        goto LAB74;

LAB75:    t84 = (t96 + 4);
    t76 = *((unsigned int *)t96);
    t77 = *((unsigned int *)t84);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB76;

LAB77:    memcpy(t101, t96, 8);

LAB78:    t128 = (t101 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t101);
    t132 = (t131 & t130);
    t133 = (t132 != 0);
    if (t133 > 0)
        goto LAB86;

LAB87:
LAB88:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 6088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB91;

LAB92:
LAB93:    goto LAB22;

LAB24:    *((unsigned int *)t64) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(197, ng0);

LAB31:    xsi_set_current_line(198, ng0);
    xsi_set_current_line(198, ng0);
    t81 = ((char*)((ng1)));
    t82 = (t0 + 5608);
    xsi_vlogvar_assign_value(t82, t81, 0, 0, 4);

LAB32:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng36)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB34;

LAB33:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB35;

LAB36:    t18 = (t6 + 4);
    t7 = *((unsigned int *)t18);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB38;

LAB39:    goto LAB30;

LAB34:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB36;

LAB35:    *((unsigned int *)t6) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(199, ng0);

LAB40:    xsi_set_current_line(200, ng0);
    t25 = (t0 + 4008);
    t30 = (t25 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 4008);
    t40 = (t32 + 72U);
    t41 = *((char **)t40);
    t58 = (t0 + 4008);
    t65 = (t58 + 64U);
    t66 = *((char **)t65);
    t67 = (t0 + 5608);
    t68 = (t67 + 56U);
    t74 = *((char **)t68);
    t75 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t26, 16, t31, t41, t66, 2, 2, t74, 4, 2, t75, 32, 1);
    t81 = (t0 + 4008);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t0 + 4008);
    t85 = (t84 + 72U);
    t86 = *((char **)t85);
    t87 = (t0 + 4008);
    t88 = (t87 + 64U);
    t89 = *((char **)t88);
    t90 = (t0 + 5608);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t64, 16, t83, t86, t89, 2, 2, t92, 4, 2, t93, 32, 1);
    xsi_vlogtype_concat(t19, 32, 32, 2U, t64, 16, t26, 16);
    t94 = (t0 + 5448);
    xsi_vlogvar_assign_value(t94, t19, 0, 0, 32);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1848U);
    t12 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t13);
    t21 = (t16 | t20);
    t22 = (~(t21));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB44;

LAB41:    if (t21 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t6) = 1;

LAB44:    t18 = (t6 + 4);
    t24 = *((unsigned int *)t18);
    t27 = (~(t24));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t33 = (t29 != 0);
    if (t33 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t12 = (t0 + 5608);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 4);
    goto LAB32;

LAB43:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(202, ng0);

LAB48:    xsi_set_current_line(203, ng0);
    t25 = ((char*)((ng7)));
    t30 = (t0 + 5928);
    xsi_vlogvar_assign_value(t30, t25, 0, 0, 1);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB47;

LAB50:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB52;

LAB51:    *((unsigned int *)t6) = 1;
    goto LAB52;

LAB54:    *((unsigned int *)t19) = 1;
    goto LAB57;

LAB56:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB57;

LAB58:    t31 = (t0 + 6088);
    t32 = (t31 + 56U);
    t40 = *((char **)t32);
    memset(t26, 0, 8);
    t41 = (t40 + 4);
    t20 = *((unsigned int *)t41);
    t21 = (~(t20));
    t22 = *((unsigned int *)t40);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB64;

LAB62:    if (*((unsigned int *)t41) == 0)
        goto LAB61;

LAB63:    t58 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t58) = 1;

LAB64:    memset(t64, 0, 8);
    t65 = (t26 + 4);
    t27 = *((unsigned int *)t65);
    t28 = (~(t27));
    t29 = *((unsigned int *)t26);
    t33 = (t29 & t28);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t65) != 0)
        goto LAB67;

LAB68:    t35 = *((unsigned int *)t19);
    t36 = *((unsigned int *)t64);
    t37 = (t35 & t36);
    *((unsigned int *)t95) = t37;
    t67 = (t19 + 4);
    t68 = (t64 + 4);
    t74 = (t95 + 4);
    t38 = *((unsigned int *)t67);
    t39 = *((unsigned int *)t68);
    t42 = (t38 | t39);
    *((unsigned int *)t74) = t42;
    t43 = *((unsigned int *)t74);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB60;

LAB61:    *((unsigned int *)t26) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t64) = 1;
    goto LAB68;

LAB67:    t66 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB68;

LAB69:    t45 = *((unsigned int *)t95);
    t46 = *((unsigned int *)t74);
    *((unsigned int *)t95) = (t45 | t46);
    t75 = (t19 + 4);
    t81 = (t64 + 4);
    t47 = *((unsigned int *)t19);
    t48 = (~(t47));
    t49 = *((unsigned int *)t75);
    t52 = (~(t49));
    t53 = *((unsigned int *)t64);
    t54 = (~(t53));
    t55 = *((unsigned int *)t81);
    t56 = (~(t55));
    t50 = (t48 & t52);
    t51 = (t54 & t56);
    t57 = (~(t50));
    t59 = (~(t51));
    t60 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t60 & t57);
    t61 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t61 & t59);
    t62 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t62 & t57);
    t63 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t63 & t59);
    goto LAB71;

LAB72:    *((unsigned int *)t96) = 1;
    goto LAB75;

LAB74:    t83 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB75;

LAB76:    t85 = (t0 + 6248);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memset(t97, 0, 8);
    t88 = (t87 + 4);
    t79 = *((unsigned int *)t88);
    t80 = (~(t79));
    t98 = *((unsigned int *)t87);
    t99 = (t98 & t80);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t88) != 0)
        goto LAB81;

LAB82:    t102 = *((unsigned int *)t96);
    t103 = *((unsigned int *)t97);
    t104 = (t102 & t103);
    *((unsigned int *)t101) = t104;
    t90 = (t96 + 4);
    t91 = (t97 + 4);
    t92 = (t101 + 4);
    t105 = *((unsigned int *)t90);
    t106 = *((unsigned int *)t91);
    t107 = (t105 | t106);
    *((unsigned int *)t92) = t107;
    t108 = *((unsigned int *)t92);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB78;

LAB79:    *((unsigned int *)t97) = 1;
    goto LAB82;

LAB81:    t89 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB82;

LAB83:    t110 = *((unsigned int *)t101);
    t111 = *((unsigned int *)t92);
    *((unsigned int *)t101) = (t110 | t111);
    t93 = (t96 + 4);
    t94 = (t97 + 4);
    t112 = *((unsigned int *)t96);
    t113 = (~(t112));
    t114 = *((unsigned int *)t93);
    t115 = (~(t114));
    t116 = *((unsigned int *)t97);
    t117 = (~(t116));
    t118 = *((unsigned int *)t94);
    t119 = (~(t118));
    t120 = (t113 & t115);
    t121 = (t117 & t119);
    t122 = (~(t120));
    t123 = (~(t121));
    t124 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t124 & t122);
    t125 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t125 & t123);
    t126 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t126 & t122);
    t127 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t127 & t123);
    goto LAB85;

LAB86:    xsi_set_current_line(212, ng0);

LAB89:    xsi_set_current_line(213, ng0);
    t134 = ((char*)((ng7)));
    t135 = (t0 + 5928);
    xsi_vlogvar_assign_value(t135, t134, 0, 0, 1);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 6408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng38, 1, t0);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 9120);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB90:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 6408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB88;

LAB91:    xsi_set_current_line(223, ng0);

LAB94:    xsi_set_current_line(224, ng0);
    t12 = (t0 + 4008);
    t13 = (t12 + 56U);
    t17 = *((char **)t13);
    t18 = (t0 + 4008);
    t25 = (t18 + 72U);
    t30 = *((char **)t25);
    t31 = (t0 + 4008);
    t32 = (t31 + 64U);
    t40 = *((char **)t32);
    t41 = (t0 + 5768);
    t58 = (t41 + 56U);
    t65 = *((char **)t58);
    t66 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t19, 16, t17, t30, t40, 2, 2, t65, 4, 2, t66, 32, 1);
    t67 = (t0 + 4008);
    t68 = (t67 + 56U);
    t74 = *((char **)t68);
    t75 = (t0 + 4008);
    t81 = (t75 + 72U);
    t82 = *((char **)t81);
    t83 = (t0 + 4008);
    t84 = (t83 + 64U);
    t85 = *((char **)t84);
    t86 = (t0 + 5768);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t26, 16, t74, t82, t85, 2, 2, t88, 4, 2, t89, 32, 1);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t26, 16, t19, 16);
    t90 = (t0 + 5448);
    xsi_vlogvar_assign_value(t90, t6, 0, 0, 32);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1848U);
    t12 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t13);
    t21 = (t16 | t20);
    t22 = (~(t21));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB98;

LAB95:    if (t21 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t6) = 1;

LAB98:    t18 = (t6 + 4);
    t24 = *((unsigned int *)t18);
    t27 = (~(t24));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t33 = (t29 != 0);
    if (t33 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(233, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng42)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB105;

LAB103:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB105;

LAB104:    *((unsigned int *)t6) = 1;

LAB105:    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(240, ng0);

LAB110:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 6408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5448);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng39, 2, t0, (char)118, t13, 32);
    t17 = (t0 + 1848U);
    t18 = *((char **)t17);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng40, 2, t0, (char)118, t18, 32);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng43, 1, t0);

LAB108:
LAB101:    xsi_set_current_line(245, ng0);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t12 = (t0 + 5768);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 4);
    goto LAB93;

LAB97:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB98;

LAB99:    xsi_set_current_line(227, ng0);

LAB102:    xsi_set_current_line(228, ng0);
    t25 = (t0 + 6408);
    t30 = (t25 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 5448);
    t40 = (t32 + 56U);
    t41 = *((char **)t40);
    xsi_vlogfile_fwrite(*((unsigned int *)t31), 0, 0, 0, ng39, 2, t0, (char)118, t41, 32);
    t58 = (t0 + 1848U);
    t65 = *((char **)t58);
    xsi_vlogfile_fwrite(*((unsigned int *)t31), 0, 0, 0, ng40, 2, t0, (char)118, t65, 32);
    xsi_vlogfile_fwrite(*((unsigned int *)t31), 1, 0, 0, ng41, 1, t0);
    goto LAB101;

LAB106:    xsi_set_current_line(234, ng0);

LAB109:    xsi_set_current_line(235, ng0);
    t13 = ((char*)((ng1)));
    t17 = (t0 + 6088);
    xsi_vlogvar_assign_value(t17, t13, 0, 0, 1);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 6408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB108;

}


extern void work_m_00000000000366631210_1312750992_init()
{
	static char *pe[] = {(void *)Initial_85_0,(void *)Always_127_1,(void *)Always_139_2,(void *)Cont_183_3,(void *)Cont_184_4,(void *)Cont_185_5,(void *)Cont_186_6,(void *)Cont_187_7,(void *)Always_191_8};
	xsi_register_didat("work_m_00000000000366631210_1312750992", "isim/i2s_in_test_isim_beh.exe.sim/work/m_00000000000366631210_1312750992.didat");
	xsi_register_executes(pe);
}
