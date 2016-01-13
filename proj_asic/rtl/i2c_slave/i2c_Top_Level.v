`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:12:03 11/11/2015 
// Design Name: 
// Module Name:    i2c_Top_Level 
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
module i2c_Top_Level(
    input [2:0] i2c_addr_bits,
    input i2c_sda_in,
    input i2c_scl,
    output i2c_op,
    output i2c_xfc_write,
    output [10:0] i2c_addr,
    output [7:0] i2c_wdata,
    input [7:0] i2c_rdata,
    input i2c_xfc_read,
	 output i2c_sda_out,
    input clk,
    input reset
    );

endmodule
