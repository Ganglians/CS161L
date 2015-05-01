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
static const char *ng0 = "C:/Users/cathy/Documents/UCR/spring2015/CS161L/lab2/lab2_alu/my_alu.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_2479218856_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_3273497107_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3273568981_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3840967975_1035706684(char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2787146981_3212880686_p_0(char *t0)
{
    char t14[16];
    char t17[16];
    char t22[16];
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
    int t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned char t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;
    unsigned char t41;
    unsigned char t42;
    unsigned char t43;
    unsigned char t44;
    unsigned char t45;
    unsigned char t46;
    unsigned char t47;
    unsigned char t48;

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 6553);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB8:    t5 = (t0 + 6557);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB9:    t8 = (t0 + 6561);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB10:    t11 = (t0 + 6565);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t31 = (4 - t4);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t3 = (t0 + 3896);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t1 = (t0 + 3752);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(61, ng0);
    t15 = (t0 + 1032U);
    t16 = *((char **)t15);
    t18 = ((IEEE_P_2592010699) + 4024);
    t19 = (t0 + 6444U);
    t15 = xsi_base_array_concat(t15, t17, t18, (char)99, (unsigned char)2, (char)97, t16, t19, (char)101);
    t20 = (t0 + 1192U);
    t21 = *((char **)t20);
    t23 = ((IEEE_P_2592010699) + 4024);
    t24 = (t0 + 6460U);
    t20 = xsi_base_array_concat(t20, t22, t23, (char)99, (unsigned char)2, (char)97, t21, t24, (char)101);
    t25 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t14, t15, t17, t20, t22);
    t26 = (t0 + 3832);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t25, 5U);
    xsi_driver_first_trans_fast(t26);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t31 = (4 - t4);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t3 = (t0 + 3896);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t31 = (t4 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t34 = *((unsigned char *)t1);
    t3 = (t0 + 3960);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t34;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t31 = (t4 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t34 = *((unsigned char *)t1);
    t3 = (t0 + 4024);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t34;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t7 = (4 - 1);
    t31 = (t4 - t7);
    t32 = (t31 * 1U);
    t10 = (4 - 1);
    t33 = (4 - t10);
    t35 = (t33 * 1U);
    t36 = (0 + t35);
    t37 = (t36 + t32);
    t1 = (t2 + t37);
    t3 = (t14 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 3;
    t5 = (t3 + 4U);
    *((int *)t5) = 0;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t13 = (0 - 3);
    t38 = (t13 * -1);
    t38 = (t38 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t38;
    t34 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t1, t14, 0);
    if (t34 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB14:    goto LAB2;

LAB4:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t7 = (t4 - 3);
    t31 = (t7 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t34 = *((unsigned char *)t1);
    t3 = (t0 + 1032U);
    t5 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4024);
    t8 = (t0 + 6444U);
    t3 = xsi_base_array_concat(t3, t17, t6, (char)99, t34, (char)97, t5, t8, (char)101);
    t9 = (t0 + 1192U);
    t11 = *((char **)t9);
    t10 = (4 - 1);
    t13 = (t10 - 3);
    t35 = (t13 * -1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t9 = (t11 + t37);
    t39 = *((unsigned char *)t9);
    t12 = (t0 + 1192U);
    t15 = *((char **)t12);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t0 + 6460U);
    t12 = xsi_base_array_concat(t12, t22, t16, (char)99, t39, (char)97, t15, t18, (char)101);
    t19 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t14, t3, t17, t12, t22);
    t20 = (t0 + 3832);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t19, 5U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t31 = (4 - t4);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t3 = (t0 + 3896);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6444U);
    t41 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t2, t1, 0);
    if (t41 == 1)
        goto LAB25;

LAB26:    t40 = (unsigned char)0;

LAB27:    if (t40 == 1)
        goto LAB22;

LAB23:    t39 = (unsigned char)0;

LAB24:    if (t39 == 1)
        goto LAB19;

LAB20:    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t11 = (t0 + 6444U);
    t46 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t12, t11, 0);
    if (t46 == 1)
        goto LAB31;

LAB32:    t45 = (unsigned char)0;

LAB33:    if (t45 == 1)
        goto LAB28;

LAB29:    t44 = (unsigned char)0;

LAB30:    t34 = t44;

LAB21:    if (t34 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 4024);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB17:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t31 = (t4 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t34 = *((unsigned char *)t1);
    t3 = (t0 + 3960);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t34;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t7 = (4 - 1);
    t31 = (t4 - t7);
    t32 = (t31 * 1U);
    t10 = (4 - 1);
    t33 = (4 - t10);
    t35 = (t33 * 1U);
    t36 = (0 + t35);
    t37 = (t36 + t32);
    t1 = (t2 + t37);
    t3 = (t14 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 3;
    t5 = (t3 + 4U);
    *((int *)t5) = 0;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t13 = (0 - 3);
    t38 = (t13 * -1);
    t38 = (t38 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t38;
    t34 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t1, t14, 0);
    if (t34 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB35:    goto LAB2;

LAB5:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 6444U);
    t1 = xsi_base_array_concat(t1, t17, t3, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t6 = (t0 + 1192U);
    t8 = *((char **)t6);
    t9 = ((IEEE_P_2592010699) + 4024);
    t11 = (t0 + 6460U);
    t6 = xsi_base_array_concat(t6, t22, t9, (char)99, (unsigned char)2, (char)97, t8, t11, (char)101);
    t12 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t14, t1, t17, t6, t22);
    t15 = (t0 + 3832);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t12, 5U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t31 = (4 - t4);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t3 = (t0 + 3896);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t31 = (t4 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t34 = *((unsigned char *)t1);
    t39 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t34);
    t3 = (t0 + 3960);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t39;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t31 = (t4 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t34 = *((unsigned char *)t1);
    t3 = (t0 + 4024);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t34;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t31 = (4 - t4);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t3 = (t14 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 3;
    t5 = (t3 + 4U);
    *((int *)t5) = 0;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t7 = (0 - 3);
    t35 = (t7 * -1);
    t35 = (t35 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t35;
    t34 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t1, t14, 0);
    if (t34 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB38:    goto LAB2;

LAB6:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t7 = (t4 - 3);
    t31 = (t7 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t34 = *((unsigned char *)t1);
    t3 = (t0 + 1032U);
    t5 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4024);
    t8 = (t0 + 6444U);
    t3 = xsi_base_array_concat(t3, t17, t6, (char)99, t34, (char)97, t5, t8, (char)101);
    t9 = (t0 + 1192U);
    t11 = *((char **)t9);
    t10 = (4 - 1);
    t13 = (t10 - 3);
    t35 = (t13 * -1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t9 = (t11 + t37);
    t39 = *((unsigned char *)t9);
    t12 = (t0 + 1192U);
    t15 = *((char **)t12);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t0 + 6460U);
    t12 = xsi_base_array_concat(t12, t22, t16, (char)99, t39, (char)97, t15, t18, (char)101);
    t19 = ieee_p_1242562249_sub_3273568981_1035706684(IEEE_P_1242562249, t14, t3, t17, t12, t22);
    t20 = (t0 + 3832);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t19, 5U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t31 = (4 - t4);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t3 = (t0 + 3896);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6444U);
    t41 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t2, t1, 0);
    if (t41 == 1)
        goto LAB49;

LAB50:    t40 = (unsigned char)0;

LAB51:    if (t40 == 1)
        goto LAB46;

LAB47:    t39 = (unsigned char)0;

LAB48:    if (t39 == 1)
        goto LAB43;

LAB44:    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t11 = (t0 + 6444U);
    t46 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t12, t11, 0);
    if (t46 == 1)
        goto LAB55;

LAB56:    t45 = (unsigned char)0;

LAB57:    if (t45 == 1)
        goto LAB52;

LAB53:    t44 = (unsigned char)0;

LAB54:    t34 = t44;

LAB45:    if (t34 != 0)
        goto LAB40;

LAB42:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 4024);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB41:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t31 = (t4 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t1 = (t2 + t33);
    t34 = *((unsigned char *)t1);
    t3 = (t0 + 3960);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t34;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t7 = (4 - 1);
    t31 = (t4 - t7);
    t32 = (t31 * 1U);
    t10 = (4 - 1);
    t33 = (4 - t10);
    t35 = (t33 * 1U);
    t36 = (0 + t35);
    t37 = (t36 + t32);
    t1 = (t2 + t37);
    t3 = (t14 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 3;
    t5 = (t3 + 4U);
    *((int *)t5) = 0;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t13 = (0 - 3);
    t38 = (t13 * -1);
    t38 = (t38 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t38;
    t34 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t1, t14, 0);
    if (t34 != 0)
        goto LAB58;

LAB60:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB59:    goto LAB2;

LAB12:;
LAB13:    xsi_set_current_line(71, ng0);
    t5 = (t0 + 4088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB14;

LAB16:    xsi_set_current_line(88, ng0);
    t21 = (t0 + 4024);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t21);
    goto LAB17;

LAB19:    t34 = (unsigned char)1;
    goto LAB21;

LAB22:    t6 = (t0 + 2152U);
    t8 = *((char **)t6);
    t4 = (4 - 1);
    t31 = (4 - t4);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t6 = (t8 + t33);
    t9 = (t14 + 0U);
    t11 = (t9 + 0U);
    *((int *)t11) = 3;
    t11 = (t9 + 4U);
    *((int *)t11) = 0;
    t11 = (t9 + 8U);
    *((int *)t11) = -1;
    t7 = (0 - 3);
    t35 = (t7 * -1);
    t35 = (t35 + 1);
    t11 = (t9 + 12U);
    *((unsigned int *)t11) = t35;
    t43 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t6, t14, 0);
    t39 = t43;
    goto LAB24;

LAB25:    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 6460U);
    t42 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t5, t3, 0);
    t40 = t42;
    goto LAB27;

LAB28:    t18 = (t0 + 2152U);
    t19 = *((char **)t18);
    t10 = (4 - 1);
    t35 = (4 - t10);
    t36 = (t35 * 1U);
    t37 = (0 + t36);
    t18 = (t19 + t37);
    t20 = (t17 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 3;
    t21 = (t20 + 4U);
    *((int *)t21) = 0;
    t21 = (t20 + 8U);
    *((int *)t21) = -1;
    t13 = (0 - 3);
    t38 = (t13 * -1);
    t38 = (t38 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t38;
    t48 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t18, t17, 0);
    t44 = t48;
    goto LAB30;

LAB31:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t15 = (t0 + 6460U);
    t47 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t16, t15, 0);
    t45 = t47;
    goto LAB33;

LAB34:    xsi_set_current_line(96, ng0);
    t5 = (t0 + 4088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB35;

LAB37:    xsi_set_current_line(113, ng0);
    t5 = (t0 + 4088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB38;

LAB40:    xsi_set_current_line(129, ng0);
    t21 = (t0 + 4024);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t21);
    goto LAB41;

LAB43:    t34 = (unsigned char)1;
    goto LAB45;

LAB46:    t6 = (t0 + 2152U);
    t8 = *((char **)t6);
    t4 = (4 - 1);
    t31 = (4 - t4);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t6 = (t8 + t33);
    t9 = (t14 + 0U);
    t11 = (t9 + 0U);
    *((int *)t11) = 3;
    t11 = (t9 + 4U);
    *((int *)t11) = 0;
    t11 = (t9 + 8U);
    *((int *)t11) = -1;
    t7 = (0 - 3);
    t35 = (t7 * -1);
    t35 = (t35 + 1);
    t11 = (t9 + 12U);
    *((unsigned int *)t11) = t35;
    t43 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t6, t14, 0);
    t39 = t43;
    goto LAB48;

LAB49:    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 6460U);
    t42 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t5, t3, 0);
    t40 = t42;
    goto LAB51;

LAB52:    t18 = (t0 + 2152U);
    t19 = *((char **)t18);
    t10 = (4 - 1);
    t35 = (4 - t10);
    t36 = (t35 * 1U);
    t37 = (0 + t36);
    t18 = (t19 + t37);
    t20 = (t17 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 3;
    t21 = (t20 + 4U);
    *((int *)t21) = 0;
    t21 = (t20 + 8U);
    *((int *)t21) = -1;
    t13 = (0 - 3);
    t38 = (t13 * -1);
    t38 = (t38 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t38;
    t48 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t18, t17, 0);
    t44 = t48;
    goto LAB54;

LAB55:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t15 = (t0 + 6460U);
    t47 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t16, t15, 0);
    t45 = t47;
    goto LAB57;

LAB58:    xsi_set_current_line(136, ng0);
    t5 = (t0 + 4088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB59;

}


extern void work_a_2787146981_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2787146981_3212880686_p_0};
	xsi_register_didat("work_a_2787146981_3212880686", "isim/my_alu_tb_isim_beh.exe.sim/work/a_2787146981_3212880686.didat");
	xsi_register_executes(pe);
}
