`timescale 1ns / 1ps

module i2s_in(              clk, rst,
                            i2si_sck, i2si_ws, i2si_sd, rf_i2si_en,
                            rf_bist_start_val, rf_bist_inc, rf_bist_up_limit,
                            rf_bist_en,
                            i2si_rtr, i2si_data, i2si_rts, ro_fifo_overrun
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
output                      ro_fifo_overrun;                    //FIFO: Input audio FIFO overrun - The FIFO buffer is full and no more can be added to the buffer

                                                                                                      
input                       i2si_rtr;                           //FIFO: Data input to be pushed to buffer
output                      i2si_data;                          //FIFO: Output Data
output                      i2si_rts;                           //FIFO: Output FIFO asserts ready to send

wire                        sck;                                //Wire connecting sck synchronizer to sck deserializer
wire                        sck_transition;                     //
wire                        ws;                                 //Wire connecting ws syncrhonizer to ws deserializer
wire                        sd;                                 //Wire connecting sd syncrhonizer to sd deserializer

wire [31:0]                 deserializer_data;                  //Wire connecting lft and rgt deserializer channels to mux. Connects to mux_in_0
wire                        deserializer_xfc;                   //Wire output of i2si_xfc connecting to or gate, i2si_fifo_inp_rtr, and input for BIST'
wire [31:0]                 bist_data;
wire                        bist_xfc;
wire [31:0]                 mux_data;
wire                        mux_xfc;
//wire                        fifo_inp_data;           //Wire connecting mux_out to fifo_inp_data
wire                        fifo_out_rtr;                  //Wire connecting fifo_out_rtr to not gate

reg                         ro_fifo_overrun;

synchronizer Synchronizer(
    .clk                    (clk),
    .rst                    (rst),
    ._sck                   (i2si_sck),
    ._ws                    (i2si_ws),
    ._sd                    (i2si_sd),
    .sck_transition         (sck_transition),
    .sck                    (sck),
    .ws                     (ws),
    .sd                     (sd)
);

i2si_deserializer Deserializer(
    .clk                    (clk),
    .rst_n                  (rst),
    .i2si_sck               (sck),
    .i2si_ws                (ws),
    .i2si_sd                (sd),
    .rf_i2si_en             (rf_i2si_en),
    .i2si_lft               (deserializer_data [31:16]),        
    .i2si_rgt               (deserializer_data [15:0]),         
    .i2si_xfc               (deserializer_xfc)                           
);                                                              
                                                                
i2si_bist_gen Bist(                                             
    .clk                    (clk),                              
    .rst                    (rst),                              
    .rf_bist_start_val      (rf_bist_start_val),                
    .rf_bist_up_limit       (rf_bist_up_limit),                 
    .rf_bist_inc            (rf_bist_inc),                      
    .i2si_bist_out_data     (bist_data),
    .i2si_bist_out_xfc      (bist_xfc)
);                                                              
                                                                
i2si_mux Mux(                                                   
    .sel                    (rf_bist_en),                       
    .in_0_dat               (deserializer_data),             
    .in_0_xfc               (deserializer_xfc),             
    .in_1_dat               (bist_data),                
    .in_1_xfc               (bist_xfc),                
    .mux_dat                (mux_data),
    .mux_xfc                (mux_xfc)
);

fifo #(3, 32) i2si_FIFO(
    .clk                    (clk),
    .rst                    (rst),
    .fifo_inp_data          (mux_data),
    .fifo_inp_rts           (mux_xfc),
    .fifo_inp_rtr           (i2si_rtr),
    .fifo_out_data          (i2si_data),
    .fifo_out_rtr           (fifo_out_rtr),
    .fifo_out_rts           (i2si_rts)
);
 

always @ (posedge clk or negedge rst)
begin
    if (!rst)
        ro_fifo_overrun <= 0;
    else if (~fifo_out_rtr | deserializer_xfc)
        ro_fifo_overrun <= 1;
    else// if (trig_i2si_fifo_overrun_clr)
        ro_fifo_overrun <= 0;
end

endmodule
