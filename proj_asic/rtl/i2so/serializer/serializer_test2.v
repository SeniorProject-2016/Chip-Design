`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:21:33 10/26/2015
// Design Name:   serializer
// Module Name:   C:/Users/kevin/Documents/GitHub/Chip-Design/proj_asic/rtl/i2so/serializer/serializer_test2.v
// Project Name:  serializer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: serializer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module serializer_test2;

	// Inputs
	reg clk;
	reg rst_n;
	reg rts;
	reg i2si_sck_transition;
	reg [15:0] i2so_lft;
	reg [15:0] i2so_rgt;
    
    
	reg i2si_sck;
    reg [2:0] sck_vec;
    reg sck;
    reg i2si_sck_delay;

	// Outputs
	wire i2so_sd;
	wire i2so_ws;
	wire rtr;

	// Instantiate the Unit Under Test (UUT)
	serializer uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.rts(rts), 
		.i2si_sck_transition(i2si_sck_transition), 
		.i2so_sd(i2so_sd), 
		.i2so_ws(i2so_ws), 
		.i2so_lft(i2so_lft), 
		.i2so_rgt(i2so_rgt), 
		.rtr(rtr)
        );

always
begin
    forever
    begin
        #5 clk = ~clk;
    end
end

always
begin
    forever
    begin
        #312.5 i2si_sck = ~i2si_sck;
    end
end


always @(posedge clk or negedge rst_n)
begin
    if (!rst_n)
        sck_vec <= 3'b000;
    else
    begin
        sck_vec[0] <= i2si_sck;
        sck_vec[2:1] <= sck_vec[1:0];
    end
end

always @(*)
begin
    sck <= sck_vec[1];
    i2si_sck_delay <= sck_vec[2];
    i2si_sck_transition = sck && !i2si_sck_delay;
end


initial begin
		// Initialize Inputs
		clk = 0;
        rst_n = 0;
        i2si_sck = 0;
        i2si_sck_transition = 0;
		rts = 0;
		i2so_lft = 0;
		i2so_rgt = 0;
        
		
		#694
		rst_n = 1;
        rts = 1;
        i2so_lft = 16'hAAAA;
		i2so_rgt = 16'hFF00;
end
          
endmodule

