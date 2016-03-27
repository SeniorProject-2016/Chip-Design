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
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/i2s_in_test4.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {25U, 0U};
static const char *ng4 = "i2s_in_test4_output.txt";
static int ng5[] = {101, 0};
static int ng6[] = {2, 0};
static int ng7[] = {1, 0};
static int ng8[] = {20, 0};
static unsigned int ng9[] = {14U, 0U};
static unsigned int ng10[] = {15U, 0U};
static int ng11[] = {20000, 0};
static const char *ng12 = "No matches found. Test failed";
static const char *ng13 = "Input: %h";
static const char *ng14 = "       ---      Output: %h";
static const char *ng15 = "       ---      Pass";
static unsigned int ng16[] = {4294967295U, 4294967295U};
static const char *ng17 = "\nNumber of Comparisons:                    %d";
static const char *ng18 = "\nNumber of Successful Comparisons:         %d";
static const char *ng19 = "\nNumber of Failed Comparisons:           %d";
static const char *ng20 = "       ---      Fail";



static void Initial_96_0(char *t0)
{
    char t3[8];
    char t14[8];
    char t15[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;

LAB0:    xsi_set_current_line(96, ng0);

LAB2:    xsi_set_current_line(97, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3160);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3320);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3480);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 12);
    xsi_set_current_line(100, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3640);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(101, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3800);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 12);
    xsi_set_current_line(102, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3960);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4120);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname(ng4);
    t1 = (t3 + 4);
    *((int *)t1) = 0;
    t2 = (t0 + 7320);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    xsi_set_current_line(111, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5400);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 5400);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng5)));
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t4, 32, t5, 32);
    t6 = (t3 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(112, ng0);

LAB6:    xsi_set_current_line(113, ng0);
    xsi_set_current_line(113, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 5560);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);

LAB7:    t1 = (t0 + 5560);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng6)));
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t4, 32, t5, 32);
    t6 = (t3 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 5400);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng7)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t4, 32, t5, 32);
    t6 = (t0 + 5400);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB3;

LAB8:    xsi_set_current_line(114, ng0);

LAB10:    xsi_set_current_line(115, ng0);
    *((int *)t14) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t12 = (t14 + 4);
    *((int *)t12) = 0;
    t13 = (t0 + 5240);
    t17 = (t0 + 5240);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 5240);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 5400);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 5560);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 2, t25, 32, 1, t28, 32, 1);
    t29 = (t15 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 5560);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng7)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t4, 32, t5, 32);
    t6 = (t0 + 5560);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB7;

LAB11:    t36 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t13, t14, 0, *((unsigned int *)t16), t39);
    goto LAB12;

}

static void Always_128_1(char *t0)
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

LAB0:    t1 = (t0 + 8488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);

LAB4:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(131, ng0);

LAB5:    xsi_set_current_line(132, ng0);

LAB6:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 8296);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(133, ng0);
    t3 = (t0 + 3160);
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
    t24 = (t0 + 3160);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4440);
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

static void Always_140_2(char *t0)
{
    char t4[8];
    char t21[8];
    char t69[8];
    char t79[8];
    char t90[8];
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
    char *t25;
    char *t26;
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
    char *t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t91;

LAB0:    t1 = (t0 + 8736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 10544);
    *((int *)t2) = 1;
    t3 = (t0 + 8768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(141, ng0);

LAB5:    xsi_set_current_line(142, ng0);
    t5 = (t0 + 1320U);
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

LAB11:    xsi_set_current_line(152, ng0);

LAB14:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4600);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 472);
    t12 = *((char **)t6);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 32, t12, 32, t6, 32);
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t5, 32, t4, 32);
    t13 = (t21 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t21);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 4600);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 4600);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);

LAB17:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4280);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4280);
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
        goto LAB28;

LAB26:    if (*((unsigned int *)t19) == 0)
        goto LAB25;

LAB27:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;

LAB28:    t25 = (t4 + 4);
    t26 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t25) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB30;

LAB29:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t24 & 1U);
    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t4);
    t29 = (t27 & t28);
    *((unsigned int *)t21) = t29;
    t30 = (t5 + 4);
    t31 = (t4 + 4);
    t32 = (t21 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB31;

LAB32:
LAB33:    t58 = (t21 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t21);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB34;

LAB35:
LAB36:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(143, ng0);

LAB13:    xsi_set_current_line(144, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4600);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(155, ng0);

LAB18:    xsi_set_current_line(156, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4600);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 3320);
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
        goto LAB22;

LAB20:    if (*((unsigned int *)t6) == 0)
        goto LAB19;

LAB21:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB22:    t13 = (t4 + 4);
    t19 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB24;

LAB23:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 1U);
    t20 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);
    goto LAB17;

LAB19:    *((unsigned int *)t4) = 1;
    goto LAB22;

LAB24:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t18 | t22);
    goto LAB23;

LAB25:    *((unsigned int *)t4) = 1;
    goto LAB28;

LAB30:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t26);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t25);
    t22 = *((unsigned int *)t26);
    *((unsigned int *)t25) = (t18 | t22);
    goto LAB29;

LAB31:    t38 = *((unsigned int *)t21);
    t39 = *((unsigned int *)t32);
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
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t56 & t52);
    t57 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t57 & t53);
    goto LAB33;

LAB34:    xsi_set_current_line(165, ng0);

LAB37:    xsi_set_current_line(166, ng0);
    t64 = (t0 + 4760);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t0 + 608);
    t68 = *((char **)t67);
    memset(t69, 0, 8);
    xsi_vlog_signed_equal(t69, 32, t66, 32, t68, 32);
    t67 = (t69 + 4);
    t70 = *((unsigned int *)t67);
    t71 = (~(t70));
    t72 = *((unsigned int *)t69);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 4760);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);

LAB40:    goto LAB36;

LAB38:    xsi_set_current_line(167, ng0);

LAB41:    xsi_set_current_line(168, ng0);
    t75 = (t0 + 4920);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t78 = ((char*)((ng7)));
    memset(t79, 0, 8);
    xsi_vlog_signed_equal(t79, 32, t77, 32, t78, 32);
    t80 = (t79 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(174, ng0);

LAB46:    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB44:    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB40;

LAB42:    xsi_set_current_line(169, ng0);

LAB45:    xsi_set_current_line(170, ng0);
    t86 = (t0 + 5080);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = ((char*)((ng7)));
    memset(t90, 0, 8);
    xsi_vlog_signed_add(t90, 32, t88, 32, t89, 32);
    t91 = (t0 + 5080);
    xsi_vlogvar_wait_assign_value(t91, t90, 0, 0, 32, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB44;

}

static void Cont_187_3(char *t0)
{
    char t3[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 8984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 4440);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng8)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t5, 32, t6, 32);
    memset(t3, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t8) == 0)
        goto LAB4;

LAB6:    t14 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t14) = 1;

LAB7:    t15 = (t0 + 10720);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 1U;
    t21 = t20;
    t22 = (t3 + 4);
    t23 = *((unsigned int *)t3);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 0, 0);
    t28 = (t0 + 10560);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Cont_188_4(char *t0)
{
    char t3[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 9232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 4440);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng8)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t5, 32, t6, 32);
    memset(t3, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t8) == 0)
        goto LAB4;

LAB6:    t14 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t14) = 1;

LAB7:    t15 = (t0 + 10784);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 1U;
    t21 = t20;
    t22 = (t3 + 4);
    t23 = *((unsigned int *)t3);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 0, 0);
    t28 = (t0 + 10576);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Cont_189_5(char *t0)
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

LAB0:    t1 = (t0 + 9480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t0 + 10848);
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
    t16 = (t0 + 10592);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_190_6(char *t0)
{
    char t6[8];
    char t11[8];
    char t15[8];
    char t51[8];
    char t52[8];
    char t88[8];
    char t108[8];
    char t109[8];
    char t141[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    unsigned int t91;
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
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;

LAB0:    t1 = (t0 + 9728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4760);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t2, 32, t5, 32);
    t7 = (t0 + 4760);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    memset(t11, 0, 8);
    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB5;

LAB4:    t13 = (t10 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t9) > *((unsigned int *)t10))
        goto LAB7;

LAB6:    *((unsigned int *)t11) = 1;

LAB7:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t11);
    t18 = (t16 & t17);
    *((unsigned int *)t15) = t18;
    t19 = (t6 + 4);
    t20 = (t11 + 4);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t20);
    t24 = (t22 | t23);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB9;

LAB10:
LAB11:    t47 = (t0 + 4920);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng7)));
    memset(t51, 0, 8);
    xsi_vlog_signed_equal(t51, 32, t49, 32, t50, 32);
    t53 = *((unsigned int *)t15);
    t54 = *((unsigned int *)t51);
    t55 = (t53 & t54);
    *((unsigned int *)t52) = t55;
    t56 = (t15 + 4);
    t57 = (t51 + 4);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB12;

LAB13:
LAB14:    t84 = (t0 + 4760);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    t87 = ((char*)((ng10)));
    memset(t88, 0, 8);
    t89 = (t86 + 4);
    t90 = (t87 + 4);
    t91 = *((unsigned int *)t86);
    t92 = *((unsigned int *)t87);
    t93 = (t91 ^ t92);
    t94 = *((unsigned int *)t89);
    t95 = *((unsigned int *)t90);
    t96 = (t94 ^ t95);
    t97 = (t93 | t96);
    t98 = *((unsigned int *)t89);
    t99 = *((unsigned int *)t90);
    t100 = (t98 | t99);
    t101 = (~(t100));
    t102 = (t97 & t101);
    if (t102 != 0)
        goto LAB18;

LAB15:    if (t100 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t88) = 1;

LAB18:    t104 = (t0 + 4920);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = ((char*)((ng1)));
    memset(t108, 0, 8);
    xsi_vlog_signed_equal(t108, 32, t106, 32, t107, 32);
    t110 = *((unsigned int *)t88);
    t111 = *((unsigned int *)t108);
    t112 = (t110 & t111);
    *((unsigned int *)t109) = t112;
    t113 = (t88 + 4);
    t114 = (t108 + 4);
    t115 = (t109 + 4);
    t116 = *((unsigned int *)t113);
    t117 = *((unsigned int *)t114);
    t118 = (t116 | t117);
    *((unsigned int *)t115) = t118;
    t119 = *((unsigned int *)t115);
    t120 = (t119 != 0);
    if (t120 == 1)
        goto LAB19;

LAB20:
LAB21:    t142 = *((unsigned int *)t52);
    t143 = *((unsigned int *)t109);
    t144 = (t142 | t143);
    *((unsigned int *)t141) = t144;
    t145 = (t52 + 4);
    t146 = (t109 + 4);
    t147 = (t141 + 4);
    t148 = *((unsigned int *)t145);
    t149 = *((unsigned int *)t146);
    t150 = (t148 | t149);
    *((unsigned int *)t147) = t150;
    t151 = *((unsigned int *)t147);
    t152 = (t151 != 0);
    if (t152 == 1)
        goto LAB22;

LAB23:
LAB24:    t169 = (t0 + 10912);
    t170 = (t169 + 56U);
    t171 = *((char **)t170);
    t172 = (t171 + 56U);
    t173 = *((char **)t172);
    memset(t173, 0, 8);
    t174 = 1U;
    t175 = t174;
    t176 = (t141 + 4);
    t177 = *((unsigned int *)t141);
    t174 = (t174 & t177);
    t178 = *((unsigned int *)t176);
    t175 = (t175 & t178);
    t179 = (t173 + 4);
    t180 = *((unsigned int *)t173);
    *((unsigned int *)t173) = (t180 | t174);
    t181 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t181 | t175);
    xsi_driver_vfirst_trans(t169, 0, 0);
    t182 = (t0 + 10608);
    *((int *)t182) = 1;

LAB1:    return;
LAB5:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB9:    t27 = *((unsigned int *)t15);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t15) = (t27 | t28);
    t29 = (t6 + 4);
    t30 = (t11 + 4);
    t31 = *((unsigned int *)t6);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t11);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (~(t37));
    t39 = (t32 & t34);
    t40 = (t36 & t38);
    t41 = (~(t39));
    t42 = (~(t40));
    t43 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t43 & t41);
    t44 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t44 & t42);
    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & t41);
    t46 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t46 & t42);
    goto LAB11;

LAB12:    t64 = *((unsigned int *)t52);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t52) = (t64 | t65);
    t66 = (t15 + 4);
    t67 = (t51 + 4);
    t68 = *((unsigned int *)t15);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t51);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t76 = (t69 & t71);
    t77 = (t73 & t75);
    t78 = (~(t76));
    t79 = (~(t77));
    t80 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t80 & t78);
    t81 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t81 & t79);
    t82 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t82 & t78);
    t83 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t83 & t79);
    goto LAB14;

LAB17:    t103 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB18;

LAB19:    t121 = *((unsigned int *)t109);
    t122 = *((unsigned int *)t115);
    *((unsigned int *)t109) = (t121 | t122);
    t123 = (t88 + 4);
    t124 = (t108 + 4);
    t125 = *((unsigned int *)t88);
    t126 = (~(t125));
    t127 = *((unsigned int *)t123);
    t128 = (~(t127));
    t129 = *((unsigned int *)t108);
    t130 = (~(t129));
    t131 = *((unsigned int *)t124);
    t132 = (~(t131));
    t133 = (t126 & t128);
    t134 = (t130 & t132);
    t135 = (~(t133));
    t136 = (~(t134));
    t137 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t137 & t135);
    t138 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t138 & t136);
    t139 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t139 & t135);
    t140 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t140 & t136);
    goto LAB21;

LAB22:    t153 = *((unsigned int *)t141);
    t154 = *((unsigned int *)t147);
    *((unsigned int *)t141) = (t153 | t154);
    t155 = (t52 + 4);
    t156 = (t109 + 4);
    t157 = *((unsigned int *)t155);
    t158 = (~(t157));
    t159 = *((unsigned int *)t52);
    t160 = (t159 & t158);
    t161 = *((unsigned int *)t156);
    t162 = (~(t161));
    t163 = *((unsigned int *)t109);
    t164 = (t163 & t162);
    t165 = (~(t160));
    t166 = (~(t164));
    t167 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t167 & t165);
    t168 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t168 & t166);
    goto LAB24;

}

static void Cont_191_7(char *t0)
{
    char t5[8];
    char t18[8];
    char t26[8];
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
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 9976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 5240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 5240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 5080);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 4920);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 2, t14, 32, 1, t17, 32, 1);
    t19 = (t0 + 5240);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 608);
    t23 = *((char **)t22);
    t22 = (t0 + 4760);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    xsi_vlog_signed_minus(t26, 32, t23, 32, t25, 32);
    xsi_vlog_generic_get_index_select_value(t18, 1, t5, t21, 2, t26, 32, 1);
    t27 = (t0 + 10976);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 1U;
    t33 = t32;
    t34 = (t18 + 4);
    t35 = *((unsigned int *)t18);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 0);
    t40 = (t0 + 10624);
    *((int *)t40) = 1;

LAB1:    return;
}

static void Always_198_8(char *t0)
{
    char t11[8];
    char t32[8];
    char t34[8];
    char t41[8];
    char t68[8];
    char t100[8];
    char t101[8];
    char t102[8];
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
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
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
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
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
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
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
    int t117;
    int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;

LAB0:    t1 = (t0 + 10224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 10640);
    *((int *)t2) = 1;
    t3 = (t0 + 10256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(199, ng0);

LAB5:    xsi_set_current_line(200, ng0);
    t4 = (t0 + 2280U);
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

LAB6:    xsi_set_current_line(201, ng0);

LAB9:    xsi_set_current_line(202, ng0);
    t12 = (t0 + 7000);
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

LAB15:    xsi_set_current_line(209, ng0);

LAB21:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 6520);
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
        goto LAB25;

LAB23:    if (*((unsigned int *)t5) == 0)
        goto LAB22;

LAB24:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;

LAB25:    t13 = (t11 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (~(t16));
    t18 = *((unsigned int *)t11);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t11, 0, 8);
    xsi_vlog_signed_greater(t11, 32, t4, 32, t5, 32);
    memset(t32, 0, 8);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t12) != 0)
        goto LAB62;

LAB63:    t14 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t14);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB64;

LAB65:    memcpy(t68, t32, 8);

LAB66:    memset(t100, 0, 8);
    t39 = (t68 + 4);
    t81 = *((unsigned int *)t39);
    t82 = (~(t81));
    t83 = *((unsigned int *)t68);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t39) != 0)
        goto LAB80;

LAB81:    t42 = (t100 + 4);
    t86 = *((unsigned int *)t100);
    t89 = *((unsigned int *)t42);
    t90 = (t86 || t89);
    if (t90 > 0)
        goto LAB82;

LAB83:    memcpy(t102, t100, 8);

LAB84:    t125 = (t102 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t102);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB92;

LAB93:
LAB94:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 6680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB97;

LAB98:
LAB99:
LAB16:    goto LAB8;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(203, ng0);

LAB17:    xsi_set_current_line(204, ng0);
    t28 = (t0 + 6360);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng7)));
    memset(t32, 0, 8);
    xsi_vlog_signed_add(t32, 32, t30, 32, t31, 32);
    t33 = (t0 + 6360);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 32);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 6360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t4, 32, t5, 32);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB16;

LAB18:    xsi_set_current_line(206, ng0);
    t13 = ((char*)((ng7)));
    t14 = (t0 + 7000);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    goto LAB20;

LAB22:    *((unsigned int *)t11) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(212, ng0);

LAB29:    xsi_set_current_line(213, ng0);
    xsi_set_current_line(213, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 5720);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);

LAB30:    t2 = (t0 + 5720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t11, 0, 8);
    xsi_vlog_signed_less(t11, 32, t4, 32, t5, 32);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB31;

LAB32:    goto LAB28;

LAB31:    xsi_set_current_line(214, ng0);

LAB33:    xsi_set_current_line(215, ng0);
    t13 = (t0 + 5240);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t21 = (t0 + 5240);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = (t0 + 5240);
    t30 = (t29 + 64U);
    t31 = *((char **)t30);
    t33 = (t0 + 5720);
    t35 = (t33 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t34, 16, t15, t28, t31, 2, 2, t36, 32, 1, t37, 32, 1);
    t38 = (t0 + 5240);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t42 = (t0 + 5240);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 5240);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t48 = (t0 + 5720);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t41, 16, t40, t44, t47, 2, 2, t50, 32, 1, t51, 32, 1);
    xsi_vlogtype_concat(t32, 32, 32, 2U, t41, 16, t34, 16);
    t52 = (t0 + 7160);
    xsi_vlogvar_assign_value(t52, t32, 0, 0, 32);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 7160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2120U);
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
        goto LAB37;

LAB34:    if (t20 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t11) = 1;

LAB37:    memset(t32, 0, 8);
    t15 = (t11 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t53 = (t27 & t26);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t15) != 0)
        goto LAB40;

LAB41:    t22 = (t32 + 4);
    t55 = *((unsigned int *)t32);
    t56 = *((unsigned int *)t22);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB42;

LAB43:    memcpy(t68, t32, 8);

LAB44:    t43 = (t68 + 4);
    t95 = *((unsigned int *)t43);
    t96 = (~(t95));
    t97 = *((unsigned int *)t68);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB56;

LAB57:
LAB58:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 5720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t4, 32, t5, 32);
    t12 = (t0 + 5720);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB30;

LAB36:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t32) = 1;
    goto LAB41;

LAB40:    t21 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB41;

LAB42:    t28 = (t0 + 6520);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t34, 0, 8);
    t31 = (t30 + 4);
    t58 = *((unsigned int *)t31);
    t59 = (~(t58));
    t60 = *((unsigned int *)t30);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB48;

LAB46:    if (*((unsigned int *)t31) == 0)
        goto LAB45;

LAB47:    t33 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t33) = 1;

LAB48:    memset(t41, 0, 8);
    t35 = (t34 + 4);
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t34);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t35) != 0)
        goto LAB51;

LAB52:    t69 = *((unsigned int *)t32);
    t70 = *((unsigned int *)t41);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t37 = (t32 + 4);
    t38 = (t41 + 4);
    t39 = (t68 + 4);
    t72 = *((unsigned int *)t37);
    t73 = *((unsigned int *)t38);
    t74 = (t72 | t73);
    *((unsigned int *)t39) = t74;
    t75 = *((unsigned int *)t39);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB44;

LAB45:    *((unsigned int *)t34) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t41) = 1;
    goto LAB52;

LAB51:    t36 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB52;

LAB53:    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t39);
    *((unsigned int *)t68) = (t77 | t78);
    t40 = (t32 + 4);
    t42 = (t41 + 4);
    t79 = *((unsigned int *)t32);
    t80 = (~(t79));
    t81 = *((unsigned int *)t40);
    t82 = (~(t81));
    t83 = *((unsigned int *)t41);
    t84 = (~(t83));
    t85 = *((unsigned int *)t42);
    t86 = (~(t85));
    t87 = (t80 & t82);
    t88 = (t84 & t86);
    t89 = (~(t87));
    t90 = (~(t88));
    t91 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t91 & t89);
    t92 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t92 & t90);
    t93 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t93 & t89);
    t94 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t94 & t90);
    goto LAB55;

LAB56:    xsi_set_current_line(217, ng0);

LAB59:    xsi_set_current_line(218, ng0);
    t44 = ((char*)((ng7)));
    t45 = (t0 + 6520);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 1);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 5720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5880);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB58;

LAB60:    *((unsigned int *)t32) = 1;
    goto LAB63;

LAB62:    t13 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB63;

LAB64:    t15 = (t0 + 6680);
    t21 = (t15 + 56U);
    t22 = *((char **)t21);
    memset(t34, 0, 8);
    t28 = (t22 + 4);
    t19 = *((unsigned int *)t28);
    t20 = (~(t19));
    t23 = *((unsigned int *)t22);
    t24 = (t23 & t20);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB70;

LAB68:    if (*((unsigned int *)t28) == 0)
        goto LAB67;

LAB69:    t29 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t29) = 1;

LAB70:    memset(t41, 0, 8);
    t30 = (t34 + 4);
    t26 = *((unsigned int *)t30);
    t27 = (~(t26));
    t53 = *((unsigned int *)t34);
    t54 = (t53 & t27);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t30) != 0)
        goto LAB73;

LAB74:    t56 = *((unsigned int *)t32);
    t57 = *((unsigned int *)t41);
    t58 = (t56 & t57);
    *((unsigned int *)t68) = t58;
    t33 = (t32 + 4);
    t35 = (t41 + 4);
    t36 = (t68 + 4);
    t59 = *((unsigned int *)t33);
    t60 = *((unsigned int *)t35);
    t61 = (t59 | t60);
    *((unsigned int *)t36) = t61;
    t62 = *((unsigned int *)t36);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB66;

LAB67:    *((unsigned int *)t34) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t41) = 1;
    goto LAB74;

LAB73:    t31 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB74;

LAB75:    t64 = *((unsigned int *)t68);
    t65 = *((unsigned int *)t36);
    *((unsigned int *)t68) = (t64 | t65);
    t37 = (t32 + 4);
    t38 = (t41 + 4);
    t66 = *((unsigned int *)t32);
    t67 = (~(t66));
    t69 = *((unsigned int *)t37);
    t70 = (~(t69));
    t71 = *((unsigned int *)t41);
    t72 = (~(t71));
    t73 = *((unsigned int *)t38);
    t74 = (~(t73));
    t87 = (t67 & t70);
    t88 = (t72 & t74);
    t75 = (~(t87));
    t76 = (~(t88));
    t77 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t77 & t75);
    t78 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t78 & t76);
    t79 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t79 & t75);
    t80 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t80 & t76);
    goto LAB77;

LAB78:    *((unsigned int *)t100) = 1;
    goto LAB81;

LAB80:    t40 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB81;

LAB82:    t43 = (t0 + 6840);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t101, 0, 8);
    t46 = (t45 + 4);
    t91 = *((unsigned int *)t46);
    t92 = (~(t91));
    t93 = *((unsigned int *)t45);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t46) != 0)
        goto LAB87;

LAB88:    t96 = *((unsigned int *)t100);
    t97 = *((unsigned int *)t101);
    t98 = (t96 & t97);
    *((unsigned int *)t102) = t98;
    t48 = (t100 + 4);
    t49 = (t101 + 4);
    t50 = (t102 + 4);
    t99 = *((unsigned int *)t48);
    t103 = *((unsigned int *)t49);
    t104 = (t99 | t103);
    *((unsigned int *)t50) = t104;
    t105 = *((unsigned int *)t50);
    t106 = (t105 != 0);
    if (t106 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB84;

LAB85:    *((unsigned int *)t101) = 1;
    goto LAB88;

LAB87:    t47 = (t101 + 4);
    *((unsigned int *)t101) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB88;

LAB89:    t107 = *((unsigned int *)t102);
    t108 = *((unsigned int *)t50);
    *((unsigned int *)t102) = (t107 | t108);
    t51 = (t100 + 4);
    t52 = (t101 + 4);
    t109 = *((unsigned int *)t100);
    t110 = (~(t109));
    t111 = *((unsigned int *)t51);
    t112 = (~(t111));
    t113 = *((unsigned int *)t101);
    t114 = (~(t113));
    t115 = *((unsigned int *)t52);
    t116 = (~(t115));
    t117 = (t110 & t112);
    t118 = (t114 & t116);
    t119 = (~(t117));
    t120 = (~(t118));
    t121 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t121 & t119);
    t122 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t122 & t120);
    t123 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t123 & t119);
    t124 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t124 & t120);
    goto LAB91;

LAB92:    xsi_set_current_line(227, ng0);

LAB95:    xsi_set_current_line(228, ng0);
    t131 = ((char*)((ng7)));
    t132 = (t0 + 6520);
    xsi_vlogvar_assign_value(t132, t131, 0, 0, 1);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 10032);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB96;
    goto LAB1;

LAB96:    xsi_set_current_line(231, ng0);
    t3 = (t0 + 7320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    goto LAB94;

LAB97:    xsi_set_current_line(237, ng0);

LAB100:    xsi_set_current_line(238, ng0);
    t12 = (t0 + 5240);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 5240);
    t21 = (t15 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 5240);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 5880);
    t33 = (t31 + 56U);
    t35 = *((char **)t33);
    t36 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t32, 16, t14, t22, t30, 2, 2, t35, 32, 1, t36, 32, 1);
    t37 = (t0 + 5240);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 5240);
    t42 = (t40 + 72U);
    t43 = *((char **)t42);
    t44 = (t0 + 5240);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = (t0 + 5880);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t34, 16, t39, t43, t46, 2, 2, t49, 32, 1, t50, 32, 1);
    xsi_vlogtype_concat(t11, 32, 32, 2U, t34, 16, t32, 16);
    t51 = (t0 + 7160);
    xsi_vlogvar_assign_value(t51, t11, 0, 0, 32);
    xsi_set_current_line(240, ng0);
    t2 = (t0 + 7160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2120U);
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
        goto LAB104;

LAB101:    if (t20 != 0)
        goto LAB103;

LAB102:    *((unsigned int *)t11) = 1;

LAB104:    t15 = (t11 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t53 = (t27 & t26);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng16)));
    memset(t11, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB111;

LAB109:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB111;

LAB110:    *((unsigned int *)t11) = 1;

LAB111:    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB112;

LAB113:    xsi_set_current_line(258, ng0);

LAB117:    xsi_set_current_line(259, ng0);
    t2 = (t0 + 6200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t4, 32, t5, 32);
    t12 = (t0 + 6200);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(260, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7160);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng13, 2, t0, (char)118, t13, 32);
    t14 = (t0 + 2120U);
    t15 = *((char **)t14);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng14, 2, t0, (char)118, t15, 32);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng20, 1, t0);

LAB114:
LAB107:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 5880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t4, 32, t5, 32);
    t12 = (t0 + 5880);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB99;

LAB103:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB104;

LAB105:    xsi_set_current_line(241, ng0);

LAB108:    xsi_set_current_line(242, ng0);
    t21 = (t0 + 6040);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng7)));
    memset(t32, 0, 8);
    xsi_vlog_signed_add(t32, 32, t28, 32, t29, 32);
    t30 = (t0 + 6040);
    xsi_vlogvar_assign_value(t30, t32, 0, 0, 32);
    xsi_set_current_line(243, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7160);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng13, 2, t0, (char)118, t13, 32);
    t14 = (t0 + 2120U);
    t15 = *((char **)t14);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng14, 2, t0, (char)118, t15, 32);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng15, 1, t0);
    goto LAB107;

LAB112:    xsi_set_current_line(249, ng0);

LAB115:    xsi_set_current_line(250, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 6680);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    xsi_set_current_line(251, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6040);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 6200);
    t15 = (t14 + 56U);
    t21 = *((char **)t15);
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t13, 32, t21, 32);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng17, 2, t0, (char)119, t11, 32);
    t22 = (t0 + 6040);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng18, 2, t0, (char)119, t29, 32);
    t30 = (t0 + 6200);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng19, 2, t0, (char)119, t33, 32);
    xsi_set_current_line(254, ng0);
    t2 = (t0 + 10032);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB116;
    goto LAB1;

LAB116:    xsi_set_current_line(254, ng0);
    t3 = (t0 + 7320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    goto LAB114;

}


extern void work_m_00000000001211970023_2775429251_init()
{
	static char *pe[] = {(void *)Initial_96_0,(void *)Always_128_1,(void *)Always_140_2,(void *)Cont_187_3,(void *)Cont_188_4,(void *)Cont_189_5,(void *)Cont_190_6,(void *)Cont_191_7,(void *)Always_198_8};
	xsi_register_didat("work_m_00000000001211970023_2775429251", "isim/i2s_in_test4_isim_beh.exe.sim/work/m_00000000001211970023_2775429251.didat");
	xsi_register_executes(pe);
}
