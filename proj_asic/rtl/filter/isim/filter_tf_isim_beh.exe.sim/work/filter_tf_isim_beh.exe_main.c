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
    work_m_00000000003887789504_4190781462_init();
    work_m_00000000002872257730_0360535164_init();
    work_m_00000000003390997346_3269121889_init();
    work_m_00000000004041618237_2695138481_init();
    work_m_00000000002524487831_0408886691_init();
    work_m_00000000001276063033_2287803803_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001276063033_2287803803");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
