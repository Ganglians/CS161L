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
static const char *ng0 = "C:/Users/cathy/Documents/UCR/spring2015/CS161L/lab1/lab1_alu/my_alu_tb.vhd";



static void work_a_0730398811_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;

LAB0:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 6290);
    xsi_report(t2, 23U, 0);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 6313);
    t5 = (t0 + 3656);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 6316);
    t5 = (t0 + 3720);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 6320);
    t5 = (t0 + 3784);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(119, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB14;

LAB15:    t10 = (unsigned char)0;

LAB16:    if (t10 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 6342);
    t5 = (t0 + 3720);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 6346);
    t5 = (t0 + 3784);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(126, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t3);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t2 = (t0 + 6324);
    xsi_report(t2, 18U, (unsigned char)1);
    goto LAB13;

LAB14:    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB16;

LAB17:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB23;

LAB24:    t10 = (unsigned char)0;

LAB25:    if (t10 == 0)
        goto LAB21;

LAB22:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 6368);
    t5 = (t0 + 3720);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 6372);
    t5 = (t0 + 3784);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(133, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t3);

LAB28:    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

LAB21:    t2 = (t0 + 6350);
    xsi_report(t2, 18U, (unsigned char)1);
    goto LAB22;

LAB23:    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB25;

LAB26:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB32;

LAB33:    t10 = (unsigned char)0;

LAB34:    if (t10 == 0)
        goto LAB30;

LAB31:    xsi_set_current_line(137, ng0);

LAB37:    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB27:    goto LAB26;

LAB29:    goto LAB27;

LAB30:    t2 = (t0 + 6376);
    xsi_report(t2, 18U, (unsigned char)1);
    goto LAB31;

LAB32:    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB34;

LAB35:    goto LAB2;

LAB36:    goto LAB35;

LAB38:    goto LAB36;

}


extern void work_a_0730398811_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0730398811_2372691052_p_0};
	xsi_register_didat("work_a_0730398811_2372691052", "isim/my_alu_tb_isim_beh.exe.sim/work/a_0730398811_2372691052.didat");
	xsi_register_executes(pe);
}
