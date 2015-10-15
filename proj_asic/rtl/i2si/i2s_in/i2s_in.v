`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:42:42 10/14/2015 
// Design Name: 
// Module Name:    i2s_in 
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
module i2s_in(              clk, rst,
                            i2si_sck, i2si_ws, i2si_sd, rf_i2si_en,
                            rf_bist_start_val, rf_bist_inc, rf_bist_up_limit,
                            rf_bist_en,
                            i2si_fifo_inp_rtr, i2si_fifo_out_data, i2si_fifo_out_rts, i2si_ro_fifo_overrun
    );

input                       clk;                                //Master clock
input                       rst;                                //Reset

input                       i2si_sck;                           //Deserializer: Digital audio bit clock
input                       i2si_ws;                            //Deserializer: Word select - selects what audio channel is being read. 0 = left channel, 1 = right channel 
input                       i2si_sd;                            //Deserializer: Digital audio serial data
input                       rf_i2si_en;                         //Deserializer: Idle when rf_i2si_en  = 0 and active upon the first high-to-low transition of word select (ws) and rf_i2si_en = 1.

input [11:0]                rf_bist_start_val;                  //Bist: start value
input [11:0]                rf_bist_up_limit;                   //Bist: upper limit
input [7:0]                 rf_bist_inc;                        //Bist: increment signal by this much

input                       rf_bist_en;                         //Mux: Enabled bit for Bist
                                                                                                      
input                       i2si_fifo_inp_rtr;                  //FIFO: Data input to be pushed to buffer
output                      i2si_fifo_out_data;                 //FIFO: Output Data
output                      i2si_fifo_out_rts;                  //FIFO: Output FIFO asserts ready to send
output                      i2si_ro_fifo_overrun;               //FIFO: Input audio FIFO overrun - The FIFO buffer is full and no more can be added to the buffer

wire [31:0]                 deserializer_data;                  //Wire connecting lft and rgt deserializer channels to mux. Connects to mux_in_0
wire                        xfc_out;                            //Wire output of i2si_xfc connecting to or gate, i2si_fifo_inp_rtr, and input for BIST
wire                        bist_out_to_mux_in_1;               //Wire connecting bist_out_data to Mux input in_1
wire                        mux_out_to_fifo_inp_data;           //Wire connecting mux_out to fifo_inp_data
wire                        i2si_fifo_out_rtr;                  //Wire connecting fifo_out_rtr to not gate


i2si_deserializer Deserializer(
    .clk                    (clk),
    .rst                    (rst),
    .i2si_sck               (i2si_sck),
    .i2si_ws                (i2si_ws),
    .i2si_sd                (i2si_sd),
    .rf_i2si_en             (rf_i2si_en),
    .i2si_lft               (deserializer_data [31:16]),        
    .i2si_rgt               (deserializer_data [15:0]),         
    .i2si_xfc               (xfc_out)                           
);                                                              
                                                                
i2si_bist_gen Bist(                                             
    .clk                    (clk),                              
    .rst                    (rst),                              
    .rf_bist_start_val      (rf_bist_start_val),                
    .rf_bist_up_limit       (rf_bist_up_limit),                 
    .rf_bist_inc            (rf_bist_inc),                      
    .i2si_bist_out_data     (bist_out_to_mux_in_1)              
);                                                              
                                                                
i2si_mux Mux(                                                   
    .sel                    (rf_bist_en),                       
    .in_0                   (deserializer_data),             
    .in_1                   (bist_out_to_mux_in_1),                
    .mux_out                (mux_out_to_fifo_inp_data)
);

fifo Fifo(
    .clk                    (clk),
    .rst                    (rst),
    .i2si_fifo_inp_data     (mux_out_to_fifo_inp_data),
    .i2si_fifo_inp_rts      (xfc_out),
    .i2si_fifo_inp_rtr      (i2si_fifo_inp_rtr),
    .i2si_fifo_out_data     (i2si_fifo_out_data),
    .i2si_fifo_out_rtr      (i2si_fifo_out_rtr),
    .i2si_fifo_out_rts      (i2si_fifo_out_rts),
    .fifo_counter           ()
);
 

assign ro_fifo_overrun = ~i2si_fifo_out_rtr | xfc_out;
endmodule
