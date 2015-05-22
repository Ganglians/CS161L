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
static const char *ng0 = "C:/Users/cathy/Documents/UCR/spring2015/CS161L/lab5/lab5/alu_control.vhd";
extern char *WORK_P_3583369287;



static void work_a_3044219816_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    char *t21;

LAB0:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4784);
    t4 = xsi_mem_cmp(t1, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB7:    t5 = (t0 + 4786);
    t7 = xsi_mem_cmp(t5, t2, 2U);
    if (t7 == 1)
        goto LAB4;

LAB8:    t8 = (t0 + 4788);
    t10 = xsi_mem_cmp(t8, t2, 2U);
    if (t10 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 4794);
    t3 = (t0 + 2912);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t1 = (t0 + 2832);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(39, ng0);
    t11 = ((WORK_P_3583369287) + 2728U);
    t12 = *((char **)t11);
    t11 = (t0 + 2912);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 4U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB2;

LAB4:    xsi_set_current_line(40, ng0);
    t1 = ((WORK_P_3583369287) + 2968U);
    t2 = *((char **)t1);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_3583369287) + 1888U);
    t3 = *((char **)t1);
    t4 = xsi_mem_cmp(t3, t2, 6U);
    if (t4 == 1)
        goto LAB12;

LAB20:    t1 = ((WORK_P_3583369287) + 2008U);
    t5 = *((char **)t1);
    t7 = xsi_mem_cmp(t5, t2, 6U);
    if (t7 == 1)
        goto LAB13;

LAB21:    t1 = ((WORK_P_3583369287) + 2128U);
    t6 = *((char **)t1);
    t10 = xsi_mem_cmp(t6, t2, 6U);
    if (t10 == 1)
        goto LAB14;

LAB22:    t1 = ((WORK_P_3583369287) + 2248U);
    t8 = *((char **)t1);
    t17 = xsi_mem_cmp(t8, t2, 6U);
    if (t17 == 1)
        goto LAB15;

LAB23:    t1 = ((WORK_P_3583369287) + 2368U);
    t9 = *((char **)t1);
    t18 = xsi_mem_cmp(t9, t2, 6U);
    if (t18 == 1)
        goto LAB16;

LAB24:    t1 = ((WORK_P_3583369287) + 2488U);
    t11 = *((char **)t1);
    t19 = xsi_mem_cmp(t11, t2, 6U);
    if (t19 == 1)
        goto LAB17;

LAB25:    t1 = ((WORK_P_3583369287) + 2608U);
    t12 = *((char **)t1);
    t20 = xsi_mem_cmp(t12, t2, 6U);
    if (t20 == 1)
        goto LAB18;

LAB26:
LAB19:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 4790);
    t3 = (t0 + 2912);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB11:    goto LAB2;

LAB10:;
LAB12:    xsi_set_current_line(43, ng0);
    t1 = ((WORK_P_3583369287) + 2728U);
    t13 = *((char **)t1);
    t1 = (t0 + 2912);
    t14 = (t1 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t21 = *((char **)t16);
    memcpy(t21, t13, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB11;

LAB13:    xsi_set_current_line(44, ng0);
    t1 = ((WORK_P_3583369287) + 2848U);
    t2 = *((char **)t1);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB11;

LAB14:    xsi_set_current_line(45, ng0);
    t1 = ((WORK_P_3583369287) + 2968U);
    t2 = *((char **)t1);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB11;

LAB15:    xsi_set_current_line(46, ng0);
    t1 = ((WORK_P_3583369287) + 3088U);
    t2 = *((char **)t1);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB11;

LAB16:    xsi_set_current_line(47, ng0);
    t1 = ((WORK_P_3583369287) + 3208U);
    t2 = *((char **)t1);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB11;

LAB17:    xsi_set_current_line(48, ng0);
    t1 = ((WORK_P_3583369287) + 3328U);
    t2 = *((char **)t1);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB11;

LAB18:    xsi_set_current_line(49, ng0);
    t1 = ((WORK_P_3583369287) + 3448U);
    t2 = *((char **)t1);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB11;

LAB27:;
}


extern void work_a_3044219816_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3044219816_3212880686_p_0};
	xsi_register_didat("work_a_3044219816_3212880686", "isim/cs161_processor_isim_beh.exe.sim/work/a_3044219816_3212880686.didat");
	xsi_register_executes(pe);
}
