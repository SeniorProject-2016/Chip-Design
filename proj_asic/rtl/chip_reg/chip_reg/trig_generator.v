`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             trig_generator.v
// Create Date:             ???????????????????
// Last Modification:       3/16/2016
// Author:                  Julie Swift and Zachary Nelson
// Description: ????????????
//////////////////////////////////////////////////////////////////////////////////

module trig_generator(clk, rst_n, address, wdata, xfc, trig_i2si_fifo_overrun_clr, 
                      trig_i2so_fifo_underrun_clr);
     
    // Inputs
    input                       clk;                                // master clock
    input                       rst_n;                                // reset
    input           [10:0]      address;                            // register address
    input           [ 7:0]      wdata;                              // data to be written for a write op
    input                       xfc;                                // transfer complete
    
    // Outputs
    output reg                  trig_i2si_fifo_overrun_clr;         // address = 0x00C bit 0
    output reg                  trig_i2so_fifo_underrun_clr;	    // address = 0x00C bit 2

    always @ (posedge clk or negedge rst_n)
    begin
        if (~rst_n) 
        begin
            trig_i2si_fifo_overrun_clr <= 0;
            trig_i2so_fifo_underrun_clr <= 0;
        end
        
        else
        begin
            // initializing trigger bits to zero	
            trig_i2si_fifo_overrun_clr <= 0;
            trig_i2so_fifo_underrun_clr <= 0;
            // triggering when file transfer is complete and address being written to is 0x00c
            if	(address == 11'h008 && xfc ==1)
            begin
                // if written to bit 0 of 0x00c, trig_i2si_fifo_overrun_clr is triggered
                if (wdata[0])
                    trig_i2si_fifo_overrun_clr <= 1;
                // if written to bit 2 of 0x00c, trig_i2so_fifo_underrun_clr is triggered
                if (wdata[2])
                    trig_i2so_fifo_underrun_clr <= 1;
            end
        end
    end

endmodule
