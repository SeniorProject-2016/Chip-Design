`timescale 1ns / 1ps

module i2c(clk,rst,i2c_scl,i2c_sda_in,i2c_sda_out,i2c_op,i2c_addr,i2c_wdata,i2c_rts,i2c_rtr,i2c_rdata,i2c_xfc,rf_i2c_reg_indir_addr,ro_i2c_reg_indir_data);

    input clk;
    input rst;
    input i2c_scl;
    input i2c_sda_in;
    output i2c_sda_out;
    output i2c_op;
    output i2c_addr;
    output i2c_wdata;
    output i2c_rts;
    input i2c_rtr;
    input i2c_rdata;
    input i2c_xfc;
    input rf_i2c_reg_indir_addr;
    input ro_i2c_reg_indir_data;

endmodule
