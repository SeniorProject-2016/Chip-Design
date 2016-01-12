`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             chip.v
// Create Date:             12/20/2015
// Last Modification:       1/12/2015
// Author:                  Zachary Nelson
//
//////////////////////////////////////////////////////////////////////////////////

module chip(clk,rst_n,inp_sck,inp_ws,inp_sd);

    input clk;          // master clock
    input rst_n;        // reset
    
    // I2S Input
    input inp_sck;      // I2S input serial clock
    input inp_ws;       // I2S input word select
    input inp_sd;       // I2S input serial data
    
    // I2S Output
//    output i2so_sck;    // I2S output serial clock
//    output i2so_ws;     // I2S output word select
//    output i2so_sd;     // I2S output serial data
    
    // Filter
    
    // Register
    
    // I2C
//    input i2c_scl;   // 
//    input i2c_sda;
    

    
    
    
    // Inputs to I2S Input Block
    wire rf_i2si_en = 1;                   // enable bit for deserializer
    wire [11:0] rf_bist_start_val = 1;     // BIST start value 
    wire [7:0] rf_bist_inc = 1;                  // BIST increment value
    wire [11:0] rf_bist_up_limit = 100;           // BIST upper limit value
    wire rf_mux_en = 1;                    // multiplexer select bit
    wire i2si_rtr =1;                      // I2S ready to receive
    
    // Inputs to I2S Output Block
    wire sync_sck;
    
    // Inputs to Filter Block
    wire i2si_rts;                  // I2S input ready to send
    wire [31:0] i2si_data;                 // I2S input output data
    
    // Inputs to Register Block
    wire trig_fifo_overrun_clr;     // signal to reset ro_fifo_overrun
    wire ro_fifo_overrun;           // when the I2S input FIFO is full
    
    // Inputs to I2C Block
   
    
    
    i2s_in I2S_Input(
        .clk                     (clk), 
        .rst_n                   (rst_n), 
        .inp_sck                 (inp_sck),
        .inp_ws                  (inp_ws),
        .inp_sd                  (inp_sd),
        .rf_i2si_en              (rf_i2si_en),
        .rf_bist_start_val       (rf_bist_start_val),
        .rf_bist_inc             (rf_bist_inc),
        .rf_bist_up_limit        (rf_bist_up_limit),
        .rf_mux_en               (rf_bist_en),
        .i2si_rtr                (i2si_rtr),
        .i2si_data               (i2si_data),
        .i2si_rts                (i2si_rts),
        .trig_fifo_overrun_clr   (trig_fifo_overrun_clr),
        .ro_fifo_overrun         (ro_fifo_overrun),
        .sync_sck                (sync_sck)
    );
    
    

endmodule
