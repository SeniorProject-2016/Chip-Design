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
    work_m_00000000001252528767_4190781462_init();
    work_m_00000000001661702428_3269121889_init();
    work_m_00000000001525313451_0360535164_init();
    work_m_00000000001387891315_1597338489_init();
    work_m_00000000001679821560_0408886691_init();
    work_m_00000000002650520079_2287803803_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002650520079_2287803803");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
