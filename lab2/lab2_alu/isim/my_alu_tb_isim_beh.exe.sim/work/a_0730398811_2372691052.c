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
static const char *ng0 = "C:/Users/cathy/Documents/UCR/spring2015/CS161L/lab2/lab2_alu/my_alu_tb.vhd";
extern char *IEEE_P_3620187407;



static void work_a_0730398811_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0730398811_2372691052_p_1(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2568U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (t4 * 10);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 7528);
    xsi_report(t2, 20U, 0);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 7548);
    t6 = (t0 + 4248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 7552);
    t6 = (t0 + 4312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 7584);
    t6 = (t0 + 4376);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(124, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 7384U);
    t6 = (t0 + 7616);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 31;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (31 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t6, t11);
    if (t14 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB14;

LAB15:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB18;

LAB19:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 7710);
    t6 = (t0 + 4312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 7742);
    t6 = (t0 + 4376);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(134, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t9 = (t0 + 7648);
    xsi_report(t9, 15U, (unsigned char)2);
    goto LAB13;

LAB14:    t2 = (t0 + 7663);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB15;

LAB16:    t2 = (t0 + 7680);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB17;

LAB18:    t2 = (t0 + 7697);
    xsi_report(t2, 13U, (unsigned char)2);
    goto LAB19;

LAB20:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 7384U);
    t6 = (t0 + 7774);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 31;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (31 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t6, t11);
    if (t14 == 0)
        goto LAB24;

LAB25:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB26;

LAB27:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB28;

LAB29:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB30;

LAB31:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 7868);
    t6 = (t0 + 4312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 7900);
    t6 = (t0 + 4376);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(143, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    t9 = (t0 + 7806);
    xsi_report(t9, 15U, (unsigned char)2);
    goto LAB25;

LAB26:    t2 = (t0 + 7821);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB27;

LAB28:    t2 = (t0 + 7838);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB29;

LAB30:    t2 = (t0 + 7855);
    xsi_report(t2, 13U, (unsigned char)2);
    goto LAB31;

LAB32:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 7384U);
    t6 = (t0 + 7932);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 35;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (35 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t6, t11);
    if (t14 == 0)
        goto LAB36;

LAB37:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB38;

LAB39:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB40;

LAB41:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 0)
        goto LAB42;

LAB43:    xsi_set_current_line(151, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    t9 = (t0 + 7968);
    xsi_report(t9, 15U, (unsigned char)2);
    goto LAB37;

LAB38:    t2 = (t0 + 7983);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB39;

LAB40:    t2 = (t0 + 8000);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB41;

LAB42:    t2 = (t0 + 8017);
    xsi_report(t2, 13U, (unsigned char)2);
    goto LAB43;

LAB44:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 8030);
    xsi_report(t2, 18U, 0);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 8048);
    t6 = (t0 + 4248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 8052);
    t6 = (t0 + 4312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 8084);
    t6 = (t0 + 4376);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(162, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 7384U);
    t6 = (t0 + 8116);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 35;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (35 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t6, t11);
    if (t14 == 0)
        goto LAB52;

LAB53:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 0)
        goto LAB54;

LAB55:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB56;

LAB57:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB58;

LAB59:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 8214);
    t6 = (t0 + 4312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 8246);
    t6 = (t0 + 4376);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(172, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    t9 = (t0 + 8152);
    xsi_report(t9, 15U, (unsigned char)2);
    goto LAB53;

LAB54:    t2 = (t0 + 8167);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB55;

LAB56:    t2 = (t0 + 8184);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB57;

LAB58:    t2 = (t0 + 8201);
    xsi_report(t2, 13U, (unsigned char)2);
    goto LAB59;

LAB60:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 7384U);
    t6 = (t0 + 8278);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 35;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (35 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t6, t11);
    if (t14 == 0)
        goto LAB64;

LAB65:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 0)
        goto LAB66;

LAB67:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB68;

LAB69:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB70;

LAB71:    xsi_set_current_line(179, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB74:    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    t9 = (t0 + 8314);
    xsi_report(t9, 15U, (unsigned char)2);
    goto LAB65;

LAB66:    t2 = (t0 + 8329);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB67;

LAB68:    t2 = (t0 + 8346);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB69;

LAB70:    t2 = (t0 + 8363);
    xsi_report(t2, 13U, (unsigned char)2);
    goto LAB71;

LAB72:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 8376);
    xsi_report(t2, 20U, 0);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 8396);
    t6 = (t0 + 4248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 8400);
    t6 = (t0 + 4312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 8432);
    t6 = (t0 + 4376);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(190, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    goto LAB72;

LAB75:    goto LAB73;

LAB76:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 7384U);
    t6 = (t0 + 8464);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 35;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (35 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t6, t11);
    if (t14 == 0)
        goto LAB80;

LAB81:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB82;

LAB83:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB84;

LAB85:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB86;

LAB87:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 8562);
    t6 = (t0 + 4312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 8594);
    t6 = (t0 + 4376);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(200, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    t9 = (t0 + 8500);
    xsi_report(t9, 15U, (unsigned char)2);
    goto LAB81;

LAB82:    t2 = (t0 + 8515);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB83;

LAB84:    t2 = (t0 + 8532);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB85;

LAB86:    t2 = (t0 + 8549);
    xsi_report(t2, 13U, (unsigned char)2);
    goto LAB87;

LAB88:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 7384U);
    t6 = (t0 + 8626);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 35;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (35 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t6, t11);
    if (t14 == 0)
        goto LAB92;

LAB93:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB94;

LAB95:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB96;

LAB97:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 0)
        goto LAB98;

LAB99:    xsi_set_current_line(208, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    t9 = (t0 + 8662);
    xsi_report(t9, 15U, (unsigned char)2);
    goto LAB93;

LAB94:    t2 = (t0 + 8677);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB95;

LAB96:    t2 = (t0 + 8694);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB97;

LAB98:    t2 = (t0 + 8711);
    xsi_report(t2, 13U, (unsigned char)2);
    goto LAB99;

LAB100:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 8724);
    xsi_report(t2, 18U, 0);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 8742);
    t6 = (t0 + 4248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 8746);
    t6 = (t0 + 4312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 8778);
    t6 = (t0 + 4376);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(219, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB106:    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB104:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 7384U);
    t6 = (t0 + 8810);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 35;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (35 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t6, t11);
    if (t14 == 0)
        goto LAB108;

LAB109:    xsi_set_current_line(221, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 0)
        goto LAB110;

LAB111:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB112;

LAB113:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB114;

LAB115:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 8908);
    t6 = (t0 + 4312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(228, ng0);
    t2 = (t0 + 8940);
    t6 = (t0 + 4376);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(229, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB118:    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB105:    goto LAB104;

LAB107:    goto LAB105;

LAB108:    t9 = (t0 + 8846);
    xsi_report(t9, 15U, (unsigned char)2);
    goto LAB109;

LAB110:    t2 = (t0 + 8861);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB111;

LAB112:    t2 = (t0 + 8878);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB113;

LAB114:    t2 = (t0 + 8895);
    xsi_report(t2, 13U, (unsigned char)2);
    goto LAB115;

LAB116:    xsi_set_current_line(230, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 7384U);
    t6 = (t0 + 8972);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 35;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (35 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t6, t11);
    if (t14 == 0)
        goto LAB120;

LAB121:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 0)
        goto LAB122;

LAB123:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB124;

LAB125:    xsi_set_current_line(233, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB126;

LAB127:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 9070);
    t6 = (t0 + 4312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 9102);
    t6 = (t0 + 4376);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(239, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB130:    *((char **)t1) = &&LAB131;
    goto LAB1;

LAB117:    goto LAB116;

LAB119:    goto LAB117;

LAB120:    t9 = (t0 + 9008);
    xsi_report(t9, 15U, (unsigned char)2);
    goto LAB121;

LAB122:    t2 = (t0 + 9023);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB123;

LAB124:    t2 = (t0 + 9040);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB125;

LAB126:    t2 = (t0 + 9057);
    xsi_report(t2, 13U, (unsigned char)2);
    goto LAB127;

LAB128:    xsi_set_current_line(240, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 7384U);
    t6 = (t0 + 9134);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 35;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (35 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t6, t11);
    if (t14 == 0)
        goto LAB132;

LAB133:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB134;

LAB135:    xsi_set_current_line(242, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 0)
        goto LAB136;

LAB137:    xsi_set_current_line(243, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 0)
        goto LAB138;

LAB139:    xsi_set_current_line(246, ng0);
    t4 = (10 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t4);

LAB142:    *((char **)t1) = &&LAB143;
    goto LAB1;

LAB129:    goto LAB128;

LAB131:    goto LAB129;

LAB132:    t9 = (t0 + 9170);
    xsi_report(t9, 15U, (unsigned char)2);
    goto LAB133;

LAB134:    t2 = (t0 + 9185);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB135;

LAB136:    t2 = (t0 + 9202);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB137;

LAB138:    t2 = (t0 + 9219);
    xsi_report(t2, 13U, (unsigned char)2);
    goto LAB139;

LAB140:    xsi_set_current_line(248, ng0);

LAB146:    *((char **)t1) = &&LAB147;
    goto LAB1;

LAB141:    goto LAB140;

LAB143:    goto LAB141;

LAB144:    goto LAB2;

LAB145:    goto LAB144;

LAB147:    goto LAB145;

}


extern void work_a_0730398811_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0730398811_2372691052_p_0,(void *)work_a_0730398811_2372691052_p_1};
	xsi_register_didat("work_a_0730398811_2372691052", "isim/my_alu_tb_isim_beh.exe.sim/work/a_0730398811_2372691052.didat");
	xsi_register_executes(pe);
}
