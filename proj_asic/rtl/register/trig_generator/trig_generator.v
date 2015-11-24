`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:05:16 09/30/2015 
// Design Name: 
// Module Name:    trig_generator 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module trig_generator(
	 input [11:0] address,
	 input [7:0] wdata,
	 input xfc,
	 input clk,
	 input rst,
	 output reg trig_i2si_fifo_overrun_clr, //address = 0x00C bit 0
	 output reg trig_i2so_fifo_underrun_clr	// address = 0x00C bit 2
	 );

always @ (posedge clk or negedge rst)
begin
	if (~rst)
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
		if	(address == 12'h00c && xfc ==1)
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
