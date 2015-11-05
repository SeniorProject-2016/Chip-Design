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
module serializer(clk, rst_n, filt_i2so_rts, i2so_sd, i2so_ws, filt_i2so_lft, filt_i2so_rgt, filt_i2so_rtr, sck_transition
    );

input               clk;                                //Master Clock
input               rst_n;                              //Reset
input               sck_transition;                     //Pulse when sck transitions from low to high
                                                            
input               filt_i2so_rts;                      //ready to send
output              filt_i2so_rtr;                      //Ready to receive
input [15:0]        filt_i2so_lft;                      //Left parallel digital audio data
input [15:0]        filt_i2so_rgt;                      //Right parallel digital audio data

output              i2so_sd;                            //i2s output serial data
output              i2so_ws;                            //i2s output word Select

reg                 serializer_active;
reg                 i2so_sd;                            //i2s output serial data
reg                 i2so_ws;                            //i2s output word select
reg                 filt_i2so_rts_delay;                //Delay signal of ready to send
reg [15:0]          lft_data;                           //Captures the data of filt_i2so_lft
reg [15:0]          rgt_data;                           //Captures the data of filt_i2so_rgt
reg                 LR;                                 //Left Right Counter: keeps track of which parallel digital audio to read from
reg [3:0]           bit_count;                          //Bit Counter: keeps track of which bit to read in

wire                filt_i2so_rtr;                      //Ready to read
wire                filt_i2so_rts_transition;           //High when filt_i2so_rts goes from low to high


//Helps create filt_i2so_rts_transition signal to define when the serializer is in the active state
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        filt_i2so_rts_delay <= 1'b0;
    else
        filt_i2so_rts_delay <= filt_i2so_rts;
end

assign filt_i2so_rts_transition = filt_i2so_rts && !filt_i2so_rts_delay;


//Serializer becomes active when filt_i2so_rts_transitions from low to high
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        serializer_active <= 0;
    else if(filt_i2so_rts_transition)
        serializer_active <= 1'b1;
end


//Tells the serializer to read from filt_i2so_lft or filt_i2so_rgt
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        LR <= 1'b1;
    else if(bit_count == 0 && sck_transition && serializer_active)
        LR <= ~LR;
end

assign filt_i2so_rtr = sck_transition && serializer_active && (bit_count == 0) && LR;

//Capture data in filt_i2so_lft or filt_i2so_rgt during first filt_i2so_rts_transition or during LR_transition
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
    begin
        lft_data <= 0;
        rgt_data <= 0;
    end
    
    else if(serializer_active && filt_i2so_rtr)
    begin
        lft_data <= filt_i2so_lft;
        rgt_data <= filt_i2so_rgt;
    end
end


//Keeps track of which bit of the channel to read from to store in i2so_sd
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        bit_count <= 4'd0;
    else if(filt_i2so_rtr)
        bit_count <= 4'd15;
    else if(sck_transition && serializer_active)
		  bit_count <= bit_count - 4'd1;
end


//Change ws when channel is on 15th bit or bit [1]
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        i2so_ws <= 1'b0;
    else if (serializer_active && bit_count == 4'd1 && sck_transition)
    begin
        i2so_ws <= ~i2so_ws;
    end
end


//Store bit data from filt_i2so_lft or filt_i2so_rgt into i2so_sd
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
