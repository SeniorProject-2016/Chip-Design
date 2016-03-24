//////////////////////////////////////////////////////////////////////////////////
// Module Name:             trig_generator_testbench.v
// Create Date:             10/20/2015
// Last Modification:       3/16/2016
// Author:                  Julie Swift
// Description: ????????????
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module trig_generator_testbench;

	// Inputs
	reg         [10:0]          address;
	reg         [ 7:0]          wdata;
	reg                         wxfc;
	reg                         clk;
	reg         [31:0]          count;
	wire                        rst_n;
	
	// Outputs
	wire                        trig_i2si_fifo_overrun_clr;
	wire                        trig_i2so_fifo_underrun_clr;
	
	// Instantiate the Unit Under Test (UUT)
	trig_generator uut (
		.address(address), 
		.wdata(wdata), 
		.wxfc(wxfc), 
		.clk(clk), 
		.rst_n(rst_n), 
		.trig_i2si_fifo_overrun_clr(trig_i2si_fifo_overrun_clr), 
		.trig_i2so_fifo_underrun_clr(trig_i2so_fifo_underrun_clr)
	);
	
	always
	begin
        forever
		begin
			#5 clk = ~clk;
			count = count + 1;
		end
	end

	assign rst_n = !(count < 20);

	initial begin
		// Initialize Inputs
        count = 0;
        clk = 0;
		wdata = 8'hFF;

		// Wait 100 ns for global reset to finish
		#1000;
    end
	 
always @(posedge clk or negedge rst_n)
	begin
		if (~rst_n)
		begin
			address <= 0;
			xfc <= 0;
		end
		else if (address < 11'h20) //hex 20 12 bits of data
		begin
			address <= address + 4;
			xfc <= 1;
		end
		else
			xfc <=0;
	end
  
endmodule

