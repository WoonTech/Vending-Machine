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
static const char *ng0 = "D:/Project/Year 4 Project/HDL/Exam/VendingMachine/VendingMachine.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_3280006131_3212880686_p_0(char *t0)
{
    char t19[16];
    char t20[16];
    char t21[16];
    char t22[16];
    char t23[16];
    char t31[16];
    char t32[16];
    char t33[16];
    char t34[16];
    char t35[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4520);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1032U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 2472U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 4616);
    t5 = (t2 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)6);
    if (t3 != 0)
        goto LAB14;

LAB16:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB17;

LAB18:    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB21;

LAB22:
LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 4616);
    t15 = (t4 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t2 = (t0 + 4744);
    t5 = (t2 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t4, 6U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(61, ng0);
    t2 = xsi_get_transient_memory(6U);
    memset(t2, 0, 6U);
    t4 = t2;
    memset(t4, (unsigned char)2, 6U);
    t5 = (t0 + 4808);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 6U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(68, ng0);
    t2 = xsi_get_transient_memory(6U);
    memset(t2, 0, 6U);
    t5 = t2;
    memset(t5, (unsigned char)2, 6U);
    t9 = (t0 + 4808);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 6U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB15;

LAB17:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t2 = (t0 + 8020U);
    t9 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t23, t5, t2, (unsigned char)3);
    t12 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t22, t9, t23, (unsigned char)3);
    t15 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t21, t12, t22, (unsigned char)3);
    t16 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t20, t15, t21, (unsigned char)3);
    t17 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t19, t16, t20, (unsigned char)3);
    t18 = (t19 + 12U);
    t24 = *((unsigned int *)t18);
    t25 = (1U * t24);
    t6 = (6U != t25);
    if (t6 == 1)
        goto LAB19;

LAB20:    t26 = (t0 + 4808);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t17, 6U);
    xsi_driver_first_trans_fast(t26);
    goto LAB15;

LAB19:    xsi_size_not_matching(6U, t25, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t2 = (t0 + 8020U);
    t9 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t35, t5, t2, (unsigned char)3);
    t12 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t34, t9, t35, (unsigned char)3);
    t15 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t33, t12, t34, (unsigned char)3);
    t16 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t32, t15, t33, (unsigned char)3);
    t17 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t31, t16, t32, (unsigned char)3);
    t18 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t23, t17, t31, (unsigned char)3);
    t26 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t22, t18, t23, (unsigned char)3);
    t27 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t21, t26, t22, (unsigned char)3);
    t28 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t20, t27, t21, (unsigned char)3);
    t29 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t19, t28, t20, (unsigned char)3);
    t30 = (t19 + 12U);
    t24 = *((unsigned int *)t30);
    t25 = (1U * t24);
    t6 = (6U != t25);
    if (t6 == 1)
        goto LAB23;

LAB24:    t36 = (t0 + 4808);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t29, 6U);
    xsi_driver_first_trans_fast(t36);
    goto LAB15;

LAB23:    xsi_size_not_matching(6U, t25, 0);
    goto LAB24;

}

static void work_a_3280006131_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 4872);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 4936);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB2:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB41;

LAB43:
LAB42:    t1 = (t0 + 4536);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t7 = *((unsigned char *)t4);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB14;

LAB15:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 5000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB2;

LAB4:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB16;

LAB18:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 5000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB2;

LAB5:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB21;

LAB23:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB24;

LAB25:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 5000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB22:    goto LAB2;

LAB6:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB26;

LAB28:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB29;

LAB30:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 5000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB31;

LAB33:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB34;

LAB35:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 5000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB32:    goto LAB2;

LAB8:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB36;

LAB38:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB39;

LAB40:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 5000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB37:    goto LAB2;

LAB9:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 4936);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 5000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(140, ng0);
    t1 = (t0 + 4872);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 5000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 5000);
    t5 = (t3 + 56U);
    t9 = *((char **)t5);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t3);
    goto LAB12;

LAB14:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 5000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB16:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 5000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 5000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB21:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 5000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB24:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 5000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB26:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 5000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB27;

LAB29:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 5000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB27;

LAB31:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 5000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB34:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 5000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB36:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 5000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB37;

LAB39:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 5000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 4872);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB37;

LAB41:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 5000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB42;

}


extern void work_a_3280006131_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3280006131_3212880686_p_0,(void *)work_a_3280006131_3212880686_p_1};
	xsi_register_didat("work_a_3280006131_3212880686", "isim/tb_VendingMachine_isim_beh.exe.sim/work/a_3280006131_3212880686.didat");
	xsi_register_executes(pe);
}
