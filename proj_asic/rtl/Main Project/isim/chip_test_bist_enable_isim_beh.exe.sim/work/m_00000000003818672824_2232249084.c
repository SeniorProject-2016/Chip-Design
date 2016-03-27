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
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/project/serializer.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};



static void Always_46_0(char *t0)
{
    char t4[8];
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

LAB0:    t1 = (t0 + 4928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 6488);
    *((int *)t2) = 1;
    t3 = (t0 + 4960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(49, ng0);
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

LAB9:    t13 = (t0 + 2888);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

}

static void Cont_53_1(char *t0)
{
    char t3[8];
    char t13[8];
    char t25[8];
    char t34[8];
    char t42[8];
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
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
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    memset(t13, 0, 8);
    t14 = (t3 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t3);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB11:    t21 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB12;

LAB13:    memcpy(t42, t13, 8);

LAB14:    t74 = (t0 + 6648);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    memset(t78, 0, 8);
    t79 = 1U;
    t80 = t79;
    t81 = (t42 + 4);
    t82 = *((unsigned int *)t42);
    t79 = (t79 & t82);
    t83 = *((unsigned int *)t81);
    t80 = (t80 & t83);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t85 | t79);
    t86 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t86 | t80);
    xsi_driver_vfirst_trans(t74, 0, 0);
    t87 = (t0 + 6504);
    *((int *)t87) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t13) = 1;
    goto LAB11;

LAB10:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB11;

LAB12:    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    memset(t25, 0, 8);
    t26 = (t27 + 4);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t27);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t26) == 0)
        goto LAB15;

LAB17:    t33 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t33) = 1;

LAB18:    memset(t34, 0, 8);
    t35 = (t25 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t25);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t35) != 0)
        goto LAB21;

LAB22:    t43 = *((unsigned int *)t13);
    t44 = *((unsigned int *)t34);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t13 + 4);
    t47 = (t34 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB15:    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t34) = 1;
    goto LAB22;

LAB21:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB22;

LAB23:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t13 + 4);
    t57 = (t34 + 4);
    t58 = *((unsigned int *)t13);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB25;

}

static void Always_83_2(char *t0)
{
    char t4[8];
    char t16[8];
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
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;

LAB0:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 6520);
    *((int *)t2) = 1;
    t3 = (t0 + 5456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);

LAB5:    xsi_set_current_line(85, ng0);
    t5 = (t0 + 1528U);
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

LAB9:    t13 = (t0 + 3688);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t15);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t20 = (t4 + 4);
    t21 = (t15 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB10;

LAB11:
LAB12:    t44 = (t16 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t16);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
    *((unsigned int *)t4) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t17 = (t10 | t11);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t12);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB17;

LAB18:
LAB19:    t15 = (t4 + 4);
    t38 = *((unsigned int *)t15);
    t40 = (~(t38));
    t41 = *((unsigned int *)t4);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB24;

LAB25:
LAB26:
LAB22:
LAB15:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    t30 = (t4 + 4);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t4);
    t35 = (t34 & t33);
    t36 = *((unsigned int *)t31);
    t37 = (~(t36));
    t38 = *((unsigned int *)t15);
    t39 = (t38 & t37);
    t40 = (~(t35));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    goto LAB12;

LAB13:    xsi_set_current_line(86, ng0);

LAB16:    xsi_set_current_line(87, ng0);
    t50 = ((char*)((ng1)));
    t51 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t51, t50, 0, 0, 1, 0LL);
    goto LAB15;

LAB17:    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t23 | t24);
    t13 = (t3 + 4);
    t14 = (t5 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t3);
    t35 = (t27 & t26);
    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    t32 = *((unsigned int *)t5);
    t39 = (t32 & t29);
    t33 = (~(t35));
    t34 = (~(t39));
    t36 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t36 & t33);
    t37 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t37 & t34);
    goto LAB19;

LAB20:    xsi_set_current_line(91, ng0);

LAB23:    xsi_set_current_line(92, ng0);
    t20 = ((char*)((ng2)));
    t21 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 1, 0LL);
    goto LAB22;

LAB24:    xsi_set_current_line(96, ng0);

LAB27:    xsi_set_current_line(97, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 1, 0LL);
    goto LAB26;

}

static void Always_105_3(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 6536);
    *((int *)t2) = 1;
    t3 = (t0 + 5704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(108, ng0);

LAB9:    xsi_set_current_line(109, ng0);
    t13 = ((char*)((ng3)));
    t14 = (t0 + 3208);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 8);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB10:    xsi_set_current_line(114, ng0);

LAB13:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

}

static void Cont_128_4(char *t0)
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

LAB0:    t1 = (t0 + 5920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 6712);
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
    t16 = (t0 + 6552);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_130_5(char *t0)
{
    char t15[8];
    char t16[8];
    char t83[8];
    char *t1;
    char *t2;
    char *t3;
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;

LAB0:    t1 = (t0 + 6168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 6568);
    *((int *)t2) = 1;
    t3 = (t0 + 6200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(131, ng0);

LAB5:    xsi_set_current_line(132, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t2) == 0)
        goto LAB14;

LAB16:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;

LAB17:    t5 = (t0 + 3848);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t17 = *((unsigned int *)t15);
    t18 = *((unsigned int *)t7);
    t19 = (t17 & t18);
    *((unsigned int *)t16) = t19;
    t13 = (t15 + 4);
    t14 = (t7 + 4);
    t20 = (t16 + 4);
    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t14);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB18;

LAB19:
LAB20:    t46 = (t16 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t16);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t15, 0, 8);
    t13 = (t7 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t13) == 0)
        goto LAB25;

LAB27:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;

LAB28:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t15);
    t19 = (t17 & t18);
    *((unsigned int *)t16) = t19;
    t20 = (t4 + 4);
    t28 = (t15 + 4);
    t29 = (t16 + 4);
    t21 = *((unsigned int *)t20);
    t22 = *((unsigned int *)t28);
    t23 = (t21 | t22);
    *((unsigned int *)t29) = t23;
    t24 = *((unsigned int *)t29);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB29;

LAB30:
LAB31:    t53 = (t16 + 4);
    t47 = *((unsigned int *)t53);
    t48 = (~(t47));
    t49 = *((unsigned int *)t16);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2168U);
    t6 = *((char **)t5);
    t5 = (t0 + 4008);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t13);
    t10 = (t8 | t9);
    *((unsigned int *)t15) = t10;
    t14 = (t6 + 4);
    t20 = (t13 + 4);
    t28 = (t15 + 4);
    t11 = *((unsigned int *)t14);
    t12 = *((unsigned int *)t20);
    t17 = (t11 | t12);
    *((unsigned int *)t28) = t17;
    t18 = *((unsigned int *)t28);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB36;

LAB37:
LAB38:    t35 = *((unsigned int *)t4);
    t36 = *((unsigned int *)t15);
    t37 = (t35 & t36);
    *((unsigned int *)t16) = t37;
    t52 = (t4 + 4);
    t53 = (t15 + 4);
    t54 = (t16 + 4);
    t40 = *((unsigned int *)t52);
    t41 = *((unsigned int *)t53);
    t42 = (t40 | t41);
    *((unsigned int *)t54) = t42;
    t43 = *((unsigned int *)t54);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB39;

LAB40:
LAB41:    t69 = (t16 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t16);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB42;

LAB43:
LAB44:
LAB34:
LAB23:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(133, ng0);

LAB9:    xsi_set_current_line(134, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(143, ng0);

LAB13:    xsi_set_current_line(144, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t15) = 1;
    goto LAB17;

LAB18:    t26 = *((unsigned int *)t16);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t16) = (t26 | t27);
    t28 = (t15 + 4);
    t29 = (t7 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t7);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & t40);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t41);
    t44 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t44 & t40);
    t45 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t45 & t41);
    goto LAB20;

LAB21:    xsi_set_current_line(149, ng0);

LAB24:    xsi_set_current_line(151, ng0);
    t52 = ((char*)((ng2)));
    t53 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB25:    *((unsigned int *)t15) = 1;
    goto LAB28;

LAB29:    t26 = *((unsigned int *)t16);
    t27 = *((unsigned int *)t29);
    *((unsigned int *)t16) = (t26 | t27);
    t46 = (t4 + 4);
    t52 = (t15 + 4);
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t46);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (~(t34));
    t36 = *((unsigned int *)t52);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t42 & t40);
    t43 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t43 & t41);
    t44 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t44 & t40);
    t45 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t45 & t41);
    goto LAB31;

LAB32:    xsi_set_current_line(157, ng0);

LAB35:    xsi_set_current_line(158, ng0);
    t54 = ((char*)((ng2)));
    t55 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t55, t54, 0, 0, 1, 0LL);
    goto LAB34;

LAB36:    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t28);
    *((unsigned int *)t15) = (t21 | t22);
    t29 = (t6 + 4);
    t46 = (t13 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t38 = (t25 & t24);
    t26 = *((unsigned int *)t46);
    t27 = (~(t26));
    t30 = *((unsigned int *)t13);
    t39 = (t30 & t27);
    t31 = (~(t38));
    t32 = (~(t39));
    t33 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t33 & t31);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t34 & t32);
    goto LAB38;

LAB39:    t45 = *((unsigned int *)t16);
    t47 = *((unsigned int *)t54);
    *((unsigned int *)t16) = (t45 | t47);
    t55 = (t4 + 4);
    t56 = (t15 + 4);
    t48 = *((unsigned int *)t4);
    t49 = (~(t48));
    t50 = *((unsigned int *)t55);
    t51 = (~(t50));
    t57 = *((unsigned int *)t15);
    t58 = (~(t57));
    t59 = *((unsigned int *)t56);
    t60 = (~(t59));
    t61 = (t49 & t51);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t65 & t63);
    t66 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t66 & t64);
    t67 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t67 & t63);
    t68 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t68 & t64);
    goto LAB41;

LAB42:    xsi_set_current_line(162, ng0);

LAB45:    xsi_set_current_line(163, ng0);
    t75 = (t0 + 3528);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);

LAB46:    t78 = ((char*)((ng3)));
    t79 = xsi_vlog_unsigned_case_compare(t77, 4, t78, 4);
    if (t79 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng4)));
    t38 = xsi_vlog_unsigned_case_compare(t77, 4, t2, 4);
    if (t38 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng5)));
    t38 = xsi_vlog_unsigned_case_compare(t77, 4, t2, 4);
    if (t38 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng6)));
    t38 = xsi_vlog_unsigned_case_compare(t77, 4, t2, 4);
    if (t38 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng7)));
    t38 = xsi_vlog_unsigned_case_compare(t77, 4, t2, 4);
    if (t38 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng8)));
    t38 = xsi_vlog_unsigned_case_compare(t77, 4, t2, 4);
    if (t38 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng9)));
    t38 = xsi_vlog_unsigned_case_compare(t77, 4, t2, 4);
    if (t38 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng10)));
    t38 = xsi_vlog_unsigned_case_compare(t77, 4, t2, 4);
    if (t38 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng11)));
    t38 = xsi_vlog_unsigned_case_compare(t77, 4, t2, 4);
    if (t38 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB44;

LAB47:    xsi_set_current_line(164, ng0);

LAB66:    xsi_set_current_line(165, ng0);
    t80 = (t0 + 3208);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    memset(t83, 0, 8);
    t84 = (t83 + 4);
    t85 = (t82 + 4);
    t86 = *((unsigned int *)t82);
    t87 = (t86 >> 7);
    t88 = (t87 & 1);
    *((unsigned int *)t83) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 >> 7);
    t91 = (t90 & 1);
    *((unsigned int *)t84) = t91;
    t92 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t92, t83, 0, 0, 1, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB65;

LAB49:    xsi_set_current_line(169, ng0);

LAB67:    xsi_set_current_line(170, ng0);
    t3 = (t0 + 3208);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 6);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 6);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t13 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t13, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB65;

LAB51:    xsi_set_current_line(173, ng0);

LAB68:    xsi_set_current_line(174, ng0);
    t3 = (t0 + 3208);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 5);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t13 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t13, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB65;

LAB53:    xsi_set_current_line(177, ng0);

LAB69:    xsi_set_current_line(178, ng0);
    t3 = (t0 + 3208);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t13 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t13, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB65;

LAB55:    xsi_set_current_line(181, ng0);

LAB70:    xsi_set_current_line(182, ng0);
    t3 = (t0 + 3208);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t13 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t13, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB65;

LAB57:    xsi_set_current_line(185, ng0);

LAB71:    xsi_set_current_line(186, ng0);
    t3 = (t0 + 3208);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t13 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t13, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB65;

LAB59:    xsi_set_current_line(189, ng0);

LAB72:    xsi_set_current_line(190, ng0);
    t3 = (t0 + 3208);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t13 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t13, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB65;

LAB61:    xsi_set_current_line(193, ng0);

LAB73:    xsi_set_current_line(194, ng0);
    t3 = (t0 + 3208);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    t13 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t13, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB65;

LAB63:    xsi_set_current_line(198, ng0);

LAB74:    xsi_set_current_line(200, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB65;

}


extern void work_m_00000000003818672824_2232249084_init()
{
	static char *pe[] = {(void *)Always_46_0,(void *)Cont_53_1,(void *)Always_83_2,(void *)Always_105_3,(void *)Cont_128_4,(void *)Always_130_5};
	xsi_register_didat("work_m_00000000003818672824_2232249084", "isim/chip_test_bist_enable_isim_beh.exe.sim/work/m_00000000003818672824_2232249084.didat");
	xsi_register_executes(pe);
}
