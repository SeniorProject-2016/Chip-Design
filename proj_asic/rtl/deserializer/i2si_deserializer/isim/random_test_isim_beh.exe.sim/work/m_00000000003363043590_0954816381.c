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
static const char *ng0 = "C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/deserializer/i2si_deserializer/i2si_deserializer.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Always_63_0(char *t0)
{
    char t13[8];
    char t17[8];
    char t34[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
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
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4608);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(72, ng0);

LAB10:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t2) != 0)
        goto LAB13;

LAB14:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB15;

LAB16:    memcpy(t42, t13, 8);

LAB17:    t74 = (t42 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t42);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB33:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t2) != 0)
        goto LAB36;

LAB37:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB38;

LAB39:    memcpy(t42, t13, 8);

LAB40:    t81 = (t42 + 4);
    t75 = *((unsigned int *)t81);
    t76 = (~(t75));
    t77 = *((unsigned int *)t42);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB56:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(66, ng0);

LAB9:    xsi_set_current_line(67, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB13:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB15:    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    memset(t17, 0, 8);
    t11 = (t12 + 4);
    t18 = *((unsigned int *)t11);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB21;

LAB19:    if (*((unsigned int *)t11) == 0)
        goto LAB18;

LAB20:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;

LAB21:    t24 = (t17 + 4);
    t25 = (t12 + 4);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    *((unsigned int *)t17) = t27;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB23;

LAB22:    t32 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t32 & 1U);
    t33 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t33 & 1U);
    memset(t34, 0, 8);
    t35 = (t17 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t17);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t35) != 0)
        goto LAB26;

LAB27:    t43 = *((unsigned int *)t13);
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
        goto LAB28;

LAB29:
LAB30:    goto LAB17;

LAB18:    *((unsigned int *)t17) = 1;
    goto LAB21;

LAB23:    t28 = *((unsigned int *)t17);
    t29 = *((unsigned int *)t25);
    *((unsigned int *)t17) = (t28 | t29);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t30 | t31);
    goto LAB22;

LAB24:    *((unsigned int *)t34) = 1;
    goto LAB27;

LAB26:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB27;

LAB28:    t54 = *((unsigned int *)t42);
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
    goto LAB30;

LAB31:    xsi_set_current_line(74, ng0);
    t80 = ((char*)((ng2)));
    t81 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t81, t80, 0, 0, 1, 0LL);
    goto LAB33;

LAB34:    *((unsigned int *)t13) = 1;
    goto LAB37;

LAB36:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB37;

LAB38:    t11 = (t0 + 3048);
    t12 = (t11 + 56U);
    t23 = *((char **)t12);
    memset(t17, 0, 8);
    t24 = (t23 + 4);
    t18 = *((unsigned int *)t24);
    t19 = (~(t18));
    t20 = *((unsigned int *)t23);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t24) == 0)
        goto LAB41;

LAB43:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB44:    t35 = (t17 + 4);
    t41 = (t23 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (~(t26));
    *((unsigned int *)t17) = t27;
    *((unsigned int *)t35) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB46;

LAB45:    t32 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t32 & 1U);
    t33 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t33 & 1U);
    memset(t34, 0, 8);
    t46 = (t17 + 4);
    t36 = *((unsigned int *)t46);
    t37 = (~(t36));
    t38 = *((unsigned int *)t17);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t46) != 0)
        goto LAB49;

LAB50:    t43 = *((unsigned int *)t13);
    t44 = *((unsigned int *)t34);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t48 = (t13 + 4);
    t56 = (t34 + 4);
    t57 = (t42 + 4);
    t49 = *((unsigned int *)t48);
    t50 = *((unsigned int *)t56);
    t51 = (t49 | t50);
    *((unsigned int *)t57) = t51;
    t52 = *((unsigned int *)t57);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB40;

LAB41:    *((unsigned int *)t17) = 1;
    goto LAB44;

LAB46:    t28 = *((unsigned int *)t17);
    t29 = *((unsigned int *)t41);
    *((unsigned int *)t17) = (t28 | t29);
    t30 = *((unsigned int *)t35);
    t31 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t30 | t31);
    goto LAB45;

LAB47:    *((unsigned int *)t34) = 1;
    goto LAB50;

LAB49:    t47 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB50;

LAB51:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t57);
    *((unsigned int *)t42) = (t54 | t55);
    t74 = (t13 + 4);
    t80 = (t34 + 4);
    t58 = *((unsigned int *)t13);
    t59 = (~(t58));
    t60 = *((unsigned int *)t74);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (~(t62));
    t64 = *((unsigned int *)t80);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t70 & t68);
    t71 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB53;

LAB54:    xsi_set_current_line(78, ng0);
    t82 = ((char*)((ng2)));
    t83 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t83, t82, 0, 0, 1, 0LL);
    goto LAB56;

}


extern void work_m_00000000003363043590_0954816381_init()
{
	static char *pe[] = {(void *)Always_63_0};
	xsi_register_didat("work_m_00000000003363043590_0954816381", "isim/random_test_isim_beh.exe.sim/work/m_00000000003363043590_0954816381.didat");
	xsi_register_executes(pe);
}
