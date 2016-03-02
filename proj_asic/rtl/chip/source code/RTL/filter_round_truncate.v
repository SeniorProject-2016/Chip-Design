`timescale 1ns / 1ps

module filter_round_truncate(clk, rstb, acc_in, rf_sat, rf_shift, trig_filter_ovf_flag_clear, filter_out, ro_filter_ovf_flag
    );
input clk, rstb; 
input[39:0] acc_in; 
input rf_sat;
input[2:0] rf_shift;
input trig_filter_ovf_flag_clear;
output reg [15:0] filter_out;
output reg ro_filter_ovf_flag; 

reg signed [46:0] acc_r;
reg signed [27:0] acc_t;
wire [4:0]  num_shift;
//reg signed [39:0] round;
wire sign_bit; 
wire [46:0] ext_acc_in; //exact
assign num_shift = rf_shift + 12; 

assign sign_bit = acc_in[39];
assign ext_acc_in = {{7{sign_bit}}, acc_in};

// sign bit = val[39] 
// ext val = {7[sign bit], val};

always@(posedge clk or negedge rstb)
begin

	
	if(!rstb)
		begin
		filter_out <= 1'b0; 
		ro_filter_ovf_flag <= 1'b0;
		end
	else
	
	begin
	//round <= 40'd0;
	//round[num_shift-1] <= 1'b1;
	
	//acc_r <= 47'd0;
	acc_r <= ext_acc_in + (1<<(num_shift-1));
	
	//acc_t <= 28'd0;
	acc_t <= acc_r[num_shift+:34];//pad
		
		if (acc_t > (1<<15)-1)
			begin 
			$display ("acc_t > (1<<15)-1");
				ro_filter_ovf_flag <= 1; 
				if (rf_sat)
					acc_r <= (1<<15)-1;
				else
					filter_out <= acc_t[15:0];
			end
			
		else if (acc_t < -(1<<15)) 
			begin
			$display ("acc_t < -(1<<15) = %d", -(1<<15));
				ro_filter_ovf_flag <= 1; 
				if (rf_sat) 
					acc_r <= (1<<15)-1;
				else
					filter_out <= acc_t[15:0];
			end
			
		else 
				filter_out <= acc_t[15:0];

		if (trig_filter_ovf_flag_clear)
			ro_filter_ovf_flag <= 1'b0; 
		end		
end

endmodule
