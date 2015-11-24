`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             i2si.v
// Create Date:             10/13/2015 
// Last Modification:       11/9/2015
// Author:                  Kevin Cao
//
//////////////////////////////////////////////////////////////////////////////////

module i2s_in(              clk, rst_n,
                            inp_sck, inp_ws, inp_sd, rf_i2si_en,
                            rf_bist_start_val, rf_bist_inc, rf_bist_up_limit,
                            rf_mux_en,
                            i2si_rtr, i2si_data, i2si_rts, ro_fifo_overrun,
                            trig_i2si_fifo_overrun_clr, sync_sck
    );

input                       clk;                                //Master clock
input                       rst_n;                              //Reset
                                                                    
input                       inp_sck;                            //Deserializer: Digital audio bit clock
input                       inp_ws;                             //Deserializer: Word select - selects what audio channel is being read. 0 = left channel, 1 = right channel 
input                       inp_sd;                             //Deserializer: Digital audio serial data
                                                                
input                       rf_i2si_en;                         //Deserializer: Idle when rf_i2si_en  = 0 and active upon the first high-to-low transition of word select (ws) and rf_i2si_en = 1.
input [11:0]                rf_bist_start_val;                  //Bist: start value
input [11:0]                rf_bist_up_limit;                   //Bist: upper limit
input [7:0]                 rf_bist_inc;                        //Bist: increment signal by this much
input                       rf_mux_en;                          //Mux: Enabled bit for Bist

output                      ro_fifo_overrun;                    //FIFO: Input audio FIFO overrun - The FIFO buffer is full and no more can be added to the buffer

                                                                                                      
input                       i2si_rtr;                           //FIFO: Data input to be pushed to buffer
output [31:0]               i2si_data;                          //FIFO: Output Data
output                      i2si_rts;                           //FIFO: Output FIFO asserts ready to send

input                       trig_i2si_fifo_overrun_clr;         //Signal to reset ro_fifo_overrun signal
                                                                
                                                                
                                                                        
output                      sync_sck;                                   
                                                                        
                                                                        
//wire                        sync_sck;                                  
wire                        sck_transition;                     //Wire connecting sck_transition signal to other blocks
wire                        sync_ws;                            //Wire connecting ws syncrhonizer to ws deserializer
wire                        sync_sd;                            //Wire connecting sd syncrhonizer to sd deserializer

wire [31:0]                 deserializer_data;                  //Wire connecting lft and rgt deserializer channels to mux. Connects to mux_in_0
wire                        deserializer_xfc;                   //Wire output of i2si_xfc connecting to or gate, i2si_fifo_inp_rtr, and input for BIST'
wire [31:0]                 bist_data;                          
wire                        bist_xfc;                           
wire [31:0]                 fifo_data;                              
wire                        fifo_xfc;                               
wire                        fifo_rtr;                           //Wire connecting fifo_rtr to not gate
                                                                
reg                         ro_fifo_overrun;                        
                                                                
synchronizer Synchronizer(                                      
    .clk                    (clk),                              
    .rst_n                  (rst_n),                              
    ._sck                   (inp_sck),                          
    ._ws                    (inp_ws),                               
    ._sd                    (inp_sd),                               
    .sck_transition         (sck_transition),                       
    .sck                    (sync_sck),                         //Remove? need to out sck too and not just sck_transition?
    .ws                     (sync_ws),
    .sd                     (sync_sd)
);

i2si_deserializer Deserializer(
    .clk                    (clk),
    .rst_n                  (rst_n),
    .sck_transition         (sck_transition),
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
    .sck_transition         (sck_transition),
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

fifo #(3, 8, 32) i2si_Fifo(
    .clk                    (clk),
    .rst_n                  (rst_n),
    .fifo_inp_data          (fifo_data),
    .fifo_inp_rts           (fifo_xfc),
    .fifo_inp_rtr           (fifo_rtr),
    .fifo_out_data          (i2si_data),
    .fifo_out_rtr           (i2si_rtr),
    .fifo_out_rts           (i2si_rts)
);
 

always @ (posedge clk or negedge rst_n)
begin
    if (!rst_n)
        ro_fifo_overrun <= 0;
    else if (~fifo_rtr & deserializer_xfc)
        ro_fifo_overrun <= 1;
    else if (trig_i2si_fifo_overrun_clr)
        ro_fifo_overrun <= 0;
end

endmodule
