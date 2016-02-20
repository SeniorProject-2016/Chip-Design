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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002891764505_3399352977_init();
    work_m_00000000000925617864_0146579548_init();
    work_m_00000000001934540438_2232249084_init();
    work_m_00000000001326538184_2089495141_init();
    work_m_00000000001133484961_3913188552_init();
    work_m_00000000002920528525_1247594280_init();
    work_m_00000000002801572414_3971401953_init();
    work_m_00000000001719187477_0918481750_init();
    work_m_00000000002184769066_1441042538_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002184769066_1441042538");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}