`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:09:33 06/06/2015 
// Design Name: 
// Module Name:    i2c_slave 
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
module i2c_slave(
    input clk,
    input rst,
    output op,
    output [9:0] addr,
    output [31:0] wdata,
    output rts,
    input rtr,
    input [31:0] rdata,
    input xfc
    );


endmodule
