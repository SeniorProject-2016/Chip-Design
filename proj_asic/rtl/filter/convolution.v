`timescale 1ns / 1ps

module convultion(
					clk, rst, buf_in, buf_out, 
					wr_en, rd_en, buf_empty, 
					buf_full, fifo_counter
						);







endmodule

/*

input                 rst, clk, wr_en, rd_en;  
input [7:0]           buf_in;         
output[7:0]           buf_out;      
output                buf_empty, buf_full;  
output[`BUF_WIDTH :0] fifo_counter;      


module top(
   input        clk,
   input        rst_n,
   input        enable,
   input  [9:0] data_rx_1,
   input  [9:0] data_rx_2,
   output [9:0] data_tx_2
);

subcomponent subcomponent_instance_name (
  .clk(clk), 
  .rst_n(rst_n), 
  .data_rx(data_rx_1),
  .data_tx(data_tx) ); 

endmodule

*/