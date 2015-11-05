`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:14:21 11/05/2015 
// Design Name: 
// Module Name:    i2s_out 
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
module i2s_out(clk, rst_n, sck_transition,
                filt_i2so_lft, filt_i2so_rgt, filt_i2so_rtr, filt_i2so_rts,
                i2so_ws, i2so_sd,
                ro_fifo_underrun, ro_fifo_overrun
    );
    
input           clk;
input           rst_n;
input           sck_transition;

input [15:0]    filt_i2so_lft;
input [15:0]    filt_i2so_rgt;
input           filt_i2so_rts;
output          filt_i2so_rtr;

output          i2so_ws;
output          i2so_sd;

output          ro_fifo_underrun;
output          ro_fifo_overrun;

serializer Serializer(
    .clk                    (clk),
    .rst_n                  (rst_n),
    .sck_transition         (sck_transition),
    .filt_i2so_lft          (filt_i2so_lft),
    .filt_i2so_rgt          (filt_i2so_rgt),
    .filt_i2so_rts          (filt_i2so_rts),
    .filt_i2so_rtr          (filt_i2so_rtr),
    .i2so_sd                (i2so_sd),
    .i2so_ws                (i2so_ws)
);

fifo #(Width, Depth) FIFO(
    .clk                    (clk),
    .rst                    (rst_n),
    .fifo_inp_data          (),
    .fifo_inp_rts           (),
    .fifo_inp_rtr           (),
    .fifo_out_data          (),
    .fifo_out_rtr           (),
    .fifo_out_rts           ()
);

endmodule
