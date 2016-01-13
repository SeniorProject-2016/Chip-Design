`timescale 1ns / 1ps


module filter_round_truncate(clk, rstb, final_state, acc_in, rf_sat, rf_shift, trig_filter_ovf_flag_clear, filter_out, overflow_flag
    );
input clk, rstb; 
input final_state;
input[39:0] acc_in; 
input rf_sat;
input[2:0] rf_shift;
input trig_filter_ovf_flag_clear;
output reg [15:0] filter_out;
output reg overflow_flag; 

reg [46:0] acc_r;
reg [27:0] acc_t;
wire [4:0]  num_shift;
reg signed [39:0] round;
wire sign_bit; 
wire [46:0] ext_acc_in;
assign num_shift = rf_shift + 12; 

assign sign_bit = acc_in[39];
assign ext_acc_in = {{7{sign_bit}}, acc_in};

// sign bit = val[39] 
// ext val = {7[sign bit], val};

always@(posedge clk or negedge rstb)
begin
	round <= 40'd0;
	round[num_shift-1] <= 1'b1;
	
	acc_r <= ext_acc_in + (1<<(num_shift-1));
	
	acc_t <= 28'd0;
	acc_t <= acc_r[num_shift+:34];//pad
	
	if(!rstb)
		begin
		filter_out <= 1'b0; 
		//overflow_flag controlled by register??
		overflow_flag <= 1'b0;
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
		else 
				filter_out <= acc_t[15:0];

		if (trig_filter_ovf_flag_clear)
			overflow_flag <= 1'b0; 
		end		
end

/*
filter_barrel_shifter filter_barrel_shifter_0 (
    .input_signal(acc_in), 
    .sel_shift(rf_shift), 
    .output_signal(shift_out)
    );
*/

endmodule