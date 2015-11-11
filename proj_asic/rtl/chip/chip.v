module chip(clk,rst,i2c_scl,i2c_sda,i2si_sck,i2si_ws,i2si_sd,i2so_sck,i2so_ws,i2so_sd);

    input clk;
    input rst;
    input i2c_scl;
    input i2c_sda;
    input i2si_sck;
    input i2si_ws;
    input i2si_sd;
    
    output i2so_sck;
    output i2so_ws;
    output i2so_sd;
    

    i2si i2si(
    .clk                     (clk), 
    .rst                     (rst), 
    .i2si_sck                (i2si_sck),
    .i2si_ws                 (i2si_ws),
    .i2si_sd                 (i2si_sd),
    .rf_i2si_en              (rf_i2si_en),
    .rf_bist_start_val       (rf_bist_start_val),
    .rf_bist_up_limit        (rf_bist_up_limit),
    .rf_bist_en              (rf_bist_en),
    .i2si_rtr                (i2si_rtr),
    .i2si_data               (i2si_data),
    .i2si_rts                (i2si_rts),
    .ro_fifo_overrun         (ro_fifo_overrun)
    );
    
    filter filter(
    .clk                     (clk), 
    .rst                     (rst), 
    .aud_in                  (aud_in),    
    .aud_in_rts              (aud_in_rts),
    .aud_in_rtr              (aud_in_rtr),
    .aud_out                 (aud_out),
    .aud_out_rts             (aud_out_rts),
    .aud_out_rtr             (aud_out_rtr)
    );
    
    i2so i2so(
    .clk                     (clk),
    .rst_n                   (rst_n),
    .filt_i2so_rts           (filt_i2so_rts), 
    .i2so_sd                 (i2so_sd), 
    .i2so_ws                 (i2so_ws),
    .filt_i2so_lft           (filt_i2so_lft), 
    .filt_i2so_rgt           (filt_i2so_rgt), 
    .filt_i2so_rtr           (filt_i2so_rtr),
    .sck_transition          (sck_transition)
    );
    
    i2c i2c(
    .clk                     (clk),
    .rst                     (rst),
    .i2c_scl                 (i2c_scl),
    .i2c_sda_in              (i2c_sda_in),
    .i2c_sda_out             (i2c_sda_out),
    .i2c_op                  (i2c_op),
    .i2c_addr                (i2c_addr),
    .i2c_wdata               (i2c_wdata),
    .i2c_rts                 (i2c_rts),
    .i2c_rtr                 (i2c_rtr),
    .i2c_rdata               (i2c_rdata),
    .i2c_xfc                 (i2c_xfc),
    .rf_i2c_reg_indir_addr   (rf_i2c_reg_indir_addr),
    .ro_i2c_reg_indir_data   (ro_i2c_reg_indir_data)
    ); 
    
    register register(
    .address                       (address),
    .wdata                         (wdata),
    .xfc                           (xfc),
    .clk                           (clk),
    .rst                           (rst),
    .trig_i2si_fifo_overrun_clr    (trig_i2si_fifo_overrun_clr),
    .trig_i2so_fifo_underrun_clr   (trig_i2si_fifo_underrun_clr)
    );
    

endmodule
