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
module i2si_deserializer(clk, rst, i2si_sck, i2si_ws, i2si_sd, rf_i2si_en, i2si_lft, i2si_rgt, i2si_xfc);

//Master clock
input							clk;
//Reset
input							rst;
//Digital audio bit clock
input							i2si_sck;
//Word select: defines if left or right channel is being read from
input							i2si_ws;
//Digital audio serial data
input							i2si_sd;
//Enabled bit that helps define if the deserializer is active or idle
input							rf_i2si_en;
//Parallel output data of left channel
output[15:0]	 			i2si_lft;
//Parallel output data of right channel
output [15:0]				i2si_rgt;
//Transfer Complete
output 						i2si_xfc;


reg [15:0] 					i2si_lft;
reg [15:0]					i2si_rgt;
//Defines which state the deserializer is in. Active or Idle.
reg 							state;
//sck transitions from 0 -> 1
reg 							i2si_sck_transition;
//Used to help check when ws goes from 1 ->. Currently not used
reg							i2si_wsdl;
//Check if ws goes from 1 -> 0 when en = 1
reg							i2si_ws_transition;
//Defines when the deserializer should read in the left channel
reg							in_left;
//Delayed signals of i2si_sck
reg [2:0]					sck;
//Delayed signals of i2si_ws
reg [3:0]               ws;
//Delayed signals of i2si_sd
reg [3:0]					sd;
//Holds sd data, to prevent metastability? Double check later
reg [2:0] 					sd_vec; //holds serial data
//Currently used to check transition of ws from high to low. Used to define active state
reg [1:0]					prev_ws;


//Represents idle state
parameter S0 = 1'b0;
//Represents active state
parameter S1 = 1'b1;



//Sync clk and sck
//sck[1] = sck
//sck[0] = sck delay
always @(posedge clk)
begin
  sck[2] <= i2si_sck;
  sck[1] <= sck[2];
  sck[0] <= sck[1];
end

//delay ws and sd signals by 4 clock cycles
always @(posedge clk)
begin
	ws[3] <= i2si_ws;
	ws[2] <= ws[3];
	ws[1] <= ws[2];
	ws[0] <= ws[1];
	
	sd[3] <= i2si_sd;
	sd[2] <= sd[3];
	sd[1] <= sd[2];
	sd[0] <= sd[1];
end

//ws_transition becomes high when ws goes from 1 -> 0
//used to define active state
always @(posedge clk)
begin
	prev_ws[1] <= prev_ws[0];
	prev_ws[0] <= i2si_ws;
	if(prev_ws[1] == 1'b1 && prev_ws[0] == 1'b0)
		i2si_ws_transition <= 1'b1;
	else
		i2si_ws_transition <= 1'b0;
end


//Defining when deserializer is in the idle or active state
always @(posedge clk)
begin
	if(!rf_i2si_en || rst)
		state <= S0;
	else if(i2si_ws_transition && rf_i2si_en)
		state <= S1;
end

//Store sd into sd_vec. Purpose: Prevents metastability? Double check later
always @(posedge clk)
begin
	if(rst)
		sd_vec <= 3'b0;
	else if(sck[1])
	begin
		sd_vec[1:0] <= sd_vec[2:1];
		sd_vec[2] <= i2si_sd;
	end
end


//Check later if in_left = 1 when ws = 1
always @(posedge clk)
begin
	if(i2si_ws == 1'b0)
		in_left <= 1;
	else
		in_left <= 0;
end

//Defines when sck_transition is high or low. Helps define when the deserialzer should read in the left channel and output it to i2si_lft
always @(posedge clk)
begin
	//using wrong bits of reg? to turn on i2si_sck_transition at right time
	//when using correct bits, transition is 1 clock cycle late
	if(sck[2] && !sck[1])//(sck && !sck delay)
		i2si_sck_transition <= 1'b1;
	else
		i2si_sck_transition <= 1'b0;
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
				
	
		/*	else
				begin
				//using wrong bits of reg? to turn on i2si_sck_transition at right time
				//when using correct bits, transition is 1 clock cycle late
					if(sck[2] && !sck[1])//(sck && !sck delay)
						i2si_sck_transition <= 1'b1;
					else
						i2si_sck_transition <= 1'b0;
				end */
				
				
			//Storing serial data into parallel
			//Currently does not store data into the right channel nor at the right time
			else if(in_left && i2si_sck_transition)
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
