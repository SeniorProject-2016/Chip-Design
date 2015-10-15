`timescale 1ns / 1ps

// Zachary Nelson
// Creates a saw-tooth wave based on the bist register values
module i2si_bist_gen(clk,rst,rf_bist_start_val,rf_bist_inc,rf_bist_up_limit,i2si_bist_out_data);
    input clk,rst; // clock, reset
    input [11:0] rf_bist_start_val,rf_bist_up_limit; // start value, upper limit
    input [7:0] rf_bist_inc; // increment signal by this much
    output[11:0] i2si_bist_out_data; // output signal
	 reg [11:0] i2si_bist_out_data; // output signal
	 reg counter=12'b0; // counter
	

	always@(posedge clk) begin // at every postive edge of the clock
		if(counter==12'b0) begin // if counter is just starting
			i2si_bist_out_data=rf_bist_start_val; // output signal = start value
			counter=counter+1'b1; // increment counter
		end
		else if(i2si_bist_out_data>=rf_bist_up_limit) begin // if signal exceeds the limit
			i2si_bist_out_data=rf_bist_start_val; // signal goes back to start value
		end
		else // if the signal is within normal range
			i2si_bist_out_data=i2si_bist_out_data+rf_bist_inc; // increment the signal
	end
endmodule
