`timescale 1ns / 1ps

module i2c(clk,rst,i2c_scl,i2c_sda_in,i2c_rtr,i2c_rdata,i2c_xfc,rf_i2c_reg_indir_addr,ro_i2c_reg_indir_data,i2c_sda_out,i2c_op,i2c_addr,i2c_wdata,i2c_rts);

    input clk;
    input rst;
    input i2c_scl;
    input i2c_sda_in;
    input i2c_rtr;
    input i2c_rdata;
    input i2c_xfc;
    input rf_i2c_reg_indir_addr;
    input ro_i2c_reg_indir_data;
    
    output i2c_sda_out;
    output i2c_op;
    output i2c_addr;
    output i2c_wdata;
    output i2c_rts;
    
    
  /*  i2c_deserializer i2c_deserializer(
    .Clock           (Clock),
    .Reset           (Reset),
    .i2c_sda_raw     (i2c_sda_raw),
	.i2c_scl_raw     (i2c_scl_raw),
    .i2c_addr_bits   (i2c_addr_bits), 
	.i2c_RW          (i2c_RW),	 
    .i2c_addr        (i2c_addr),
    .addr_ack        (addr_ack),
	.slave_ack       (slave_ack),
	.data_ack        (data_ack),
	.serial_data     (serial_data),
	.stop_out        (stop_out));*/
    
  /*  i2c_serializer i2c_serializer(
    .Clock           (Clock),
    .i2c_RW          (i2c_RW),
    .i2c_op          (i2c_op),
    .i2c_addr_in     (i2c_addr_in),
    .i2c_addr_out    (i2c_addr_out),
    .i2c_data_in     (i2c_data_in),
    .i2c_data_out    (i2c_data_out),
    .i2c_addr_ack    (i2c_addr_ack),
    .i2c_data_ack    (i2c_data_ack),
	.i2c_xfc         (i2c_xfc),
	.reset           (reset),
	.stop            (stop)
    );*/
    
   /* i2c_sequencer i2c_sequencer(
    .Clock           (Clock),
    .i2c_RW          (i2c_RW),
    .i2c_addr_in     (i2c_addr_in),
    .i2c_data_in     (i2c_data_in),
    .i2c_addr_ack    (i2c_addr_ack),
    .i2c_data_ack    (i2c_data_ack),
    .reset           (reset),
	.stop            (stop),
    .i2c_op          (i2c_op),
    .i2c_addr_out    (i2c_addr_out),
    .i2c_data_out    (i2c_data_out),
	.i2c_xfc         (i2c_xfc),
	
    );*/

    
endmodule
