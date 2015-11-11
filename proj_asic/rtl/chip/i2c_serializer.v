`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:59:47 11/10/2015 
// Design Name: 
// Module Name:    Sequencer 
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
module i2c_serializer(
	 input Clock,
    input i2c_RW,
    output reg i2c_op,
    input [10:0] i2c_addr_in,
    output reg [10:0] i2c_addr_out,
    input [7:0] i2c_data_in,
    output reg [7:0] i2c_data_out,
    input i2c_addr_ack,
    input i2c_data_ack,
	 output reg i2c_xfc,
	 input reset,
	 input stop
    );
//Create address incremental value register
reg [10:0] addr_increment;
	initial addr_increment = 0;
reg xfc_ready;
	initial xfc_ready=0;

//single cycle address acknowledge
wire addr_ack_temp;
wire data_ack_temp;
reg Q_addr;
reg Q_data;
always@(posedge Clock)
begin
	Q_addr <= !i2c_addr_ack;
	Q_data <= !i2c_data_ack;
end
assign addr_ack_temp = Q_addr && i2c_addr_ack;
assign data_ack_temp = Q_data && i2c_data_ack;

/*
always@(posedge Clock)
begin
	if(!reset | stop)
	begin
	addr_ack_temp = 0;
	data_ack_temp = 0;
	end
	if(
*/	
	
//always block to perform address and data strobe
//wire ack_not_RW = addr_ack_temp & !i2c_RW;
reg stop_read;
reg [10:0] i2c_addr_write;
always@(posedge Clock or negedge reset)
begin
	if(stop | !reset | stop_read)
	begin
		i2c_op <= 0;
		i2c_addr_out <= 0;
		i2c_data_out <= 0;
		i2c_xfc <= 0;
		addr_increment <= 0;
		stop_read <= 0;
		i2c_addr_write <= 0;
	end

//Read Request Sequence	
	else if(addr_ack_temp & !i2c_RW) //read request
	begin
	i2c_addr_out <= i2c_addr_in;
	i2c_op <= 0;
	xfc_ready <= 1;
	end
		
	else if(xfc_ready & !i2c_RW) //xfc high on address ready, READ
	begin
	i2c_xfc <= 1;
	xfc_ready <= 0;
	end
	
	else if(i2c_xfc & !i2c_RW) //zero xfc after 1 clock cycle for read, READ
	begin
	i2c_xfc <= 0;
	stop_read <= 1;
	end
	

//Write Request Sequence	
	else if(addr_ack_temp & i2c_RW) //write request store address
	begin
	i2c_op <= 1;
	i2c_addr_write <= i2c_addr_in;
	xfc_ready <= 1;
	
	end
	
	else if(data_ack_temp & i2c_RW) //write send
	begin
	i2c_data_out <= i2c_data_in;
	i2c_addr_out <= i2c_addr_write + addr_increment;
	xfc_ready <= 1;
	end
	
	else if(xfc_ready & i2c_RW) //xfc high on data ready
	begin
	i2c_xfc <= 1;
	xfc_ready <= 0;
	end
	
	else if(i2c_xfc & i2c_RW) //zero xfc after 1 clock cycle for write
	begin
	i2c_xfc <= 0;
	addr_increment <= addr_increment + 1;
	i2c_data_out <= 0;
	i2c_addr_out <= 0;
	end
end
	
endmodule
