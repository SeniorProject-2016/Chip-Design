`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             i2s_out.v
// Create Date:             10/13/2015 
// Last Modification:       12/1/2015
// Author:                  Kevin Cao
//
//////////////////////////////////////////////////////////////////////////////////

module i2s_out(                 clk, rst_n,
                                sck_inp, sck_transition,
                                filt_rts, filt_data, filt_rtr,
                                i2so_ws, i2so_sd, i2so_sck,
                                trig_fifo_underrun,
                                ro_fifo_underrun
    );

    input                       clk;                                 //Master clock
    input                       rst_n;                               //Reset
                                                                        
    input                       sck_inp;                             //Serial clock
    input                       sck_transition;                      //Serial clock level to pulse converter
                                                                            
    output                      i2so_sck;                               
    output                      i2so_ws;                             //Word select - selects what audio channel is being read. 0 = left channel, 1 = right channel 
    output                      i2so_sd;                             //Digital audio serial data                                                                            
                                                                                                          
    input                       filt_rts;                            //Ready to send handshake signal between Filter and I2S_OUT Block
    output                      filt_rtr;                            //Ready to read handshake signal between Filter and I2S_OUT Block
    input [31:0]                filt_data;                           //Output audio data sent from Filter Block to I2S_OUT Block
                                                                        
    input                       trig_fifo_underrun;                  //Signal to reset ro_fifo_underrun
                                                                        
    output                      ro_fifo_underrun;                    //The FIFO buffer is not full and no more data is available
                                                                        
    wire                        sck_out;                             //Wire connecting sck synchronizer to sck deserializer  NOT NEEDED???
    wire                        sck_transition;                      //Wire connecting sck_transition signal to other blocks
    wire                        fifo_rts;                            //Ready to send handshake signal between FIFO and Serializer   
    wire                        fifo_rtr;                            //Ready to read handshake signal between FIFO and Serializer   
    wire [31:0]                 fifo_data;                           //Wire connecting 32 bit audio data from FIFO to Serializer


    reg                         ro_fifo_underrun;

    serializer Serializer(
        .clk                    (clk),
        .rst_n                  (rst_n),
        .sck_transition         (sck_transition),
        .filt_i2so_lft          (fifo_data [31:16]),        
        .filt_i2so_rgt          (fifo_data [15:0]),
        .filt_i2so_rts          (fifo_rts),
        .filt_i2so_rtr          (fifo_rtr),
        .i2so_ws                (i2so_ws),
        .i2so_sd                (i2so_sd)    
    );                                                              
                                                                    

    fifo #(32, 3) i2so_Fifo(
        .clk                    (clk),
        .rst_n                  (rst_n),
        .fifo_inp_rts           (filt_rts),
        .fifo_inp_rtr           (filt_rtr),
        .fifo_inp_data          (filt_data),
        .fifo_out_rts           (fifo_rts),
        .fifo_out_rtr           (fifo_rtr),
        .fifo_out_data          (fifo_data)
    );
                                                                                        
                           
    assign i2so_sck = sck_inp;
                           
    //Define underrun signal
    always @ (posedge clk or negedge rst_n)
    begin
        if (!rst_n)
            ro_fifo_underrun <= 0;
        else if (~fifo_rts & fifo_rtr)
            ro_fifo_underrun <= 1;
        else if (trig_fifo_underrun)
            ro_fifo_underrun <= 0;
    end
                                                                
                                                                                                            
endmodule
