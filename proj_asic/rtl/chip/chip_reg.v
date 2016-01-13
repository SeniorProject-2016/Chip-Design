`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             reg.v
// Create Date:             ???????????????????
// Last Modification:       1/13/2015
// Author:                  Julie Swift and Zachary Nelson
// Description: ????????????
//////////////////////////////////////////////////////////////////////////////////

module chip_reg(clk,rst,i2c_addr,i2c_wdata,i2c_xfc_write,i2c_op,
           i2c_rdata,i2c_xfc_read,rf_i2si_bist_en,rf_filter_shift,
           rf_filter_clip_en,
           trig_fifo_overrun,
           ro_fifo_overrun,trig_fifo_underrun,ro_fifo_underrun,
           rf_i2si_bist_start_val,rf_i2si_bist_incr,
           rf_i2si_bist_upper_limit);


     // REGISTER INTERFACES
     //---------------------------------------------------------------------------  
     //---------------------------------------------------------------------------
     // Inputs (General)
     input clk;                                  // master clock
     input rst;                                  // reset
     input [11:0] i2c_addr;                      // register address
     input [7:0] i2c_wdata;                      // data to be written for a write op
     input i2c_xfc_write;                        // write data transfer complete
     input i2c_op;                               // 1- write, 0- read
     // Inputs (RO Signals) 
     input ro_fifo_overrun;                      // I2S input audio FIFO overrun
     input ro_fifo_underrun;                     // I2S output audio FIFO underrun
     // Outputs (General)
     output reg [7:0] i2c_rdata;                 // read return data
     output reg i2c_xfc_read;                    // read data transfer complete
     // Outputs (RF Signals)
     output reg rf_i2si_bist_en;                 // 0- deserializer signal 1- BIST signal
     output reg rf_filter_shift;                 // number of bit postions to shift after filter accumulator
     output reg rf_filter_clip_en;               // 0- no clipping 1- performs clipping
     output reg [31:0] rf_i2si_bist_start_val;   // ?????? --> This should only be one value not part a and b - ZN 1/13/16
     output reg [7:0] rf_i2si_bist_incr;        // BIST signal increment value
     output reg [31:0] rf_i2si_bist_upper_limit; // ?????? --> This should only be one value not part a and b - ZN 1/13/16
     // Outputs (Triggers)
     output wire trig_fifo_overrun;              // signal to reset I2S input FIFO overrun
     output wire trig_fifo_underrun;             // signal to reset I2S output FIFO underrun     
     //---------------------------------------------------------------------------
     //--------------------------------------------------------------------------- 
     
     // SUBMODULE CONNECTIONS
     //---------------------------------------------------------------------------  
     //---------------------------------------------------------------------------
     
     //---------------------------------------------------------------------------  
     //--------------------------------------------------------------------------- 
     
   
     // MODULE INSTANTIATION
     //---------------------------------------------------------------------------  
     //---------------------------------------------------------------------------
/*     register Register(
          .clk                        (clk),               // input: master clock
          .rst                        (rst),               // input: reset
          .addr                       (i2c_addr),          // input: register address
          .wdata                      (i2c_wdata),         // input: write data
          .w_enable                   (w_enable),          // input: write enable
          .wxfc                       (i2c_xfc_write),     // input: write transfer complete
           rxfc                       (????????????),      // input: ???????????????????????????
          .ro_i2c_reg_indir_data      (????????????),      // input: ???????????????????????????
          .ro_fifo_underrun           (ro_fifo_overrun),   // input: I2S input audio FIFO overrun
          .rdata
          .rf_soft_reset
          .rf_i2si_bist_en
          .rf_filter_shift
          .rf_filter_clip_en
          .rf_i2si_dec_factor
          .rf_i2so_dec_factor
          .rf_i2so_clk2sck_div_a
          .rf_i2so_clk2sck_div_b
          .trig_fifo_overrun
          .trig_fifo_underrun
          .rf_i2si_bist_start_val_a
          .rf_i2si_bist_start_val_b
          .rf_i2si_bist_incr
          .rf_i2si_bist_upper_limit_a
          .rf_i2si_bist_upper_limit_b
          .rf_i2c_reg_indir_addr_a
          .rf_i2c_reg_indir_addr_b
     ); */
     
/*     trig_generator Trig_Gen(
         .clk                         (clk),               // input: master clock
         .rst                         (rst),               // input: reset
         .address                     (i2c_addr),          // input: register address
         .wdata                       (i2c_wdata),         // input: data to be written for a write op
         .xfc                         (i2c_xfc_write),     // input: transfer complete
         .trig_i2si_fifo_overrun_clr  (trig_fifo_overrun), // output: signal to reset I2S input FIFO overrun
         .trig_i2so_fifo_underrun_clr (trig_fifo_underrun) // output: signal to reset I2S output FIFO underrun
     ); */
    //---------------------------------------------------------------------------  
    //---------------------------------------------------------------------------

endmodule
