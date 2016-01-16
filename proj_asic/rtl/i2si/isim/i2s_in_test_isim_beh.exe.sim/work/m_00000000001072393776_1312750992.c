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
static const char *ng0 = "C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/i2si/i2s_in_test.v";
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
static unsigned int ng24[] = {0U, 0U};
static int ng25[] = {8, 0};
static unsigned int ng26[] = {39365U, 0U};
static int ng27[] = {9, 0};
static unsigned int ng28[] = {29749U, 0U};
static unsigned int ng29[] = {27097U, 0U};
static int ng30[] = {10, 0};
static unsigned int ng31[] = {43981U, 0U};
static int ng32[] = {20, 0};
static unsigned int ng33[] = {14U, 0U};
static unsigned int ng34[] = {15U, 0U};
static int ng35[] = {11, 0};
static int ng36[] = {20000, 0};
static const char *ng37 = "No matches found. Test failed";
static const char *ng38 = "word: %h";
static const char *ng39 = "       ---      i2si_data: %h";
static const char *ng40 = "       ---      Pass";
static unsigned int ng41[] = {4294967295U, 4294967295U};
static const char *ng42 = "       ---      Fail";



static void Initial_87_0(char *t0)
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

LAB0:    xsi_set_current_line(87, ng0);

LAB2:    xsi_set_current_line(88, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(92, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname(ng4);
    t1 = (t3 + 4);
    *((int *)t1) = 0;
    t2 = (t0 + 6728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(105, ng0);
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

LAB4:    xsi_set_current_line(106, ng0);
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

LAB6:    xsi_set_current_line(107, ng0);
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

LAB8:    xsi_set_current_line(108, ng0);
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

LAB10:    xsi_set_current_line(109, ng0);
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

LAB12:    xsi_set_current_line(110, ng0);
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

LAB14:    xsi_set_current_line(111, ng0);
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

LAB16:    xsi_set_current_line(112, ng0);
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

LAB18:    xsi_set_current_line(113, ng0);
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

LAB20:    xsi_set_current_line(114, ng0);
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

LAB22:    xsi_set_current_line(115, ng0);
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

LAB24:    xsi_set_current_line(116, ng0);
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

LAB26:    xsi_set_current_line(117, ng0);
    t1 = ((char*)((ng6)));
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

LAB28:    xsi_set_current_line(118, ng0);
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

LAB30:    xsi_set_current_line(119, ng0);
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

LAB32:    xsi_set_current_line(120, ng0);
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

LAB34:    xsi_set_current_line(121, ng0);
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

LAB36:    xsi_set_current_line(122, ng0);
    t1 = ((char*)((ng24)));
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

LAB38:    xsi_set_current_line(123, ng0);
    t1 = ((char*)((ng26)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng27)));
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

LAB40:    xsi_set_current_line(124, ng0);
    t1 = ((char*)((ng28)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng27)));
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

LAB42:    xsi_set_current_line(125, ng0);
    t1 = ((char*)((ng29)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng30)));
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

LAB44:    xsi_set_current_line(126, ng0);
    t1 = ((char*)((ng31)));
    t2 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng30)));
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

static void Always_207_1(char *t0)
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

LAB0:    t1 = (t0 + 7896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(208, ng0);

LAB4:    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(210, ng0);

LAB5:    xsi_set_current_line(211, ng0);

LAB6:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 7704);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(212, ng0);
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
    xsi_set_current_line(213, ng0);
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

static void Always_219_2(char *t0)
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

LAB0:    t1 = (t0 + 8144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(219, ng0);
    t2 = (t0 + 9952);
    *((int *)t2) = 1;
    t3 = (t0 + 8176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(220, ng0);

LAB5:    xsi_set_current_line(221, ng0);
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

LAB11:    xsi_set_current_line(231, ng0);

LAB14:    xsi_set_current_line(233, ng0);
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

LAB20:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);

LAB21:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(242, ng0);
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

LAB10:    xsi_set_current_line(222, ng0);

LAB13:    xsi_set_current_line(223, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t25 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(234, ng0);

LAB22:    xsi_set_current_line(235, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(236, ng0);
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

LAB38:    xsi_set_current_line(244, ng0);

LAB41:    xsi_set_current_line(245, ng0);
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

LAB47:    xsi_set_current_line(257, ng0);
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

LAB46:    xsi_set_current_line(246, ng0);

LAB49:    xsi_set_current_line(247, ng0);
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

LAB55:    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB56:    xsi_set_current_line(254, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB48;

LAB52:    t111 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(248, ng0);

LAB57:    xsi_set_current_line(249, ng0);
    t118 = (t0 + 4968);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    t121 = ((char*)((ng7)));
    memset(t122, 0, 8);
    xsi_vlog_unsigned_add(t122, 32, t120, 32, t121, 32);
    t123 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t123, t122, 0, 0, 32, 0LL);
    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB56;

}

static void Cont_263_3(char *t0)
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

LAB0:    t1 = (t0 + 8392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(263, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng32)));
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

LAB12:    t18 = (t0 + 10128);
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
    t31 = (t0 + 9968);
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

static void Cont_264_4(char *t0)
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

LAB0:    t1 = (t0 + 8640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng32)));
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

LAB12:    t18 = (t0 + 10192);
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
    t31 = (t0 + 9984);
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

static void Cont_265_5(char *t0)
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

LAB0:    t1 = (t0 + 8888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(265, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 10256);
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
    t16 = (t0 + 10000);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_266_6(char *t0)
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

LAB0:    t1 = (t0 + 9136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(266, ng0);
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
    t13 = ((char*)((ng33)));
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
    t105 = ((char*)((ng34)));
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
LAB37:    t202 = (t0 + 10320);
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
    t215 = (t0 + 10016);
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

static void Cont_267_7(char *t0)
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

LAB0:    t1 = (t0 + 9384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(267, ng0);
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
    t29 = (t0 + 10384);
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
    t42 = (t0 + 10032);
    *((int *)t42) = 1;

LAB1:    return;
}

static void Always_275_8(char *t0)
{
    char t11[8];
    char t32[8];
    char t36[8];
    char t46[8];
    char t71[8];
    char t103[8];
    char t104[8];
    char t105[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
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
    unsigned int t69;
    unsigned int t70;
    unsigned int t72;
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
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
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

LAB0:    t1 = (t0 + 9632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(275, ng0);
    t2 = (t0 + 10048);
    *((int *)t2) = 1;
    t3 = (t0 + 9664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(276, ng0);

LAB5:    xsi_set_current_line(277, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(278, ng0);

LAB9:    xsi_set_current_line(279, ng0);
    t12 = (t0 + 6408);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t15) == 0)
        goto LAB10;

LAB12:    t21 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t21) = 1;

LAB13:    t22 = (t11 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t11);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(286, ng0);

LAB25:    xsi_set_current_line(288, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t5) == 0)
        goto LAB26;

LAB28:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;

LAB29:    t13 = (t11 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (~(t16));
    t18 = *((unsigned int *)t11);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(303, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng36)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB70;

LAB69:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB70;

LAB73:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB71;

LAB72:    memset(t32, 0, 8);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t15) != 0)
        goto LAB76;

LAB77:    t22 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t22);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB78;

LAB79:    memcpy(t71, t32, 8);

LAB80:    memset(t103, 0, 8);
    t44 = (t71 + 4);
    t84 = *((unsigned int *)t44);
    t85 = (~(t84));
    t86 = *((unsigned int *)t71);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t44) != 0)
        goto LAB94;

LAB95:    t47 = (t103 + 4);
    t89 = *((unsigned int *)t103);
    t92 = *((unsigned int *)t47);
    t93 = (t89 || t92);
    if (t93 > 0)
        goto LAB96;

LAB97:    memcpy(t105, t103, 8);

LAB98:    t128 = (t105 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t105);
    t132 = (t131 & t130);
    t133 = (t132 != 0);
    if (t133 > 0)
        goto LAB106;

LAB107:
LAB108:    xsi_set_current_line(314, ng0);
    t2 = (t0 + 6088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB111;

LAB112:
LAB113:
LAB16:    goto LAB8;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(280, ng0);

LAB17:    xsi_set_current_line(281, ng0);
    t28 = (t0 + 6568);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng7)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 2, t31, 32);
    t33 = (t0 + 6568);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 2);
    xsi_set_current_line(282, ng0);
    t2 = (t0 + 6568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t13);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB21;

LAB18:    if (t20 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t11) = 1;

LAB21:    t15 = (t11 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t34 = (t27 & t26);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB16;

LAB20:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(283, ng0);
    t21 = ((char*)((ng7)));
    t22 = (t0 + 6408);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB24;

LAB26:    *((unsigned int *)t11) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(289, ng0);

LAB33:    xsi_set_current_line(290, ng0);
    xsi_set_current_line(290, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 5608);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);

LAB34:    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng35)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB36;

LAB35:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB37;

LAB38:    t15 = (t11 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB40;

LAB41:    goto LAB32;

LAB36:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB38;

LAB37:    *((unsigned int *)t11) = 1;
    goto LAB38;

LAB40:    xsi_set_current_line(291, ng0);

LAB42:    xsi_set_current_line(292, ng0);
    t21 = (t0 + 4008);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 4008);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t33 = (t0 + 4008);
    t37 = (t33 + 64U);
    t38 = *((char **)t37);
    t39 = (t0 + 5608);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t36, 16, t28, t31, t38, 2, 2, t41, 4, 2, t42, 32, 1);
    t43 = (t0 + 4008);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t47 = (t0 + 4008);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = (t0 + 4008);
    t51 = (t50 + 64U);
    t52 = *((char **)t51);
    t53 = (t0 + 5608);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t46, 16, t45, t49, t52, 2, 2, t55, 4, 2, t56, 32, 1);
    xsi_vlogtype_concat(t32, 32, 32, 2U, t46, 16, t36, 16);
    t57 = (t0 + 5448);
    xsi_vlogvar_assign_value(t57, t32, 0, 0, 32);
    xsi_set_current_line(293, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1848U);
    t12 = *((char **)t5);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t13 = (t12 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t13);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB46;

LAB43:    if (t20 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t11) = 1;

LAB46:    memset(t32, 0, 8);
    t15 = (t11 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t34 = (t27 & t26);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t15) != 0)
        goto LAB49;

LAB50:    t22 = (t32 + 4);
    t58 = *((unsigned int *)t32);
    t59 = *((unsigned int *)t22);
    t60 = (t58 || t59);
    if (t60 > 0)
        goto LAB51;

LAB52:    memcpy(t71, t32, 8);

LAB53:    t44 = (t71 + 4);
    t98 = *((unsigned int *)t44);
    t99 = (~(t98));
    t100 = *((unsigned int *)t71);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB65;

LAB66:
LAB67:    xsi_set_current_line(290, ng0);
    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 4, t5, 32);
    t12 = (t0 + 5608);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB34;

LAB45:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t32) = 1;
    goto LAB50;

LAB49:    t21 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB50;

LAB51:    t28 = (t0 + 5928);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t36, 0, 8);
    t31 = (t30 + 4);
    t61 = *((unsigned int *)t31);
    t62 = (~(t61));
    t63 = *((unsigned int *)t30);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t31) == 0)
        goto LAB54;

LAB56:    t33 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t33) = 1;

LAB57:    memset(t46, 0, 8);
    t37 = (t36 + 4);
    t66 = *((unsigned int *)t37);
    t67 = (~(t66));
    t68 = *((unsigned int *)t36);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t37) != 0)
        goto LAB60;

LAB61:    t72 = *((unsigned int *)t32);
    t73 = *((unsigned int *)t46);
    t74 = (t72 & t73);
    *((unsigned int *)t71) = t74;
    t39 = (t32 + 4);
    t40 = (t46 + 4);
    t41 = (t71 + 4);
    t75 = *((unsigned int *)t39);
    t76 = *((unsigned int *)t40);
    t77 = (t75 | t76);
    *((unsigned int *)t41) = t77;
    t78 = *((unsigned int *)t41);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB53;

LAB54:    *((unsigned int *)t36) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t46) = 1;
    goto LAB61;

LAB60:    t38 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB61;

LAB62:    t80 = *((unsigned int *)t71);
    t81 = *((unsigned int *)t41);
    *((unsigned int *)t71) = (t80 | t81);
    t42 = (t32 + 4);
    t43 = (t46 + 4);
    t82 = *((unsigned int *)t32);
    t83 = (~(t82));
    t84 = *((unsigned int *)t42);
    t85 = (~(t84));
    t86 = *((unsigned int *)t46);
    t87 = (~(t86));
    t88 = *((unsigned int *)t43);
    t89 = (~(t88));
    t90 = (t83 & t85);
    t91 = (t87 & t89);
    t92 = (~(t90));
    t93 = (~(t91));
    t94 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t94 & t92);
    t95 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t95 & t93);
    t96 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t96 & t92);
    t97 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t97 & t93);
    goto LAB64;

LAB65:    xsi_set_current_line(294, ng0);

LAB68:    xsi_set_current_line(295, ng0);
    t45 = ((char*)((ng7)));
    t47 = (t0 + 5928);
    xsi_vlogvar_assign_value(t47, t45, 0, 0, 1);
    xsi_set_current_line(296, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(297, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(298, ng0);
    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB67;

LAB70:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB72;

LAB71:    *((unsigned int *)t11) = 1;
    goto LAB72;

LAB74:    *((unsigned int *)t32) = 1;
    goto LAB77;

LAB76:    t21 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB77;

LAB78:    t28 = (t0 + 6088);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t36, 0, 8);
    t31 = (t30 + 4);
    t19 = *((unsigned int *)t31);
    t20 = (~(t19));
    t23 = *((unsigned int *)t30);
    t24 = (t23 & t20);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB84;

LAB82:    if (*((unsigned int *)t31) == 0)
        goto LAB81;

LAB83:    t33 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t33) = 1;

LAB84:    memset(t46, 0, 8);
    t37 = (t36 + 4);
    t26 = *((unsigned int *)t37);
    t27 = (~(t26));
    t34 = *((unsigned int *)t36);
    t35 = (t34 & t27);
    t58 = (t35 & 1U);
    if (t58 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t37) != 0)
        goto LAB87;

LAB88:    t59 = *((unsigned int *)t32);
    t60 = *((unsigned int *)t46);
    t61 = (t59 & t60);
    *((unsigned int *)t71) = t61;
    t39 = (t32 + 4);
    t40 = (t46 + 4);
    t41 = (t71 + 4);
    t62 = *((unsigned int *)t39);
    t63 = *((unsigned int *)t40);
    t64 = (t62 | t63);
    *((unsigned int *)t41) = t64;
    t65 = *((unsigned int *)t41);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB80;

LAB81:    *((unsigned int *)t36) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t46) = 1;
    goto LAB88;

LAB87:    t38 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB88;

LAB89:    t67 = *((unsigned int *)t71);
    t68 = *((unsigned int *)t41);
    *((unsigned int *)t71) = (t67 | t68);
    t42 = (t32 + 4);
    t43 = (t46 + 4);
    t69 = *((unsigned int *)t32);
    t70 = (~(t69));
    t72 = *((unsigned int *)t42);
    t73 = (~(t72));
    t74 = *((unsigned int *)t46);
    t75 = (~(t74));
    t76 = *((unsigned int *)t43);
    t77 = (~(t76));
    t90 = (t70 & t73);
    t91 = (t75 & t77);
    t78 = (~(t90));
    t79 = (~(t91));
    t80 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t80 & t78);
    t81 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t81 & t79);
    t82 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t82 & t78);
    t83 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t83 & t79);
    goto LAB91;

LAB92:    *((unsigned int *)t103) = 1;
    goto LAB95;

LAB94:    t45 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB95;

LAB96:    t48 = (t0 + 6248);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t104, 0, 8);
    t51 = (t50 + 4);
    t94 = *((unsigned int *)t51);
    t95 = (~(t94));
    t96 = *((unsigned int *)t50);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t51) != 0)
        goto LAB101;

LAB102:    t99 = *((unsigned int *)t103);
    t100 = *((unsigned int *)t104);
    t101 = (t99 & t100);
    *((unsigned int *)t105) = t101;
    t53 = (t103 + 4);
    t54 = (t104 + 4);
    t55 = (t105 + 4);
    t102 = *((unsigned int *)t53);
    t106 = *((unsigned int *)t54);
    t107 = (t102 | t106);
    *((unsigned int *)t55) = t107;
    t108 = *((unsigned int *)t55);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB103;

LAB104:
LAB105:    goto LAB98;

LAB99:    *((unsigned int *)t104) = 1;
    goto LAB102;

LAB101:    t52 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB102;

LAB103:    t110 = *((unsigned int *)t105);
    t111 = *((unsigned int *)t55);
    *((unsigned int *)t105) = (t110 | t111);
    t56 = (t103 + 4);
    t57 = (t104 + 4);
    t112 = *((unsigned int *)t103);
    t113 = (~(t112));
    t114 = *((unsigned int *)t56);
    t115 = (~(t114));
    t116 = *((unsigned int *)t104);
    t117 = (~(t116));
    t118 = *((unsigned int *)t57);
    t119 = (~(t118));
    t120 = (t113 & t115);
    t121 = (t117 & t119);
    t122 = (~(t120));
    t123 = (~(t121));
    t124 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t124 & t122);
    t125 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t125 & t123);
    t126 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t126 & t122);
    t127 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t127 & t123);
    goto LAB105;

LAB106:    xsi_set_current_line(304, ng0);

LAB109:    xsi_set_current_line(305, ng0);
    t134 = ((char*)((ng7)));
    t135 = (t0 + 5928);
    xsi_vlogvar_assign_value(t135, t134, 0, 0, 1);
    xsi_set_current_line(306, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(307, ng0);
    t2 = (t0 + 6728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng37, 1, t0);
    xsi_set_current_line(308, ng0);
    t2 = (t0 + 9440);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB110;
    goto LAB1;

LAB110:    xsi_set_current_line(309, ng0);
    t2 = (t0 + 6728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB108;

LAB111:    xsi_set_current_line(315, ng0);

LAB114:    xsi_set_current_line(316, ng0);
    t12 = (t0 + 4008);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 4008);
    t21 = (t15 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 4008);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 5768);
    t33 = (t31 + 56U);
    t37 = *((char **)t33);
    t38 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t32, 16, t14, t22, t30, 2, 2, t37, 4, 2, t38, 32, 1);
    t39 = (t0 + 4008);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t0 + 4008);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 4008);
    t47 = (t45 + 64U);
    t48 = *((char **)t47);
    t49 = (t0 + 5768);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t36, 16, t41, t44, t48, 2, 2, t51, 4, 2, t52, 32, 1);
    xsi_vlogtype_concat(t11, 32, 32, 2U, t36, 16, t32, 16);
    t53 = (t0 + 5448);
    xsi_vlogvar_assign_value(t53, t11, 0, 0, 32);
    xsi_set_current_line(318, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1848U);
    t12 = *((char **)t5);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t13 = (t12 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t13);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB118;

LAB115:    if (t20 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t11) = 1;

LAB118:    t15 = (t11 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t34 = (t27 & t26);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB119;

LAB120:    xsi_set_current_line(325, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng41)));
    memset(t11, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB125;

LAB123:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB125;

LAB124:    *((unsigned int *)t11) = 1;

LAB125:    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(332, ng0);

LAB130:    xsi_set_current_line(333, ng0);
    t2 = (t0 + 6728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5448);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng38, 2, t0, (char)118, t13, 32);
    t14 = (t0 + 1848U);
    t15 = *((char **)t14);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng39, 2, t0, (char)118, t15, 32);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng42, 1, t0);

LAB128:
LAB121:    xsi_set_current_line(337, ng0);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 4, t5, 32);
    t12 = (t0 + 5768);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB113;

LAB117:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB118;

LAB119:    xsi_set_current_line(319, ng0);

LAB122:    xsi_set_current_line(320, ng0);
    t21 = (t0 + 6728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 5448);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlogfile_fwrite(*((unsigned int *)t28), 0, 0, 0, ng38, 2, t0, (char)118, t31, 32);
    t33 = (t0 + 1848U);
    t37 = *((char **)t33);
    xsi_vlogfile_fwrite(*((unsigned int *)t28), 0, 0, 0, ng39, 2, t0, (char)118, t37, 32);
    xsi_vlogfile_fwrite(*((unsigned int *)t28), 1, 0, 0, ng40, 1, t0);
    goto LAB121;

LAB126:    xsi_set_current_line(326, ng0);

LAB129:    xsi_set_current_line(327, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 6088);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    xsi_set_current_line(328, ng0);
    t2 = (t0 + 6728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB128;

}


extern void work_m_00000000001072393776_1312750992_init()
{
	static char *pe[] = {(void *)Initial_87_0,(void *)Always_207_1,(void *)Always_219_2,(void *)Cont_263_3,(void *)Cont_264_4,(void *)Cont_265_5,(void *)Cont_266_6,(void *)Cont_267_7,(void *)Always_275_8};
	xsi_register_didat("work_m_00000000001072393776_1312750992", "isim/i2s_in_test_isim_beh.exe.sim/work/m_00000000001072393776_1312750992.didat");
	xsi_register_executes(pe);
}
