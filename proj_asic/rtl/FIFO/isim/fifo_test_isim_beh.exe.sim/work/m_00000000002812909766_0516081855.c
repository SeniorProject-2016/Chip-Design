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
static const char *ng0 = "C:/Users/Zachary/Desktop/FIFO/fifo_test.v";
static const char *ng1 = "---Cannot push: Buffer Full---";
static const char *ng2 = "Pushed ";
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static const char *ng5 = "---Cannot Pop: Buffer Empty---";
static const char *ng6 = "-------------------------------Poped ";
static int ng7[] = {10, 0};
static int ng8[] = {20, 0};
static int ng9[] = {30, 0};
static int ng10[] = {40, 0};
static int ng11[] = {50, 0};
static int ng12[] = {60, 0};
static int ng13[] = {70, 0};
static int ng14[] = {80, 0};
static int ng15[] = {90, 0};
static int ng16[] = {100, 0};
static int ng17[] = {110, 0};
static int ng18[] = {120, 0};
static int ng19[] = {130, 0};
static int ng20[] = {140, 0};
static int ng21[] = {5, 0};
static int ng22[] = {2, 0};



static int sp_push(char *t1, char *t2)
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
    xsi_set_current_line(73, ng0);
    t6 = (t1 + 2392U);
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

LAB10:    xsi_set_current_line(76, ng0);

LAB12:    xsi_set_current_line(77, ng0);
    t4 = (t1 + 3912);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t13 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 2, t13, (char)118, t7, 8);
    xsi_set_current_line(78, ng0);
    t4 = (t1 + 3912);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t13 = (t1 + 3432);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 3112);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(80, ng0);
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

LAB9:    xsi_set_current_line(74, ng0);
    t20 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t20);

LAB11:    goto LAB4;

LAB13:    xsi_set_current_line(81, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB14;
    t0 = 1;
    goto LAB1;

LAB14:    xsi_set_current_line(81, ng0);
    t7 = ((char*)((ng4)));
    t13 = (t1 + 3112);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 1);
    goto LAB11;

}

static int sp_pop(char *t1, char *t2)
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

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(87, ng0);
    t6 = (t1 + 2232U);
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

LAB10:    xsi_set_current_line(90, ng0);

LAB12:    xsi_set_current_line(91, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 3272);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(92, ng0);
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

LAB9:    xsi_set_current_line(88, ng0);
    t20 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t20);

LAB11:    goto LAB4;

LAB13:    xsi_set_current_line(93, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB14;
    t0 = 1;
    goto LAB1;

LAB14:    xsi_set_current_line(93, ng0);
    t7 = ((char*)((ng4)));
    t13 = (t1 + 3272);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t4 = (t1 + 1912U);
    t6 = *((char **)t4);
    t4 = (t1 + 4072);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 8);
    xsi_set_current_line(95, ng0);
    t4 = (t1 + 4072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t13 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t13, (char)118, t7, 8);
    goto LAB11;

}

static void Initial_14_0(char *t0)
{
    char t20[8];
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 4992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);

LAB4:    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 15000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(22, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB8:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB10:    if (t15 != 0)
        goto LAB11;

LAB6:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB7:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 5296);
    t3 = (t0 + 4800);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 5544);
    t5 = (t0 + 4800);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 3752);
    memset(t20, 0, 8);
    *((unsigned int *)t20) = 2;
    xsi_vlogvar_assign_value(t6, t20, 0, 0, 32);
    t7 = (t0 + 6056);
    *((int *)t7) = 1;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:;
LAB11:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB8;
    goto LAB1;

LAB12:    t8 = (t0 + 3752);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    if (*((int *)t10) > 0)
        goto LAB13;

LAB14:    t12 = (t0 + 4800);
    xsi_clean_active_fork_process_list(t12);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB17:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB19:    if (t15 != 0)
        goto LAB20;

LAB15:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB16:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB23:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB25:    if (t15 != 0)
        goto LAB26;

LAB21:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB22:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB29:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB31:    if (t15 != 0)
        goto LAB32;

LAB27:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB28:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB35:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB37:    if (t15 != 0)
        goto LAB38;

LAB33:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB34:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB41:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB43:    if (t15 != 0)
        goto LAB44;

LAB39:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB40:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB47:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB49:    if (t15 != 0)
        goto LAB50;

LAB45:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB46:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB53:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB55:    if (t15 != 0)
        goto LAB56;

LAB51:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB52:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB59:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB61:    if (t15 != 0)
        goto LAB62;

LAB57:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB58:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB65:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB67:    if (t15 != 0)
        goto LAB68;

LAB63:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB64:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB71:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB73:    if (t15 != 0)
        goto LAB74;

LAB69:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB70:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB77:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB79:    if (t15 != 0)
        goto LAB80;

LAB75:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB76:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB83:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB85:    if (t15 != 0)
        goto LAB86;

LAB81:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB82:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB89:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB91:    if (t15 != 0)
        goto LAB92;

LAB87:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB88:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB95:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB97:    if (t15 != 0)
        goto LAB98;

LAB93:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB94:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4800);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3912);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 8);

LAB101:    t9 = (t0 + 4896);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t16 = (t14 + 0U);
    t17 = *((char **)t16);
    t15 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB103:    if (t15 != 0)
        goto LAB104;

LAB99:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB100:    t18 = (t0 + 4896);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t21, t22);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB107:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB109:    if (t15 != 0)
        goto LAB110;

LAB105:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB106:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB113:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB115:    if (t15 != 0)
        goto LAB116;

LAB111:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB112:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB119:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB121:    if (t15 != 0)
        goto LAB122;

LAB117:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB118:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB125:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB127:    if (t15 != 0)
        goto LAB128;

LAB123:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB124:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB131:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB133:    if (t15 != 0)
        goto LAB134;

LAB129:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB130:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB137:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB139:    if (t15 != 0)
        goto LAB140;

LAB135:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB136:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4800);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3912);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 8);

LAB143:    t9 = (t0 + 4896);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t16 = (t14 + 0U);
    t17 = *((char **)t16);
    t15 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB145:    if (t15 != 0)
        goto LAB146;

LAB141:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB142:    t18 = (t0 + 4896);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t21, t22);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB149:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB151:    if (t15 != 0)
        goto LAB152;

LAB147:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB148:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB155:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB157:    if (t15 != 0)
        goto LAB158;

LAB153:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB154:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB161:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB163:    if (t15 != 0)
        goto LAB164;

LAB159:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB160:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB167:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB169:    if (t15 != 0)
        goto LAB170;

LAB165:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB166:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB173:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB175:    if (t15 != 0)
        goto LAB176;

LAB171:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB172:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB179:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB181:    if (t15 != 0)
        goto LAB182;

LAB177:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB178:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB185:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB187:    if (t15 != 0)
        goto LAB188;

LAB183:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB184:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB191:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB193:    if (t15 != 0)
        goto LAB194;

LAB189:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB190:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB197:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB199:    if (t15 != 0)
        goto LAB200;

LAB195:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB196:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB203:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB205:    if (t15 != 0)
        goto LAB206;

LAB201:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB202:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB209:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB211:    if (t15 != 0)
        goto LAB212;

LAB207:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB208:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4800);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3912);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB215:    t7 = (t0 + 4896);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB217:    if (t15 != 0)
        goto LAB218;

LAB213:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB214:    t16 = (t0 + 4896);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4800);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4800);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB221:    t5 = (t0 + 4896);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t15 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB223:    if (t15 != 0)
        goto LAB224;

LAB219:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB220:    t13 = (t0 + 4896);
    t14 = *((char **)t13);
    t13 = (t0 + 4072);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3592);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    t19 = (t0 + 1280);
    t21 = (t0 + 4800);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t14, t0, t21, t22);
    goto LAB1;

LAB13:    t11 = (t0 + 6056);
    *((int *)t11) = 1;
    goto LAB1;

LAB18:;
LAB20:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB17;
    goto LAB1;

LAB24:;
LAB26:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB23;
    goto LAB1;

LAB30:;
LAB32:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB29;
    goto LAB1;

LAB36:;
LAB38:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB35;
    goto LAB1;

LAB42:;
LAB44:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB41;
    goto LAB1;

LAB48:;
LAB50:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB47;
    goto LAB1;

LAB54:;
LAB56:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB53;
    goto LAB1;

LAB60:;
LAB62:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB59;
    goto LAB1;

LAB66:;
LAB68:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB65;
    goto LAB1;

LAB72:;
LAB74:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB71;
    goto LAB1;

LAB78:;
LAB80:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB77;
    goto LAB1;

LAB84:;
LAB86:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB83;
    goto LAB1;

LAB90:;
LAB92:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB89;
    goto LAB1;

LAB96:;
LAB98:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB95;
    goto LAB1;

LAB102:;
LAB104:    t9 = (t0 + 4992U);
    *((char **)t9) = &&LAB101;
    goto LAB1;

LAB108:;
LAB110:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB107;
    goto LAB1;

LAB114:;
LAB116:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB113;
    goto LAB1;

LAB120:;
LAB122:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB119;
    goto LAB1;

LAB126:;
LAB128:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB125;
    goto LAB1;

LAB132:;
LAB134:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB131;
    goto LAB1;

LAB138:;
LAB140:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB137;
    goto LAB1;

LAB144:;
LAB146:    t9 = (t0 + 4992U);
    *((char **)t9) = &&LAB143;
    goto LAB1;

LAB150:;
LAB152:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB149;
    goto LAB1;

LAB156:;
LAB158:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB155;
    goto LAB1;

LAB162:;
LAB164:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB161;
    goto LAB1;

LAB168:;
LAB170:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB167;
    goto LAB1;

LAB174:;
LAB176:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB173;
    goto LAB1;

LAB180:;
LAB182:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB179;
    goto LAB1;

LAB186:;
LAB188:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB185;
    goto LAB1;

LAB192:;
LAB194:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB191;
    goto LAB1;

LAB198:;
LAB200:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB197;
    goto LAB1;

LAB204:;
LAB206:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB203;
    goto LAB1;

LAB210:;
LAB212:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB209;
    goto LAB1;

LAB216:;
LAB218:    t7 = (t0 + 4992U);
    *((char **)t7) = &&LAB215;
    goto LAB1;

LAB222:;
LAB224:    t5 = (t0 + 4992U);
    *((char **)t5) = &&LAB221;
    goto LAB1;

}

static void Always_68_1(char *t0)
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

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5048);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 2792);
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
    t24 = (t0 + 2792);
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

static void Forked_26_2(char *t0)
{
    char t21[8];
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t22;

LAB0:    t1 = (t0 + 5488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5296);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(26, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 5296);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3912);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 8);

LAB8:    t8 = (t0 + 5392);
    t9 = *((char **)t8);
    t10 = (t9 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t16 = ((int  (*)(char *, char *))t15)(t0, t9);

LAB10:    if (t16 != 0)
        goto LAB11;

LAB6:    t9 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t9);

LAB7:    t17 = (t0 + 5392);
    t18 = *((char **)t17);
    t17 = (t0 + 848);
    t19 = (t0 + 5296);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);

LAB5:    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t21, t4, 8);
    t22 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t22 - 1);
    xsi_vlogvar_assign_value(t2, t21, 0, 0, 32);
    goto LAB2;

LAB9:;
LAB11:    t8 = (t0 + 5488U);
    *((char **)t8) = &&LAB8;
    goto LAB1;

}

static void Forked_27_3(char *t0)
{
    char t23[8];
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
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t24;

LAB0:    t1 = (t0 + 5736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5544);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(27, ng0);
    t3 = (t0 + 5544);
    t4 = (t0 + 1280);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB8:    t6 = (t0 + 5640);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB10:    if (t14 != 0)
        goto LAB11;

LAB6:    t7 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t7);

LAB7:    t15 = (t0 + 5640);
    t16 = *((char **)t15);
    t15 = (t0 + 4072);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 3592);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 8);
    t20 = (t0 + 1280);
    t21 = (t0 + 5544);
    t22 = 0;
    xsi_delete_subprogram_invocation(t20, t16, t0, t21, t22);

LAB5:    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t23, t4, 8);
    t24 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t24 - 1);
    xsi_vlogvar_assign_value(t2, t23, 0, 0, 32);
    goto LAB2;

LAB9:;
LAB11:    t6 = (t0 + 5736U);
    *((char **)t6) = &&LAB8;
    goto LAB1;

}


extern void work_m_00000000002812909766_0516081855_init()
{
	static char *pe[] = {(void *)Initial_14_0,(void *)Always_68_1,(void *)Forked_26_2,(void *)Forked_27_3};
	static char *se[] = {(void *)sp_push,(void *)sp_pop};
	xsi_register_didat("work_m_00000000002812909766_0516081855", "isim/fifo_test_isim_beh.exe.sim/work/m_00000000002812909766_0516081855.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
