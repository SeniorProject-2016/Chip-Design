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
static const char *ng0 = "C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/i2so/serializer/serializer_testbench.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {2, 0};
static int ng5[] = {21, 0};
static int ng6[] = {9, 0};
static unsigned int ng7[] = {65535U, 0U};
static unsigned int ng8[] = {65280U, 0U};
static unsigned int ng9[] = {43690U, 0U};
static unsigned int ng10[] = {52695U, 0U};
static unsigned int ng11[] = {47802U, 0U};
static unsigned int ng12[] = {17476U, 0U};
static int ng13[] = {3, 0};
static unsigned int ng14[] = {29592U, 0U};
static int ng15[] = {4, 0};
static unsigned int ng16[] = {65501U, 0U};
static unsigned int ng17[] = {4369U, 0U};
static int ng18[] = {5, 0};
static unsigned int ng19[] = {22914U, 0U};
static unsigned int ng20[] = {1U, 0U};
static int ng21[] = {6, 0};
static unsigned int ng22[] = {5240U, 0U};
static int ng23[] = {7, 0};
static unsigned int ng24[] = {41913U, 0U};
static unsigned int ng25[] = {63701U, 0U};
static int ng26[] = {8, 0};
static unsigned int ng27[] = {54618U, 0U};
static unsigned int ng28[] = {39365U, 0U};
static unsigned int ng29[] = {29749U, 0U};



static void Always_63_0(char *t0)
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

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);

LAB4:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(67, ng0);

LAB6:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4416);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1768);
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
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3368);
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

static void Always_73_1(char *t0)
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

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);

LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);

LAB6:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4664);
    xsi_process_wait(t2, 312500LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 2728);
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
        goto LAB11;

LAB9:    if (*((unsigned int *)t7) == 0)
        goto LAB8;

LAB10:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB11:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB12:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2728);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB5;

LAB8:    *((unsigned int *)t3) = 1;
    goto LAB11;

LAB13:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB12;

LAB14:    goto LAB2;

}

static void Always_82_2(char *t0)
{
    char t4[8];
    char t24[8];
    char t25[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    int t23;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    int t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;

LAB0:    t1 = (t0 + 5104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 6168);
    *((int *)t2) = 1;
    t3 = (t0 + 5136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    t5 = (t0 + 1928);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(87, ng0);

LAB13:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2888);
    t7 = (t0 + 2888);
    t8 = (t7 + 72U);
    t14 = *((char **)t8);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t4, t14, 2, t15, 32, 1);
    t21 = (t4 + 4);
    t9 = *((unsigned int *)t21);
    t23 = (!(t9));
    if (t23 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 3U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 3U);
    t8 = (t0 + 2888);
    t14 = (t0 + 2888);
    t15 = (t14 + 72U);
    t21 = *((char **)t15);
    t22 = ((char*)((ng4)));
    t27 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t24, t25, t26, ((int*)(t21)), 2, t22, 32, 1, t27, 32, 1);
    t28 = (t24 + 4);
    t17 = *((unsigned int *)t28);
    t23 = (!(t17));
    t29 = (t25 + 4);
    t18 = *((unsigned int *)t29);
    t30 = (!(t18));
    t31 = (t23 && t30);
    t32 = (t26 + 4);
    t19 = *((unsigned int *)t32);
    t33 = (!(t19));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB16;

LAB17:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(85, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 3, 0LL);
    goto LAB12;

LAB14:    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB15;

LAB16:    t20 = *((unsigned int *)t26);
    t35 = (t20 + 0);
    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t25);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t8, t4, t35, *((unsigned int *)t25), t39, 0LL);
    goto LAB17;

}

static void Always_94_3(char *t0)
{
    char t4[8];
    char t9[8];
    char t29[8];
    char t36[8];
    char t69[8];
    char t79[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
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

LAB0:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6184);
    *((int *)t2) = 1;
    t3 = (t0 + 5384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);
    t5 = (t0 + 3368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB6:    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB8;

LAB9:    memset(t4, 0, 8);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t13) == 0)
        goto LAB11;

LAB13:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;

LAB14:    t20 = (t0 + 1928);
    xsi_vlogvar_assign_value(t20, t4, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t4) = t16;
    t17 = *((unsigned int *)t7);
    t18 = (t17 >> 1);
    t21 = (t18 & 1);
    *((unsigned int *)t6) = t21;
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t4) = t16;
    t17 = *((unsigned int *)t7);
    t18 = (t17 >> 2);
    t21 = (t18 & 1);
    *((unsigned int *)t6) = t21;
    t8 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t6) != 0)
        goto LAB17;

LAB18:    t8 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t8);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB19;

LAB20:    memcpy(t36, t4, 8);

LAB21:    t68 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t68, t36, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB34;

LAB33:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB36;

LAB35:    *((unsigned int *)t4) = 1;

LAB36:    memset(t9, 0, 8);
    t11 = (t4 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t11) != 0)
        goto LAB40;

LAB41:    t13 = (t9 + 4);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t13);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB42;

LAB43:    memcpy(t69, t9, 8);

LAB44:    t75 = (t69 + 4);
    t63 = *((unsigned int *)t75);
    t64 = (~(t63));
    t65 = *((unsigned int *)t69);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB57;

LAB58:
LAB59:    goto LAB2;

LAB7:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB17:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB19:    t10 = (t0 + 3208);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t9, 0, 8);
    t13 = (t12 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t12);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t13) == 0)
        goto LAB22;

LAB24:    t19 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t19) = 1;

LAB25:    memset(t29, 0, 8);
    t20 = (t9 + 4);
    t30 = *((unsigned int *)t20);
    t31 = (~(t30));
    t32 = *((unsigned int *)t9);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t20) != 0)
        goto LAB28;

LAB29:    t37 = *((unsigned int *)t4);
    t38 = *((unsigned int *)t29);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t4 + 4);
    t41 = (t29 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB22:    *((unsigned int *)t9) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t29) = 1;
    goto LAB29;

LAB28:    t35 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB29;

LAB30:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t4 + 4);
    t51 = (t29 + 4);
    t52 = *((unsigned int *)t4);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t29);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB32;

LAB34:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB36;

LAB38:    *((unsigned int *)t9) = 1;
    goto LAB41;

LAB40:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB41;

LAB42:    t19 = (t0 + 3528);
    t20 = (t19 + 56U);
    t35 = *((char **)t20);
    t40 = ((char*)((ng6)));
    memset(t29, 0, 8);
    t41 = (t35 + 4);
    if (*((unsigned int *)t41) != 0)
        goto LAB46;

LAB45:    t42 = (t40 + 4);
    if (*((unsigned int *)t42) != 0)
        goto LAB46;

LAB49:    if (*((unsigned int *)t35) > *((unsigned int *)t40))
        goto LAB48;

LAB47:    *((unsigned int *)t29) = 1;

LAB48:    memset(t36, 0, 8);
    t51 = (t29 + 4);
    t24 = *((unsigned int *)t51);
    t25 = (~(t24));
    t26 = *((unsigned int *)t29);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t51) != 0)
        goto LAB52;

LAB53:    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t36);
    t32 = (t30 & t31);
    *((unsigned int *)t69) = t32;
    t70 = (t9 + 4);
    t71 = (t36 + 4);
    t72 = (t69 + 4);
    t33 = *((unsigned int *)t70);
    t34 = *((unsigned int *)t71);
    t37 = (t33 | t34);
    *((unsigned int *)t72) = t37;
    t38 = *((unsigned int *)t72);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB44;

LAB46:    t50 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB48;

LAB50:    *((unsigned int *)t36) = 1;
    goto LAB53;

LAB52:    t68 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB53;

LAB54:    t43 = *((unsigned int *)t69);
    t44 = *((unsigned int *)t72);
    *((unsigned int *)t69) = (t43 | t44);
    t73 = (t9 + 4);
    t74 = (t36 + 4);
    t45 = *((unsigned int *)t9);
    t46 = (~(t45));
    t47 = *((unsigned int *)t73);
    t48 = (~(t47));
    t49 = *((unsigned int *)t36);
    t52 = (~(t49));
    t53 = *((unsigned int *)t74);
    t54 = (~(t53));
    t60 = (t46 & t48);
    t61 = (t52 & t54);
    t55 = (~(t60));
    t56 = (~(t61));
    t57 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t57 & t55);
    t58 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t58 & t56);
    t59 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t59 & t55);
    t62 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t62 & t56);
    goto LAB56;

LAB57:    xsi_set_current_line(103, ng0);

LAB60:    xsi_set_current_line(104, ng0);
    t76 = (t0 + 3688);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t80 = (t0 + 3688);
    t81 = (t80 + 72U);
    t82 = *((char **)t81);
    t83 = (t0 + 3688);
    t84 = (t83 + 64U);
    t85 = *((char **)t84);
    t86 = (t0 + 3528);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t79, 16, t78, t82, t85, 2, 2, t88, 32, 2, t89, 32, 1);
    t90 = (t0 + 2248);
    xsi_vlogvar_assign_value(t90, t79, 0, 0, 16);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 3528);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t35 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t4, 16, t5, t8, t12, 2, 2, t20, 32, 2, t35, 32, 1);
    t40 = (t0 + 2408);
    xsi_vlogvar_assign_value(t40, t4, 0, 0, 16);
    goto LAB59;

}

static void Always_110_4(char *t0)
{
    char t4[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 5600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 6200);
    *((int *)t2) = 1;
    t3 = (t0 + 5632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(111, ng0);

LAB5:    xsi_set_current_line(112, ng0);
    t5 = (t0 + 1928);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(113, ng0);

LAB13:    xsi_set_current_line(114, ng0);
    t22 = ((char*)((ng2)));
    memset(t21, 0, 8);
    xsi_vlog_signed_unary_minus(t21, 32, t22, 32);
    t23 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t23, t21, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(117, ng0);

LAB17:    xsi_set_current_line(118, ng0);
    t5 = (t0 + 3528);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t7, 32, t8, 32);
    t14 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 32, 0LL);
    goto LAB16;

}

static void Initial_122_5(char *t0)
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
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    unsigned int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    int t24;

LAB0:    t1 = (t0 + 5848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng0);

LAB4:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng13)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng13)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng15)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng15)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng18)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng18)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng21)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng21)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng23)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng23)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng26)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng26)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3688);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 2, t12, 32, 1, t13, 32, 1);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 5656);
    xsi_process_wait(t2, 694000LL);
    *((char **)t1) = &&LAB45;

LAB1:    return;
LAB5:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB6;

LAB7:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB10;

LAB11:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB12;

LAB13:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB14;

LAB15:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB16;

LAB17:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB18;

LAB19:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB20;

LAB21:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB22;

LAB23:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB24;

LAB25:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB26;

LAB27:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB28;

LAB29:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB30;

LAB31:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB32;

LAB33:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB34;

LAB35:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB36;

LAB37:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB38;

LAB39:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB40;

LAB41:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB42;

LAB43:    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t24);
    goto LAB44;

LAB45:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 2088);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    goto LAB1;

}


extern void work_m_00000000002086839131_4047927162_init()
{
	static char *pe[] = {(void *)Always_63_0,(void *)Always_73_1,(void *)Always_82_2,(void *)Always_94_3,(void *)Always_110_4,(void *)Initial_122_5};
	xsi_register_didat("work_m_00000000002086839131_4047927162", "isim/serializer_testbench_isim_beh.exe.sim/work/m_00000000002086839131_4047927162.didat");
	xsi_register_executes(pe);
}
