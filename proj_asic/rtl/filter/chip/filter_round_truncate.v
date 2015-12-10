`timescale 1ns / 1ps


module filter_round_truncate(clk, rstb, final_state, acc_in, rf_sat, rf_shift, trig_out_clear, filter_out, overflow_flag
    );
input clk, rstb; 
input final_state;
input[39:0] acc_in; 
input rf_sat;
input[2:0] rf_shift;
input trig_out_clear;
output[15:0] filter_out;
output overflow_flag; 

wire acc_r;
wire acc_t;
wire num_shift;
assign num_shift = rf_shift + 12; 
assign acc_r = acc + (1<<num_shift-1);
assign acc_t = acc_r[39:num_shift];

always@(posedge clk or negedge rstb)
begin
	if(!rstb)
		begin
		
		end
	else
		begin
		if (acc_t > (1<<15)-1)
			begin 
				overflow_flag <= 1; 
				if (rf_sat)
					acc_r <= (1<<15)-1;
				else
					filter_out <= acc_t[15:0];
			end
		else if (acc_t < -(1<<15)) 
			begin
				overflow_flag <= 1; 
				if (rf_sat) 
					acc_r <= (1<<15)-1;
				else
					filter_out <= acc_t[15:0];
			end
		end
end

filter_barrel_shifter filter_barrel_shifter_0 (
    .input_signal(acc_in), 
    .sel_shift(rf_shift), 
    .output_signal(shift_out)
    );
	 

endmodule
