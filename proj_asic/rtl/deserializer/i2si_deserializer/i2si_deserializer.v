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
module i2si_deserializer(clk, rst, i2si_sck, i2si_sckdl, i2si_ws, i2si_sd, rf_i2si_en, i2si_lft, i2si_rgt, i2si_xfc);
	 
input clk, rst, i2si_sck, i2si_sckdl, i2si_ws, i2si_sd, rf_i2si_en;
output [15:0] i2si_lft, i2si_rgt;
output i2si_xfc;

reg [15:0] i2si_lft, i2si_rgt;
reg [2:0] sd_vec; //holds serial data

always @(posedge i2si_sck)
begin
	if(rst)
		sd_vec <= 3'b0;
	else
	begin
		sd_vec[1:0] <= sd_vec[2:1];
		sd_vec[2] <= i2si_sd;
	end
end


always @(posedge i2si_sck)
begin
	if(rst)
	begin
		i2si_lft[15:0] <= 0;
		i2si_rgt[15:0] <= 0;
	end

//Storing serial data into parallel	
//	else if(in_left) && sck_transition
//	begin
//		i2si_lft[15:1] <= i2si_lft[14:0];
//		i2si_lft[0] <= sd_vec[0];
//	end
//	else if(in_right) && sck_transition
//	begin
//		i2si_rgt[15:1] <= i2si_rgt[14:0];
//		i2si_rgt[0] <= sd_vec[0];
//	end
end
endmodule
