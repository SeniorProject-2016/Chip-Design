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
static const char *ng0 = "E:/chip/chip/filter_stm.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {8U, 0U};
static int ng6[] = {1, 0};



static void Cont_53_0(char *t0)
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

LAB0:    t1 = (t0 + 8528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3928);
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

LAB10:    t58 = (t0 + 9984);
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
    t71 = (t0 + 9840);
    *((int *)t71) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 2728U);
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

static void Cont_54_1(char *t0)
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

LAB0:    t1 = (t0 + 8776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3208U);
    t3 = *((char **)t2);
    t2 = (t0 + 10048);
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
    t16 = (t0 + 9856);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_57_2(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;

LAB0:    t1 = (t0 + 9024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 9872);
    *((int *)t2) = 1;
    t3 = (t0 + 9056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 4888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5048);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5688);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 6);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 6);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 7448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 6008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 6328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 6648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6808);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 6968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 6);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));

LAB6:    t3 = (t0 + 4888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t8) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t15 = xsi_vlog_unsigned_case_compare(t2, 1, t8, 1);
    if (t15 == 1)
        goto LAB7;

LAB8:    t3 = (t0 + 4888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t8) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t15 = xsi_vlog_unsigned_case_compare(t2, 1, t8, 1);
    if (t15 == 1)
        goto LAB9;

LAB10:    t3 = (t0 + 4888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t8) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t15 = xsi_vlog_unsigned_case_compare(t2, 1, t8, 1);
    if (t15 == 1)
        goto LAB11;

LAB12:    t3 = (t0 + 4888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t8) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t15 = xsi_vlog_unsigned_case_compare(t2, 1, t8, 1);
    if (t15 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(181, ng0);

LAB54:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(78, ng0);

LAB18:    xsi_set_current_line(79, ng0);
    t16 = (t0 + 3208U);
    t17 = *((char **)t16);
    t16 = (t17 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (~(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(85, ng0);

LAB23:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 7288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB21:    goto LAB17;

LAB9:    xsi_set_current_line(93, ng0);

LAB24:    xsi_set_current_line(94, ng0);
    t16 = (t0 + 6008);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = (t23 + 4);
    t18 = *((unsigned int *)t24);
    t19 = (~(t18));
    t20 = *((unsigned int *)t23);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(105, ng0);

LAB29:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t3 = (t0 + 3368U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB30;

LAB31:
LAB32:
LAB27:    goto LAB17;

LAB11:    xsi_set_current_line(123, ng0);

LAB34:    xsi_set_current_line(125, ng0);
    t16 = (t0 + 6328);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = (t23 + 4);
    t18 = *((unsigned int *)t24);
    t19 = (~(t18));
    t20 = *((unsigned int *)t23);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(135, ng0);

LAB39:    xsi_set_current_line(137, ng0);
    t3 = (t0 + 4728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 6, t5, 6, t6, 6);
    t7 = (t0 + 5848);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 6);
    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB37:    goto LAB17;

LAB13:    xsi_set_current_line(147, ng0);

LAB40:    xsi_set_current_line(149, ng0);
    t16 = (t0 + 6648);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = (t23 + 4);
    t18 = *((unsigned int *)t24);
    t19 = (~(t18));
    t20 = *((unsigned int *)t23);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(159, ng0);

LAB45:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(162, ng0);
    t3 = (t0 + 4728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 6, t5, 6, t6, 6);
    t7 = (t0 + 5848);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 6);
    xsi_set_current_line(165, ng0);
    t3 = (t0 + 6968);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 6, t5, 6, t6, 6);
    t7 = (t0 + 7128);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 6);
    xsi_set_current_line(168, ng0);
    t3 = (t0 + 6968);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t16 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t16);
    t14 = (t12 ^ t13);
    t18 = (t11 | t14);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t27 = (t18 & t22);
    if (t27 != 0)
        goto LAB49;

LAB46:    if (t21 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t8) = 1;

LAB49:    t23 = (t8 + 4);
    t28 = *((unsigned int *)t23);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB50;

LAB51:
LAB52:
LAB43:    goto LAB17;

LAB19:    xsi_set_current_line(80, ng0);

LAB22:    xsi_set_current_line(81, ng0);
    t23 = ((char*)((ng3)));
    t24 = (t0 + 5048);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 4);
    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB21;

LAB25:    xsi_set_current_line(95, ng0);

LAB28:    xsi_set_current_line(96, ng0);
    t25 = ((char*)((ng4)));
    t26 = (t0 + 5048);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 4);
    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 6168);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 7608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t3 = (t0 + 4568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 6, t5, 6, t6, 6);
    t7 = (t0 + 5688);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 6);
    goto LAB27;

LAB30:    xsi_set_current_line(110, ng0);

LAB33:    xsi_set_current_line(112, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 7288);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6168);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB32;

LAB35:    xsi_set_current_line(126, ng0);

LAB38:    xsi_set_current_line(127, ng0);
    t25 = ((char*)((ng5)));
    t26 = (t0 + 5048);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 4);
    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 6808);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 6488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB37;

LAB41:    xsi_set_current_line(150, ng0);

LAB44:    xsi_set_current_line(151, ng0);
    t25 = ((char*)((ng3)));
    t26 = (t0 + 5048);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 4);
    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 6808);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 7288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB43;

LAB48:    t17 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(169, ng0);

LAB53:    xsi_set_current_line(171, ng0);
    t24 = ((char*)((ng2)));
    t25 = (t0 + 6808);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 7608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB52;

}

static void Cont_186_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 9272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 3528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_lshift(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 10112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 9888);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_190_4(char *t0)
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

LAB0:    t1 = (t0 + 9520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 9904);
    *((int *)t2) = 1;
    t3 = (t0 + 9552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(191, ng0);

LAB5:    xsi_set_current_line(192, ng0);
    t5 = (t0 + 2568U);
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

LAB11:    xsi_set_current_line(208, ng0);

LAB14:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 5048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4888);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 5208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 5368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 5528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 5688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4568);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 6, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 5848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4728);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 6, 0LL);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 7608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7448);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 6488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6328);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 6168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6008);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 6808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 7128);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6968);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 6, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 7288);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(193, ng0);

LAB13:    xsi_set_current_line(194, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 4888);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

}


extern void work_m_00000000001661702428_3269121889_init()
{
	static char *pe[] = {(void *)Cont_53_0,(void *)Cont_54_1,(void *)Always_57_2,(void *)Cont_186_3,(void *)Always_190_4};
	xsi_register_didat("work_m_00000000001661702428_3269121889", "isim/filter_tf_isim_beh.exe.sim/work/m_00000000001661702428_3269121889.didat");
	xsi_register_executes(pe);
}
