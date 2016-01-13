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
    work_m_00000000002018612967_0146579548_init();
    work_m_00000000000001580990_3399352977_init();
    unisims_ver_m_00000000003266096158_0170707611_init();
    work_m_00000000000237440592_2232249084_init();
    work_m_00000000001410667495_0072135408_init();
    work_m_00000000001180748632_1072338937_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001180748632_1072338937");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
