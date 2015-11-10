`timescale 1ns / 1ps

module filter(clk, rst, aud_in, aud_in_rts, aud_in_rtr, aud_out, aud_out_rts,   aud_out_rtr    );

input 	clk;
input 	rst;
input 	[31:0] aud_in;
//input 	[15:0] aud_in_rgt;
input 	aud_in_rts;
output 	aud_in_rtr;
output 	[31:0] aud_out;
//output 	[15:0] aud_out_rgt;
output 	aud_out_rts;
input 	aud_out_rtr;

wire output_signal; 
wire aud_in_acc; 
wire aud_out_acc; 
wire aud_out_multiply; 
wire rstb;

assign rstb = !rst; 
assign aud_out = output_signal; 
assign aud_in_acc = aud_out_multiply; 

filter_stm filter_stm_0
			(.clk					(clk),
			.rstb					(rstb),
			.rts					(aud_in_rts),
			.aud_in				(aud_in),
			.rtr					(aud_in_rtr),
			.do_transfer		(do_transfer),
			.do_multiply_1st	(do_multiply_1st),
			.do_multiply		(do_multiply),
			.wr_addr				(wr_addr),
			.rd_addr				(rd_addr),
			.aud_out				(aud_out_multiply));


filter_accumulator filter_accumulator_0
		(.clk			(clk),
		.rstb			(rstb),
		.D				(aud_in_acc),
		.Q				(aud_out_acc));





filter_barrel_shifter filter_barrel_shifter_0
		(.input_signal		(aud_out_acc),
		.sel_shift			(sel_shift),
		.output_signal		(output_signal));
endmodule
