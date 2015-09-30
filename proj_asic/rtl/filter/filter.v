`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:06:50 06/06/2015 
// Design Name: 
// Module Name:    filter 
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
module filter(
    input clk,
    input rst,
    input [15:0] aud_in_lft,
    input [15:0] aud_in_rgt,
    input aud_in_rts,
    output aud_in_rtr,
    output [15:0] aud_out_lft,
    output [15:0] aud_out_rgt,
    output aud_out_rts,
    input aud_out_rtr
    );


endmodule
