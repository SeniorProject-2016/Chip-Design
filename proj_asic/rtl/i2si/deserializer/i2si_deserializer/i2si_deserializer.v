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
//Check if ws goes from 1 -> 0 when en = 1
reg							i2si_ws_transition;
//Defines when the deserializer should read in the left channel
reg							in_left;
//Delayed signals of i2si_sck
reg [2:0]					sck;
//Delayed signals of i2si_ws
reg [4:0]               ws;
//Delayed signals of i2si_sd
reg [3:0]					sd;


//Represents idle state
parameter S0 = 1'b0;
//Represents active state
parameter S1 = 1'b1;



//Sync clk and sck
//sck[1] = sck synchronized with clk
//sck[2] = sck delay signal to help create i2si_sck_transition
always @(posedge clk or negedge rst)
begin
  if (!rst)
      sck <= 3'b000;
  else
  begin
		sck[0] <= i2si_sck;
		sck[2:1] <= sck[1:0];
  end
end

//Defines when sck_transition is high or low. Helps define when the deserialzer should read in the left channel and output it to i2si_lft
always @(posedge clk or negedge rst)
begin
	if(!rst)
		i2si_sck_transition <= 1'b0;
	//using wrong bits of sck to turn on i2si_sck_transition at right time
	//when using correct bits, transition is 1 clock cycle late
	else if(sck[1] && !sck[2])
		i2si_sck_transition <= 1'b1;
	else
		i2si_sck_transition <= 1'b0;
end

//Delay i2si_sd by 4 clock cycles
//sd[3] is synchronized signal
always @(posedge clk or negedge rst)
begin
	if(!rst)
		sd <= 3'b000;
	else
	begin
		sd[0] <= i2si_sd;
		sd[3:1] <= sd[2:0];
	end
end


//delay ws signal by 4 clock cycles
//ws has additional delay to define the active state
//ws[3] is synchronized
//ws[4] is delayed ws signal
always @(posedge clk or negedge rst)
begin
	if(!rst)
		ws <= 4'b0000;
	else
	begin
		ws[0] <= i2si_ws;
		ws[4:1] <= ws[3:0];
	end
end

//ws_transition becomes high when ws goes from 1 -> 0
//used to define active state
always @(posedge clk or negedge rst)
begin
	if(!rst)
		i2si_ws_transition <= 1'b0;
	else if(ws[3] && !ws[4] && i2si_sck_transition)
		i2si_ws_transition <= 1'b1;
	else
		i2si_ws_transition <= 1'b0;
end

//Defining when deserializer is in the idle or active state
always @(posedge clk or negedge rst)
begin
	if (!rst)
      state <= S0;
	else if(!rf_i2si_en)
		state <= S0;
	else if(i2si_ws_transition)
		state <= S1;
end


//Sets in_left as high when ws is low and sck_transition is high
//Tells deserializer to start reading in data from left or right channel
always @(posedge clk or negedge rst)
begin
	if(!rst)
		in_left <= 1'b0;
	else if (!ws[3] && i2si_sck_transition)
		in_left <= 1'b1;
	else if (ws[3] && i2si_sck_transition)
		in_left <= 1'b0;
end

always @(posedge clk or negedge rst)
begin
	if(!rst)
	begin
		i2si_lft[15:0] <= 16'b0;
		i2si_rgt[15:0] <= 16'b0;
	end		
	else if(state == S1)
	begin					
		//Storing serial data into parallel
		//Currently does not store data into the right channel nor at the right time
		if(i2si_sck_transition)
		begin
			if (in_left)
			begin
				i2si_lft[15:1] <= i2si_lft[14:0];
				i2si_lft[0] <= sd[3];
			end
				
			else
			begin
				i2si_rgt[15:1] <= i2si_rgt[14:0];
				i2si_rgt[0] <= sd[3];
			end
		end
	end
end
endmodule
