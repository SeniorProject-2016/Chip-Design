`timescale 1ns / 1ns

//`include "i2c_test_data.vh"

module tb_i2c;

    wire        i2c_RW;
    wire [15:0] i2c_addr_out;
    wire        addr_xfc;
    wire        i2c_ack;
    wire        data_xfc;
    wire        stop_out;
    wire        rst_n;

    reg CLOCK;
    reg RESET;

    reg i2c_sda;
    reg i2c_scl;

    assign rst_n = !RESET;
        
    wire [2:0] i2c_slv_id_straps = 3'b000;
           
    initial
    begin
        CLOCK = 1;
        
        while (1)
        begin
            #10;
            CLOCK = ~ CLOCK;
        end
    end

    initial
    begin
        RESET = 1;
        #1500;
        RESET = 0;
    end
    
////////////////////////////////////

`define CMD_RD 1'b1
`define CMD_WR 1'b0
`define I2C_DELAY 2000
`define I2C_DELAY2 4000
    
    reg  [24:0] i2c_transaction;
    wire        i2c_cmd;
    wire [15:0] i2c_addr;
    wire [ 7:0] i2c_wdat;
    reg  [ 7:0] i2c_rdat;

    assign i2c_cmd = i2c_transaction[24];
    assign i2c_addr = i2c_transaction[23:8];
    assign i2c_wdat = i2c_transaction[7:0];
    
    integer i;
    integer trans;
    integer addr_byte_idx;
    
    integer data_file    ; // file handler

`define NULL 0

//initial 
//begin
//  data_file = $fopen("data_file.dat", "r");
//  if (data_file == `NULL) 
//  begin
//    $display("data_file handle was NULL");
//    $finish;
//  end
//end
//
// always @(posedge clk)
// begin
//   if (!reset)
//   begin
//    scan_file = $fscanf(data_file, "%d\n", captured_data); 
//   if (!$feof(data_file)) begin
//     //use captured_data as you would any other wire or reg value;
//   end
// end

`define N_TRANS 4

reg [6:0] i2c_id = 7'b1010000;

reg  i2si_sck;
reg  i2si_ws;
reg  i2si_sd;
wire i2so_sck;
wire i2so_ws;
wire i2so_sd;
wire i2c_sda_od;

pullup(i2c_sda_od);
    

// Transfer data via I2C    
initial
begin
    i2c_sda = 1;
    i2c_scl = 1;

    for (trans = 0; trans < `N_TRANS; trans = trans + 1)
    begin

        #2000
        
        case (trans)
            0:
                i2c_transaction = { `CMD_WR, 16'h400, 8'h12 };
            1:
                i2c_transaction = { `CMD_WR, 16'h401, 8'h34 };
            2:
                i2c_transaction = { `CMD_RD, 16'h400, 8'h00 };
            3:
                i2c_transaction = { `CMD_RD, 16'h401, 8'h00 };
        endcase
        
        // Always start with a write of the address
        i2c_sda = 0;        // Start
        #`I2C_DELAY;
        
        i2c_scl = 0;
        #`I2C_DELAY;
    
        // Send 7 Slave ID bits    
        for (i = 6; i >= 0; i = i-1)
        begin
            i2c_sda = i2c_id[i];
            #`I2C_DELAY;
            i2c_scl = 1;
            #`I2C_DELAY2;
            i2c_scl = 0;
            #`I2C_DELAY;
        end
        
        // Send Wn
        i2c_sda = 0;
        #`I2C_DELAY;
        i2c_scl = 1;
        #`I2C_DELAY2;
        i2c_scl = 0;
        #`I2C_DELAY;
        
        // Let go for ACK
        i2c_sda = 1;
        #`I2C_DELAY;
        i2c_scl = 1;
        #`I2C_DELAY2;
        i2c_scl = 0;
        #`I2C_DELAY;
    
        // Send address bytes
        for (addr_byte_idx = 1; addr_byte_idx >= 0; addr_byte_idx = addr_byte_idx - 1)
        begin
            for (i = 7; i >= 0; i = i - 1)
            begin
                i2c_sda = i2c_addr[addr_byte_idx * 8 + i];
                #`I2C_DELAY;
                i2c_scl = 1;
                #`I2C_DELAY2;
                i2c_scl = 0;
                #`I2C_DELAY;
            end
            
            // Let go for ACK
            i2c_sda = 1;
            #`I2C_DELAY;
            i2c_scl = 1;
            #`I2C_DELAY2;
            i2c_scl = 0;
            #`I2C_DELAY;
        end
        
        if (i2c_cmd == `CMD_WR)
        begin
            // Send data byte
            for (i = 7; i >= 0; i = i - 1)
            begin
                i2c_sda = i2c_wdat[i];
                #`I2C_DELAY;
                i2c_scl = 1;
                #`I2C_DELAY2;
                i2c_scl = 0;
                #`I2C_DELAY;
            end
            
            // Let go for ACK
            i2c_sda = 1;
            #`I2C_DELAY;
            i2c_scl = 1;
            #`I2C_DELAY2;
            i2c_scl = 0;
            #`I2C_DELAY;
        
            // Prepare for stop
            i2c_sda = 0;
            #`I2C_DELAY;
            i2c_scl = 1;
            #`I2C_DELAY;
            i2c_sda = 1;
            #`I2C_DELAY2;   // Stop
        end
        else
        begin
            // Send repeated start
            // We come in here with:
            //    i2c_scl = 0
            //    i2c_sda = 1
            i2c_scl = 1;    // Prepare for repeated start
            #`I2C_DELAY;
            i2c_sda = 0;    // Repeated start
            #`I2C_DELAY;
            i2c_scl = 0;    // Prepare for repeated start
            #`I2C_DELAY;
            
            // Send 7 Slave ID bits    
            for (i = 6; i >= 0; i = i-1)
            begin
                i2c_sda = i2c_id[i];
                #`I2C_DELAY;
                i2c_scl = 1;
                #`I2C_DELAY2;
                i2c_scl = 0;
                #`I2C_DELAY;
            end
            
            // Send Wn = 1, for READ
            i2c_sda = 1;
            #`I2C_DELAY;
            i2c_scl = 1;
            #`I2C_DELAY2;
            i2c_scl = 0;
            #`I2C_DELAY;
            
            // Let go for ACK
            i2c_sda = 1;
            #`I2C_DELAY;
            i2c_scl = 1;
            #`I2C_DELAY2;
            i2c_scl = 0;
            #`I2C_DELAY;
    
            // Receive data byte
            for (i = 7; i >= 0; i = i - 1)
            begin
                #`I2C_DELAY;
                i2c_rdat[i] = i2c_sda_od;
                i2c_scl = 1;
                #`I2C_DELAY2;
                i2c_scl = 0;
                #`I2C_DELAY;
            end
            
            // Do ACK
            i2c_sda = 0;
            #`I2C_DELAY;
            i2c_scl = 1;
            #`I2C_DELAY2;
            i2c_scl = 0;
            i2c_sda = 1;
            #`I2C_DELAY;
        
            // Prepare for stop
            i2c_sda = 0;
            #`I2C_DELAY;
            i2c_scl = 1;
            #`I2C_DELAY;
            i2c_sda = 1;
            #`I2C_DELAY2;
            
        end
    end
end

chip u_chip(
    .clk            (CLOCK        ),
    .rst_n          (rst_n        ),

    .i2c_scl        (i2c_scl      ),
    .i2c_sda_in     (i2c_sda      ),
    .i2c_sda_od     (i2c_sda_od   ),

    .i2si_sck       (i2si_sck     ),
    .i2si_ws        (i2si_ws      ),
    .i2si_sd        (i2si_sd      ),
    .i2so_sck       (i2so_sck     ),
    .i2so_ws        (i2so_ws      ),
    .i2so_sd        (i2so_sd      ),
    .i2c_addr_bits  (i2c_slv_id_straps)
);

endmodule

