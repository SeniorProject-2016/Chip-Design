`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:59:27 11/10/2015 
// Design Name: 
// Module Name:    Deserializer 
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
module Deserializer(
	 input Clock,
    input Reset,
    input i2c_sda_raw,
	 input i2c_scl_raw,

    input [2:0] i2c_addr_bits, 
	  
    output reg i2c_RW,	 
    output reg [10:0] i2c_addr ,
	 //output reg serial_data_xfc,
	 output reg addr_xfc,
	 output reg i2c_ack,
	 output reg data_xfc,
	 output reg [7:0] serial_data,
	 output reg stop_out
	 );
	 
//Double and triple rank sda and scl
reg scl_p1;
reg sda_p1;
reg sda_p2;
reg i2c_scl;
reg i2c_sda;

always@(posedge Clock)
begin
	scl_p1 <= i2c_scl_raw;
	i2c_scl <= scl_p1;
	
	sda_p1 <= i2c_sda_raw;
	sda_p2 <= sda_p1;
	i2c_sda <= sda_p2;
end


//Create SDA and SCL Pulse Signals, and states
wire i2c_sda_pos_pulse;
wire i2c_sda_neg_pulse;
wire i2c_scl_pos_pulse;
wire i2c_scl_neg_pulse;
reg Q_sda;
reg Q_scl;
reg sda_state;
reg scl_state;

//Find incoming pulses and createlocal clocked pulses at edges
always@(posedge Clock)
begin
	Q_sda = !i2c_sda;
	Q_scl = !i2c_scl;
end
assign i2c_sda_neg_pulse = !Q_sda && !i2c_sda;
assign i2c_sda_pos_pulse = Q_sda && i2c_sda;
assign i2c_scl_neg_pulse = !Q_scl && !i2c_scl;
assign i2c_scl_pos_pulse = Q_scl && i2c_scl;

//Transform local clocked pulses to full waveform states
always@(posedge i2c_sda_pos_pulse or posedge i2c_sda_neg_pulse /*or Clock*/)
begin
	if (i2c_sda_pos_pulse)
	begin
	sda_state <= 1;
	end
	else if (i2c_sda_neg_pulse)
    begin
	sda_state <= 0;
	end
	else if(stop)
	begin
	sda_state <= 1;
	end
end

always@(posedge i2c_scl_pos_pulse or posedge i2c_scl_neg_pulse /*or Clock*/)
begin
	if (i2c_scl_pos_pulse)
	begin
	scl_state <= 1;
	end
	else if (i2c_scl_neg_pulse)
    begin
	scl_state <= 0;
	end
	else if (stop)
	begin
	scl_state <= 1;
	end
end
	
//Deserializer State Update
 //added 9/29/2015 for control of deserializer state, slaveaddress-RW 00, burst_addr 01, data 10 
reg [1:0] deserial_state;

always@(posedge Clock)
begin
	//change to register address mode part 1 
	if(slave_ack)
		begin
		deserial_state <= 2'b01;
		end
		
		//change to register address mode part 2
	if(addr_ack && (deserial_state == 2'b01))
		begin
		deserial_state <= 2'b10;
		end
	
	//change to data fetch mode for write
	if(addr_ack2 && (deserial_state == 2'b10) && i2c_RW)  
		begin
		deserial_state <= 2'b11;
		end
	
	//change to salve address mode if read, wait for start conditions
	if(addr_ack2 && (deserial_state == 2'b10) && !i2c_RW) 
		begin
		deserial_state <= 2'b00;
		end
		
	if(stop)
		begin
		deserial_state <= 2'b00;
		end
end
	 
 
//Set address with offboard bits 1010XXX
wire [6:0] slave_addr ;
	assign slave_addr = {4'b1010 , i2c_addr_bits};  //set slave_addr = 1010XXX with external pins
 
//Start and Stop conditions
reg stop;

always@(posedge Clock or negedge Reset) //Stop conditions erratic
begin
	if (!Reset || slave_addr_stop || (i2c_sda_pos_pulse && scl_state))
	begin
	stop <= 1;
	stop_out <= 1;
	end
	
	//else if (stop || stop_out)
	//begin
	//stop_out <= 0;
	//stop <= 0;
	//end
	
	//else if(slave_addr_stop || (i2c_sda_pos_pulse && scl_state))
	//begin
	//stop <= 1;
	//stop_out <= 1;
	//end
	
	else if (i2c_sda_neg_pulse && scl_state)
	begin
	stop <= 0;
	stop_out <= 0;
	end
end


		 
//Deserialize slave address
reg [3:0] bit_counter_slave_addr  = 4'b0;	
reg [7:0] incoming_slave_addr  = 8'b0;		
reg got_slave_addr;		


always@(posedge Clock)
		begin
		if(stop == 1)
		begin
		got_slave_addr <= 0;
		incoming_slave_addr  <= 8'b0;
		bit_counter_slave_addr  <= 4'b0;
		end
		
		if ((deserial_state == 2'b00) && i2c_scl_pos_pulse && !stop && !addr_xfc)			//when looking for slave address - do
		begin
		case(bit_counter_slave_addr)			//when bit counter = do these, set incoming address bit
		4'b0000 : begin
					incoming_slave_addr [7] <= sda_state;
					bit_counter_slave_addr <= 4'b0001;
				 end
		4'b0001 : begin
					incoming_slave_addr [6] <= sda_state;
					bit_counter_slave_addr <= 4'b0010;
				 end
		4'b0010 : begin
					incoming_slave_addr [5] <= sda_state;
					bit_counter_slave_addr <= 4'b0011;
				 end
		4'b0011 : begin
					incoming_slave_addr [4] <= sda_state;
					bit_counter_slave_addr <= 4'b0100;
				 end
		4'b0100 : begin
					incoming_slave_addr [3] <= sda_state;
					bit_counter_slave_addr <= 4'b0101;
				 end
		4'b0101 : begin
					incoming_slave_addr [2] <= sda_state;
					bit_counter_slave_addr <= 4'b0110;
				 end
		4'b0110 : begin
					incoming_slave_addr [1] <= sda_state;
					bit_counter_slave_addr <= 4'b0111;
				 end
		4'b0111 : begin
					incoming_slave_addr [0] <= sda_state;
					bit_counter_slave_addr <= 4'b1000;
					got_slave_addr <= 1;
				 end
		4'b1000 : begin
					bit_counter_slave_addr <= 4'b0000;
					got_slave_addr <= 0;
				 end
		endcase
		end
	end
	
//Check Address
reg slave_addr_stop;
reg slave_ack;

always@(posedge Clock)
begin

	if(stop)
	begin
	slave_ack <= 0;
	i2c_RW <= 0;
	slave_addr_stop <= 0;
	end
	
	else if(slave_ack & i2c_scl_neg_pulse)
	begin
	slave_ack <= 0;
	end
	
	//if slave address good, acknowledge
	else if ((deserial_state == 2'b00) & i2c_scl_neg_pulse & got_slave_addr & (incoming_slave_addr [7:1] == slave_addr [6:0]) & !addr_xfc)
	begin
	slave_ack <= 1;
	i2c_RW <= incoming_slave_addr [0];
	end
	
	//if incoming slave adrres bad, stop sequence
	else if (got_slave_addr & (incoming_slave_addr [7:1] !== slave_addr [6:0]))
	begin
	slave_addr_stop <= 1;
	end
end
	
//i2c_ack to serializer
always@(posedge Clock)
begin
	if(stop)
	begin
	i2c_ack <= 0;
	end
	
	else if(slave_ack | addr_ack | data_xfc | addr_ack2)
	begin
	i2c_ack <= 1;
	end
	
	else if (!slave_ack & !addr_ack & !data_xfc & !addr_ack2)
	begin
	i2c_ack <= 0;
	end
end
	
//Deserialize burst address
//reg [10:0] burst_start_addr ;
reg [3:0] bit_counter_burst_addr;  
reg got_addr;
reg got_addr2;

always@(posedge Clock)
begin
	
	if (stop == 1)
	begin
	bit_counter_burst_addr  <= 0;
	//burst_start_addr <= 0;
	i2c_addr <= 0;
	got_addr <= 1'b0;
	got_addr2 <= 1'b0;
	end
	
	else if(addr_ack)
	begin
	got_addr <= 0;
	bit_counter_burst_addr <= 4'b0000;
	end 
	
		else if(addr_ack2)
	begin
	got_addr2 <= 0;
	bit_counter_burst_addr <= 4'b0000;
	end 
	
	//Get burst address part 1
	else if (!slave_ack && (deserial_state  == 2'b01) && i2c_scl_pos_pulse) 
	begin
	case(bit_counter_burst_addr)			
		4'b0000 : 	begin
						i2c_addr [10] <= sda_state;
						bit_counter_burst_addr <= 4'b0001;
						end
		4'b0001 : 	begin
						i2c_addr [9] <= sda_state;
						bit_counter_burst_addr <= 4'b0010;
						end
		4'b0010 : 	begin
						i2c_addr [8] <= sda_state;
						bit_counter_burst_addr <= 4'b0011;
						end
		4'b0011 : 	begin
						i2c_addr [7] <= sda_state;
						bit_counter_burst_addr <= 4'b0100;
						end
		4'b0100 : 	begin
						i2c_addr [6] <= sda_state;
						bit_counter_burst_addr <= 4'b0101;
						end
		4'b0101 : 	begin
						i2c_addr [5] <= sda_state;
						bit_counter_burst_addr <= 4'b0110;
						end
		4'b0110 : 	begin
						i2c_addr [4] <= sda_state;
						bit_counter_burst_addr <= 4'b0111;
						end
		4'b0111 : 	begin
						i2c_addr [3] <= sda_state;
						bit_counter_burst_addr <= 4'b1000;
						got_addr <= 1'b1;
						end
		//4'b1000 : 	begin
		//				i2c_addr [10:3]  <= burst_start_addr [10:3];					//set busrt start address part 1
		//				bit_counter_burst_addr <= 4'b0000;
		//				got_addr <= 1'b0;
		//				end

	endcase
	end
	
	//Get burst address part 2
	else if (!slave_ack && (deserial_state  == 2'b10) && i2c_scl_pos_pulse) 
	begin
	case(bit_counter_burst_addr)
		4'b0000 : 	begin
						i2c_addr [2] <= sda_state;
						bit_counter_burst_addr <= 4'b0001;
						end
		4'b0001 : 	begin
						i2c_addr [1] <= sda_state;
						bit_counter_burst_addr <= 4'b0010;
						end
		4'b0010 : 	begin
						i2c_addr [0] <= sda_state;
						bit_counter_burst_addr <= 4'b0011;
						end
		4'b0011 : 	begin
						//burst_start_addr [7] <= sda_state;
						bit_counter_burst_addr <= 4'b0100;
						end
		4'b0100 : 	begin
						//burst_start_addr [6] <= sda_state;
						bit_counter_burst_addr <= 4'b0101;
						end
		4'b0101 : 	begin
						//burst_start_addr [5] <= sda_state;
						bit_counter_burst_addr <= 4'b0110;
						end
		4'b0110 : 	begin
						//burst_start_addr [4] <= sda_state;
						bit_counter_burst_addr <= 4'b0111;
						end
		4'b0111 : 	begin
						//burst_start_addr [3] <= sda_state;
						bit_counter_burst_addr <= 4'b1000;
						got_addr2 <= 1'b1;
						end
		//4'b1000 : 	begin
		//				i2c_addr [2:0]  <= burst_start_addr [2:0];					//set busrt start address part 2
		//				bit_counter_burst_addr <= 4'b0000;
		//				got_addr2 <= 1'b0;
		//				end
	endcase
	end
end

//Address ack
reg addr_ack;
reg addr_ack2;

always@(posedge Clock)
begin

	if(stop)
	begin
	addr_ack <= 0;
	addr_xfc <=0;
	addr_ack2 <=0;
	end
	
	else if(addr_ack & i2c_scl_neg_pulse)
	begin
	addr_ack <= 0;
	end
	
	else if (i2c_scl_neg_pulse & (got_addr == 1'b1))
	begin
	addr_ack <= 1;
	end
	
	else if(addr_ack2 & i2c_scl_neg_pulse)
	begin
	addr_ack2 <= 0;
	end
	
	else if (i2c_scl_neg_pulse & (got_addr2 == 1'b1))
	begin
	addr_ack2 <= 1;
	end
	
	else if((deserial_state == 2'b10) & addr_ack2)
	begin
	addr_xfc <= 1;
	end
	
	
end


//Deserialize data

//reg data_xfc = 1'b0;		
//		initial data_xfc = 0;
reg [3:0] bit_counter_data;
		//initial bit_counter_data = 0;//initialize bit counter to 0
reg got_data;

always@(posedge Clock)
begin
	if(stop)
	begin
	serial_data <= 0;
	bit_counter_data <= 0;
	//data_xfc <= 0;
	got_data <= 0;
	end 
	
	else if(data_xfc)
	begin
	got_data <= 0;
	bit_counter_data <= 4'b0000;
	serial_data <= 8'b00000000;
	end 
	
	else if (!addr_ack2 & !got_data & i2c_scl_pos_pulse && (deserial_state == 2'b11) & (i2c_RW == 1))
	begin
	case (bit_counter_data)
		4'b0000 : 	begin
						serial_data [7] <= sda_state;
						bit_counter_data <= 4'b0001;
					end
		4'b0001 : 	begin
						serial_data [6] <= sda_state;
						bit_counter_data <= 4'b0010;
					end
		4'b0010 : 	begin
						serial_data [5] <= sda_state;
						bit_counter_data <= 4'b0011;
					end
		4'b0011 : 	begin
						serial_data [4] <= sda_state;
						bit_counter_data <= 4'b0100;
					end
		4'b0100 : 	begin
						serial_data [3] <= sda_state;
						bit_counter_data <= 4'b0101;
					end
		4'b0101 : 	begin
						serial_data [2] <= sda_state;
						bit_counter_data <= 4'b0110;
					end
		4'b0110 : 	begin
						serial_data [1] <= sda_state;
						bit_counter_data <= 4'b0111;
					end
		4'b0111 : 	begin
						serial_data [0] <= sda_state;
						got_data <= 1'b1;
					end
	endcase
	end
end

always@(posedge Clock)
begin

	if(stop)
	begin
	data_xfc <= 0;
	end
	
	else if(data_xfc & i2c_scl_neg_pulse)
	begin
	data_xfc <= 0;
	end
	
	else if ((deserial_state == 2'b11) & i2c_scl_neg_pulse & got_data)
	begin
	data_xfc <= 1;
	end
end

		
				
endmodule

