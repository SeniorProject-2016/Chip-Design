`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:00:03 11/10/2015 
// Design Name: 
// Module Name:    Serializer 
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
module Serializer(
	 input i2c_scl,
	 input i2c_sda,
    output reg i2c_sda_out,
//	 input i2c_sda_in,
//    input data_ack,
//	 input slave_ack,
	 input i2c_ack,
    input Clock,
    input reset,
    input [7:0] i2c_rdata,
    input i2c_xfc_read,
	 input stop_out
    );

//Create SCL Pulse Signals, and states
wire i2c_sda_pos_pulse;
wire i2c_sda_neg_pulse;
wire i2c_scl_pos_pulse;
wire i2c_scl_neg_pulse;
reg Q_sda;
reg Q_scl;
//reg sda_state;
reg scl_state;

always@(posedge Clock)
begin
	Q_sda = !i2c_sda;
	Q_scl = !i2c_scl;
end
//assign i2c_sda_neg_pulse = !Q_sda && !i2c_sda;
assign i2c_sda_pos_pulse = !Q_sda && i2c_sda;
assign i2c_scl_neg_pulse = !Q_scl && !i2c_scl;
assign i2c_scl_pos_pulse = !Q_scl && i2c_scl;

/*always@(posedge i2c_sda_pos_pulse or posedge i2c_sda_neg_pulse)
begin
	if (i2c_sda_pos_pulse)
	begin
	sda_state <= 1;
	end
	else if (i2c_sda_neg_pulse)
    begin
	sda_state <= 0;
	end
end*/

always@(posedge i2c_scl_pos_pulse or posedge i2c_scl_neg_pulse)
begin
	if (i2c_scl_pos_pulse)
	begin
	scl_state <= 1;
	end
	else if (i2c_scl_neg_pulse)
    begin
	scl_state <= 0;
	end
end

//Stop Conditions
reg stop;
	//initial stop = 0;
always@(posedge Clock or negedge reset)
begin
	if (!reset | (!scl_state & i2c_sda_pos_pulse) | serialize_done | stop_out)
	begin
	stop <= 1;
	end
	
	else if (i2c_xfc_read | i2c_ack)
	begin
	stop <= 0;
	end
	
	else if (stop)
	begin
	stop <=0;
	end
end

//Take in transfer Data
reg [7:0] data_read;
reg serialize_data_ready;

always@(posedge Clock)
begin
	if(stop)
	begin
	data_read = 8'b00000000;
	serialize_data_ready = 0;
	end
	
	else if(i2c_xfc_read)
	begin
	data_read = i2c_rdata;
	serialize_data_ready = 1;
	end
end


//Serialize ack for slave and data (register address and data)
reg [3:0] serialize_bit_counter;
reg serialize_done;
reg serialize_ack_done;
reg first_data_bit_ready;

always@(posedge Clock)
begin
	if(stop)
	begin
	i2c_sda_out <=0;
	serialize_done <= 0;
	serialize_bit_counter <= 8'b00000000;
	first_data_bit_ready <= 0;
	end
	
	else if(i2c_ack)
	begin
	i2c_sda_out <= i2c_ack;
	serialize_ack_done <= 1;
	end
	
	else if(!i2c_ack & serialize_ack_done)
	begin
	//serialize_done <= 1;
	serialize_ack_done <= 0;
	i2c_sda_out <= i2c_ack;
	first_data_bit_ready <= 1;
	end
	
	else if(first_data_bit_ready & !serialize_data_ready)
	begin
	first_data_bit_ready <= 0;
	end
	
	else if(serialize_data_ready & (i2c_scl_neg_pulse | first_data_bit_ready))
	begin
	case(serialize_bit_counter)
	4'b0000 : 	begin
					i2c_sda_out <= data_read[7];
					serialize_bit_counter <= 4'b0001;
					first_data_bit_ready <= 0;
					end
	4'b0001 : 	begin
					i2c_sda_out <= data_read[6];
					serialize_bit_counter <= 4'b0010;
					end
	4'b0010 : 	begin
					i2c_sda_out <= data_read[5];
					serialize_bit_counter <= 4'b0011;
					end
	4'b0011 : 	begin
					i2c_sda_out <= data_read[4];
					serialize_bit_counter <= 4'b0100;
					end
	4'b0100 : 	begin
					i2c_sda_out <= data_read[3];
					serialize_bit_counter <= 4'b0101;
					end
	4'b0101 : 	begin
					i2c_sda_out <= data_read[2];
					serialize_bit_counter <= 4'b0110;
					end
	4'b0110 : 	begin
					i2c_sda_out <= data_read[1];
					serialize_bit_counter <= 4'b0111;
					end
	4'b0111 : 	begin
					i2c_sda_out <= data_read[0];
					serialize_bit_counter <= 4'b0000;
					serialize_done <= 1;
					end
	endcase
	end
	
end



/*//Serialize State
reg serialize_ok;
	//initial serialize_ok = 0;
always @ (posedge Clock)
begin
	if(stop)
	begin
	serialize_ok = 0;
	end
	else if(serialize_ready & !serialize_done)
	begin
		serialize_ok = 1;
	end
end

//Serialize data
reg [4:0] serialize_bit_counter;
reg serialize_done;*/


/*always@(posedge Clock)
begin
	if(!serialize_ok | stop)
	begin
	serialize_bit_counter = 0;
	serialize_done = 0;
	end
	
	else if(i2c_ack | !stop)
	begin
	i2c_sda_out = 1;
	serialize_done =1;
	end
	
	else if(serialize_ok & i2c_scl_neg_pulse)
	begin
	case(serialize_bit_counter)
	4'b0000 : 	begin
					i2c_sda_out = data_read[7];
					serialize_bit_counter = 4'b0001;
					end
	4'b0001 : 	begin
					i2c_sda_out = data_read[6];
					serialize_bit_counter = 4'b0010;
					end
	4'b0010 : 	begin
					i2c_sda_out = data_read[5];
					serialize_bit_counter = 4'b0011;
					end
	4'b0011 : 	begin
					i2c_sda_out = data_read[4];
					serialize_bit_counter = 4'b0100;
					end
	4'b0100 : 	begin
					i2c_sda_out = data_read[3];
					serialize_bit_counter = 4'b0101;
					end
	4'b0101 : 	begin
					i2c_sda_out = data_read[2];
					serialize_bit_counter = 4'b0110;
					end
	4'b0110 : 	begin
					i2c_sda_out = data_read[1];
					serialize_bit_counter = 4'b0111;
					end
	4'b1000 : 	begin
					i2c_sda_out = data_read[0];
					serialize_bit_counter = 4'b0000;
					serialize_done = 1;
					end
	endcase
	end
end*/
endmodule

