`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Module Name:             i2c.v
// Create Date:             10/15/2016
// Last Modification:       1/13/2015
// Author:                  Whitley Forman
// Description:
//////////////////////////////////////////////////////////////////////////////////

module i2c(
    input [2:0] i2c_addr_bits,                  //descriptions needed
    input i2c_sda_in,                           //
    input i2c_scl,                              // 
    output i2c_op,
    output i2c_xfc_write,
    output [10:0] i2c_wraddr,
    output [7:0] i2c_wdata,
    input [7:0] i2c_rdata,
    input i2c_xfc_read,
	output i2c_sda_out,
    input clk,
    input reset
    );

    wire [10:0] addr_wire;
    wire [7:0] data_wire;

    Deserializer i2c_top_deserializer (
        .Clock				(clk), 				//external input	*
        .Reset				(reset), 			//external input	*
        .i2c_sda_raw		(i2c_sda_in), 		//external input	*
        .i2c_scl_raw		(i2c_scl), 			//external input	*
        .i2c_addr_bits	    (i2c_addr_bits), 	//external input	*
        .i2c_RW				(i2c_RW), 			//internal output	[1]*
        .i2c_addr			(addr_wire), 		//internal output	[11]*
        .addr_xfc			(addr_xfc), 		//internal output	[1]*
        .i2c_ack			(i2c_ack), 			//internal output	[1]*
        .data_xfc			(data_xfc), 		//internal output	[1]*
        .serial_data		(data_wire), 		//internal output	[8]*
        .stop_out			(stop_out)			//internal output	[1]*
        );

    Sequencer i2c_top_sequencer (
        .Clock				(clk), 				//external input	*
        .i2c_RW				(i2c_RW), 			//internal input	*
        .i2c_op				(i2c_op), 			//external output	*
        .i2c_addr_in		(addr_wire), 		//internal input	*
        .i2c_addr_out		(i2c_wraddr), 		//external output	*
        .i2c_data_in		(data_wire), 		//internal input	*
        .i2c_data_out		(i2c_wdata), 		//external output	*
        .addr_xfc			(addr_xfc), 		//internal input	*
        .data_xfc			(data_xfc), 		//internal input	*
        .i2c_xfc			(i2c_xfc_write), 	//external output	*
        .reset				(reset), 			//external input	*
        .stop_out			(stop_out)			//internal input	*
        );

    Serializer i2c_top_serializer (
        .i2c_scl			(i2c_scl), 			//external input	*
        .i2c_sda_out		(i2c_sda_out), 	    //external input	*
        .i2c_ack			(i2c_ack), 			//internal input	*
        .Clock				(clk), 				//external input	*
        .reset				(reset), 			//external input	*
        .i2c_rdata			(i2c_rdata), 		//external input	*
        .i2c_xfc_read		(i2c_xfc_read) 		//external input 	*
        );
	 
endmodule
