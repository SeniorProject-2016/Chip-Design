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
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/project/i2si_bist_gen.v";
static unsigned int ng1[] = {31U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {15, 0};
static int ng5[] = {0, 0};
static int ng6[] = {31, 0};
static int ng7[] = {16, 0};



static void Cont_37_0(char *t0)
{
    char t5[8];
    char t21[8];
    char t37[8];
    char t45[8];
    char t77[8];
    char t91[8];
    char t98[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t78;
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
    char *t89;
    char *t90;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t45, t5, 8);

LAB10:    memset(t77, 0, 8);
    t78 = (t45 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t45);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t78) != 0)
        goto LAB24;

LAB25:    t85 = (t77 + 4);
    t86 = *((unsigned int *)t77);
    t87 = *((unsigned int *)t85);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB26;

LAB27:    memcpy(t98, t77, 8);

LAB28:    t130 = (t0 + 4840);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    t133 = (t132 + 56U);
    t134 = *((char **)t133);
    memset(t134, 0, 8);
    t135 = 1U;
    t136 = t135;
    t137 = (t98 + 4);
    t138 = *((unsigned int *)t98);
    t135 = (t135 & t138);
    t139 = *((unsigned int *)t137);
    t136 = (t136 & t139);
    t140 = (t134 + 4);
    t141 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t141 | t135);
    t142 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t142 | t136);
    xsi_driver_vfirst_trans(t130, 0, 0);
    t143 = (t0 + 4712);
    *((int *)t143) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 2728);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng1)));
    memset(t21, 0, 8);
    t22 = (t19 + 4);
    t23 = (t20 + 4);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = (t26 | t29);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB14;

LAB11:    if (t33 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t21) = 1;

LAB14:    memset(t37, 0, 8);
    t38 = (t21 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t21);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t38) != 0)
        goto LAB17;

LAB18:    t46 = *((unsigned int *)t5);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t5 + 4);
    t50 = (t37 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB10;

LAB13:    t36 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t37) = 1;
    goto LAB18;

LAB17:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB18;

LAB19:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t5 + 4);
    t60 = (t37 + 4);
    t61 = *((unsigned int *)t5);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB21;

LAB22:    *((unsigned int *)t77) = 1;
    goto LAB25;

LAB24:    t84 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB25;

LAB26:    t89 = (t0 + 1368U);
    t90 = *((char **)t89);
    memset(t91, 0, 8);
    t89 = (t90 + 4);
    t92 = *((unsigned int *)t89);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t89) != 0)
        goto LAB31;

LAB32:    t99 = *((unsigned int *)t77);
    t100 = *((unsigned int *)t91);
    t101 = (t99 & t100);
    *((unsigned int *)t98) = t101;
    t102 = (t77 + 4);
    t103 = (t91 + 4);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t102);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB28;

LAB29:    *((unsigned int *)t91) = 1;
    goto LAB32;

LAB31:    t97 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB32;

LAB33:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t98) = (t110 | t111);
    t112 = (t77 + 4);
    t113 = (t91 + 4);
    t114 = *((unsigned int *)t77);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (~(t116));
    t118 = *((unsigned int *)t91);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (~(t120));
    t122 = (t115 & t117);
    t123 = (t119 & t121);
    t124 = (~(t122));
    t125 = (~(t123));
    t126 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t126 & t124);
    t127 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t127 & t125);
    t128 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t128 & t124);
    t129 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t129 & t125);
    goto LAB35;

}

static void Always_42_1(char *t0)
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4728);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t5 = (t0 + 1208U);
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

LAB11:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB13;

LAB14:
LAB15:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(45, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 0LL);
    goto LAB12;

LAB13:    xsi_set_current_line(47, ng0);
    t5 = (t0 + 2728);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t12, 5, t13, 5);
    t19 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t19, t4, 0, 0, 5, 0LL);
    goto LAB15;

}

static void Always_51_2(char *t0)
{
    char t4[8];
    char t23[8];
    char t36[8];
    char t43[8];
    char t81[8];
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
    unsigned int t21;
    unsigned int t22;
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
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4744);
    *((int *)t2) = 1;
    t3 = (t0 + 4176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t5 = (t0 + 1208U);
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

LAB11:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB16;

LAB13:    if (t18 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t4) = 1;

LAB16:    memset(t23, 0, 8);
    t20 = (t4 + 4);
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t20) != 0)
        goto LAB19;

LAB20:    t30 = (t23 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB21;

LAB22:    memcpy(t43, t23, 8);

LAB23:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB31;

LAB32:
LAB33:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(54, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB19:    t29 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB20;

LAB21:    t34 = (t0 + 1368U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t35 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t34) != 0)
        goto LAB26;

LAB27:    t44 = *((unsigned int *)t23);
    t45 = *((unsigned int *)t36);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t23 + 4);
    t48 = (t36 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB23;

LAB24:    *((unsigned int *)t36) = 1;
    goto LAB27;

LAB26:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB27;

LAB28:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t23 + 4);
    t58 = (t36 + 4);
    t59 = *((unsigned int *)t23);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t36);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB30;

LAB31:    xsi_set_current_line(56, ng0);

LAB34:    xsi_set_current_line(57, ng0);
    t82 = (t0 + 2568);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    memset(t81, 0, 8);
    t85 = (t84 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t84);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB38;

LAB36:    if (*((unsigned int *)t85) == 0)
        goto LAB35;

LAB37:    t91 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t91) = 1;

LAB38:    t92 = (t81 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t81);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB33;

LAB35:    *((unsigned int *)t81) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(58, ng0);
    t98 = ((char*)((ng2)));
    t99 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t99, t98, 0, 0, 1, 0LL);
    goto LAB41;

}

static void Always_63_3(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t23[8];
    char t87[8];
    char t104[8];
    char t108[8];
    char t109[8];
    char t110[8];
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
    char *t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
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
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
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
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t105;
    char *t106;
    char *t107;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    char *t118;
    unsigned int t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    int t126;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4760);
    *((int *)t2) = 1;
    t3 = (t0 + 4424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t5 = (t0 + 1208U);
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

LAB11:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t30 = (~(t18));
    t33 = (t15 & t30);
    if (t33 != 0)
        goto LAB23;

LAB20:    if (t18 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t4) = 1;

LAB23:    memset(t21, 0, 8);
    t20 = (t4 + 4);
    t37 = *((unsigned int *)t20);
    t40 = (~(t37));
    t42 = *((unsigned int *)t4);
    t43 = (t42 & t40);
    t46 = (t43 & 1U);
    if (t46 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t20) != 0)
        goto LAB26;

LAB27:    t25 = (t21 + 4);
    t47 = *((unsigned int *)t21);
    t48 = *((unsigned int *)t25);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB28;

LAB29:    memcpy(t23, t21, 8);

LAB30:    t81 = (t23 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t23);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB38;

LAB39:
LAB40:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(66, ng0);

LAB13:    xsi_set_current_line(67, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 2408);
    t24 = (t0 + 2408);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng4)));
    t28 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t21, t22, t23, ((int*)(t26)), 2, t27, 32, 1, t28, 32, 1);
    t29 = (t21 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t22 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    t36 = (t23 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB17;

LAB16:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 65535U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 65535U);
    t6 = (t0 + 2408);
    t12 = (t0 + 2408);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng6)));
    t24 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t21, t22, t23, ((int*)(t19)), 2, t20, 32, 1, t24, 32, 1);
    t25 = (t21 + 4);
    t17 = *((unsigned int *)t25);
    t31 = (!(t17));
    t26 = (t22 + 4);
    t18 = *((unsigned int *)t26);
    t34 = (!(t18));
    t35 = (t31 && t34);
    t27 = (t23 + 4);
    t30 = *((unsigned int *)t27);
    t38 = (!(t30));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB18;

LAB19:    goto LAB12;

LAB14:    t40 = *((unsigned int *)t23);
    t41 = (t40 + 0);
    t42 = *((unsigned int *)t21);
    t43 = *((unsigned int *)t22);
    t44 = (t42 - t43);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t20, t19, t41, *((unsigned int *)t22), t45, 0LL);
    goto LAB15;

LAB17:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t3) = (t11 | t14);
    goto LAB16;

LAB18:    t33 = *((unsigned int *)t23);
    t41 = (t33 + 0);
    t37 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t22);
    t44 = (t37 - t40);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t6, t4, t41, *((unsigned int *)t22), t45, 0LL);
    goto LAB19;

LAB22:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t21) = 1;
    goto LAB27;

LAB26:    t24 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB27;

LAB28:    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    memset(t22, 0, 8);
    t26 = (t27 + 4);
    t50 = *((unsigned int *)t26);
    t51 = (~(t50));
    t52 = *((unsigned int *)t27);
    t53 = (t52 & t51);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t26) != 0)
        goto LAB33;

LAB34:    t55 = *((unsigned int *)t21);
    t56 = *((unsigned int *)t22);
    t57 = (t55 & t56);
    *((unsigned int *)t23) = t57;
    t29 = (t21 + 4);
    t32 = (t22 + 4);
    t36 = (t23 + 4);
    t58 = *((unsigned int *)t29);
    t59 = *((unsigned int *)t32);
    t60 = (t58 | t59);
    *((unsigned int *)t36) = t60;
    t61 = *((unsigned int *)t36);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB30;

LAB31:    *((unsigned int *)t22) = 1;
    goto LAB34;

LAB33:    t28 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB34;

LAB35:    t63 = *((unsigned int *)t23);
    t64 = *((unsigned int *)t36);
    *((unsigned int *)t23) = (t63 | t64);
    t65 = (t21 + 4);
    t66 = (t22 + 4);
    t67 = *((unsigned int *)t21);
    t68 = (~(t67));
    t69 = *((unsigned int *)t65);
    t70 = (~(t69));
    t71 = *((unsigned int *)t22);
    t72 = (~(t71));
    t73 = *((unsigned int *)t66);
    t74 = (~(t73));
    t31 = (t68 & t70);
    t34 = (t72 & t74);
    t75 = (~(t31));
    t76 = (~(t34));
    t77 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t77 & t75);
    t78 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t78 & t76);
    t79 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t79 & t75);
    t80 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t80 & t76);
    goto LAB37;

LAB38:    xsi_set_current_line(71, ng0);

LAB41:    xsi_set_current_line(73, ng0);
    t88 = (t0 + 2568);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    memset(t87, 0, 8);
    t91 = (t90 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t91) == 0)
        goto LAB42;

LAB44:    t97 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t97) = 1;

LAB45:    t98 = (t87 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t87);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 65535U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 65535U);
    t13 = ((char*)((ng3)));
    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    xsi_vlogtype_concat(t23, 16, 16, 2U, t20, 12, t13, 4);
    memset(t87, 0, 8);
    xsi_vlog_signed_greatereq(t87, 16, t21, 16, t23, 16);
    t19 = (t87 + 4);
    t15 = *((unsigned int *)t19);
    t16 = (~(t15));
    t17 = *((unsigned int *)t87);
    t18 = (t17 & t16);
    t30 = (t18 != 0);
    if (t30 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(89, ng0);

LAB66:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 65535U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 65535U);
    t13 = ((char*)((ng3)));
    t19 = (t0 + 1848U);
    t20 = *((char **)t19);
    xsi_vlogtype_concat(t21, 16, 12, 2U, t20, 8, t13, 4);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 16, t4, 16, t21, 16);
    t19 = (t0 + 2408);
    t24 = (t0 + 2408);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng4)));
    t28 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t23, t87, t104, ((int*)(t26)), 2, t27, 32, 1, t28, 32, 1);
    t29 = (t23 + 4);
    t15 = *((unsigned int *)t29);
    t31 = (!(t15));
    t32 = (t87 + 4);
    t16 = *((unsigned int *)t32);
    t34 = (!(t16));
    t35 = (t31 && t34);
    t36 = (t104 + 4);
    t17 = *((unsigned int *)t36);
    t38 = (!(t17));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 65535U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 65535U);
    t13 = ((char*)((ng3)));
    t19 = (t0 + 1848U);
    t20 = *((char **)t19);
    xsi_vlogtype_concat(t22, 16, 12, 2U, t20, 8, t13, 4);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 16, t21, 16, t22, 16);
    memset(t4, 0, 8);
    t19 = (t4 + 4);
    t24 = (t23 + 4);
    t15 = *((unsigned int *)t23);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB70;

LAB69:    t37 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t37 & 65535U);
    t40 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t40 & 65535U);
    t25 = (t0 + 2408);
    t26 = (t0 + 2408);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng6)));
    t32 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t87, t104, t108, ((int*)(t28)), 2, t29, 32, 1, t32, 32, 1);
    t36 = (t87 + 4);
    t42 = *((unsigned int *)t36);
    t31 = (!(t42));
    t65 = (t104 + 4);
    t43 = *((unsigned int *)t65);
    t34 = (!(t43));
    t35 = (t31 && t34);
    t66 = (t108 + 4);
    t46 = *((unsigned int *)t66);
    t38 = (!(t46));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB71;

LAB72:
LAB58:
LAB48:    goto LAB40;

LAB42:    *((unsigned int *)t87) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(74, ng0);

LAB49:    xsi_set_current_line(76, ng0);
    t105 = ((char*)((ng3)));
    t106 = (t0 + 1528U);
    t107 = *((char **)t106);
    xsi_vlogtype_concat(t104, 16, 16, 2U, t107, 12, t105, 4);
    t106 = (t0 + 2408);
    t111 = (t0 + 2408);
    t112 = (t111 + 72U);
    t113 = *((char **)t112);
    t114 = ((char*)((ng4)));
    t115 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t108, t109, t110, ((int*)(t113)), 2, t114, 32, 1, t115, 32, 1);
    t116 = (t108 + 4);
    t117 = *((unsigned int *)t116);
    t35 = (!(t117));
    t118 = (t109 + 4);
    t119 = *((unsigned int *)t118);
    t38 = (!(t119));
    t39 = (t35 && t38);
    t120 = (t110 + 4);
    t121 = *((unsigned int *)t120);
    t41 = (!(t121));
    t44 = (t39 && t41);
    if (t44 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    xsi_vlogtype_concat(t21, 16, 16, 2U, t5, 12, t2, 4);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t6 = (t21 + 4);
    t7 = *((unsigned int *)t21);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB53;

LAB52:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 65535U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 65535U);
    t12 = (t0 + 2408);
    t13 = (t0 + 2408);
    t19 = (t13 + 72U);
    t20 = *((char **)t19);
    t24 = ((char*)((ng6)));
    t25 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t22, t23, t87, ((int*)(t20)), 2, t24, 32, 1, t25, 32, 1);
    t26 = (t22 + 4);
    t17 = *((unsigned int *)t26);
    t31 = (!(t17));
    t27 = (t23 + 4);
    t18 = *((unsigned int *)t27);
    t34 = (!(t18));
    t35 = (t31 && t34);
    t28 = (t87 + 4);
    t30 = *((unsigned int *)t28);
    t38 = (!(t30));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB54;

LAB55:    goto LAB48;

LAB50:    t122 = *((unsigned int *)t110);
    t45 = (t122 + 0);
    t123 = *((unsigned int *)t108);
    t124 = *((unsigned int *)t109);
    t125 = (t123 - t124);
    t126 = (t125 + 1);
    xsi_vlogvar_wait_assign_value(t106, t104, t45, *((unsigned int *)t109), t126, 0LL);
    goto LAB51;

LAB53:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t11 | t14);
    goto LAB52;

LAB54:    t33 = *((unsigned int *)t87);
    t41 = (t33 + 0);
    t37 = *((unsigned int *)t22);
    t40 = *((unsigned int *)t23);
    t44 = (t37 - t40);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t12, t4, t41, *((unsigned int *)t23), t45, 0LL);
    goto LAB55;

LAB56:    xsi_set_current_line(80, ng0);

LAB59:    xsi_set_current_line(82, ng0);
    t24 = ((char*)((ng3)));
    t25 = (t0 + 1528U);
    t26 = *((char **)t25);
    xsi_vlogtype_concat(t104, 16, 16, 2U, t26, 12, t24, 4);
    t25 = (t0 + 2408);
    t27 = (t0 + 2408);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t32 = ((char*)((ng4)));
    t36 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t108, t109, t110, ((int*)(t29)), 2, t32, 32, 1, t36, 32, 1);
    t65 = (t108 + 4);
    t33 = *((unsigned int *)t65);
    t31 = (!(t33));
    t66 = (t109 + 4);
    t37 = *((unsigned int *)t66);
    t34 = (!(t37));
    t35 = (t31 && t34);
    t81 = (t110 + 4);
    t40 = *((unsigned int *)t81);
    t38 = (!(t40));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    xsi_vlogtype_concat(t21, 16, 16, 2U, t5, 12, t2, 4);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t6 = (t21 + 4);
    t7 = *((unsigned int *)t21);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB63;

LAB62:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 65535U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 65535U);
    t12 = (t0 + 2408);
    t13 = (t0 + 2408);
    t19 = (t13 + 72U);
    t20 = *((char **)t19);
    t24 = ((char*)((ng6)));
    t25 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t22, t23, t87, ((int*)(t20)), 2, t24, 32, 1, t25, 32, 1);
    t26 = (t22 + 4);
    t17 = *((unsigned int *)t26);
    t31 = (!(t17));
    t27 = (t23 + 4);
    t18 = *((unsigned int *)t27);
    t34 = (!(t18));
    t35 = (t31 && t34);
    t28 = (t87 + 4);
    t30 = *((unsigned int *)t28);
    t38 = (!(t30));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB64;

LAB65:    goto LAB58;

LAB60:    t42 = *((unsigned int *)t110);
    t41 = (t42 + 0);
    t43 = *((unsigned int *)t108);
    t46 = *((unsigned int *)t109);
    t44 = (t43 - t46);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t25, t104, t41, *((unsigned int *)t109), t45, 0LL);
    goto LAB61;

LAB63:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t11 | t14);
    goto LAB62;

LAB64:    t33 = *((unsigned int *)t87);
    t41 = (t33 + 0);
    t37 = *((unsigned int *)t22);
    t40 = *((unsigned int *)t23);
    t44 = (t37 - t40);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t12, t4, t41, *((unsigned int *)t23), t45, 0LL);
    goto LAB65;

LAB67:    t18 = *((unsigned int *)t104);
    t41 = (t18 + 0);
    t30 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t87);
    t44 = (t30 - t33);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t19, t22, t41, *((unsigned int *)t87), t45, 0LL);
    goto LAB68;

LAB70:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t24);
    *((unsigned int *)t4) = (t17 | t18);
    t30 = *((unsigned int *)t19);
    t33 = *((unsigned int *)t24);
    *((unsigned int *)t19) = (t30 | t33);
    goto LAB69;

LAB71:    t47 = *((unsigned int *)t108);
    t41 = (t47 + 0);
    t48 = *((unsigned int *)t87);
    t49 = *((unsigned int *)t104);
    t44 = (t48 - t49);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t25, t4, t41, *((unsigned int *)t104), t45, 0LL);
    goto LAB72;

}


extern void work_m_00000000000193430059_2968718272_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Always_42_1,(void *)Always_51_2,(void *)Always_63_3};
	xsi_register_didat("work_m_00000000000193430059_2968718272", "isim/chip_test_isim_beh.exe.sim/work/m_00000000000193430059_2968718272.didat");
	xsi_register_executes(pe);
}
