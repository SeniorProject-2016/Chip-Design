`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             chip.v
// Create Date:             12/20/2015
// Last Modification:       1/13/2015
// Author:                  Zachary Nelson
//
//////////////////////////////////////////////////////////////////////////////////

module chip(clk,rst_n,i2si_sck,i2si_ws,i2si_sd,i2so_sck,i2so_ws,i2so_sd,i2c_addr_bits,i2c_scl);
       
       
    // CHIP INTERFACES
    //---------------------------------------------------------------------------  
    //---------------------------------------------------------------------------  
    // General
    input clk;                          // master clock
    input rst_n;                        // reset not
    
    // I2S Input
    input i2si_sck;                     // I2S input serial clock
    input i2si_ws;                      // I2S input word select
    input i2si_sd;                      // I2S input serial data
      
    // I2S Output    
    output i2so_sck;                    // I2S output serial clock
    output i2so_ws;                     // I2S output word select
    output i2so_sd;                     // I2S output serial data
    
    // I2C
    input i2c_addr_bits;                // 3 LSB I2C address select
    input i2c_scl;                      // serial clock
    //---------------------------------------------------------------------------  
    //---------------------------------------------------------------------------  
    
    
    // BLOCK CONNECTIONS
    //---------------------------------------------------------------------------  
    //---------------------------------------------------------------------------  
    // Inputs to I2S Input Block
    wire rf_i2si_en;                    // enable bit for deserializer
    wire [31:0] rf_bist_start_val;      // BIST start value 
    wire [7:0] rf_bist_inc;             // BIST increment value
    wire [31:0] rf_bist_up_limit;       // BIST upper limit value
    wire rf_mux_en;                     // multiplexer select bit
    wire i2si_rtr;                      // I2S ready to receive
    wire trig_fifo_overrun_clr;         // signal to reset ro_fifo_overrun
        
    // Inputs to I2S Output Block
    wire i2si_sync_sck;                 // synchronized serial clock
    wire i2si_sync_sck_transition;      // synchronized serial clock transition
    wire [31:0] filt_out_data;          // I2SO input data
    wire trig_fifo_underrun;            // signal to reset ro_fifo_underrun
    
    // Inputs to Filter Block
    wire filt_rts;                      // I2S input ready to send
    wire [31:0] filt_input_data;        // I2SI output data
    wire filt_rtr;
    wire rf_filter_shift;               // # of bits to shift after accumulator
    wire rf_filter_clip_en;             // select bit (1- perform clipping, 0- no clipping)
    wire [7:0] rf_filter_coeffs;        // filter coeffs
    
    // Inputs to Register Block
    wire [11:0] i2c_addr;               // register address
    wire [7:0] i2c_wdata;               // data to be written for a write op
    wire i2c_xfc_write;                 // write data transfer complete
    wire i2c_op;                        // 1- write, 0- read
    wire ro_fifo_overrun;               // when the I2S input FIFO is full 
    wire ro_fifo_underrun;              // FIFO buffer is not full and no more data is available
    
    // Inputs to I2C Block
    wire [2:0] i2c_addr_bits;           // 3 LSB i2c address select
    wire [7:0] i2c_rdata;               // read return data
    wire i2c_xfc_read;                  // read data transfer complete
    //---------------------------------------------------------------------------  
    //---------------------------------------------------------------------------  
    
    
    // MODULE INSTANTIATION
    //---------------------------------------------------------------------------  
    //---------------------------------------------------------------------------     
    i2s_in I2S_Input(
        .clk                     (clk),                     // input: master clock
        .rst_n                   (rst_n),                   // input: reset not
        .i2si_sck                (i2si_sck),                // input: serial clock
        .i2si_ws                 (i2si_ws),                 // input: word select
        .i2si_sd                 (i2si_sd),                 // input: serial data
        .rf_i2si_en              (rf_i2si_en),              // input: enable bit for deserializer
        .rf_bist_start_val       (rf_bist_start_val),       // input: BIST start value
        .rf_bist_inc             (rf_bist_inc),             // input: BIST increment value
        .rf_bist_up_limit        (rf_bist_up_limit),        // input: BIST upper limit value
        .rf_mux_en               (rf_mux_en),               // input: multiplexer select bit 
        .i2si_rtr                (i2si_rtr),                // input: ready to receive
        .i2si_data               (filt_input_data),         // output: audio data
        .i2si_rts                (filt_rts),                // output: ready to send
        .trig_fifo_overrun_clr   (trig_fifo_overrun_clr),   // input: signal to reset ro_fifo_overrun
        .ro_fifo_overrun         (ro_fifo_overrun),         // output: when the I2S input FIFO is full
        .i2si_sync_sck           (i2si_sync_sck),           // output: synchronized serial clock
        .i2si_sync_sck_transition(i2si_sync_sck_transition) // output: synchronized serial clock transition
    );
  
    i2s_out I2S_Output(
        .clk                     (clk),                     // input: master clock
        .rst_n                   (rst_n),                   // input: reset not
        .i2so_sync_sck           (i2si_sync_sck),           // input: synchronized serial clock
        .i2so_sck_transition     (i2si_sync_sck_transition),// input: serial clock transition
        .filt_rts                (aud_out_rts),             // input: ready to send
        .filt_data               (filt_out_data),           // input: audio data
        .filt_rtr                (filt_rtr),                // output: ready to receive
        .i2so_ws                 (i2so_ws),                 // output: word select
        .i2so_sd                 (i2so_sd),                 // output: serial data
        .i2so_sck                (i2so_sck),                // output: serial clock
        .trig_fifo_underrun      (trig_fifo_underrun),      // output: signal to reset ro_fifo_underrun
        .ro_fifo_underrun        (ro_fifo_underrun)         // output: FIFO buffer is not full and no more data is available
    );
    
    filter Filter(
        .clk                     (clk),                     // input: master clock
        .rstb                    (rst_n),                   // input: reset not
        .aud_in                  (filt_input_data),         // input: input parallel digital audio
        .aud_in_rts              (filt_rts),                // input: ready to send (for input FIFO)
        .aud_in_rtr              (i2si_rtr),                // output: ready to receive (for input FIFO)
        .aud_out                 (filt_out_data),           // output: output parallel digital audio
        .aud_out_rts             (aud_out_rts),             // output: ready to send (for output FIFO)
        .aud_out_rtr             (filt_rtr),                // input: ready to receive (for output FIFO)
        .rf_filter_shift         (rf_filter_shift),         // input: # of bits to shift after accumulator
        .rf_filter_clip_en       (rf_filter_clip_en),       // input: select bit (1- perform clipping, 0- no clipping)
        .rf_filter_coeffs        (rf_filter_coeffs)         // input: filter coeffs
    );
    
    chip_reg Register(
        .clk                     (clk),                     // input: master clock
        .rst                     (rst_n),                   // input: reset not
        .i2c_addr                (i2c_addr),                // input: register address
        .i2c_wdata               (i2c_wdata),               // input: data to be written for a write op
        .i2c_xfc_write           (i2c_xfc_write),           // input: write data transfer complete
        .i2c_op                  (i2c_op),                  // input: 1- write, 0- read
        .ro_fifo_overrun         (ro_fifo_overrun),         // input: when the I2S input FIFO is full
        .ro_fifo_underrun        (ro_fifo_underrun),        // input: FIFO buffer is not full and no more data is available
        .i2c_rdata               (i2c_rdata),               // output: read return data
        .i2c_xfc_read            (i2c_xfc_read),            // output: read data transfer complete
        .rf_i2si_bist_en         (rf_mux_en),               // output: I2S input multiplexer select bit
        .rf_filter_shift         (rf_filter_shift),         // output: number of bit positions to shift after filter accumulator
        .rf_filter_clip_en       (rf_filter_clip_en),       // output: 0- no clipping 1- performs clipping
        .rf_i2si_bist_start_val  (rf_bist_start_val),       // output: BIST start value 
        .rf_i2si_bist_incr       (rf_bist_inc),             // output: BIST increment value
        .rf_i2si_bist_upper_limit(rf_bist_up_limit),        // output: BIST upper limit value
        .rf_i2si_en              (rf_i2si_en),              // output: enable bit for deserializer
        .rf_filter_coeffs        (rf_filter_coeffs),        // output: filter coeffs
        .trig_fifo_overrun       (trig_fifo_overrun_clr),   // output: signal to reset I2S input FIFO overrun
        .trig_fifo_underrun      (trig_fifo_underrun)       // output: signal to reset ro_fifo_underrun
    );
    
    i2c I2C(
        .i2c_addr_bits           (i2c_addr_bits),           // input: 3 LSB I2C address select
        .i2c_scl                 (i2c_scl),                 // input: serial clock
        .i2c_op                  (i2c_op),                  // output: 1- write, 0- read
        .i2c_xfc_write           (i2c_xfc_write),           // output: write data transfer complete
        .i2c_addr                (i2c_addr),                // output: register address
        .i2c_wdata               (i2c_wdata),               // output: data to be written for a write op
        .i2c_rdata               (i2c_rdata),               // input: read return data
        .i2c_xfc_read            (i2c_xfc_read),            // input: read data transfer complete
        .clk                     (clk),                     // input: master clock
        .reset                   (rst_n)                    // input: reset not
    );
    //---------------------------------------------------------------------------  
    //---------------------------------------------------------------------------
       
endmodule
