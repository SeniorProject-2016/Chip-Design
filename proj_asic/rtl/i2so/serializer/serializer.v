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
module serializer(clk, rst_n, rts, i2so_sd, i2so_ws, i2so_lft, i2so_rgt, rtr, i2si_sck_transition
    );

input               clk;                                //Master Clock
input               rst_n;                              //Reset
input               rts;                                //ready to send
input               i2si_sck_transition;                //Pulse when sck transitions from low to high
input [15:0]        i2so_lft;                           //Left parallel digital audio data
input [15:0]        i2so_rgt;                           //Right parallel digital audio data

output              i2so_sd;                            //i2s output serial data
output              i2so_ws;                            //i2s output word Select
output              rtr;                                //Ready to receive

reg                 serializer_active;
reg                 i2so_sd;                            //i2s output serial data
reg                 i2so_ws;                            //i2s output word select
reg [15:0]          lft_data;                           //Captures the data of i2so_lft
reg [15:0]          rgt_data;                           //Captures the data of i2so_rgt
reg                 LR;                                 //Left Right Counter: keeps track of which parallel digital audio to read from
reg                 LR_delay;                           //Delayed signal of LR
reg                 rts_delay;                          //Delay signal of ready to send
reg [3:0]           bit_count;                          //Bit Counter: keeps track of which bit to read in

wire                rtr;                                //Ready to read
wire                LR_transition;                      //High when LR goes from high to low
wire                rts_transition;                     //High when rts goes from low to high


//Helps create rts_transition signal to define when the serializer is in the active state
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        rts_delay <= 1'b0;
    else
        rts_delay <= rts;
end

assign rts_transition = rts && !rts_delay;


//Serializer becomes active when rts_transitions from low to high
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        serializer_active <= 0;
    else if(rts_transition)
        serializer_active <= 1'b1;
end


//Tells the serializer to read from i2so_lft or i2so_rgt
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        LR <= 1'b1;
    else if(bit_count == 0 && i2si_sck_transition && serializer_active)
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
//helps define rtr
//Perphaps remove later. Looks like it is no longer needed
assign LR_transition = !LR && LR_delay;

assign rtr = i2si_sck_transition && serializer_active && (bit_count == 0) && LR;

//Capture data in i2so_lft or i2so_rgt during first rts_transition or during LR_transition
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
    begin
        lft_data <= 0;
        rgt_data <= 0;
    end
    
    else if(serializer_active && rtr)
    begin
        lft_data <= i2so_lft;
        rgt_data <= i2so_rgt;
    end
end


//Keeps track of which bit of the channel to read from to store in i2so_sd
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        bit_count <= 4'd0;
    else if(rtr)
        bit_count <= 4'd15;
    else if(i2si_sck_transition && serializer_active)
		  bit_count <= bit_count - 4'd1;
end


//Change ws when channel is on 15th bit or bit [1]
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        i2so_ws <= 1'b0;
    else if (serializer_active && bit_count == 4'd1 && i2si_sck_transition)
    begin
        i2so_ws <= ~i2so_ws;
    end
end


//Store bit data from i2so_lft or i2so_rgt into i2so_sd
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        i2so_sd <= 1'b0;
    else if(serializer_active)
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
