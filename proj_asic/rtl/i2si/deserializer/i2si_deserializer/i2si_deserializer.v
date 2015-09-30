`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:32:27 09/13/2015 
// Design Name: 
// Module Name:    i2si_deserializer 
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
module i2si_deserializer(clk, rst, i2si_sck, i2si_ws, i2si_sd, rf_i2si_en, i2si_lft, i2si_rgt, i2si_xfc, i2si_sck_transition, i2si_sckdl, delayed_signal);
	 
input							clk, rst, i2si_sck, i2si_ws, i2si_sd, rf_i2si_en, i2si_sckdl;
output[15:0]	 			i2si_lft, i2si_rgt;
output 						i2si_xfc, i2si_sck_transition;
output						delayed_signal;


//S0 represents idle state
//S1 represents active state
parameter S0 = 1'b0, S1 = 1'b1;

//i2si_ws_transition to check if ws goes from 1 -> 0 when en = 1
reg 							i2si_sck_transition, i2si_wsdl, i2si_ws_transition, state, in_left;
reg [15:0] 					i2si_lft, i2si_rgt;
reg [2:0] 					sd_vec; //holds serial data
reg [1:0]					prev_ws;

parameter					SCK_DELAY = 2, SD_DELAY = 3;
reg							delayed_sck, delayed_sd;
reg [3:0]					sck_shift_reg, sd_shift_reg;

always @(posedge clk)
begin
	sck_shift_reg <= {sck_shift_reg[2:0], i2si_sck};
	delayed_sck <= sck_shift_reg[SCK_DELAY-1];
	
	sd_shift_reg <= {sd_shift_reg[2:0], i2si_sd};
	delayed_sd <= sd_shift_reg[SD_DELAY-1];
end

//Delay Test.
parameter 					DELAY = 2;
reg [2:0] 					shift_reg;
reg							delayed_signal;

always @(posedge i2si_sck)
begin
	shift_reg <= { shift_reg[1:0], i2si_sd};
	delayed_signal <= shift_reg[DELAY-1];
end

//used to decide if i2si is in active or idle state.
always @(posedge clk)
begin

	prev_ws[1] <= prev_ws[0];
	prev_ws[0] <= i2si_ws;
	if(prev_ws[1] == 1'b1 && prev_ws[0] == 1'b0)
		i2si_ws_transition <= 1'b1;
	else
		i2si_ws_transition <= 1'b0;
end


//writing idle and active state
always @(posedge clk)
begin
	if(!rf_i2si_en)
		state <= S0;
	//statement doesn't run because rf_i2si_en doesn't appear to equal 1
	else if(i2si_ws_transition)//(rf_i2si_en && 1)//i2si_ws_transition)
		state <= S1;
		//state <= S1;
end

//Figure out how to run this on @(posedge clk)
always @(posedge clk)
begin
	if(rst)
		sd_vec <= 3'b0;
	else if (i2si_sck)
	begin
		sd_vec[1:0] <= sd_vec[2:1];
		sd_vec[2] <= i2si_sd;
	end
end


//Check later if in_left = 1 when ws = 1
always @(posedge clk)
begin
	if(i2si_ws == 1'b1)
		in_left <= 1;
	else
		in_left <= 0;
end


always @(posedge clk)
begin
	if(state == S1)
	begin
			if(rst)
				begin
					i2si_lft[15:0] <= 16'b0;
					i2si_rgt[15:0] <= 16'b0;
				end
	
			else
				begin
					if(i2si_sck && !i2si_sckdl)
						i2si_sck_transition <= 1'b1;
					else
						i2si_sck_transition <= 1'b0;
				end
			//Storing serial data into parallel
			//Doesn't appear to store data in the right time
			//Unsure if condition runs at correct times, i2si_rght block may run when not wanted
			if(in_left && i2si_sck_transition)
				begin
					i2si_lft[15:1] <= i2si_lft[14:0];
					i2si_lft[0] <= sd_vec[0];
				end
			else
				begin
					i2si_rgt[15:1] <= i2si_rgt[14:0];
					i2si_rgt[0] <= sd_vec[0];
				end
	end
end
endmodule
