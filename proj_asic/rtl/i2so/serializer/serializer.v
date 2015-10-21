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
module serializer(clk, rst_n, i2si_sck_transition, i2so_sck, i2so_sd, i2so_ws, i2so_en, i2so_lft, i2so_rgt, rtr
    );

input               clk;                                //Master Clock
input               rst_n;                              //Reset
input [15:0]        i2so_lft;                           //Left parallel digital audio data
input [15:0]        i2so_rgt;                           //Right parallel digital audio data

input               i2si_sck_transition;                //Pulse when sck transitions from low to high

output              i2so_sck;
output              i2so_sd;                            //Serial data
output              i2so_ws;                            //Word Select
output              i2so_en;
output              rtr;                                //Ready to receive

reg [15:0]          lft_data;                           //Captures the data of
reg [15:0]          rgt_data;                           //Captures the data of
reg                 i2so_sd;
reg                 LR;                                 //Left Right Counter: keeps track of which parallel digital audio to read from
reg                 rtr;
reg                 LR_delay;                           //Delayed signal of LR
reg [3:0]           bit_count;                          //Bit Counter: keeps track of which bit to read in

wire                LR_transition;                      //High when LR goes from high to low


//Tells the serializer to read from i2so_lft or i2so_rgt
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        LR <= 0;
    else if(bit_count == 0 && i2si_sck_transition)
        LR <= ~LR;
end

//Creates delay signal of LR to help define rtr
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        LR_delay <= 0;
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
    else if (LR_transition)
    begin
        rtr <= 1'b1;
        lft_data <= i2so_lft;
        rgt_data <= i2so_rgt;
    end
    else
        rtr <= 1'b0;
end

//Changes which bit of the channel to read from to store in i2so_sd
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        bit_count <= 4'd15;
    else if(i2si_sck_transition)
        bit_count <= bit_count - 4'd1;
end

//Store data from i2so_lft or i2so_rgt into i2so_sd
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        i2so_sd <= 0;
    else if(i2si_sck_transition)
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
