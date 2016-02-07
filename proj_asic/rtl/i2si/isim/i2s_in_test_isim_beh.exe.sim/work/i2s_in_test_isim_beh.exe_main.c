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
    work_m_00000000002621388379_1742810883_init();
    work_m_00000000000361103383_0954816381_init();
    work_m_00000000000193430059_2968718272_init();
    work_m_00000000003741982042_3856551223_init();
    work_m_00000000004044056931_0948142031_init();
    work_m_00000000001551850882_0572304423_init();
    work_m_00000000002691956548_1312750992_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002691956548_1312750992");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
