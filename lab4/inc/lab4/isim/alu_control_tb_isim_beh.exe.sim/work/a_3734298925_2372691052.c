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
static const char *ng0 = "C:/Users/cathy/Documents/UCR/spring2015/CS161L/lab4/inc/lab4/alu_control_tb.vhd";



static void work_a_3734298925_2372691052_p_0(char *t0)
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
    unsigned int t11;

LAB0:    t1 = (t0 + 2512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5124);
    xsi_report(t2, 25U, 0);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5149);
    t5 = (t0 + 2896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5151);
    t5 = (t0 + 2960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(62, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 5157);
    t10 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t10 = 0;

LAB16:    if (t10 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5196);
    xsi_report(t2, 28U, 0);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5224);
    t5 = (t0 + 2896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5226);
    t5 = (t0 + 2960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(75, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t8 = (t0 + 5161);
    xsi_report(t8, 35U, (unsigned char)2);
    goto LAB13;

LAB14:    t11 = 0;

LAB17:    if (t11 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB15;

LAB19:    t11 = (t11 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 5232);
    t10 = 1;
    if (4U == 4U)
        goto LAB26;

LAB27:    t10 = 0;

LAB28:    if (t10 == 0)
        goto LAB24;

LAB25:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5277);
    xsi_report(t2, 26U, 0);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5303);
    t5 = (t0 + 2896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5305);
    t5 = (t0 + 2960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(88, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t3);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    t8 = (t0 + 5236);
    xsi_report(t8, 41U, (unsigned char)2);
    goto LAB25;

LAB26:    t11 = 0;

LAB29:    if (t11 < 4U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB27;

LAB31:    t11 = (t11 + 1);
    goto LAB29;

LAB32:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 5311);
    t10 = 1;
    if (4U == 4U)
        goto LAB38;

LAB39:    t10 = 0;

LAB40:    if (t10 == 0)
        goto LAB36;

LAB37:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5351);
    xsi_report(t2, 31U, 0);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 5382);
    t5 = (t0 + 2896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5384);
    t5 = (t0 + 2960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(101, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t3);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    t8 = (t0 + 5315);
    xsi_report(t8, 36U, (unsigned char)2);
    goto LAB37;

LAB38:    t11 = 0;

LAB41:    if (t11 < 4U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB39;

LAB43:    t11 = (t11 + 1);
    goto LAB41;

LAB44:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 5390);
    t10 = 1;
    if (4U == 4U)
        goto LAB50;

LAB51:    t10 = 0;

LAB52:    if (t10 == 0)
        goto LAB48;

LAB49:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 5435);
    xsi_report(t2, 26U, 0);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5461);
    t5 = (t0 + 2896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5463);
    t5 = (t0 + 2960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(114, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t3);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    t8 = (t0 + 5394);
    xsi_report(t8, 41U, (unsigned char)2);
    goto LAB49;

LAB50:    t11 = 0;

LAB53:    if (t11 < 4U)
        goto LAB54;
    else
        goto LAB52;

LAB54:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB51;

LAB55:    t11 = (t11 + 1);
    goto LAB53;

LAB56:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 5469);
    t10 = 1;
    if (4U == 4U)
        goto LAB62;

LAB63:    t10 = 0;

LAB64:    if (t10 == 0)
        goto LAB60;

LAB61:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 5509);
    xsi_report(t2, 25U, 0);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 5534);
    t5 = (t0 + 2896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 5536);
    t5 = (t0 + 2960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(127, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t3);

LAB70:    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

LAB60:    t8 = (t0 + 5473);
    xsi_report(t8, 36U, (unsigned char)2);
    goto LAB61;

LAB62:    t11 = 0;

LAB65:    if (t11 < 4U)
        goto LAB66;
    else
        goto LAB64;

LAB66:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB63;

LAB67:    t11 = (t11 + 1);
    goto LAB65;

LAB68:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 5542);
    t10 = 1;
    if (4U == 4U)
        goto LAB74;

LAB75:    t10 = 0;

LAB76:    if (t10 == 0)
        goto LAB72;

LAB73:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 5581);
    xsi_report(t2, 39U, 0);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 5620);
    t5 = (t0 + 2896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 5622);
    t5 = (t0 + 2960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(140, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2320);
    xsi_process_wait(t2, t3);

LAB82:    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB69:    goto LAB68;

LAB71:    goto LAB69;

LAB72:    t8 = (t0 + 5546);
    xsi_report(t8, 35U, (unsigned char)2);
    goto LAB73;

LAB74:    t11 = 0;

LAB77:    if (t11 < 4U)
        goto LAB78;
    else
        goto LAB76;

LAB78:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB75;

LAB79:    t11 = (t11 + 1);
    goto LAB77;

LAB80:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 5628);
    t10 = 1;
    if (4U == 4U)
        goto LAB86;

LAB87:    t10 = 0;

LAB88:    if (t10 == 0)
        goto LAB84;

LAB85:    xsi_set_current_line(142, ng0);

LAB94:    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB81:    goto LAB80;

LAB83:    goto LAB81;

LAB84:    t8 = (t0 + 5632);
    xsi_report(t8, 42U, (unsigned char)2);
    goto LAB85;

LAB86:    t11 = 0;

LAB89:    if (t11 < 4U)
        goto LAB90;
    else
        goto LAB88;

LAB90:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB87;

LAB91:    t11 = (t11 + 1);
    goto LAB89;

LAB92:    goto LAB2;

LAB93:    goto LAB92;

LAB95:    goto LAB93;

}


extern void work_a_3734298925_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3734298925_2372691052_p_0};
	xsi_register_didat("work_a_3734298925_2372691052", "isim/alu_control_tb_isim_beh.exe.sim/work/a_3734298925_2372691052.didat");
	xsi_register_executes(pe);
}
