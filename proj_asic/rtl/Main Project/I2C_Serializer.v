`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Module Name:             i2c_serializer.v
// Create Date:             10/15/2016
// Last Modification:       1/13/2015
// Author:                  Whitley Forman
// Description:
//////////////////////////////////////////////////////////////////////////////////

module Serializer(
	input i2c_scl,
    output reg i2c_sda_out,
	input i2c_ack, 
    input Clock,
    input reset,
    input [7:0] i2c_rdata,
    input i2c_xfc_read
    );

    //Create SCL Pulse Signals, and states
    wire i2c_sda_neg_pulse;
    wire i2c_scl_neg_pulse;
    reg Q_scl;

    always@(posedge Clock)
    begin
        Q_scl = !i2c_scl;
    end

    assign i2c_scl_neg_pulse = !Q_scl && !i2c_scl;

    //Stop Conditions
    reg stop;
        //initial stop = 0;
    always@(posedge Clock or negedge reset)
    begin
        if (!reset /*| (!scl_state & i2c_sda_pos_pulse) */| serialize_done /*| stop_out*/)
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

    wire i2c_ack_state;
    assign i2c_ack_state = i2c_ack;

    always@(posedge Clock)
    begin
        if(stop)
        begin
        i2c_sda_out <=0;
        serialize_done <= 0;
        serialize_bit_counter <= 8'b00000000;
        first_data_bit_ready <= 0;
        serialize_ack_done <= 0;
        end
        
        //Serialize General i2c ACK for address match, data
        else if(i2c_ack_state) 
        begin
        i2c_sda_out <= i2c_ack_state;
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
                        serialize_bit_counter <= 4'b1000;
                        //serialize_done <= 1;
                        end
        4'b1000 : 	begin
                        //i2c_sda_out <= data_read[0];
                        serialize_bit_counter <= 4'b0000;
                        serialize_done <= 1;
                        end
        endcase
        end
        
    end

endmodule

