`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:24:34 10/20/2015 
// Design Name: 
// Module Name:    serializer 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module serializer(clk, rst_n, rts, i2so_sck, i2so_sd, i2so_ws, i2so_en, i2so_lft, i2so_rgt, rtr, i2si_sck
    );
    
    //removed 'i2si_sck_transition' temporarily

input               clk;                                //Master Clock
input               rst_n;                              //Reset
input               rts;                                //ready to send
input [15:0]        i2so_lft;                           //Left parallel digital audio data
input [15:0]        i2so_rgt;                           //Right parallel digital audio data

//Should be an input
wire                i2si_sck_transition;                //Pulse when sck transitions from low to high

output              i2so_sck;
output              i2so_sd;                            //Serial data
output              i2so_ws;                            //Word Select
output              i2so_en;
output              rtr;                                //Ready to receive

reg                 state;                              //state of the serializer: active or idle. 0 = idle. 1 = active
reg                 i2so_sd;
reg                 i2so_ws;
reg                 rtr;
reg [15:0]          lft_data;                           //Captures the data of i2so_lft
reg [15:0]          rgt_data;                           //Captures the data of i2so_rgt
reg                 LR;                                 //Left Right Counter: keeps track of which parallel digital audio to read from
reg                 LR_delay;                           //Delayed signal of LR
reg                 rts_delay;                          //Delay signal of ready to send
reg [3:0]           bit_count;                          //Bit Counter: keeps track of which bit to read in

wire                LR_transition;                      //High when LR goes from high to low
wire                rts_transition;                     //High when rts goes from low to high

parameter           s0 = 0;                             //value of idle state
parameter           s1 = 1;                             //value of active state

reg                 begin_bit_count;                    //Informs the serializer when the bit count should begin

input               i2si_sck;
reg [2:0]           sck_vec;
wire                sck;
wire                i2si_sck_delay;

//Comment Begin: Using temporarily until i figure out proper input for sck_transition
//Temporarily have sck input until sck_transition is inputted correctly in test bench

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
assign i2si_sck_delay = sck_vec[2];

//Defines when sck_transition is high or low. Helps define when the deserialzer should read in the left channel and output it to i2si_lft
assign i2si_sck_transition = sck && !i2si_sck_delay;

//Comment End



always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        begin_bit_count <= 1'b0;
    else if(state && LR == 1'b0 && i2si_sck_transition)
        begin_bit_count <= 1'b1;
end






always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        rts_delay <= 1'b0;
    else
        rts_delay <= rts;
end

assign rts_transition = rts && !rts_delay;

//Defining when the serializer is active or idle
//Begins in the idle state and becomes active when rts goes from low to high
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        state <= s0;
    else if(rts_transition)
        state <= s1;
end

//Tells the serializer to read from i2so_lft or i2so_rgt
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        LR <= 1'b0;
    else if(bit_count == 0 && i2si_sck_transition)
        LR <= ~LR;
end

//Creates delay signal of LR to help define rtr
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        LR_delay <= 1'b0;
    else
        LR_delay <= LR;
end

//Creates a pulse when LR goes from high to low
assign LR_transition = !LR && LR_delay;

//ready to receive when LR goes from high to low
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        rtr <= 1'b0;
    else if(state)
    begin
        if(LR_transition)
        begin
            rtr <= 1'b1;
            lft_data <= i2so_lft;
            rgt_data <= i2so_rgt;
        end
        else
            rtr <= 1'b0;
    end
    else
        rtr <= 1'b0;
end

//Changes which bit of the channel to read from to store in i2so_sd
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        bit_count <= 4'd15;
    else if(i2si_sck_transition && begin_bit_count)
    begin
        bit_count <= bit_count - 4'd1;
    end
end

//Changes ws when lft or rgt channel data is on 14th bit
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        i2so_ws <= 1'b0;
    else if (state)
    begin
        if(bit_count == 4'd1 && LR == 1'b0 && i2si_sck_transition)
            i2so_ws <= 1'b1;
        else if(bit_count == 4'd1 && LR == 1'b1 && i2si_sck_transition)
            i2so_ws <= 1'b0;
        else
            i2so_ws <= i2so_ws;
    end
    else
        i2so_ws <= 1'b0;
end

//Store data from i2so_lft or i2so_rgt into i2so_sd
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        i2so_sd <= 1'b0;
    else if(state && i2si_sck_transition)
    begin
        if(LR == 1'b0)
        begin
            i2so_sd <= lft_data[bit_count];
        end
        
        else
        begin
            i2so_sd <= rgt_data[bit_count];
        end
    end
end
endmodule
