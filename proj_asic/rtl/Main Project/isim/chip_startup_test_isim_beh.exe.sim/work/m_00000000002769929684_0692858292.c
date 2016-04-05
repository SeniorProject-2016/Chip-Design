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
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/Main Project/chip_startup_test.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {20, 0};
static unsigned int ng4[] = {14U, 0U};
static unsigned int ng5[] = {15U, 0U};



static void Initial_87_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(87, ng0);

LAB2:    xsi_set_current_line(89, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2680);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3000);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(94, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3160);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3320);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_103_1(char *t0)
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

LAB0:    t1 = (t0 + 5928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);

LAB4:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);

LAB6:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 5736);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(108, ng0);
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
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3480);
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

static void Always_115_2(char *t0)
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

LAB0:    t1 = (t0 + 6176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 7240);
    *((int *)t2) = 1;
    t3 = (t0 + 6208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(116, ng0);

LAB5:    xsi_set_current_line(117, ng0);
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

LAB11:    xsi_set_current_line(127, ng0);

LAB14:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 472);
    t12 = *((char **)t6);
    t6 = ((char*)((ng2)));
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

LAB16:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);

LAB17:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3800);
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

LAB10:    xsi_set_current_line(118, ng0);

LAB13:    xsi_set_current_line(119, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(130, ng0);

LAB18:    xsi_set_current_line(131, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2840);
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
    t20 = (t0 + 2840);
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

LAB34:    xsi_set_current_line(140, ng0);

LAB37:    xsi_set_current_line(141, ng0);
    t64 = (t0 + 4120);
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

LAB39:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);

LAB40:    goto LAB36;

LAB38:    xsi_set_current_line(142, ng0);

LAB41:    xsi_set_current_line(143, ng0);
    t75 = (t0 + 4280);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t78 = ((char*)((ng2)));
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

LAB43:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB44:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB40;

LAB42:    xsi_set_current_line(144, ng0);

LAB45:    xsi_set_current_line(145, ng0);
    t86 = (t0 + 4440);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = ((char*)((ng2)));
    memset(t90, 0, 8);
    xsi_vlog_signed_add(t90, 32, t88, 32, t89, 32);
    t91 = (t0 + 4440);
    xsi_vlogvar_wait_assign_value(t91, t90, 0, 0, 32, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB44;

}

static void Cont_160_3(char *t0)
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

LAB0:    t1 = (t0 + 6424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 3480);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
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

LAB7:    t15 = (t0 + 7368);
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
    t28 = (t0 + 7256);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Cont_163_4(char *t0)
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

LAB0:    t1 = (t0 + 6672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4120);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t2, 32, t5, 32);
    t7 = (t0 + 4120);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
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
LAB11:    t47 = (t0 + 4280);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng2)));
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
LAB14:    t84 = (t0 + 4120);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    t87 = ((char*)((ng5)));
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

LAB18:    t104 = (t0 + 4280);
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
LAB24:    t169 = (t0 + 7432);
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
    t182 = (t0 + 7272);
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

static void Cont_166_5(char *t0)
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

LAB0:    t1 = (t0 + 6920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3640);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3640);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 4440);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 4280);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 2, t14, 32, 1, t17, 32, 1);
    t19 = (t0 + 3640);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 608);
    t23 = *((char **)t22);
    t22 = (t0 + 4120);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    xsi_vlog_signed_minus(t26, 32, t23, 32, t25, 32);
    xsi_vlog_generic_get_index_select_value(t18, 1, t5, t21, 2, t26, 32, 1);
    t27 = (t0 + 7496);
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
    t40 = (t0 + 7288);
    *((int *)t40) = 1;

LAB1:    return;
}


extern void work_m_00000000002769929684_0692858292_init()
{
	static char *pe[] = {(void *)Initial_87_0,(void *)Always_103_1,(void *)Always_115_2,(void *)Cont_160_3,(void *)Cont_163_4,(void *)Cont_166_5};
	xsi_register_didat("work_m_00000000002769929684_0692858292", "isim/chip_startup_test_isim_beh.exe.sim/work/m_00000000002769929684_0692858292.didat");
	xsi_register_executes(pe);
}
