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
static const char *ng0 = "C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/i2so/i2s_out_test3.v";
static const char *ng1 = "---Cannot queue: Buffer Full---";
static const char *ng2 = "Queued %h";
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static const char *ng5 = "i2s_out_test3_output.txt";
static int ng6[] = {1000, 0};
static int ng7[] = {1001, 0};
static int ng8[] = {20, 0};
static unsigned int ng9[] = {0U, 0U};
static int ng10[] = {31, 0};
static int ng11[] = {30000, 0};
static const char *ng12 = "No matches found. Comparison test failed";
static const char *ng13 = "word: %h";
static const char *ng14 = "    ---     ";
static const char *ng15 = "filt_data_list [%d";
static const char *ng16 = "]: %h";
static const char *ng17 = "     ---     Pass";
static const char *ng18 = "\nNumber of Comparisons:                    %d";
static const char *ng19 = "\nNumber of Successful Comparisons:         %d";
static const char *ng20 = "\nNumber of Failed Comparisons:           %d";
static const char *ng21 = "     ---     Fail";



static int sp_queue(char *t1, char *t2)
{
    char t5[8];
    char t21[8];
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
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    int t33;
    int t34;
    int t35;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 984);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(255, ng0);
    t6 = (t1 + 2096U);
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

LAB10:    xsi_set_current_line(258, ng0);

LAB12:    xsi_set_current_line(259, ng0);
    t4 = (t1 + 7136);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t13 = (t1 + 984);
    xsi_vlogfile_write(1, 0, 0, ng2, 2, t13, (char)118, t7, 32);
    xsi_set_current_line(260, ng0);
    t4 = (t1 + 7136);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t13 = (t1 + 3616);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 32);
    xsi_set_current_line(261, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 3456);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(262, ng0);
    t4 = (t1 + 5056);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t13 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t7, 32, t13, 32);
    t14 = (t1 + 5056);
    xsi_vlogvar_wait_assign_value(t14, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(263, ng0);
    t4 = (t1 + 3616);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t13 = (t1 + 6336);
    t14 = (t1 + 6336);
    t20 = (t14 + 72U);
    t22 = *((char **)t20);
    t23 = (t1 + 6336);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t1 + 5056);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t5, t21, t22, t25, 2, 1, t28, 32, 1);
    t29 = (t5 + 4);
    t8 = *((unsigned int *)t29);
    t30 = (!(t8));
    t31 = (t21 + 4);
    t9 = *((unsigned int *)t31);
    t32 = (!(t9));
    t33 = (t30 && t32);
    if (t33 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(264, ng0);
    t4 = (t1 + 5696);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t13 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t7, 32, t13, 32);
    t14 = (t1 + 5696);
    xsi_vlogvar_wait_assign_value(t14, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(265, ng0);
    t4 = (t2 + 88U);
    t6 = *((char **)t4);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB15;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    *((unsigned int *)t5) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(256, ng0);
    t20 = (t1 + 984);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t20);

LAB11:    goto LAB4;

LAB13:    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t21);
    t34 = (t10 - t11);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t7, 0, *((unsigned int *)t21), t35, 0LL);
    goto LAB14;

LAB15:    xsi_set_current_line(266, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB16;
    t0 = 1;
    goto LAB1;

LAB16:    xsi_set_current_line(266, ng0);
    t7 = ((char*)((ng4)));
    t13 = (t1 + 3456);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 1);
    goto LAB11;

}

static void Initial_71_0(char *t0)
{
    char t3[8];
    char t12[8];
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
    char *t13;
    char *t14;
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
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;

LAB0:    xsi_set_current_line(72, ng0);

LAB2:    xsi_set_current_line(74, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3296);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3456);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3616);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3776);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname(ng5);
    t1 = (t3 + 4);
    *((int *)t1) = 0;
    t2 = (t0 + 4896);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(85, ng0);
    xsi_set_current_line(85, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 5216);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 5216);
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
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);

LAB6:    xsi_set_current_line(87, ng0);
    *((int *)t12) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t13 = (t12 + 4);
    *((int *)t13) = 0;
    t14 = (t0 + 6176);
    t17 = (t0 + 6176);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 6176);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 5216);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 5216);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng3)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t4, 32, t5, 32);
    t6 = (t0 + 5216);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB3;

LAB7:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t12, 0, *((unsigned int *)t16), t36);
    goto LAB8;

}

static void Always_94_1(char *t0)
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

LAB0:    t1 = (t0 + 8304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);

LAB4:    xsi_set_current_line(96, ng0);

LAB5:    xsi_set_current_line(97, ng0);

LAB6:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 8112);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 3296);
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
    t24 = (t0 + 3296);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3936);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t7 = (t0 + 3936);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 32);
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

static void Always_105_2(char *t0)
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;

LAB0:    t1 = (t0 + 8552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 10856);
    *((int *)t2) = 1;
    t3 = (t0 + 8584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
    t5 = (t0 + 1616U);
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

LAB11:    xsi_set_current_line(114, ng0);

LAB14:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 472);
    t12 = *((char **)t6);
    t6 = ((char*)((ng3)));
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

LAB16:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);

LAB17:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(108, ng0);

LAB13:    xsi_set_current_line(109, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(117, ng0);

LAB18:    xsi_set_current_line(118, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 4256);
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
    t20 = (t0 + 4256);
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

}

static void Always_130_3(char *t0)
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

LAB0:    t1 = (t0 + 8800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 10872);
    *((int *)t2) = 1;
    t3 = (t0 + 8832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(131, ng0);

LAB5:    xsi_set_current_line(132, ng0);
    t5 = (t0 + 1616U);
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

LAB11:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(133, ng0);

LAB13:    xsi_set_current_line(134, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 4576);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4736);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(138, ng0);

LAB17:    xsi_set_current_line(139, ng0);
    t5 = (t0 + 2256U);
    t6 = *((char **)t5);
    t5 = (t0 + 4576);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 4576);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4736);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB16;

}

static void Always_145_4(char *t0)
{
    char t4[8];
    char t21[8];
    char t24[8];
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
    char *t23;
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
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;

LAB0:    t1 = (t0 + 9048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 10888);
    *((int *)t2) = 1;
    t3 = (t0 + 9080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(146, ng0);

LAB5:    xsi_set_current_line(147, ng0);
    t5 = (t0 + 1616U);
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
    t2 = (t0 + 5056);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    t12 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 32, t6, 32, t12, 32);
    memset(t21, 0, 8);
    xsi_vlog_signed_greater(t21, 32, t5, 32, t4, 32);
    t13 = (t21 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t21);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3936);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_mod(t4, 32, t5, 32, t6, 32);
    t12 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t4, 32, t12, 32);
    t13 = (t21 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t21);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(148, ng0);

LAB13:    xsi_set_current_line(149, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 5056);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(153, ng0);

LAB17:    xsi_set_current_line(154, ng0);
    t19 = (t0 + 5056);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    t23 = ((char*)((ng3)));
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 32, t22, 32, t23, 32);
    t25 = (t0 + 5056);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 32, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(160, ng0);

LAB21:    xsi_set_current_line(161, ng0);
    t19 = (t0 + 6176);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    t23 = (t0 + 6176);
    t25 = (t23 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 6176);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = (t0 + 5056);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_array_select_value(t24, 32, t22, t26, t29, 2, 1, t32, 32, 1);
    t33 = (t0 + 8856);
    t34 = (t0 + 984);
    t35 = xsi_create_subprogram_invocation(t33, 0, t0, t34, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t34, t35);
    t36 = (t0 + 7136);
    xsi_vlogvar_assign_value(t36, t24, 0, 0, 32);

LAB24:    t37 = (t0 + 8952);
    t38 = *((char **)t37);
    t39 = (t38 + 80U);
    t40 = *((char **)t39);
    t41 = (t40 + 272U);
    t42 = *((char **)t41);
    t43 = (t42 + 0U);
    t44 = *((char **)t43);
    t45 = ((int  (*)(char *, char *))t44)(t0, t38);

LAB26:    if (t45 != 0)
        goto LAB27;

LAB22:    t38 = (t0 + 984);
    xsi_vlog_subprogram_popinvocation(t38);

LAB23:    t46 = (t0 + 8952);
    t47 = *((char **)t46);
    t46 = (t0 + 984);
    t48 = (t0 + 8856);
    t49 = 0;
    xsi_delete_subprogram_invocation(t46, t47, t0, t48, t49);
    goto LAB20;

LAB25:;
LAB27:    t37 = (t0 + 9048U);
    *((char **)t37) = &&LAB24;
    goto LAB1;

}

static void Cont_166_5(char *t0)
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

LAB0:    t1 = (t0 + 9296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 3936);
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

LAB7:    t15 = (t0 + 11080);
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
    t28 = (t0 + 10904);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Cont_167_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 9544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11144);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 10920);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_168_7(char *t0)
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

LAB0:    t1 = (t0 + 9792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 4256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 4416);
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
LAB12:    t58 = (t0 + 11208);
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
    t71 = (t0 + 10936);
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

static void Cont_169_8(char *t0)
{
    char t3[8];
    char t26[8];
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
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

LAB0:    t1 = (t0 + 10040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 4576);
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

LAB7:    t13 = (t3 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t3) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 4736);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t27 = *((unsigned int *)t3);
    t28 = *((unsigned int *)t25);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t3 + 4);
    t31 = (t25 + 4);
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
LAB12:    t58 = (t0 + 11272);
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
    t71 = (t0 + 10952);
    *((int *)t71) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t3) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB10:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t3 + 4);
    t41 = (t25 + 4);
    t42 = *((unsigned int *)t3);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t25);
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

static void Always_173_9(char *t0)
{
    char t4[8];
    char t22[8];
    char t23[8];
    char t24[8];
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    char *t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;

LAB0:    t1 = (t0 + 10288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 10968);
    *((int *)t2) = 1;
    t3 = (t0 + 10320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(174, ng0);

LAB5:    xsi_set_current_line(175, ng0);
    t5 = (t0 + 1616U);
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

LAB11:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(176, ng0);

LAB13:    xsi_set_current_line(177, ng0);
    t19 = ((char*)((ng9)));
    t20 = (t0 + 6496);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(180, ng0);

LAB17:    xsi_set_current_line(181, ng0);
    t5 = (t0 + 6496);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t13 = (t4 + 4);
    t19 = (t12 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (t14 >> 0);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t19);
    t17 = (t16 >> 0);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 2147483647U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 2147483647U);
    t20 = (t0 + 6496);
    t25 = (t0 + 6496);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng10)));
    t29 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t22, t23, t24, ((int*)(t27)), 2, t28, 32, 1, t29, 32, 1);
    t30 = (t22 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t23 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    t37 = (t24 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (!(t38));
    t40 = (t36 && t39);
    if (t40 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    t2 = (t0 + 6496);
    t5 = (t0 + 6496);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB20;

LAB21:    goto LAB16;

LAB18:    t41 = *((unsigned int *)t24);
    t42 = (t41 + 0);
    t43 = *((unsigned int *)t22);
    t44 = *((unsigned int *)t23);
    t45 = (t43 - t44);
    t46 = (t45 + 1);
    xsi_vlogvar_wait_assign_value(t20, t4, t42, *((unsigned int *)t23), t46, 0LL);
    goto LAB19;

LAB20:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB21;

}

static void Always_188_10(char *t0)
{
    char t6[8];
    char t19[8];
    char t26[8];
    char t64[8];
    char t86[8];
    char t87[8];
    char t88[8];
    char t93[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
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

LAB0:    t1 = (t0 + 10536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 10984);
    *((int *)t2) = 1;
    t3 = (t0 + 10568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(189, ng0);

LAB5:    xsi_set_current_line(190, ng0);
    t4 = (t0 + 2736U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t26, t6, 8);

LAB12:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 1936U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB16:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB16;

LAB17:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
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
    goto LAB19;

LAB20:    xsi_set_current_line(191, ng0);

LAB23:    xsi_set_current_line(193, ng0);
    t65 = (t0 + 6656);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    memset(t64, 0, 8);
    t68 = (t67 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t67);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t68) == 0)
        goto LAB24;

LAB26:    t74 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t74) = 1;

LAB27:    t75 = (t64 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t64);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 3936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t5, 32);
    memset(t19, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t12) != 0)
        goto LAB46;

LAB47:    t17 = (t19 + 4);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t17);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB48;

LAB49:    memcpy(t86, t19, 8);

LAB50:    memset(t87, 0, 8);
    t74 = (t86 + 4);
    t69 = *((unsigned int *)t74);
    t70 = (~(t69));
    t71 = *((unsigned int *)t86);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t74) != 0)
        goto LAB64;

LAB65:    t81 = (t87 + 4);
    t76 = *((unsigned int *)t87);
    t77 = *((unsigned int *)t81);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB66;

LAB67:    memcpy(t93, t87, 8);

LAB68:    t125 = (t93 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t93);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB76;

LAB77:
LAB78:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 6816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB81;

LAB82:
LAB83:    goto LAB22;

LAB24:    *((unsigned int *)t64) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(194, ng0);

LAB31:    xsi_set_current_line(195, ng0);
    xsi_set_current_line(195, ng0);
    t81 = ((char*)((ng4)));
    t82 = (t0 + 5376);
    xsi_vlogvar_assign_value(t82, t81, 0, 0, 32);

LAB32:    t2 = (t0 + 5376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB33;

LAB34:    goto LAB30;

LAB33:    xsi_set_current_line(196, ng0);

LAB35:    xsi_set_current_line(197, ng0);
    t13 = (t0 + 6496);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t25 = (t0 + 6336);
    t30 = (t25 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 6336);
    t40 = (t32 + 72U);
    t41 = *((char **)t40);
    t58 = (t0 + 6336);
    t65 = (t58 + 64U);
    t66 = *((char **)t65);
    t67 = (t0 + 5376);
    t68 = (t67 + 56U);
    t74 = *((char **)t68);
    xsi_vlog_generic_get_array_select_value(t19, 32, t31, t41, t66, 2, 1, t74, 32, 1);
    memset(t26, 0, 8);
    t75 = (t18 + 4);
    t81 = (t19 + 4);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t19);
    t16 = (t14 ^ t15);
    t20 = *((unsigned int *)t75);
    t21 = *((unsigned int *)t81);
    t22 = (t20 ^ t21);
    t23 = (t16 | t22);
    t24 = *((unsigned int *)t75);
    t27 = *((unsigned int *)t81);
    t28 = (t24 | t27);
    t29 = (~(t28));
    t33 = (t23 & t29);
    if (t33 != 0)
        goto LAB39;

LAB36:    if (t28 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t26) = 1;

LAB39:    t83 = (t26 + 4);
    t34 = *((unsigned int *)t83);
    t35 = (~(t34));
    t36 = *((unsigned int *)t26);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 5376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t12 = (t0 + 5376);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 32);
    goto LAB32;

LAB38:    t82 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(198, ng0);

LAB43:    xsi_set_current_line(199, ng0);
    t84 = ((char*)((ng3)));
    t85 = (t0 + 6656);
    xsi_vlogvar_assign_value(t85, t84, 0, 0, 1);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 5376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5536);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB42;

LAB44:    *((unsigned int *)t19) = 1;
    goto LAB47;

LAB46:    t13 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB47;

LAB48:    t18 = (t0 + 6816);
    t25 = (t18 + 56U);
    t30 = *((char **)t25);
    memset(t26, 0, 8);
    t31 = (t30 + 4);
    t20 = *((unsigned int *)t31);
    t21 = (~(t20));
    t22 = *((unsigned int *)t30);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB54;

LAB52:    if (*((unsigned int *)t31) == 0)
        goto LAB51;

LAB53:    t32 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t32) = 1;

LAB54:    memset(t64, 0, 8);
    t40 = (t26 + 4);
    t27 = *((unsigned int *)t40);
    t28 = (~(t27));
    t29 = *((unsigned int *)t26);
    t33 = (t29 & t28);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t40) != 0)
        goto LAB57;

LAB58:    t35 = *((unsigned int *)t19);
    t36 = *((unsigned int *)t64);
    t37 = (t35 & t36);
    *((unsigned int *)t86) = t37;
    t58 = (t19 + 4);
    t65 = (t64 + 4);
    t66 = (t86 + 4);
    t38 = *((unsigned int *)t58);
    t39 = *((unsigned int *)t65);
    t42 = (t38 | t39);
    *((unsigned int *)t66) = t42;
    t43 = *((unsigned int *)t66);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB51:    *((unsigned int *)t26) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t64) = 1;
    goto LAB58;

LAB57:    t41 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB58;

LAB59:    t45 = *((unsigned int *)t86);
    t46 = *((unsigned int *)t66);
    *((unsigned int *)t86) = (t45 | t46);
    t67 = (t19 + 4);
    t68 = (t64 + 4);
    t47 = *((unsigned int *)t19);
    t48 = (~(t47));
    t49 = *((unsigned int *)t67);
    t52 = (~(t49));
    t53 = *((unsigned int *)t64);
    t54 = (~(t53));
    t55 = *((unsigned int *)t68);
    t56 = (~(t55));
    t50 = (t48 & t52);
    t51 = (t54 & t56);
    t57 = (~(t50));
    t59 = (~(t51));
    t60 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t60 & t57);
    t61 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t61 & t59);
    t62 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t62 & t57);
    t63 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t63 & t59);
    goto LAB61;

LAB62:    *((unsigned int *)t87) = 1;
    goto LAB65;

LAB64:    t75 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB65;

LAB66:    t82 = (t0 + 6976);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    memset(t88, 0, 8);
    t85 = (t84 + 4);
    t79 = *((unsigned int *)t85);
    t80 = (~(t79));
    t89 = *((unsigned int *)t84);
    t90 = (t89 & t80);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t85) != 0)
        goto LAB71;

LAB72:    t94 = *((unsigned int *)t87);
    t95 = *((unsigned int *)t88);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t97 = (t87 + 4);
    t98 = (t88 + 4);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t97);
    t101 = *((unsigned int *)t98);
    t102 = (t100 | t101);
    *((unsigned int *)t99) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB68;

LAB69:    *((unsigned int *)t88) = 1;
    goto LAB72;

LAB71:    t92 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB72;

LAB73:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t93) = (t105 | t106);
    t107 = (t87 + 4);
    t108 = (t88 + 4);
    t109 = *((unsigned int *)t87);
    t110 = (~(t109));
    t111 = *((unsigned int *)t107);
    t112 = (~(t111));
    t113 = *((unsigned int *)t88);
    t114 = (~(t113));
    t115 = *((unsigned int *)t108);
    t116 = (~(t115));
    t117 = (t110 & t112);
    t118 = (t114 & t116);
    t119 = (~(t117));
    t120 = (~(t118));
    t121 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t121 & t119);
    t122 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t122 & t120);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    t124 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t124 & t120);
    goto LAB75;

LAB76:    xsi_set_current_line(208, ng0);

LAB79:    xsi_set_current_line(209, ng0);
    t131 = ((char*)((ng3)));
    t132 = (t0 + 6656);
    xsi_vlogvar_assign_value(t132, t131, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 10344);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB80:    xsi_set_current_line(212, ng0);
    t3 = (t0 + 4896);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    goto LAB78;

LAB81:    xsi_set_current_line(217, ng0);

LAB84:    xsi_set_current_line(219, ng0);
    t12 = (t0 + 6496);
    t13 = (t12 + 56U);
    t17 = *((char **)t13);
    t18 = (t0 + 6336);
    t25 = (t18 + 56U);
    t30 = *((char **)t25);
    t31 = (t0 + 6336);
    t32 = (t31 + 72U);
    t40 = *((char **)t32);
    t41 = (t0 + 6336);
    t58 = (t41 + 64U);
    t65 = *((char **)t58);
    t66 = (t0 + 5536);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    xsi_vlog_generic_get_array_select_value(t6, 32, t30, t40, t65, 2, 1, t68, 32, 1);
    memset(t19, 0, 8);
    t74 = (t17 + 4);
    t75 = (t6 + 4);
    t14 = *((unsigned int *)t17);
    t15 = *((unsigned int *)t6);
    t16 = (t14 ^ t15);
    t20 = *((unsigned int *)t74);
    t21 = *((unsigned int *)t75);
    t22 = (t20 ^ t21);
    t23 = (t16 | t22);
    t24 = *((unsigned int *)t74);
    t27 = *((unsigned int *)t75);
    t28 = (t24 | t27);
    t29 = (~(t28));
    t33 = (t23 & t29);
    if (t33 != 0)
        goto LAB88;

LAB85:    if (t28 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t19) = 1;

LAB88:    t82 = (t19 + 4);
    t34 = *((unsigned int *)t82);
    t35 = (~(t34));
    t36 = *((unsigned int *)t19);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 5536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    t12 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t5, 32, t12, 32);
    memset(t19, 0, 8);
    xsi_vlog_signed_greater(t19, 32, t4, 32, t6, 32);
    t13 = (t19 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t19);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(237, ng0);

LAB97:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 6016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t12 = (t0 + 6016);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 32);
    xsi_set_current_line(239, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6496);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng13, 2, t0, (char)118, t13, 32);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng14, 1, t0);
    t17 = (t0 + 5536);
    t18 = (t17 + 56U);
    t25 = *((char **)t18);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng15, 2, t0, (char)119, t25, 32);
    t30 = (t0 + 6336);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t40 = (t0 + 6336);
    t41 = (t40 + 72U);
    t58 = *((char **)t41);
    t65 = (t0 + 6336);
    t66 = (t65 + 64U);
    t67 = *((char **)t66);
    t68 = (t0 + 5536);
    t74 = (t68 + 56U);
    t75 = *((char **)t74);
    xsi_vlog_generic_get_array_select_value(t6, 32, t32, t58, t67, 2, 1, t75, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng16, 2, t0, (char)118, t6, 32);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng21, 1, t0);

LAB95:
LAB91:    xsi_set_current_line(243, ng0);
    t2 = (t0 + 5536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t12 = (t0 + 5536);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 32);
    goto LAB83;

LAB87:    t81 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(220, ng0);

LAB92:    xsi_set_current_line(221, ng0);
    t83 = (t0 + 5856);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t92 = ((char*)((ng3)));
    memset(t26, 0, 8);
    xsi_vlog_signed_add(t26, 32, t85, 32, t92, 32);
    t97 = (t0 + 5856);
    xsi_vlogvar_assign_value(t97, t26, 0, 0, 32);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6496);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng13, 2, t0, (char)118, t13, 32);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng14, 1, t0);
    t17 = (t0 + 5536);
    t18 = (t17 + 56U);
    t25 = *((char **)t18);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng15, 2, t0, (char)119, t25, 32);
    t30 = (t0 + 6336);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t40 = (t0 + 6336);
    t41 = (t40 + 72U);
    t58 = *((char **)t41);
    t65 = (t0 + 6336);
    t66 = (t65 + 64U);
    t67 = *((char **)t66);
    t68 = (t0 + 5536);
    t74 = (t68 + 56U);
    t75 = *((char **)t74);
    xsi_vlog_generic_get_array_select_value(t6, 32, t32, t58, t67, 2, 1, t75, 32, 1);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng16, 2, t0, (char)118, t6, 32);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng17, 1, t0);
    goto LAB91;

LAB93:    xsi_set_current_line(228, ng0);

LAB96:    xsi_set_current_line(229, ng0);
    t17 = ((char*)((ng4)));
    t18 = (t0 + 6816);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5856);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t17 = (t0 + 6016);
    t18 = (t17 + 56U);
    t25 = *((char **)t18);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t13, 32, t25, 32);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng18, 2, t0, (char)119, t6, 32);
    t30 = (t0 + 5856);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 0, ng19, 2, t0, (char)119, t32, 32);
    t40 = (t0 + 6016);
    t41 = (t40 + 56U);
    t58 = *((char **)t41);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng20, 2, t0, (char)119, t58, 32);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 4896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB95;

}


extern void work_m_00000000002522641499_0965485612_init()
{
	static char *pe[] = {(void *)Initial_71_0,(void *)Always_94_1,(void *)Always_105_2,(void *)Always_130_3,(void *)Always_145_4,(void *)Cont_166_5,(void *)Cont_167_6,(void *)Cont_168_7,(void *)Cont_169_8,(void *)Always_173_9,(void *)Always_188_10};
	static char *se[] = {(void *)sp_queue};
	xsi_register_didat("work_m_00000000002522641499_0965485612", "isim/i2s_out_test3_isim_beh.exe.sim/work/m_00000000002522641499_0965485612.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
