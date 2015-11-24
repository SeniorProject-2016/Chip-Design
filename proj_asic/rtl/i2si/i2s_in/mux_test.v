`timescale 1ns / 1ps


module mux_test;

	// Inputs
	reg [31:0] in_0_data;
	reg in_0_xfc;
	reg [31:0] in_1_data;
	reg in_1_xfc;
	reg sel;

	// Outputs
	wire [31:0] mux_data;
	wire mux_xfc;

	// Instantiate the Unit Under Test (UUT)
	i2si_mux uut (
		.in_0_data(in_0_data), 
		.in_0_xfc(in_0_xfc), 
		.in_1_data(in_1_data), 
		.in_1_xfc(in_1_xfc), 
		.sel(sel), 
		.mux_data(mux_data), 
		.mux_xfc(mux_xfc)
	);

	initial begin
		in_0_data = 0;
		in_0_xfc = 0;
		in_1_data = 0;
		in_1_xfc = 0;
		sel = 0;
		#10;
        
        in_0_data = 32'd25;
        in_0_xfc = 1;
        in_1_data = 32'd50;
        in_1_xfc = 1;
        sel = 1;
        #10;

        in_0_data = 32'd100;
        in_0_xfc = 1;
        in_1_data = 32'd1000;
        in_1_xfc = 0;
        sel = 0;
        #10;
        
        in_0_data = 32'd2048;
        in_0_xfc = 1;
        in_1_data = 32'd4096;
        in_1_xfc = 0;
        sel = 1;
        #10;
        
        in_0_data = 0;
		in_0_xfc = 0;
		in_1_data = 0;
		in_1_xfc = 0;
		sel = 0;

	end
      
endmodule

