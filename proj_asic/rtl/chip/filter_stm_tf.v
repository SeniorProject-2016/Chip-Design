`timescale 1ns / 1ps

module filter_stm_tf;

	// Inputs
	reg clk;
	reg rstb;
	reg filter_aud_in_rts;
	reg [31:0] filter_aud_in;
	reg [15:0] rf_filter_coeff;

	// Outputs
	wire filter_aud_in_rtr;
	wire do_transfer;
	wire do_multiply_1st;
	wire do_multiply;
	wire [39:0] filter_aud_out;
	
	filter_stm uut (
    .clk(clk), 																
    .rstb(rstb), 														
    .filter_aud_in_rts(filter_aud_in_rts), 					
    .filter_aud_in_rtr(filter_aud_in_rtr), 					
    .filter_aud_out_rts(filter_aud_out_rts), 				
    .filter_aud_out_rtr(filter_aud_out_rtr), 				
    .filter_aud_in(filter_aud_in), 								
    .accumulator_load(accumulator_load), 						
    .accumulator_enable(accumulator_enable), 				
    .accumulator_in_left(accumulator_in_left), 				
    .accumulator_in_right(accumulator_in_right), 			
    .rf_filter_coeff(rf_filter_coeff), 						
    .mux_re(mux_re), 												
    .mux_rdptr(mux_rdptr)											
    );

	initial begin
		// Initialize Inputs
		clk = 0;
		rstb = 0;
		
		#100;

	end
	
	always
		begin
			forever #5 clk = ~clk;
		end
      
endmodule

