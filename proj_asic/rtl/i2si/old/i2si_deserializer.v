`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:             i2si_deserializer
// Create Date:             9/13/2015 
// Last Modification:       11/9/2015
// Author:                  Kevin Cao
//
//Description: The deserializer takes in serial data and converts it to parallel data that is outputted to the mux and fifo sub-blocks.
//
//              Deserializer needs to first be resetted in order to function properly, initializing all values to 0.
//              Once all values are initialized to 0, certain conditions must be met for the deserializer to become active.
//              To become active, rst_n first needs to go from high to low, and then ws needs to go from high to low. 
//              Then when sck_transition high, the deserializer becomes active.
//////////////////////////////////////////////////////////////////////////////////

module i2si_deserializer(clk, rst_n, i2si_sck, i2si_ws, i2si_sd, rf_i2si_en, i2si_lft, i2si_rgt, i2si_xfc);

input                           clk;                        //Master clock
input                           rst_n;                      //Reset
input                           i2si_sck;                   //Digital audio bit clock
input                           i2si_ws;                    //Word select: defines if left or right channel is being read from. 0 = Left Channel, 1 = Right Channel
input                           i2si_sd;                    //Digital audio serial data
input                           rf_i2si_en;                 //Enabled bit that helps define if the deserializer is active or idle
output[15:0]                    i2si_lft;                   //Parallel output data of left channel
output [15:0]                   i2si_rgt;                   //Parallel output data of right channel
output                          i2si_xfc;                   //Transfer Complete


reg [15:0]                      i2si_lft;
reg [15:0]                      i2si_rgt;
reg                             i2si_xfc;
reg [1:0]                       rst_n_vec;                  //Used to check when rst_n goes from low to high and to trigger armed1
reg                             armed1;                     //First signal that helps define idle and active
reg                             armed2;                     //Second signal that helps define idle and active
reg                             active;                     //Defines if the deserializer is active or not
reg [2:0]                       sck_vec;                    //Delayed signals of i2si_sck
reg [4:0]                       ws_vec;                     //Delayed signals of i2si_ws
reg [3:0]                       sd_vec;                     //Delayed signals of i2si_sd
reg                             in_left;                    //Defines when the deserializer should read in the left channel
reg                             in_left_delay;              //Delayed signal to help define pre_xfc and i2si_xfc

wire                            sck;                        //Synchronized sck signal with clk
wire                            sck_delay;                  //Delayed signal of sck
wire                            sck_transition;             //sck transitions from 0 -> 1. Helps tell the deserializer when to perform certain actions
wire                            ws;                         //Synchronized ws signal with clk
wire                            ws_delay;                   //Delayed signal of ws
wire                            ws_transition;              //Check if ws goes from 1 -> 0 when en = 1
wire                            sd;                         //Synchronized sd with clk
wire                            pre_xfc;                    //Unsynchronized transfer complete signal



//Synchronize clk and sck
//sck[1] = sck synchronized with clk
//sck[2] = sck delay signal to help create sck_transition
always @(posedge clk or negedge rst_n)
begin
    if (!rst_n)
        sck_vec <= 3'b000;
    else
    begin
        sck_vec[0] <= i2si_sck;
        sck_vec[2:1] <= sck_vec[1:0];
    end
end

//Re-assigning sck to be more readable
assign sck = sck_vec[1];
assign sck_delay = sck_vec[2];

//Defines when sck_transition is high or low. Helps define when the deserialzer should read in the left channel and output it to i2si_lft
assign sck_transition = sck && !sck_delay;

//Delay i2si_sd by 4 clock cycles
//sd[3] is synchronized signal
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        sd_vec <= 3'b000;
    else if(sck_transition)
	begin
        sd_vec[0] <= i2si_sd;
        sd_vec[3:1] <= sd_vec[2:0];
    end
end

//Re-assigning sd to be more readable
assign sd = sd_vec[3];

//delay ws signal by 4 clock cycles
//ws has additional delay to define the deserializer as active
//ws[3] is synchronized
//ws[4] is delayed ws signal
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        ws_vec <= 4'b0000;
    else if(sck_transition)
    begin
        ws_vec[0] <= i2si_ws;
        ws_vec[4:1] <= ws_vec[3:0];
    end
end

//Re-assigning ws to be more readable
assign ws = ws_vec[3];
assign ws_delay = ws_vec[4];

//ws_transition becomes high when ws goes from 1 -> 0
//used to help define if deserializer is active
assign ws_transition = !ws && ws_delay;

//Used to help define active when rst_n goes from low to high
always @(posedge clk)
begin
    rst_n_vec[0] <= rst_n;
    rst_n_vec[1] <= rst_n_vec[0];
end

//Intermediate step to help define active
//checks if rst_n goes from high to low
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        armed1 <= 1'b0;
    else if(!rst_n_vec[1] && rst_n_vec[0])
        armed1 <= 1'b1;
    else if(ws_transition)
        armed1 <= 1'b0;
end

//Intermediate step to help define active
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        armed2 <= 1'b0;
    else if(armed1 && ws_transition)
        armed2 <= 1'b1;
    else if(sck_transition)
        armed2 <= 1'b0;
end

//Defines when deserializer is idle or active
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        active <= 1'b0;
    else if(!rf_i2si_en)
        active <= 1'b0;
    else if(armed2 && sck_transition)
        active <= 1'b1;
end


//Tells deserializer when to start reading in data from left channel
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        in_left <= 1'b1;
    else if (!ws && sck_transition && active)
        in_left <= 1'b1;
    else if (ws && sck_transition && active)
        in_left <= 1'b0;
end

//Used to help trigger i2si_xfc																						  
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        in_left_delay <= 1'b0;
    else
    begin
        in_left_delay <= in_left;
    end
end

//Triggers i2si_xfc when ws[3] goes from high to low
//In other words when the system is done reading in the right channel
//and begins reading in the left channel, trigger xfc.																									
assign pre_xfc = in_left && !in_left_delay;

//synchronizing xfc with master clock
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        i2si_xfc <= 1'b0;
    else
        i2si_xfc <= pre_xfc;
end
																									

//Store data into either the left or right channel when
//the deserializer is active and when sck_transition is high
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
    begin
        i2si_lft[15:0] <= 16'b0;
        i2si_rgt[15:0] <= 16'b0;
    end		
    else if(active)
    begin					
        if(sck_transition)
        begin
            if (in_left)
            begin
                i2si_lft[15:1] <= i2si_lft[14:0];
                i2si_lft[0] <= sd;
            end	
            else
            begin
                i2si_rgt[15:1] <= i2si_rgt[14:0];
                i2si_rgt[0] <= sd;
            end
        end
    end
end
endmodule
