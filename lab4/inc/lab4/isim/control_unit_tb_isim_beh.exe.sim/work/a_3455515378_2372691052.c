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
static const char *ng0 = "C:/Users/cathy/Documents/UCR/spring2015/CS161L/lab4/inc/lab4/control_unit_tb.vhd";



static void work_a_3455515378_2372691052_p_0(char *t0)
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
    unsigned int t12;

LAB0:    t1 = (t0 + 3472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 6635);
    xsi_report(t2, 24U, 0);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 6659);
    t5 = (t0 + 3856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(76, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB14;

LAB15:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 0)
        goto LAB18;

LAB19:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB20;

LAB21:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB22;

LAB23:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB24;

LAB25:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 6910);
    t10 = 1;
    if (2U == 2U)
        goto LAB28;

LAB29:    t10 = 0;

LAB30:    if (t10 == 0)
        goto LAB26;

LAB27:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 6945);
    xsi_report(t2, 25U, 0);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 6970);
    t5 = (t0 + 3856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(93, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t3);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t2 = (t0 + 6665);
    xsi_report(t2, 34U, (unsigned char)2);
    goto LAB13;

LAB14:    t2 = (t0 + 6699);
    xsi_report(t2, 34U, (unsigned char)2);
    goto LAB15;

LAB16:    t2 = (t0 + 6733);
    xsi_report(t2, 37U, (unsigned char)2);
    goto LAB17;

LAB18:    t2 = (t0 + 6770);
    xsi_report(t2, 36U, (unsigned char)2);
    goto LAB19;

LAB20:    t2 = (t0 + 6806);
    xsi_report(t2, 35U, (unsigned char)2);
    goto LAB21;

LAB22:    t2 = (t0 + 6841);
    xsi_report(t2, 36U, (unsigned char)2);
    goto LAB23;

LAB24:    t2 = (t0 + 6877);
    xsi_report(t2, 33U, (unsigned char)2);
    goto LAB25;

LAB26:    t8 = (t0 + 6912);
    xsi_report(t8, 33U, (unsigned char)2);
    goto LAB27;

LAB28:    t12 = 0;

LAB31:    if (t12 < 2U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t6 = (t4 + t12);
    t7 = (t2 + t12);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB29;

LAB33:    t12 = (t12 + 1);
    goto LAB31;

LAB34:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB38;

LAB39:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 0)
        goto LAB40;

LAB41:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 0)
        goto LAB42;

LAB43:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 0)
        goto LAB46;

LAB47:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB48;

LAB49:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB50;

LAB51:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 7221);
    t10 = 1;
    if (2U == 2U)
        goto LAB54;

LAB55:    t10 = 0;

LAB56:    if (t10 == 0)
        goto LAB52;

LAB53:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 7256);
    xsi_report(t2, 26U, 0);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 7282);
    t5 = (t0 + 3856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(110, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t3);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    t2 = (t0 + 6976);
    xsi_report(t2, 34U, (unsigned char)2);
    goto LAB39;

LAB40:    t2 = (t0 + 7010);
    xsi_report(t2, 34U, (unsigned char)2);
    goto LAB41;

LAB42:    t2 = (t0 + 7044);
    xsi_report(t2, 37U, (unsigned char)2);
    goto LAB43;

LAB44:    t2 = (t0 + 7081);
    xsi_report(t2, 36U, (unsigned char)2);
    goto LAB45;

LAB46:    t2 = (t0 + 7117);
    xsi_report(t2, 35U, (unsigned char)2);
    goto LAB47;

LAB48:    t2 = (t0 + 7152);
    xsi_report(t2, 36U, (unsigned char)2);
    goto LAB49;

LAB50:    t2 = (t0 + 7188);
    xsi_report(t2, 33U, (unsigned char)2);
    goto LAB51;

LAB52:    t8 = (t0 + 7223);
    xsi_report(t8, 33U, (unsigned char)2);
    goto LAB53;

LAB54:    t12 = 0;

LAB57:    if (t12 < 2U)
        goto LAB58;
    else
        goto LAB56;

LAB58:    t6 = (t4 + t12);
    t7 = (t2 + t12);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB55;

LAB59:    t12 = (t12 + 1);
    goto LAB57;

LAB60:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB64;

LAB65:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 0)
        goto LAB66;

LAB67:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB68;

LAB69:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB70;

LAB71:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB72;

LAB73:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 0)
        goto LAB74;

LAB75:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB76;

LAB77:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 7533);
    t10 = 1;
    if (2U == 2U)
        goto LAB80;

LAB81:    t10 = 0;

LAB82:    if (t10 == 0)
        goto LAB78;

LAB79:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 7568);
    xsi_report(t2, 19U, 0);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 7587);
    t5 = (t0 + 3856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(127, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t3);

LAB88:    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    t2 = (t0 + 7288);
    xsi_report(t2, 34U, (unsigned char)2);
    goto LAB65;

LAB66:    t2 = (t0 + 7322);
    xsi_report(t2, 34U, (unsigned char)2);
    goto LAB67;

LAB68:    t2 = (t0 + 7356);
    xsi_report(t2, 37U, (unsigned char)2);
    goto LAB69;

LAB70:    t2 = (t0 + 7393);
    xsi_report(t2, 36U, (unsigned char)2);
    goto LAB71;

LAB72:    t2 = (t0 + 7429);
    xsi_report(t2, 35U, (unsigned char)2);
    goto LAB73;

LAB74:    t2 = (t0 + 7464);
    xsi_report(t2, 36U, (unsigned char)2);
    goto LAB75;

LAB76:    t2 = (t0 + 7500);
    xsi_report(t2, 33U, (unsigned char)2);
    goto LAB77;

LAB78:    t8 = (t0 + 7535);
    xsi_report(t8, 33U, (unsigned char)2);
    goto LAB79;

LAB80:    t12 = 0;

LAB83:    if (t12 < 2U)
        goto LAB84;
    else
        goto LAB82;

LAB84:    t6 = (t4 + t12);
    t7 = (t2 + t12);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB81;

LAB85:    t12 = (t12 + 1);
    goto LAB83;

LAB86:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB90;

LAB91:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB92;

LAB93:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB94;

LAB95:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB96;

LAB97:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB98;

LAB99:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 0)
        goto LAB100;

LAB101:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 0)
        goto LAB102;

LAB103:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 7838);
    t10 = 1;
    if (2U == 2U)
        goto LAB106;

LAB107:    t10 = 0;

LAB108:    if (t10 == 0)
        goto LAB104;

LAB105:    xsi_set_current_line(137, ng0);

LAB114:    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB87:    goto LAB86;

LAB89:    goto LAB87;

LAB90:    t2 = (t0 + 7593);
    xsi_report(t2, 34U, (unsigned char)2);
    goto LAB91;

LAB92:    t2 = (t0 + 7627);
    xsi_report(t2, 34U, (unsigned char)2);
    goto LAB93;

LAB94:    t2 = (t0 + 7661);
    xsi_report(t2, 37U, (unsigned char)2);
    goto LAB95;

LAB96:    t2 = (t0 + 7698);
    xsi_report(t2, 36U, (unsigned char)2);
    goto LAB97;

LAB98:    t2 = (t0 + 7734);
    xsi_report(t2, 35U, (unsigned char)2);
    goto LAB99;

LAB100:    t2 = (t0 + 7769);
    xsi_report(t2, 36U, (unsigned char)2);
    goto LAB101;

LAB102:    t2 = (t0 + 7805);
    xsi_report(t2, 33U, (unsigned char)2);
    goto LAB103;

LAB104:    t8 = (t0 + 7840);
    xsi_report(t8, 33U, (unsigned char)2);
    goto LAB105;

LAB106:    t12 = 0;

LAB109:    if (t12 < 2U)
        goto LAB110;
    else
        goto LAB108;

LAB110:    t6 = (t4 + t12);
    t7 = (t2 + t12);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB107;

LAB111:    t12 = (t12 + 1);
    goto LAB109;

LAB112:    goto LAB2;

LAB113:    goto LAB112;

LAB115:    goto LAB113;

}


extern void work_a_3455515378_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3455515378_2372691052_p_0};
	xsi_register_didat("work_a_3455515378_2372691052", "isim/control_unit_tb_isim_beh.exe.sim/work/a_3455515378_2372691052.didat");
	xsi_register_executes(pe);
}
