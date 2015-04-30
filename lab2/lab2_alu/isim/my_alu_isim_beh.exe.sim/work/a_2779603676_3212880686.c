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
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2779603676_3212880686_p_0(char *t0)
{
    char t26[16];
    char t29[16];
    char t34[16];
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
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    int t25;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned char t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned char t51;
    unsigned char t52;
    unsigned char t53;
    unsigned char t54;
    unsigned char t55;
    unsigned char t56;
    unsigned char t57;
    unsigned char t58;
    unsigned char t59;
    unsigned char t60;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 6648);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB12:    t5 = (t0 + 6651);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB13:    t8 = (t0 + 6654);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB14:    t11 = (t0 + 6657);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB15:    t14 = (t0 + 6660);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB16:    t17 = (t0 + 6663);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB17:    t20 = (t0 + 6666);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB18:    t23 = (t0 + 6669);
    t25 = xsi_mem_cmp(t23, t2, 3U);
    if (t25 == 1)
        goto LAB10;

LAB19:
LAB11:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
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
LAB3:    xsi_set_current_line(59, ng0);
    t27 = (t0 + 1032U);
    t28 = *((char **)t27);
    t30 = ((IEEE_P_2592010699) + 4024);
    t31 = (t0 + 6540U);
    t27 = xsi_base_array_concat(t27, t29, t30, (char)99, (unsigned char)2, (char)97, t28, t31, (char)101);
    t32 = (t0 + 1192U);
    t33 = *((char **)t32);
    t35 = ((IEEE_P_2592010699) + 4024);
    t36 = (t0 + 6556U);
    t32 = xsi_base_array_concat(t32, t34, t35, (char)99, (unsigned char)2, (char)97, t33, t36, (char)101);
    t37 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t26, t27, t29, t32, t34);
    t38 = (t0 + 3832);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t37, 5U);
    xsi_driver_first_trans_fast(t38);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = (t0 + 3896);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t43 = (t4 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t46 = *((unsigned char *)t1);
    t3 = (t0 + 3960);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t46;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t43 = (t4 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t46 = *((unsigned char *)t1);
    t3 = (t0 + 4024);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t46;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t7 = (4 - 1);
    t43 = (t4 - t7);
    t44 = (t43 * 1U);
    t10 = (4 - 1);
    t45 = (4 - t10);
    t47 = (t45 * 1U);
    t48 = (0 + t47);
    t49 = (t48 + t44);
    t1 = (t2 + t49);
    t3 = (t26 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 3;
    t5 = (t3 + 4U);
    *((int *)t5) = 0;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t13 = (0 - 3);
    t50 = (t13 * -1);
    t50 = (t50 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t50;
    t46 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t1, t26, 0);
    if (t46 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB22:    goto LAB2;

LAB4:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t7 = (t4 - 3);
    t43 = (t7 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t46 = *((unsigned char *)t1);
    t3 = (t0 + 1032U);
    t5 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4024);
    t8 = (t0 + 6540U);
    t3 = xsi_base_array_concat(t3, t29, t6, (char)99, t46, (char)97, t5, t8, (char)101);
    t9 = (t0 + 1192U);
    t11 = *((char **)t9);
    t10 = (4 - 1);
    t13 = (t10 - 3);
    t47 = (t13 * -1);
    t48 = (1U * t47);
    t49 = (0 + t48);
    t9 = (t11 + t49);
    t51 = *((unsigned char *)t9);
    t12 = (t0 + 1192U);
    t14 = *((char **)t12);
    t15 = ((IEEE_P_2592010699) + 4024);
    t17 = (t0 + 6556U);
    t12 = xsi_base_array_concat(t12, t34, t15, (char)99, t51, (char)97, t14, t17, (char)101);
    t18 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t26, t3, t29, t12, t34);
    t20 = (t0 + 3832);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    t24 = (t23 + 56U);
    t27 = *((char **)t24);
    memcpy(t27, t18, 5U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = (t0 + 3896);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6540U);
    t53 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t2, t1, 0);
    if (t53 == 1)
        goto LAB33;

LAB34:    t52 = (unsigned char)0;

LAB35:    if (t52 == 1)
        goto LAB30;

LAB31:    t51 = (unsigned char)0;

LAB32:    if (t51 == 1)
        goto LAB27;

LAB28:    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t11 = (t0 + 6540U);
    t58 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t12, t11, 0);
    if (t58 == 1)
        goto LAB39;

LAB40:    t57 = (unsigned char)0;

LAB41:    if (t57 == 1)
        goto LAB36;

LAB37:    t56 = (unsigned char)0;

LAB38:    t46 = t56;

LAB29:    if (t46 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 4024);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB25:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t43 = (t4 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t46 = *((unsigned char *)t1);
    t3 = (t0 + 3960);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t46;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t7 = (4 - 1);
    t43 = (t4 - t7);
    t44 = (t43 * 1U);
    t10 = (4 - 1);
    t45 = (4 - t10);
    t47 = (t45 * 1U);
    t48 = (0 + t47);
    t49 = (t48 + t44);
    t1 = (t2 + t49);
    t3 = (t26 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 3;
    t5 = (t3 + 4U);
    *((int *)t5) = 0;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t13 = (0 - 3);
    t50 = (t13 * -1);
    t50 = (t50 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t50;
    t46 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t1, t26, 0);
    if (t46 != 0)
        goto LAB42;

LAB44:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB43:    goto LAB2;

LAB5:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 6540U);
    t1 = xsi_base_array_concat(t1, t29, t3, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t6 = (t0 + 1192U);
    t8 = *((char **)t6);
    t9 = ((IEEE_P_2592010699) + 4024);
    t11 = (t0 + 6556U);
    t6 = xsi_base_array_concat(t6, t34, t9, (char)99, (unsigned char)2, (char)97, t8, t11, (char)101);
    t12 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t26, t1, t29, t6, t34);
    t14 = (t0 + 3832);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t12, 5U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = (t0 + 3896);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t43 = (t4 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t46 = *((unsigned char *)t1);
    t51 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t46);
    t3 = (t0 + 3960);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t51;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t43 = (t4 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t46 = *((unsigned char *)t1);
    t3 = (t0 + 4024);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t46;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = (t26 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 3;
    t5 = (t3 + 4U);
    *((int *)t5) = 0;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t7 = (0 - 3);
    t47 = (t7 * -1);
    t47 = (t47 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t47;
    t46 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t1, t26, 0);
    if (t46 != 0)
        goto LAB45;

LAB47:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB46:    goto LAB2;

LAB6:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t7 = (t4 - 3);
    t43 = (t7 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t46 = *((unsigned char *)t1);
    t3 = (t0 + 1032U);
    t5 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4024);
    t8 = (t0 + 6540U);
    t3 = xsi_base_array_concat(t3, t29, t6, (char)99, t46, (char)97, t5, t8, (char)101);
    t9 = (t0 + 1192U);
    t11 = *((char **)t9);
    t10 = (4 - 1);
    t13 = (t10 - 3);
    t47 = (t13 * -1);
    t48 = (1U * t47);
    t49 = (0 + t48);
    t9 = (t11 + t49);
    t51 = *((unsigned char *)t9);
    t12 = (t0 + 1192U);
    t14 = *((char **)t12);
    t15 = ((IEEE_P_2592010699) + 4024);
    t17 = (t0 + 6556U);
    t12 = xsi_base_array_concat(t12, t34, t15, (char)99, t51, (char)97, t14, t17, (char)101);
    t18 = ieee_p_1242562249_sub_3273568981_1035706684(IEEE_P_1242562249, t26, t3, t29, t12, t34);
    t20 = (t0 + 3832);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    t24 = (t23 + 56U);
    t27 = *((char **)t24);
    memcpy(t27, t18, 5U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = (t0 + 3896);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6540U);
    t53 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t2, t1, 0);
    if (t53 == 1)
        goto LAB57;

LAB58:    t52 = (unsigned char)0;

LAB59:    if (t52 == 1)
        goto LAB54;

LAB55:    t51 = (unsigned char)0;

LAB56:    if (t51 == 1)
        goto LAB51;

LAB52:    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t11 = (t0 + 6540U);
    t58 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t12, t11, 0);
    if (t58 == 1)
        goto LAB63;

LAB64:    t57 = (unsigned char)0;

LAB65:    if (t57 == 1)
        goto LAB60;

LAB61:    t56 = (unsigned char)0;

LAB62:    t46 = t56;

LAB53:    if (t46 != 0)
        goto LAB48;

LAB50:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 4024);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB49:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t43 = (t4 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t46 = *((unsigned char *)t1);
    t3 = (t0 + 3960);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t46;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t7 = (4 - 1);
    t43 = (t4 - t7);
    t44 = (t43 * 1U);
    t10 = (4 - 1);
    t45 = (4 - t10);
    t47 = (t45 * 1U);
    t48 = (0 + t47);
    t49 = (t48 + t44);
    t1 = (t2 + t49);
    t3 = (t26 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 3;
    t5 = (t3 + 4U);
    *((int *)t5) = 0;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t13 = (0 - 3);
    t50 = (t13 * -1);
    t50 = (t50 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t50;
    t46 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t1, t26, 0);
    if (t46 != 0)
        goto LAB66;

LAB68:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB67:    goto LAB2;

LAB7:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6540U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 6556U);
    t6 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t9 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t29, t9, (char)99, (unsigned char)2, (char)97, t6, t26, (char)101);
    t11 = (t26 + 12U);
    t43 = *((unsigned int *)t11);
    t44 = (1U * t43);
    t45 = (1U + t44);
    t46 = (5U != t45);
    if (t46 == 1)
        goto LAB69;

LAB70:    t12 = (t0 + 3832);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 5U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = (t26 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 3;
    t5 = (t3 + 4U);
    *((int *)t5) = 0;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t7 = (0 - 3);
    t47 = (t7 * -1);
    t47 = (t47 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t47;
    t46 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t1, t26, 0);
    if (t46 != 0)
        goto LAB71;

LAB73:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB72:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = (t0 + 3896);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6540U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 6556U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t9 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t29, t9, (char)99, (unsigned char)2, (char)97, t6, t26, (char)101);
    t11 = (t26 + 12U);
    t43 = *((unsigned int *)t11);
    t44 = (1U * t43);
    t45 = (1U + t44);
    t46 = (5U != t45);
    if (t46 == 1)
        goto LAB74;

LAB75:    t12 = (t0 + 3832);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 5U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 3960);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 4024);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(157, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = (t26 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 3;
    t5 = (t3 + 4U);
    *((int *)t5) = 0;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t7 = (0 - 3);
    t47 = (t7 * -1);
    t47 = (t47 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t47;
    t46 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t1, t26, 0);
    if (t46 != 0)
        goto LAB76;

LAB78:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB77:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = (t0 + 3896);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6540U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 6556U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t9 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t29, t9, (char)99, (unsigned char)2, (char)97, t6, t26, (char)101);
    t11 = (t26 + 12U);
    t43 = *((unsigned int *)t11);
    t44 = (1U * t43);
    t45 = (1U + t44);
    t46 = (5U != t45);
    if (t46 == 1)
        goto LAB79;

LAB80:    t12 = (t0 + 3832);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 5U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(170, ng0);
    t1 = (t0 + 3960);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(171, ng0);
    t1 = (t0 + 4024);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(173, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = (t26 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 3;
    t5 = (t3 + 4U);
    *((int *)t5) = 0;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t7 = (0 - 3);
    t47 = (t7 * -1);
    t47 = (t47 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t47;
    t46 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t1, t26, 0);
    if (t46 != 0)
        goto LAB81;

LAB83:    xsi_set_current_line(176, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB82:    xsi_set_current_line(179, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = (t0 + 3896);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB10:    xsi_set_current_line(185, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6540U);
    t3 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t29, t2, t1, (unsigned char)0);
    t5 = (t29 + 12U);
    t43 = *((unsigned int *)t5);
    t43 = (t43 * 1U);
    t6 = xsi_vhdl_bitvec_sra(t6, t3, t43, 1);
    t8 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t26, t6, t29);
    t11 = ((IEEE_P_2592010699) + 4024);
    t9 = xsi_base_array_concat(t9, t34, t11, (char)99, (unsigned char)2, (char)97, t8, t26, (char)101);
    t12 = (t26 + 12U);
    t44 = *((unsigned int *)t12);
    t44 = (t44 * 1U);
    t45 = (1U + t44);
    t46 = (5U != t45);
    if (t46 == 1)
        goto LAB84;

LAB85:    t14 = (t0 + 3832);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t9, 5U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(187, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t7 = (4 - 1);
    t43 = (t4 - t7);
    t44 = (t43 * 1U);
    t10 = (4 - 1);
    t45 = (4 - t10);
    t47 = (t45 * 1U);
    t48 = (0 + t47);
    t49 = (t48 + t44);
    t1 = (t2 + t49);
    t3 = (t26 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 3;
    t5 = (t3 + 4U);
    *((int *)t5) = 0;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t13 = (0 - 3);
    t50 = (t13 * -1);
    t50 = (t50 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t50;
    t46 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t1, t26, 0);
    if (t46 != 0)
        goto LAB86;

LAB88:    xsi_set_current_line(190, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB87:    xsi_set_current_line(193, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t1 = (t2 + t45);
    t3 = (t0 + 3896);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB20:;
LAB21:    xsi_set_current_line(69, ng0);
    t5 = (t0 + 4088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB22;

LAB24:    xsi_set_current_line(85, ng0);
    t21 = (t0 + 4024);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t21);
    goto LAB25;

LAB27:    t46 = (unsigned char)1;
    goto LAB29;

LAB30:    t6 = (t0 + 2152U);
    t8 = *((char **)t6);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t6 = (t8 + t45);
    t9 = (t26 + 0U);
    t11 = (t9 + 0U);
    *((int *)t11) = 3;
    t11 = (t9 + 4U);
    *((int *)t11) = 0;
    t11 = (t9 + 8U);
    *((int *)t11) = -1;
    t7 = (0 - 3);
    t47 = (t7 * -1);
    t47 = (t47 + 1);
    t11 = (t9 + 12U);
    *((unsigned int *)t11) = t47;
    t55 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t6, t26, 0);
    t51 = t55;
    goto LAB32;

LAB33:    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 6556U);
    t54 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t5, t3, 0);
    t52 = t54;
    goto LAB35;

LAB36:    t17 = (t0 + 2152U);
    t18 = *((char **)t17);
    t10 = (4 - 1);
    t47 = (4 - t10);
    t48 = (t47 * 1U);
    t49 = (0 + t48);
    t17 = (t18 + t49);
    t20 = (t29 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 3;
    t21 = (t20 + 4U);
    *((int *)t21) = 0;
    t21 = (t20 + 8U);
    *((int *)t21) = -1;
    t13 = (0 - 3);
    t50 = (t13 * -1);
    t50 = (t50 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t50;
    t60 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t17, t29, 0);
    t56 = t60;
    goto LAB38;

LAB39:    t14 = (t0 + 1192U);
    t15 = *((char **)t14);
    t14 = (t0 + 6556U);
    t59 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t15, t14, 0);
    t57 = t59;
    goto LAB41;

LAB42:    xsi_set_current_line(93, ng0);
    t5 = (t0 + 4088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB43;

LAB45:    xsi_set_current_line(109, ng0);
    t5 = (t0 + 4088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB46;

LAB48:    xsi_set_current_line(124, ng0);
    t21 = (t0 + 4024);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t21);
    goto LAB49;

LAB51:    t46 = (unsigned char)1;
    goto LAB53;

LAB54:    t6 = (t0 + 2152U);
    t8 = *((char **)t6);
    t4 = (4 - 1);
    t43 = (4 - t4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t6 = (t8 + t45);
    t9 = (t26 + 0U);
    t11 = (t9 + 0U);
    *((int *)t11) = 3;
    t11 = (t9 + 4U);
    *((int *)t11) = 0;
    t11 = (t9 + 8U);
    *((int *)t11) = -1;
    t7 = (0 - 3);
    t47 = (t7 * -1);
    t47 = (t47 + 1);
    t11 = (t9 + 12U);
    *((unsigned int *)t11) = t47;
    t55 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t6, t26, 0);
    t51 = t55;
    goto LAB56;

LAB57:    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 6556U);
    t54 = ieee_p_1242562249_sub_2479218856_1035706684(IEEE_P_1242562249, t5, t3, 0);
    t52 = t54;
    goto LAB59;

LAB60:    t17 = (t0 + 2152U);
    t18 = *((char **)t17);
    t10 = (4 - 1);
    t47 = (4 - t10);
    t48 = (t47 * 1U);
    t49 = (0 + t48);
    t17 = (t18 + t49);
    t20 = (t29 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 3;
    t21 = (t20 + 4U);
    *((int *)t21) = 0;
    t21 = (t20 + 8U);
    *((int *)t21) = -1;
    t13 = (0 - 3);
    t50 = (t13 * -1);
    t50 = (t50 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t50;
    t60 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t17, t29, 0);
    t56 = t60;
    goto LAB62;

LAB63:    t14 = (t0 + 1192U);
    t15 = *((char **)t14);
    t14 = (t0 + 6556U);
    t59 = ieee_p_1242562249_sub_3840967975_1035706684(IEEE_P_1242562249, t15, t14, 0);
    t57 = t59;
    goto LAB65;

LAB66:    xsi_set_current_line(131, ng0);
    t5 = (t0 + 4088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB67;

LAB69:    xsi_size_not_matching(5U, t45, 0);
    goto LAB70;

LAB71:    xsi_set_current_line(142, ng0);
    t5 = (t0 + 4088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB72;

LAB74:    xsi_size_not_matching(5U, t45, 0);
    goto LAB75;

LAB76:    xsi_set_current_line(158, ng0);
    t5 = (t0 + 4088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB77;

LAB79:    xsi_size_not_matching(5U, t45, 0);
    goto LAB80;

LAB81:    xsi_set_current_line(174, ng0);
    t5 = (t0 + 4088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB82;

LAB84:    xsi_size_not_matching(5U, t45, 0);
    goto LAB85;

LAB86:    xsi_set_current_line(188, ng0);
    t5 = (t0 + 4088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB87;

}


extern void work_a_2779603676_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2779603676_3212880686_p_0};
	xsi_register_didat("work_a_2779603676_3212880686", "isim/my_alu_isim_beh.exe.sim/work/a_2779603676_3212880686.didat");
	xsi_register_executes(pe);
}
