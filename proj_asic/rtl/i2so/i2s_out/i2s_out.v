`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             i2s_out.v
// Create Date:             10/13/2015 
// Last Modification:       11/10/2015
// Author:                  Kevin Cao
//
//////////////////////////////////////////////////////////////////////////////////

module i2s_out(             clk, rst_n, sck_transition,
                            filt_rts, filt_data, filt_rtr,
                            i2so_ws, i2so_sd,
                            ro_fifo_underrun, trig_fifo_underrun,
                            ro_fifo_overrun, trig_fifo_overrun
    );

input                       clk;                                 //Master clock
input                       rst_n;                               //Reset
input                       sck_transition;                      //Signal when sck goes from low to high

output                       i2so_ws;                            //Serializer: Word select - selects what audio channel is being read. 0 = left channel, 1 = right channel 
output                       i2so_sd;                            //Serializer: Digital audio serial data
//input                       rf_i2si_en;                        //Serializer: Idle when rf_i2si_en  = 0 and active upon the first high-to-low transition of word select (ws) and rf_i2si_en = 1.
                                                                            
                                                                                                      
input                       filt_rts;                            //FIFO: FIFO asserts ready to send
output                      filt_rtr;                            //FIFO: Output FIFO asserts ready to read
input [31:0]                filt_data;                           //FIFO: Output Data
                                                                    
input                       trig_fifo_underrun;             
output                      ro_fifo_underrun;                     //FIFO: Input audio FIFO overrun - The FIFO buffer is full and no more can be added to the buffer

input                       trig_fifo_overrun;
output                      ro_fifo_overrun;
                                                                    
//wire                        sck;                               //Wire connecting sck synchronizer to sck deserializer  NOT NEEDED???
wire                        sck_transition;                      //Wire connecting sck_transition signal to other blocks
wire                        fifo_rts;                               
wire                        fifo_rtr;                               
wire [31:0]                 fifo_data;                           //serializer input data


reg                         ro_fifo_underrun;
reg                         ro_fifo_overrun;


serializer Serializer(
    .clk                    (clk),
    .rst_n                  (rst_n),
    .sck_transition         (sck_transition),
//    .rf_i2si_en             (rf_i2si_en),
    .filt_i2so_lft          (fifo_data [31:16]),        
    .filt_i2so_rgt          (fifo_data [15:0]),
    .filt_i2so_rts          (fifo_rts),
    .filt_i2so_rtr          (fifo_rtr),
    .i2so_ws                (i2so_ws),
    .i2so_sd                (i2so_sd)    
);                                                              
                                                                

fifo #(3, 8, 32) i2so_Fifo(
    .clk                    (clk),
    .rst                    (rst_n),
    .fifo_inp_rts           (filt_rts),
    .fifo_inp_rtr           (filt_rtr),
    .fifo_inp_data          (filt_data),
    .fifo_out_rts           (fifo_rts),
    .fifo_out_rtr           (fifo_rtr),
    .fifo_out_data          (fifo_data)
);
 

always @ (posedge clk or negedge rst_n)
begin
    if (!rst_n)
        ro_fifo_underrun <= 0;
    else if (~fifo_rts & fifo_rtr)
        ro_fifo_underrun <= 1;
    else if (trig_fifo_underrun)
        ro_fifo_underrun <= 0;
end

always @ (posedge clk or negedge rst_n)
begin
    if (!rst_n)
        ro_fifo_overrun <= 0;
    else if (fifo_rts & ~fifo_rtr)
        ro_fifo_overrun <= 1;
    else if (trig_fifo_overrun)
        ro_fifo_overrun <= 0;
end

endmodule