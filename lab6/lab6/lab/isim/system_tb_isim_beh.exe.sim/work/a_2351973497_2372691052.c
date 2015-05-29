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
static const char *ng0 = "C:/Users/cathy/Documents/UCR/spring2015/CS161L/lab6/lab6/lab/system_tb.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_3620187407;

char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );


static void work_a_2351973497_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2351973497_2372691052_p_1(char *t0)
{
    char t20[16];
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t21;
    unsigned char t22;
    char *t23;
    int t24;
    int t25;

LAB0:    t1 = (t0 + 3520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (t4 / 2);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (t4 * 2);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 6904);
    *((int *)t2) = 3;
    t3 = (t0 + 6908);
    *((int *)t3) = 0;
    t9 = 3;
    t10 = 0;

LAB12:    if (t9 >= t10)
        goto LAB13;

LAB15:    xsi_set_current_line(96, ng0);
    t2 = xsi_get_transient_memory(4U);
    memset(t2, 0, 4U);
    t3 = t2;
    memset(t3, (unsigned char)2, 4U);
    t6 = (t0 + 4032);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t4);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(89, ng0);
    t6 = xsi_get_transient_memory(4U);
    memset(t6, 0, 4U);
    t7 = t6;
    memset(t7, (unsigned char)2, 4U);
    t8 = (t0 + 4032);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t6, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 6904);
    t15 = *((int *)t2);
    t16 = (t15 - 3);
    t17 = (t16 * -1);
    t18 = (1 * t17);
    t19 = (0U + t18);
    t3 = (t0 + 4032);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t3, t19, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 6904);
    t15 = *((int *)t2);
    t16 = (t15 + 1);
    t21 = (t16 * 2);
    t3 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t20, t21, 4);
    t6 = (t20 + 12U);
    t17 = *((unsigned int *)t6);
    t17 = (t17 * 1U);
    t22 = (4U != t17);
    if (t22 == 1)
        goto LAB16;

LAB17:    t7 = (t0 + 4096);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t4);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB14:    t2 = (t0 + 6904);
    t9 = *((int *)t2);
    t3 = (t0 + 6908);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB15;

LAB22:    t15 = (t9 + -1);
    t9 = t15;
    t6 = (t0 + 6904);
    *((int *)t6) = t9;
    goto LAB12;

LAB16:    xsi_size_not_matching(4U, t17, 0);
    goto LAB17;

LAB18:    goto LAB14;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB23:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6912);
    *((int *)t2) = 8;
    t3 = (t0 + 6916);
    *((int *)t3) = 1;
    t9 = 8;
    t10 = 1;

LAB27:    if (t9 >= t10)
        goto LAB28;

LAB30:    xsi_set_current_line(114, ng0);

LAB49:    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

LAB28:    xsi_set_current_line(100, ng0);
    t6 = (t0 + 6912);
    t7 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t20, *((int *)t6), 4);
    t8 = (t20 + 12U);
    t17 = *((unsigned int *)t8);
    t17 = (t17 * 1U);
    t22 = (4U != t17);
    if (t22 == 1)
        goto LAB31;

LAB32:    t11 = (t0 + 4096);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t23 = *((char **)t14);
    memcpy(t23, t7, 4U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t4);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB29:    t2 = (t0 + 6912);
    t9 = *((int *)t2);
    t3 = (t0 + 6916);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB30;

LAB46:    t15 = (t9 + -1);
    t9 = t15;
    t6 = (t0 + 6912);
    *((int *)t6) = t9;
    goto LAB27;

LAB31:    xsi_size_not_matching(4U, t17, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(103, ng0);
    t2 = xsi_get_transient_memory(4U);
    memset(t2, 0, 4U);
    t3 = t2;
    memset(t3, (unsigned char)2, 4U);
    t6 = (t0 + 4160);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 6912);
    t15 = xsi_vhdl_mod(*((int *)t2), 2);
    t22 = (t15 == 0);
    if (t22 != 0)
        goto LAB37;

LAB39:
LAB38:    xsi_set_current_line(109, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t4);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB37:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 6912);
    t16 = *((int *)t3);
    t21 = (t16 / 2);
    t24 = (t21 - 1);
    t25 = (t24 - 3);
    t17 = (t25 * -1);
    t18 = (1 * t17);
    t19 = (0U + t18);
    t6 = (t0 + 4160);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_delta(t6, t19, 1, 0LL);
    goto LAB38;

LAB40:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 6848U);
    t6 = (t0 + 1832U);
    t7 = *((char **)t6);
    t6 = (t0 + 6832U);
    t22 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t7, t6);
    if (t22 == 0)
        goto LAB44;

LAB45:    goto LAB29;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    t8 = (t0 + 6920);
    xsi_report(t8, 47U, (unsigned char)1);
    goto LAB45;

LAB47:    goto LAB2;

LAB48:    goto LAB47;

LAB50:    goto LAB48;

}


extern void work_a_2351973497_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2351973497_2372691052_p_0,(void *)work_a_2351973497_2372691052_p_1};
	xsi_register_didat("work_a_2351973497_2372691052", "isim/system_tb_isim_beh.exe.sim/work/a_2351973497_2372691052.didat");
	xsi_register_executes(pe);
}
