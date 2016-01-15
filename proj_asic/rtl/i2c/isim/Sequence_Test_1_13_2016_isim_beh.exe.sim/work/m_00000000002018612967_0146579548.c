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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//lions.tcnj.edu/Public/HomeST/formanw2/Senior Project/current 1-11-16/i2c_Top_Blcok_11-11-2015/i2c_Top_Blcok_11-11-2015/Sequencer.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 11);

LAB1:    return;
}

static void Initial_39_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_46_2(char *t0)
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

LAB0:    t1 = (t0 + 5744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 6808);
    *((int *)t2) = 1;
    t3 = (t0 + 5776);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t5 = (t0 + 1688U);
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

LAB9:    t13 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB13:    t6 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

}

static void Cont_51_3(char *t0)
{
    char t5[8];
    char t19[8];
    char t26[8];
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

LAB0:    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3848);
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

LAB9:    memcpy(t26, t5, 8);

LAB10:    t58 = (t0 + 6936);
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
    t71 = (t0 + 6824);
    *((int *)t71) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 1688U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t17) != 0)
        goto LAB13;

LAB14:    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB14;

LAB15:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t5 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t5);
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
    goto LAB17;

}

static void Cont_52_4(char *t0)
{
    char t5[8];
    char t19[8];
    char t26[8];
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

LAB0:    t1 = (t0 + 6240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4008);
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

LAB9:    memcpy(t26, t5, 8);

LAB10:    t58 = (t0 + 7000);
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
    t71 = (t0 + 6840);
    *((int *)t71) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 1848U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t17) != 0)
        goto LAB13;

LAB14:    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB14;

LAB15:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t5 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t5);
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
    goto LAB17;

}

static void Always_69_5(char *t0)
{
    char t6[8];
    char t14[8];
    char t45[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
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
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
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
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;

LAB0:    t1 = (t0 + 6488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 6856);
    *((int *)t2) = 1;
    t3 = (t0 + 6520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = (t0 + 2008U);
    t7 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t4) == 0)
        goto LAB6;

LAB8:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t6);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = (t5 + 4);
    t19 = (t6 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB10;

LAB11:
LAB12:    t42 = (t0 + 4168);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t46 = *((unsigned int *)t14);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = (t14 + 4);
    t50 = (t44 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB13;

LAB14:
LAB15:    t73 = (t45 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t45);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t4 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t2) == 0)
        goto LAB20;

LAB22:    t5 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t5) = 1;

LAB23:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t6);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t7 = (t3 + 4);
    t13 = (t6 + 4);
    t18 = (t14 + 4);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t18);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB24;

LAB25:
LAB26:    t28 = (t14 + 4);
    t53 = *((unsigned int *)t28);
    t54 = (~(t53));
    t55 = *((unsigned int *)t14);
    t56 = (t55 & t54);
    t57 = (t56 != 0);
    if (t57 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t5) == 0)
        goto LAB31;

LAB33:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB34:    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t18 = (t4 + 4);
    t19 = (t6 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB35;

LAB36:
LAB37:    t42 = (t14 + 4);
    t53 = *((unsigned int *)t42);
    t54 = (~(t53));
    t55 = *((unsigned int *)t14);
    t56 = (t55 & t54);
    t57 = (t56 != 0);
    if (t57 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t5) == 0)
        goto LAB42;

LAB44:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB45:    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t18 = (t4 + 4);
    t19 = (t6 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB46;

LAB47:
LAB48:    t42 = (t14 + 4);
    t53 = *((unsigned int *)t42);
    t54 = (~(t53));
    t55 = *((unsigned int *)t14);
    t56 = (t55 & t54);
    t57 = (t56 != 0);
    if (t57 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 & t9);
    *((unsigned int *)t6) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t5);
    t15 = (t11 | t12);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB53;

LAB54:
LAB55:    t19 = (t6 + 4);
    t41 = *((unsigned int *)t19);
    t46 = (~(t41));
    t47 = *((unsigned int *)t6);
    t48 = (t47 & t46);
    t52 = (t48 != 0);
    if (t52 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 & t9);
    *((unsigned int *)t6) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t5);
    t15 = (t11 | t12);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB60;

LAB61:
LAB62:    t19 = (t6 + 4);
    t41 = *((unsigned int *)t19);
    t46 = (~(t41));
    t47 = *((unsigned int *)t6);
    t48 = (t47 & t46);
    t52 = (t48 != 0);
    if (t52 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t7);
    t10 = (t8 & t9);
    *((unsigned int *)t6) = t10;
    t5 = (t4 + 4);
    t13 = (t7 + 4);
    t18 = (t6 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t13);
    t15 = (t11 | t12);
    *((unsigned int *)t18) = t15;
    t16 = *((unsigned int *)t18);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB67;

LAB68:
LAB69:    t28 = (t6 + 4);
    t41 = *((unsigned int *)t28);
    t46 = (~(t41));
    t47 = *((unsigned int *)t6);
    t48 = (t47 & t46);
    t52 = (t48 != 0);
    if (t52 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t7);
    t10 = (t8 & t9);
    *((unsigned int *)t6) = t10;
    t5 = (t4 + 4);
    t13 = (t7 + 4);
    t18 = (t6 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t13);
    t15 = (t11 | t12);
    *((unsigned int *)t18) = t15;
    t16 = *((unsigned int *)t18);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB74;

LAB75:
LAB76:    t28 = (t6 + 4);
    t41 = *((unsigned int *)t28);
    t46 = (~(t41));
    t47 = *((unsigned int *)t6);
    t48 = (t47 & t46);
    t52 = (t48 != 0);
    if (t52 > 0)
        goto LAB77;

LAB78:
LAB79:
LAB72:
LAB65:
LAB58:
LAB51:
LAB40:
LAB29:
LAB18:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t26 | t27);
    t28 = (t5 + 4);
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (~(t30));
    t32 = *((unsigned int *)t5);
    t33 = (t32 & t31);
    t34 = *((unsigned int *)t29);
    t35 = (~(t34));
    t36 = *((unsigned int *)t6);
    t37 = (t36 & t35);
    t38 = (~(t33));
    t39 = (~(t37));
    t40 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t40 & t38);
    t41 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t41 & t39);
    goto LAB12;

LAB13:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t14 + 4);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t59);
    t62 = (~(t61));
    t63 = *((unsigned int *)t14);
    t64 = (t63 & t62);
    t65 = *((unsigned int *)t60);
    t66 = (~(t65));
    t67 = *((unsigned int *)t44);
    t68 = (t67 & t66);
    t69 = (~(t64));
    t70 = (~(t68));
    t71 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t71 & t69);
    t72 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t72 & t70);
    goto LAB15;

LAB16:    xsi_set_current_line(72, ng0);

LAB19:    xsi_set_current_line(73, ng0);
    t79 = ((char*)((ng1)));
    t80 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t80, t79, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    goto LAB18;

LAB20:    *((unsigned int *)t6) = 1;
    goto LAB23;

LAB24:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t14) = (t26 | t27);
    t19 = (t3 + 4);
    t20 = (t6 + 4);
    t30 = *((unsigned int *)t3);
    t31 = (~(t30));
    t32 = *((unsigned int *)t19);
    t34 = (~(t32));
    t35 = *((unsigned int *)t6);
    t36 = (~(t35));
    t38 = *((unsigned int *)t20);
    t39 = (~(t38));
    t33 = (t31 & t34);
    t37 = (t36 & t39);
    t40 = (~(t33));
    t41 = (~(t37));
    t46 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t46 & t40);
    t47 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t47 & t41);
    t48 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t48 & t40);
    t52 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t52 & t41);
    goto LAB26;

LAB27:    xsi_set_current_line(84, ng0);

LAB30:    xsi_set_current_line(85, ng0);
    t29 = (t0 + 1368U);
    t42 = *((char **)t29);
    t29 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t29, t42, 0, 0, 11, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB29;

LAB31:    *((unsigned int *)t6) = 1;
    goto LAB34;

LAB35:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t26 | t27);
    t28 = (t4 + 4);
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t34 = (~(t32));
    t35 = *((unsigned int *)t6);
    t36 = (~(t35));
    t38 = *((unsigned int *)t29);
    t39 = (~(t38));
    t33 = (t31 & t34);
    t37 = (t36 & t39);
    t40 = (~(t33));
    t41 = (~(t37));
    t46 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t46 & t40);
    t47 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t47 & t41);
    t48 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t48 & t40);
    t52 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t52 & t41);
    goto LAB37;

LAB38:    xsi_set_current_line(91, ng0);

LAB41:    xsi_set_current_line(92, ng0);
    t43 = ((char*)((ng2)));
    t44 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t44, t43, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB40;

LAB42:    *((unsigned int *)t6) = 1;
    goto LAB45;

LAB46:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t26 | t27);
    t28 = (t4 + 4);
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t34 = (~(t32));
    t35 = *((unsigned int *)t6);
    t36 = (~(t35));
    t38 = *((unsigned int *)t29);
    t39 = (~(t38));
    t33 = (t31 & t34);
    t37 = (t36 & t39);
    t40 = (~(t33));
    t41 = (~(t37));
    t46 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t46 & t40);
    t47 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t47 & t41);
    t48 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t48 & t40);
    t52 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t52 & t41);
    goto LAB48;

LAB49:    xsi_set_current_line(97, ng0);

LAB52:    xsi_set_current_line(98, ng0);
    t43 = ((char*)((ng1)));
    t44 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t44, t43, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB51;

LAB53:    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t21 | t22);
    t13 = (t3 + 4);
    t18 = (t4 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t30 = (~(t27));
    t31 = *((unsigned int *)t18);
    t32 = (~(t31));
    t33 = (t24 & t26);
    t37 = (t30 & t32);
    t34 = (~(t33));
    t35 = (~(t37));
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t34);
    t38 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t38 & t35);
    t39 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t39 & t34);
    t40 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t40 & t35);
    goto LAB55;

LAB56:    xsi_set_current_line(105, ng0);

LAB59:    xsi_set_current_line(106, ng0);
    t20 = ((char*)((ng2)));
    t28 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t28, t20, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 11, 0LL);
    goto LAB58;

LAB60:    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t21 | t22);
    t13 = (t3 + 4);
    t18 = (t4 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t30 = (~(t27));
    t31 = *((unsigned int *)t18);
    t32 = (~(t31));
    t33 = (t24 & t26);
    t37 = (t30 & t32);
    t34 = (~(t33));
    t35 = (~(t37));
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t34);
    t38 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t38 & t35);
    t39 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t39 & t34);
    t40 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t40 & t35);
    goto LAB62;

LAB63:    xsi_set_current_line(113, ng0);

LAB66:    xsi_set_current_line(114, ng0);
    t20 = (t0 + 1528U);
    t28 = *((char **)t20);
    t20 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t20, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 11, t4, 11, t13, 11);
    t18 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t18, t6, 0, 0, 11, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB65;

LAB67:    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t6) = (t21 | t22);
    t19 = (t4 + 4);
    t20 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t19);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t30 = (~(t27));
    t31 = *((unsigned int *)t20);
    t32 = (~(t31));
    t33 = (t24 & t26);
    t37 = (t30 & t32);
    t34 = (~(t33));
    t35 = (~(t37));
    t36 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t36 & t34);
    t38 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t38 & t35);
    t39 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t39 & t34);
    t40 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t40 & t35);
    goto LAB69;

LAB70:    xsi_set_current_line(120, ng0);

LAB73:    xsi_set_current_line(121, ng0);
    t29 = ((char*)((ng2)));
    t42 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t42, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB72;

LAB74:    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t6) = (t21 | t22);
    t19 = (t4 + 4);
    t20 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t19);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t30 = (~(t27));
    t31 = *((unsigned int *)t20);
    t32 = (~(t31));
    t33 = (t24 & t26);
    t37 = (t30 & t32);
    t34 = (~(t33));
    t35 = (~(t37));
    t36 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t36 & t34);
    t38 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t38 & t35);
    t39 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t39 & t34);
    t40 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t40 & t35);
    goto LAB76;

LAB77:    xsi_set_current_line(126, ng0);

LAB80:    xsi_set_current_line(127, ng0);
    t29 = ((char*)((ng1)));
    t42 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t42, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 11, t5, 32);
    t7 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 11, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    goto LAB79;

}


extern void work_m_00000000002018612967_0146579548_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Initial_39_1,(void *)Always_46_2,(void *)Cont_51_3,(void *)Cont_52_4,(void *)Always_69_5};
	xsi_register_didat("work_m_00000000002018612967_0146579548", "isim/Sequence_Test_1_13_2016_isim_beh.exe.sim/work/m_00000000002018612967_0146579548.didat");
	xsi_register_executes(pe);
}
