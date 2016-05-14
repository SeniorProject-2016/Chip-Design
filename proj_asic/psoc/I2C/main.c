/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>
#include <device.h>
#include <is2_enable.h>
#include <chip_status.h>
#include <trig_enable.h>
#include <lpf.h>
#include <hpf.h>
#include <bpf.h>
#include <pass.h>

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    //int status = 0;
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    I2C_Start();
    I2C_EnableInt();
    I2C_Enable();
    int m=0;
    int j=0;
    uint8 status;
    int i;
 
    
    for(;;)
    {
/*
	CyDelay(500);
    if (j==0)
    {   
	status = I2C_MasterWriteBuf(80, lpf, 1026, I2C_MODE_COMPLETE_XFER); //write whole coeff register template, choose filter type
	 if(status != I2C_MSTR_NO_ERROR)
        {
            I2C_MasterSendStop();
	    j=1;
            break;
        }
        I2C_MasterSendStop();
        }

    
    
      /*
	Write master regiester
	  
CyDelay(500);
    if (j==0)
    {   
	status = I2C_MasterSendStart(87, 0);
	for(i=0; i<2; i++)
        {
        status = I2C_MasterWriteByte(chip[i]);
        if(status != I2C_MSTR_NO_ERROR)
        {
            I2C_MasterSendStop();\
	    m=1;
            break;
        }
        }

	*/
    
    /*
    PSOC setup with button functionality

    //Write i2s on trig off
    if(i2s_read() == 1)
    {
    I2C_MasterWriteBuf(87, i2s, 3, I2C_MODE_COMPLETE_XFER);
    while(i2s_read())
    {}
    I2C_MasterReadBuf(87, status, 1, I2C_MODE_COMPLETE_XFER);
    }
    
    //Write i2s off trig on
    if(trig_read() == 1)
    {
    I2C_MasterWriteBuf(87, trig, 3, I2C_MODE_COMPLETE_XFER);
    while(trig_read())
    {}
    }
    
    //Write LPF 
    if(LPF_read() == 1)
    {
    I2C_MasterWriteBuf(87, LPF, 1026, I2C_MODE_COMPLETE_XFER);
    while(LPF_read())
    {}
    }
    */
    
    
    }
}

/* [] END OF FILE */
