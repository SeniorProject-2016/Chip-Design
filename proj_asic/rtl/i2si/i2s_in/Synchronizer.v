`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:27:06 10/20/2015 
// Design Name: 
// Module Name:    Synchronizer 
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
module Synchronizer(clk, rst, _sck, i2si_sck, i2si_sck_transition, _sd, i2si_sd, _ws, i2si_ws
    );
input               clk;                        //Master clock
input               rst;                        //Reset
input               _sck;                       //Unsynchronized sck
input               _sd;                        //Non-delayed serial data signal
input               _ws;                        //Non-delayed word select signal

output              i2si_sck;                   //Synchronized sck
output              i2si_sck_transition;
output              i2si_sd;                    //Delayed serial data signal
output              i2si_ws;                    //Delayed word select signal

reg [2:0]           sck_vec;
reg [3:0]           sd_vec;
reg [3:0]           ws_vec;
                    
wire                i2si_sck_delay;            //Delayed i2si_sck signal



//Synchronize clk and sck
//sck[1] = sck synchronized with clk
//sck[2] = sck delay signal to help create sck_transition
always @(posedge clk or negedge rst)
begin
    if (!rst)
        sck_vec <= 3'b000;
    else
    begin
        sck_vec[0] <= _sck;
        sck_vec[2:1] <= sck_vec[1:0];
    end
end

//Re-assigning sck to be more readable
assign i2si_sck = sck_vec[1];
assign i2si_sck_delay = sck_vec[2];

//Defines when sck_transition is high or low. Helps define when certain actions should occur
assign i2si_sck_transition = i2si_sck && !i2si_sck_delay;

//Delay i2si_sd by 4 clock cycles
//sd[3] is synchronized signal
always @(posedge clk or negedge rst)
begin
    if(!rst)
        sd_vec <= 3'b000;
    else if(i2si_sck_transition)
	begin
        sd_vec[0] <= _sd;
        sd_vec[3:1] <= sd_vec[2:0];
    end
end

//Re-assigning sd to be more readable
assign i2si_sd = sd_vec[3];


//Delay ws signal by 4 clock cycles
//ws[3] is synchronized
always @(posedge clk or negedge rst)
begin
    if(!rst)
        ws_vec <= 4'b0000;
    else
    begin
        ws_vec[0] <= _ws;
        ws_vec[3:1] <= ws_vec[2:0];
    end
end

//Re-assigning ws to be more readable
assign i2si_ws = ws_vec[3];

endmodule
