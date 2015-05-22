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
static const char *ng0 = "C:/Users/cathy/Documents/UCR/spring2015/CS161L/lab5/lab5/cs161_processor.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );


static void work_a_3376368415_3576693540_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(168, ng0);

LAB3:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 10592);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 10432);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3376368415_3576693540_p_1(char *t0)
{
    char t17[16];
    char t19[16];
    char t24[16];
    char t48[16];
    char t50[16];
    char t55[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned char t38;
    unsigned char t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t49;
    char *t51;
    char *t52;
    int t53;
    unsigned int t54;
    char *t56;
    int t57;
    unsigned char t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;

LAB0:    xsi_set_current_line(169, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = (15 - 31);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:    t32 = (t0 + 4232U);
    t33 = *((char **)t32);
    t34 = (15 - 31);
    t35 = (t34 * -1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t32 = (t33 + t37);
    t38 = *((unsigned char *)t32);
    t39 = (t38 == (unsigned char)3);
    if (t39 != 0)
        goto LAB7;

LAB8:
LAB2:    t63 = (t0 + 10448);
    *((int *)t63) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 19999);
    t11 = (t0 + 4232U);
    t12 = *((char **)t11);
    t13 = (31 - 15);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t11 = (t12 + t15);
    t18 = ((IEEE_P_2592010699) + 4024);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 15;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t22 = (15 - 0);
    t23 = (t22 * 1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t24 + 0U);
    t25 = (t21 + 0U);
    *((int *)t25) = 15;
    t25 = (t21 + 4U);
    *((int *)t25) = 0;
    t25 = (t21 + 8U);
    *((int *)t25) = -1;
    t26 = (0 - 15);
    t23 = (t26 * -1);
    t23 = (t23 + 1);
    t25 = (t21 + 12U);
    *((unsigned int *)t25) = t23;
    t16 = xsi_base_array_concat(t16, t17, t18, (char)97, t9, t19, (char)97, t11, t24, (char)101);
    t23 = (16U + 16U);
    t27 = (32U != t23);
    if (t27 == 1)
        goto LAB5;

LAB6:    t25 = (t0 + 10656);
    t28 = (t25 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t16, 32U);
    xsi_driver_first_trans_fast(t25);
    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t23, 0);
    goto LAB6;

LAB7:    t40 = (t0 + 20015);
    t42 = (t0 + 4232U);
    t43 = *((char **)t42);
    t44 = (31 - 15);
    t45 = (t44 * 1U);
    t46 = (0 + t45);
    t42 = (t43 + t46);
    t49 = ((IEEE_P_2592010699) + 4024);
    t51 = (t50 + 0U);
    t52 = (t51 + 0U);
    *((int *)t52) = 0;
    t52 = (t51 + 4U);
    *((int *)t52) = 15;
    t52 = (t51 + 8U);
    *((int *)t52) = 1;
    t53 = (15 - 0);
    t54 = (t53 * 1);
    t54 = (t54 + 1);
    t52 = (t51 + 12U);
    *((unsigned int *)t52) = t54;
    t52 = (t55 + 0U);
    t56 = (t52 + 0U);
    *((int *)t56) = 15;
    t56 = (t52 + 4U);
    *((int *)t56) = 0;
    t56 = (t52 + 8U);
    *((int *)t56) = -1;
    t57 = (0 - 15);
    t54 = (t57 * -1);
    t54 = (t54 + 1);
    t56 = (t52 + 12U);
    *((unsigned int *)t56) = t54;
    t47 = xsi_base_array_concat(t47, t48, t49, (char)97, t40, t50, (char)97, t42, t55, (char)101);
    t54 = (16U + 16U);
    t58 = (32U != t54);
    if (t58 == 1)
        goto LAB9;

LAB10:    t56 = (t0 + 10656);
    t59 = (t56 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memcpy(t62, t47, 32U);
    xsi_driver_first_trans_fast(t56);
    goto LAB2;

LAB9:    xsi_size_not_matching(32U, t54, 0);
    goto LAB10;

}

static void work_a_3376368415_3576693540_p_2(char *t0)
{
    char t9[16];
    char t11[16];
    char t16[16];
    char *t1;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(171, ng0);

LAB3:    t1 = (t0 + 20031);
    t3 = (t0 + 4232U);
    t4 = *((char **)t3);
    t5 = (31 - 20);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t10 = ((IEEE_P_2592010699) + 4024);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 26;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (26 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t16 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 20;
    t17 = (t13 + 4U);
    *((int *)t17) = 16;
    t17 = (t13 + 8U);
    *((int *)t17) = -1;
    t18 = (16 - 20);
    t15 = (t18 * -1);
    t15 = (t15 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)97, t1, t11, (char)97, t3, t16, (char)101);
    t15 = (27U + 5U);
    t19 = (32U != t15);
    if (t19 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 10720);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t8, 32U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t24 = (t0 + 10464);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t15, 0);
    goto LAB6;

}

static void work_a_3376368415_3576693540_p_3(char *t0)
{
    char t9[16];
    char t11[16];
    char t16[16];
    char *t1;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(172, ng0);

LAB3:    t1 = (t0 + 20058);
    t3 = (t0 + 4232U);
    t4 = *((char **)t3);
    t5 = (31 - 15);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t10 = ((IEEE_P_2592010699) + 4024);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 26;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (26 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t16 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 15;
    t17 = (t13 + 4U);
    *((int *)t17) = 11;
    t17 = (t13 + 8U);
    *((int *)t17) = -1;
    t18 = (11 - 15);
    t15 = (t18 * -1);
    t15 = (t15 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)97, t1, t11, (char)97, t3, t16, (char)101);
    t15 = (27U + 5U);
    t19 = (32U != t15);
    if (t19 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 10784);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t8, 32U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t24 = (t0 + 10480);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t15, 0);
    goto LAB6;

}

static void work_a_3376368415_3576693540_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(300, ng0);

LAB3:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 10848);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 10496);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3376368415_3576693540_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(301, ng0);

LAB3:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = (31 - 5);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 10912);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 6U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 10512);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3376368415_3576693540_init()
{
	static char *pe[] = {(void *)work_a_3376368415_3576693540_p_0,(void *)work_a_3376368415_3576693540_p_1,(void *)work_a_3376368415_3576693540_p_2,(void *)work_a_3376368415_3576693540_p_3,(void *)work_a_3376368415_3576693540_p_4,(void *)work_a_3376368415_3576693540_p_5};
	xsi_register_didat("work_a_3376368415_3576693540", "isim/cs161_processor_isim_beh.exe.sim/work/a_3376368415_3576693540.didat");
	xsi_register_executes(pe);
}
