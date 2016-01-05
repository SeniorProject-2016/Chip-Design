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
static const char *ng0 = "C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/i2so/i2s_out/i2s_out_test.v";
static const char *ng1 = "---Cannot queue: Buffer Full---";
static const char *ng2 = "Queued ";
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {4294967295U, 0U};
static unsigned int ng6[] = {2863311530U, 0U};
static unsigned int ng7[] = {4294901760U, 0U};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {65535U, 0U};
static int ng10[] = {3, 0};
static unsigned int ng11[] = {3435973836U, 0U};
static int ng12[] = {4, 0};
static unsigned int ng13[] = {858993459U, 0U};
static int ng14[] = {5, 0};
static unsigned int ng15[] = {286331153U, 0U};
static int ng16[] = {6, 0};
static unsigned int ng17[] = {8738U, 0U};
static int ng18[] = {7, 0};
static unsigned int ng19[] = {61166U, 0U};
static int ng20[] = {8, 0};
static unsigned int ng21[] = {34952U, 0U};
static int ng22[] = {9, 0};
static int ng23[] = {20, 0};



static int sp_queue(char *t1, char *t2)
{
    char t5[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
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
    char *t20;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(163, ng0);
    t6 = (t1 + 1800U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t6) == 0)
        goto LAB5;

LAB7:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(166, ng0);

LAB12:    xsi_set_current_line(167, ng0);
    t4 = (t1 + 4600);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t13 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 2, t13, (char)118, t7, 32);
    xsi_set_current_line(168, ng0);
    t4 = (t1 + 4600);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t13 = (t1 + 3000);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 32);
    xsi_set_current_line(169, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 2840);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t4 = (t2 + 88U);
    t6 = *((char **)t4);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB13;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    *((unsigned int *)t5) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(164, ng0);
    t20 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t20);

LAB11:    goto LAB4;

LAB13:    xsi_set_current_line(171, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB14;
    t0 = 1;
    goto LAB1;

LAB14:    xsi_set_current_line(171, ng0);
    t7 = ((char*)((ng4)));
    t13 = (t1 + 2840);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 1);
    goto LAB11;

}

static void Initial_60_0(char *t0)
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
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 5520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);

LAB4:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4440);
    t6 = (t0 + 4440);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4440);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4440);
    t6 = (t0 + 4440);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4440);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4440);
    t6 = (t0 + 4440);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4440);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4440);
    t6 = (t0 + 4440);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4440);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4440);
    t6 = (t0 + 4440);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4440);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4440);
    t6 = (t0 + 4440);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4440);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4440);
    t6 = (t0 + 4440);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4440);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4440);
    t6 = (t0 + 4440);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4440);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 4440);
    t6 = (t0 + 4440);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4440);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4440);
    t6 = (t0 + 4440);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4440);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5328);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB25;

LAB1:    return;
LAB5:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB6;

LAB7:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB10;

LAB11:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB12;

LAB13:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB14;

LAB15:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB16;

LAB17:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB18;

LAB19:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB20;

LAB21:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB22;

LAB23:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB24;

LAB25:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 4440);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 4440);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t6, t9, t12, 2, 1, t13, 32, 1);
    t16 = (t0 + 5328);
    t24 = (t0 + 848);
    t25 = xsi_create_subprogram_invocation(t16, 0, t0, t24, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t24, t25);
    t26 = (t0 + 4600);
    xsi_vlogvar_assign_value(t26, t4, 0, 0, 32);

LAB28:    t27 = (t0 + 5424);
    t28 = *((char **)t27);
    t29 = (t28 + 80U);
    t30 = *((char **)t29);
    t31 = (t30 + 272U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    t34 = *((char **)t33);
    t15 = ((int  (*)(char *, char *))t34)(t0, t28);

LAB30:    if (t15 != 0)
        goto LAB31;

LAB26:    t28 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t28);

LAB27:    t35 = (t0 + 5424);
    t36 = *((char **)t35);
    t35 = (t0 + 848);
    t37 = (t0 + 5328);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5328);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB29:;
LAB31:    t27 = (t0 + 5520U);
    *((char **)t27) = &&LAB28;
    goto LAB1;

LAB32:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 4440);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 4440);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t6, t9, t12, 2, 1, t13, 32, 1);
    t16 = (t0 + 5328);
    t24 = (t0 + 848);
    t25 = xsi_create_subprogram_invocation(t16, 0, t0, t24, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t24, t25);
    t26 = (t0 + 4600);
    xsi_vlogvar_assign_value(t26, t4, 0, 0, 32);

LAB35:    t27 = (t0 + 5424);
    t28 = *((char **)t27);
    t29 = (t28 + 80U);
    t30 = *((char **)t29);
    t31 = (t30 + 272U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    t34 = *((char **)t33);
    t15 = ((int  (*)(char *, char *))t34)(t0, t28);

LAB37:    if (t15 != 0)
        goto LAB38;

LAB33:    t28 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t28);

LAB34:    t35 = (t0 + 5424);
    t36 = *((char **)t35);
    t35 = (t0 + 848);
    t37 = (t0 + 5328);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5328);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB36:;
LAB38:    t27 = (t0 + 5520U);
    *((char **)t27) = &&LAB35;
    goto LAB1;

LAB39:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 4440);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 4440);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t6, t9, t12, 2, 1, t13, 32, 1);
    t16 = (t0 + 5328);
    t24 = (t0 + 848);
    t25 = xsi_create_subprogram_invocation(t16, 0, t0, t24, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t24, t25);
    t26 = (t0 + 4600);
    xsi_vlogvar_assign_value(t26, t4, 0, 0, 32);

LAB42:    t27 = (t0 + 5424);
    t28 = *((char **)t27);
    t29 = (t28 + 80U);
    t30 = *((char **)t29);
    t31 = (t30 + 272U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    t34 = *((char **)t33);
    t15 = ((int  (*)(char *, char *))t34)(t0, t28);

LAB44:    if (t15 != 0)
        goto LAB45;

LAB40:    t28 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t28);

LAB41:    t35 = (t0 + 5424);
    t36 = *((char **)t35);
    t35 = (t0 + 848);
    t37 = (t0 + 5328);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 5328);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB43:;
LAB45:    t27 = (t0 + 5520U);
    *((char **)t27) = &&LAB42;
    goto LAB1;

LAB46:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 4440);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 4440);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t6, t9, t12, 2, 1, t13, 32, 1);
    t16 = (t0 + 5328);
    t24 = (t0 + 848);
    t25 = xsi_create_subprogram_invocation(t16, 0, t0, t24, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t24, t25);
    t26 = (t0 + 4600);
    xsi_vlogvar_assign_value(t26, t4, 0, 0, 32);

LAB49:    t27 = (t0 + 5424);
    t28 = *((char **)t27);
    t29 = (t28 + 80U);
    t30 = *((char **)t29);
    t31 = (t30 + 272U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    t34 = *((char **)t33);
    t15 = ((int  (*)(char *, char *))t34)(t0, t28);

LAB51:    if (t15 != 0)
        goto LAB52;

LAB47:    t28 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t28);

LAB48:    t35 = (t0 + 5424);
    t36 = *((char **)t35);
    t35 = (t0 + 848);
    t37 = (t0 + 5328);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5328);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB50:;
LAB52:    t27 = (t0 + 5520U);
    *((char **)t27) = &&LAB49;
    goto LAB1;

LAB53:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 4440);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 4440);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t6, t9, t12, 2, 1, t13, 32, 1);
    t16 = (t0 + 5328);
    t24 = (t0 + 848);
    t25 = xsi_create_subprogram_invocation(t16, 0, t0, t24, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t24, t25);
    t26 = (t0 + 4600);
    xsi_vlogvar_assign_value(t26, t4, 0, 0, 32);

LAB56:    t27 = (t0 + 5424);
    t28 = *((char **)t27);
    t29 = (t28 + 80U);
    t30 = *((char **)t29);
    t31 = (t30 + 272U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    t34 = *((char **)t33);
    t15 = ((int  (*)(char *, char *))t34)(t0, t28);

LAB58:    if (t15 != 0)
        goto LAB59;

LAB54:    t28 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t28);

LAB55:    t35 = (t0 + 5424);
    t36 = *((char **)t35);
    t35 = (t0 + 848);
    t37 = (t0 + 5328);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5328);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB57:;
LAB59:    t27 = (t0 + 5520U);
    *((char **)t27) = &&LAB56;
    goto LAB1;

LAB60:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 4440);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 4440);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t6, t9, t12, 2, 1, t13, 32, 1);
    t16 = (t0 + 5328);
    t24 = (t0 + 848);
    t25 = xsi_create_subprogram_invocation(t16, 0, t0, t24, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t24, t25);
    t26 = (t0 + 4600);
    xsi_vlogvar_assign_value(t26, t4, 0, 0, 32);

LAB63:    t27 = (t0 + 5424);
    t28 = *((char **)t27);
    t29 = (t28 + 80U);
    t30 = *((char **)t29);
    t31 = (t30 + 272U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    t34 = *((char **)t33);
    t15 = ((int  (*)(char *, char *))t34)(t0, t28);

LAB65:    if (t15 != 0)
        goto LAB66;

LAB61:    t28 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t28);

LAB62:    t35 = (t0 + 5424);
    t36 = *((char **)t35);
    t35 = (t0 + 848);
    t37 = (t0 + 5328);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5328);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB64:;
LAB66:    t27 = (t0 + 5520U);
    *((char **)t27) = &&LAB63;
    goto LAB1;

LAB67:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 4440);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 4440);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t6, t9, t12, 2, 1, t13, 32, 1);
    t16 = (t0 + 5328);
    t24 = (t0 + 848);
    t25 = xsi_create_subprogram_invocation(t16, 0, t0, t24, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t24, t25);
    t26 = (t0 + 4600);
    xsi_vlogvar_assign_value(t26, t4, 0, 0, 32);

LAB70:    t27 = (t0 + 5424);
    t28 = *((char **)t27);
    t29 = (t28 + 80U);
    t30 = *((char **)t29);
    t31 = (t30 + 272U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    t34 = *((char **)t33);
    t15 = ((int  (*)(char *, char *))t34)(t0, t28);

LAB72:    if (t15 != 0)
        goto LAB73;

LAB68:    t28 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t28);

LAB69:    t35 = (t0 + 5424);
    t36 = *((char **)t35);
    t35 = (t0 + 848);
    t37 = (t0 + 5328);
    t38 = 0;
    xsi_delete_subprogram_invocation(t35, t36, t0, t37, t38);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5328);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB71:;
LAB73:    t27 = (t0 + 5520U);
    *((char **)t27) = &&LAB70;
    goto LAB1;

LAB74:    goto LAB1;

}

static void Always_101_1(char *t0)
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

LAB0:    t1 = (t0 + 5768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);

LAB4:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(104, ng0);

LAB5:    xsi_set_current_line(105, ng0);

LAB6:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5576);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 2680);
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
    t24 = (t0 + 2680);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3960);
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

static void Always_113_2(char *t0)
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

LAB0:    t1 = (t0 + 6016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 6832);
    *((int *)t2) = 1;
    t3 = (t0 + 6048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(114, ng0);

LAB5:    xsi_set_current_line(115, ng0);
    t5 = (t0 + 1480U);
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

LAB11:    xsi_set_current_line(123, ng0);

LAB14:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3640);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng3)));
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

LAB20:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);

LAB21:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(116, ng0);

LAB13:    xsi_set_current_line(117, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 4280);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t25 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(126, ng0);

LAB22:    xsi_set_current_line(127, ng0);
    t32 = ((char*)((ng4)));
    t33 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3800);
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
    t20 = (t0 + 3800);
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

}

static void Cont_158_3(char *t0)
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

LAB0:    t1 = (t0 + 6264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3960);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng23)));
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

LAB12:    t18 = (t0 + 6960);
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
    t31 = (t0 + 6848);
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

static void Cont_159_4(char *t0)
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

LAB0:    t1 = (t0 + 6512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3320);
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
LAB12:    t58 = (t0 + 7024);
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
    t71 = (t0 + 6864);
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


extern void work_m_00000000000743279802_0338862783_init()
{
	static char *pe[] = {(void *)Initial_60_0,(void *)Always_101_1,(void *)Always_113_2,(void *)Cont_158_3,(void *)Cont_159_4};
	static char *se[] = {(void *)sp_queue};
	xsi_register_didat("work_m_00000000000743279802_0338862783", "isim/i2s_out_test_isim_beh.exe.sim/work/m_00000000000743279802_0338862783.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
