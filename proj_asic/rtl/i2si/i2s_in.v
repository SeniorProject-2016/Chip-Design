`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             i2s_in.v
// Create Date:             10/13/2015 
// Last Modification:       12/1/2015
// Author:                  Kevin Cao
//
//////////////////////////////////////////////////////////////////////////////////

module i2s_in(              clk, rst_n,
                            inp_sck, inp_ws, inp_sd, 
                            rf_i2si_en, rf_bist_start_val, rf_bist_inc, rf_bist_up_limit, rf_mux_en,
                            i2si_rtr, i2si_data, i2si_rts,
                            trig_fifo_overrun_clr,
                            ro_fifo_overrun,
                            sync_sck
    );

    input                       clk;                                //Master clock
    input                       rst_n;                              //Reset
                                                                        
    input                       inp_sck;                            //Digital audio bit clock
    input                       inp_ws;                             //Word select - selects what audio channel is being read. 0 = left channel, 1 = right channel 
    input                       inp_sd;                             //Digital audio serial data
                                                                    
    input                       rf_i2si_en;                         //Enable bit for Deserializer. 0 = inactive, 1 = active
    input [31:0]                rf_bist_start_val;                  //Bist start value
    input [31:0]                rf_bist_up_limit;                   //Bist upper limit
    input [7:0]                 rf_bist_inc;                        //Bist increment signal by this much
    input                       rf_mux_en;                          //Mux select bit for BIST or Deserializer data/xfc signals
                                                                                                          
    input                       i2si_rtr;                           //Ready to read handshake signal between I2S_In and Filter Block
    output                      i2si_rts;                           //Ready to send handshake signal between I2S_IN and Filter Block
    output [31:0]               i2si_data;                          //Output audio data sent to Filter Block

    output                      sync_sck;                           //Delayed and synchronized digital audio bit clock  


    input                       trig_fifo_overrun_clr;              //Signal to reset ro_fifo_overrun

    output                      ro_fifo_overrun;                    //The FIFO buffer is full and no more can be added to the buffer
                                                                                                                                                                        
                                                                                                                                                                
                                                                                                                                                            
    wire                        sync_sck_transition;                //Wire leading to level to pulse converter of serial clock
    wire                        sync_ws;                            //Wire connecting synchronizer output ws to deserializer input ws
    wire                        sync_sd;                            //Wire connecting synchronizer output sd to deserializer input sd

    wire [31:0]                 deserializer_data;                  //Wire connecting output audio data from deserializer to input of mux
    wire                        deserializer_xfc;                   //Wire connecting output xfc signal from deserializer to input of mux

    wire [31:0]                 bist_data;                          //Wire connecting BIST output data to input of mux
    wire                        bist_xfc;                           //Wire connecting BIST xfc signal to input of mux

    wire [31:0]                 fifo_data;                          //Wire connecting output data from mux to FIFO    
    wire                        fifo_xfc;                           //Wire connecting output xfc signal from mux to FIFO    
    wire                        fifo_rtr;                           //Wire connecting output rtr signal from FIFO to ovverun
                                                                    
    reg                         ro_fifo_overrun;
                                                                    
    synchronizer Synchronizer(                                      
        .clk                    (clk),                              
        .rst_n                  (rst_n),                              
        ._sck                   (inp_sck),                          
        ._ws                    (inp_ws),                               
        ._sd                    (inp_sd),                               
        .sck_transition         (sync_sck_transition),                       
        .sck                    (sync_sck),                         
        .ws                     (sync_ws),
        .sd                     (sync_sd)
    );
                                                                    
    i2si_deserializer Deserializer(
        .clk                    (clk),
        .rst_n                  (rst_n),
        .sck_transition         (sync_sck_transition),
        .in_ws                  (sync_ws),
        .in_sd                  (sync_sd),
        .rf_i2si_en             (rf_i2si_en),
        .out_lft                (deserializer_data [31:16]),        
        .out_rgt                (deserializer_data [15:0]),         
        .out_xfc                (deserializer_xfc)                           
    );                                                        
                                                                    
    i2si_bist_gen Bist(                                             
        .clk                    (clk),                              
        .rst_n                  (rst_n),
        .sck_transition         (sync_sck_transition),
        .rf_bist_start_val      (rf_bist_start_val),                
        .rf_bist_up_limit       (rf_bist_up_limit),                 
        .rf_bist_inc            (rf_bist_inc),                      
        .i2si_bist_out_data     (bist_data),
        .i2si_bist_out_xfc      (bist_xfc)
    );                                                              
                                                                    
    i2si_mux Mux(                                                   
        .sel                    (rf_mux_en),                       
        .in_0_data              (deserializer_data),             
        .in_0_xfc               (deserializer_xfc),             
        .in_1_data              (bist_data),                
        .in_1_xfc               (bist_xfc),                
        .mux_data               (fifo_data),
        .mux_xfc                (fifo_xfc)
    );

    fifo #(32, 3) i2si_Fifo(
        .clk                    (clk),
        .rst_n                  (rst_n),
        .fifo_inp_data          (fifo_data),
        .fifo_inp_rts           (fifo_xfc),
        .fifo_inp_rtr           (fifo_rtr),
        .fifo_out_data          (i2si_data),
        .fifo_out_rtr           (i2si_rtr),
        .fifo_out_rts           (i2si_rts)
    );
                                                                                                        
                                                                        
    //Define ovverun signal
    always @ (posedge clk or negedge rst_n)
    begin
        if(!rst_n)
            ro_fifo_overrun <= 1'b0;
        else if(~fifo_rtr & deserializer_xfc)
            ro_fifo_overrun <= 1'b1;
        else if(trig_fifo_overrun_clr)
            ro_fifo_overrun <= 1'b0;
    end
                                                            
endmodule
