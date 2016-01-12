`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             chip.v
// Create Date:             12/20/2015
// Last Modification:       1/12/2015
// Author:                  Zachary Nelson
//
//////////////////////////////////////////////////////////////////////////////////

module chip(clk,rst_n,inp_sck,inp_ws,inp_sd,
            rf_i2si_en,rf_bist_start_val,rf_bist_inc,rf_bist_up_limit,
            rf_mux_en,i2si_rtr,
            i2so_sck,i2so_ws,i2so_sd,
            sync_inp,filt_rts,filt_data,trig_fifo_overrun_clr,ro_fifo_overrun);

    input clk;          // master clock
    input rst_n;        // reset
    
    // I2S Input
    input inp_sck;      // I2S input serial clock
    input inp_ws;       // I2S input word select
    input inp_sd;       // I2S input serial data
    
    // I2S Output
    output i2so_sck;    // I2S output serial clock
    output i2so_ws;     // I2S output word select
    output i2so_sd;     // I2S output serial data
    
    // FAKE INPUTS
    input rf_i2si_en;                   // enable bit for deserializer
    input [31:0] rf_bist_start_val;     // BIST start value 
    input [7:0] rf_bist_inc;            // BIST increment value
    input [31:0] rf_bist_up_limit;      // BIST upper limit value
    input rf_mux_en;                    // multiplexer select bit
    input i2si_rtr;                     // I2S ready to receive
    
    // Inputs to I2S Output Block
    output sync_inp;                         // synchronized serial clock
//??????wire sck_transition                  // serial clock transition
    
    // Inputs to Filter Block
    output filt_rts;                         // I2S input ready to send
    output [31:0] filt_data;                 // I2S input output data
    
    // Inputs to Register Block
    input trig_fifo_overrun_clr;            // signal to reset ro_fifo_overrun
    output ro_fifo_overrun;                  // when the I2S input FIFO is full
/*    wire trig_fifo_underrun;               // signal to reset ro_fifo_underrun
    wire ro_fifo_underrun;                 // FIFO buffer is not full and no more data is available*/
    
   
    
    
    i2s_in I2S_Input(
        .clk                     (clk),                     // input: master clock
        .rst_n                   (rst_n),                   // input: reset
        .inp_sck                 (inp_sck),                 // input: serial clock
        .inp_ws                  (inp_ws),                  // input: word select
        .inp_sd                  (inp_sd),                  // input: serial data
        .rf_i2si_en              (rf_i2si_en),              // input: enable bit for deserializer
        .rf_bist_start_val       (rf_bist_start_val),       // input: BIST start value
        .rf_bist_inc             (rf_bist_inc),             // input: BIST increment value
        .rf_bist_up_limit        (rf_bist_up_limit),        // input: BIST upper limit value
        .rf_mux_en               (rf_mux_en),               // input: multiplexer select bit 
        .i2si_rtr                (i2si_rtr),                // input: ready to receive
        .i2si_data               (filt_data),               // output: audio data
        .i2si_rts                (filt_rts),                // output: ready to send
        .trig_fifo_overrun_clr   (trig_fifo_overrun_clr),   // input: signal to reset ro_fifo_overrun
        .ro_fifo_overrun         (ro_fifo_overrun),         // output: when the I2S input FIFO is full
        .sync_sck                (sync_inp)                 // output: synchronized serial clock
        // sck_transition????
    );

    
    
/*    i2s_out I2S_Output(
        .clk                     (clk),                     // input: master clock
        .rst_n                   (rst_n),                   // input: reset
        .sck_inp                 (sync_inp),                // input: synchronized serial clock
        .sck_transition          (sck_transition),          // input: serial clock transition
        .filt_rts                (filt_rts),                // input: ready to send
        .filt_data               (filt_data),               // input: audio data
        .filt_rtr                (filt_rtr),                // output: read to receive
        .i2so_ws                 (i2so_ws),                 // output: word select
        .i2so_sd                 (i2so_sd),                 // output: serial data
        .i2so_sck                (i2so_sck),                // output: serial clock
        .trig_fifo_underrun      (trig_fifo_underrun),      // output: signal to reset ro_fifo_underrun
        .ro_fifo_underrun        (ro_fifo_underrun)         // output: FIFO buffer is not full and no more data is available
    );*/
    
    

endmodule
