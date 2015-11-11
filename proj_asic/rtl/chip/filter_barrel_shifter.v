`timescale 1ns / 1ps

module filter_barrel_shifter(input_signal, sel_shift, output_signal
    );
input [31:0]	input_signal;
input [5:0]	sel_shift;
output [31:0] output_signal;

reg [31:0] output_signal;
wire [31:0] output_signal_1;
wire [31:0] output_signal_2;
wire [31:0] output_signal_3;
wire [31:0] output_signal_4;
wire [31:0] output_signal_5;
wire [31:0] output_signal_6;
wire [31:0] output_signal_7;
wire [31:0] output_signal_8;
wire [31:0] output_signal_9;
wire [31:0] output_signal_10;
wire [31:0] output_signal_11;
wire [31:0] output_signal_12;
wire [31:0] output_signal_13;
wire [31:0] output_signal_14;
wire [31:0] output_signal_15;
wire [31:0] output_signal_16;
wire [31:0] output_signal_17;
wire [31:0] output_signal_18;
wire [31:0] output_signal_19;
wire [31:0] output_signal_20;
wire [31:0] output_signal_21;
wire [31:0] output_signal_22;
wire [31:0] output_signal_23;
wire [31:0] output_signal_24;
wire [31:0] output_signal_25;
wire [31:0] output_signal_26;
wire [31:0] output_signal_27;
wire [31:0] output_signal_28;
wire [31:0] output_signal_29;
wire [31:0] output_signal_30;
wire [31:0] output_signal_31;

assign output_signal_1 = {input_signal[30:0],input_signal[31]};
assign output_signal_2 = {input_signal[29:0],input_signal[31:30]};
assign output_signal_3 = {input_signal[28:0],input_signal[31:29]};
assign output_signal_4 = {input_signal[27:0],input_signal[31:28]};
assign output_signal_5 = {input_signal[26:0],input_signal[31:27]};
assign output_signal_6 = {input_signal[25:0],input_signal[31:26]};
assign output_signal_7 = {input_signal[24:0],input_signal[31:25]};
assign output_signal_8 = {input_signal[23:0],input_signal[31:24]};
assign output_signal_9 = {input_signal[22:0],input_signal[31:23]};
assign output_signal_10 = {input_signal[21:0],input_signal[31:22]};
assign output_signal_11 = {input_signal[20:0],input_signal[31:21]};
assign output_signal_12 = {input_signal[19:0],input_signal[31:20]};
assign output_signal_13 = {input_signal[18:0],input_signal[31:19]};
assign output_signal_14 = {input_signal[17:0],input_signal[31:18]};
assign output_signal_15 = {input_signal[16:0],input_signal[31:17]};
assign output_signal_16 = {input_signal[15:0],input_signal[31:16]};
assign output_signal_17 = {input_signal[14:0],input_signal[31:15]};
assign output_signal_18 = {input_signal[13:0],input_signal[31:14]};
assign output_signal_19 = {input_signal[12:0],input_signal[31:13]};
assign output_signal_20 = {input_signal[11:0],input_signal[31:12]};
assign output_signal_21 = {input_signal[10:0],input_signal[31:11]};
assign output_signal_22 = {input_signal[9:0],input_signal[31:10]};
assign output_signal_23 = {input_signal[8:0],input_signal[31:9]};
assign output_signal_24 = {input_signal[7:0],input_signal[31:8]};
assign output_signal_25 = {input_signal[6:0],input_signal[31:7]};
assign output_signal_26 = {input_signal[5:0],input_signal[31:6]};
assign output_signal_27 = {input_signal[4:0],input_signal[31:5]};
assign output_signal_28 = {input_signal[3:0],input_signal[31:4]};
assign output_signal_29 = {input_signal[2:0],input_signal[31:3]};
assign output_signal_30 = {input_signal[1:0],input_signal[31:2]};
assign output_signal_31 = {input_signal[0],input_signal[31:1]};


always @*
 begin
     output_signal = input_signal; 
	  case(sel_shift)
	   5'd1: output_signal = output_signal_1;
	   5'd2: output_signal = output_signal_2;
	   5'd3: output_signal = output_signal_3;
	   5'd4: output_signal = output_signal_4;
	   5'd5: output_signal = output_signal_5;
	   5'd6: output_signal = output_signal_6;
	   5'd7: output_signal = output_signal_7;
	   5'd8: output_signal = output_signal_8;
	   5'd9: output_signal = output_signal_9;
	   5'd10: output_signal = output_signal_10;
	   5'd11: output_signal = output_signal_11;
	   5'd12: output_signal = output_signal_12;
	   5'd13: output_signal = output_signal_13;
	   5'd14: output_signal = output_signal_14;
	   5'd15: output_signal = output_signal_15;
	   5'd16: output_signal = output_signal_16;
	   5'd17: output_signal = output_signal_17;
	   5'd18: output_signal = output_signal_18;
	   5'd19: output_signal = output_signal_19;
	   5'd20: output_signal = output_signal_20;
	   5'd21: output_signal = output_signal_21;
	   5'd22: output_signal = output_signal_22;
	   5'd23: output_signal = output_signal_23;
	   5'd24: output_signal = output_signal_24;
	   5'd25: output_signal = output_signal_25;
	   5'd26: output_signal = output_signal_26;
	   5'd27: output_signal = output_signal_27;
	   5'd28: output_signal = output_signal_28;
	   5'd29: output_signal = output_signal_29;
	   5'd30: output_signal = output_signal_30;
	   5'd31: output_signal = output_signal_31;
	  endcase 
 end
endmodule
