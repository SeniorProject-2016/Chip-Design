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
static const char *ng0 = "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/project/filter_round_truncate.v";
static int ng1[] = {12, 0};
static int ng2[] = {7, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0, 0, 0};
static int ng5[] = {1, 0};
static int ng6[] = {34, 0};
static int ng7[] = {15, 0};
static const char *ng8 = "acc_t > (1<<15)-1";
static const char *ng9 = "acc_t < -(1<<15) = %d";



static void Cont_19_0(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 3, t2, 32);
    t5 = (t0 + 5320);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 5192);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_21_1(char *t0)
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
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 8);
    t6 = (t3 + 12);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t13 = (t0 + 5384);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 1U;
    t19 = t18;
    t20 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t26 = (t0 + 5208);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_22_2(char *t0)
{
    char t3[16];
    char t5[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2168U);
    t7 = *((char **)t6);
    xsi_vlog_mul_concat(t5, 7, 1, t2, 1U, t7, 1);
    xsi_vlogtype_concat(t3, 47, 47, 2U, t5, 7, t4, 40);
    t6 = (t0 + 5448);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_bit_copy(t11, 0, t3, 0, 47);
    xsi_driver_vfirst_trans(t6, 0, 46);
    t12 = (t0 + 5224);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Always_27_3(char *t0)
{
    char t4[8];
    char t21[16];
    char t22[16];
    char t24[8];
    char t25[8];
    char t26[8];
    char t27[8];
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
    char *t23;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 5240);
    *((int *)t2) = 1;
    t3 = (t0 + 4904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(31, ng0);
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

LAB11:    xsi_set_current_line(38, ng0);

LAB14:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2008U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t6, 5, t5, 32);
    xsi_vlog_unsigned_lshift(t21, 47, t2, 32, t4, 32);
    xsi_vlog_unsigned_add(t22, 47, t3, 47, t21, 47);
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t22, 0, 0, 47, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3048);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 2008U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng6)));
    xsi_vlog_get_indexed_partselect(t21, 34, t5, ((int*)(t13)), 2, t20, 5, 2, t19, 32, 1, 1);
    t23 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t23, t21, 0, 0, 28, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    t12 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_lshift(t4, 32, t6, 32, t12, 32);
    t13 = ((char*)((ng5)));
    memset(t24, 0, 8);
    xsi_vlog_signed_minus(t24, 32, t4, 32, t13, 32);
    memset(t25, 0, 8);
    xsi_vlog_signed_greater(t25, 32, t5, 28, t24, 32);
    t19 = (t25 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t25);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    t12 = ((char*)((ng7)));
    memset(t24, 0, 8);
    xsi_vlog_signed_lshift(t24, 32, t6, 32, t12, 32);
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t24, 32);
    memset(t25, 0, 8);
    xsi_vlog_signed_less(t25, 32, t5, 28, t4, 32);
    t13 = (t25 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t25);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3208);
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
    t13 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 16, 0LL);

LAB24:
LAB17:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB29;

LAB30:
LAB31:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);

LAB13:    xsi_set_current_line(33, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(49, ng0);

LAB18:    xsi_set_current_line(50, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3208);
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
    t13 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 16, 0LL);

LAB21:    goto LAB17;

LAB19:    xsi_set_current_line(53, ng0);
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng7)));
    xsi_vlog_signed_lshift(t21, 47, t5, 32, t6, 32);
    t12 = ((char*)((ng4)));
    xsi_vlog_signed_minus(t22, 47, t21, 47, t12, 32);
    t13 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t13, t22, 0, 0, 47, 0LL);
    goto LAB21;

LAB22:    xsi_set_current_line(59, ng0);

LAB25:    xsi_set_current_line(60, ng0);
    t19 = ((char*)((ng5)));
    t20 = ((char*)((ng7)));
    memset(t27, 0, 8);
    xsi_vlog_signed_lshift(t27, 32, t19, 32, t20, 32);
    memset(t26, 0, 8);
    xsi_vlog_signed_unary_minus(t26, 32, t27, 32);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)119, t26, 32);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3208);
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
    t13 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 16, 0LL);

LAB28:    goto LAB24;

LAB26:    xsi_set_current_line(63, ng0);
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng7)));
    xsi_vlog_signed_lshift(t21, 47, t5, 32, t6, 32);
    t12 = ((char*)((ng4)));
    xsi_vlog_signed_minus(t22, 47, t21, 47, t12, 32);
    t13 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t13, t22, 0, 0, 47, 0LL);
    goto LAB28;

LAB29:    xsi_set_current_line(72, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB31;

}


extern void work_m_00000000001675039751_0424797328_init()
{
	static char *pe[] = {(void *)Cont_19_0,(void *)Cont_21_1,(void *)Cont_22_2,(void *)Always_27_3};
	xsi_register_didat("work_m_00000000001675039751_0424797328", "isim/chip_test_i2si_serial_enable_isim_beh.exe.sim/work/m_00000000001675039751_0424797328.didat");
	xsi_register_executes(pe);
}
