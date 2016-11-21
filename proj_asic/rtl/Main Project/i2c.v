`timescale 1ns / 1ns

`define I2C_DESERIAL_STATE_IDLE                0
`define I2C_DESERIAL_STATE_ID                  1
`define I2C_DESERIAL_STATE_ACK_ID              2
`define I2C_DESERIAL_STATE_RD_DAT              3
`define I2C_DESERIAL_STATE_WR_ADDR_HI          4
`define I2C_DESERIAL_STATE_WR_ADDR_LO          5
`define I2C_DESERIAL_STATE_MASTER_ACK_RD_DAT   6
`define I2C_DESERIAL_STATE_WR_DAT              7
`define I2C_DESERIAL_STATE_ACK_WR_ADDR_HI      8
`define I2C_DESERIAL_STATE_ACK_WR_ADDR_LO      9
`define I2C_DESERIAL_STATE_ACK_WR_DAT          10

module i2c (
    input       clk,
    input       rst_n,
    input       i2c_sda_raw,          // was i2c_sda_in
	input       i2c_scl_raw,          // was i2c_scl
    input [2:0] i2c_addr_bits,
	  
    output            i2c_op,
    output            i2c_xfc_write,
    output reg [7:0]  i2c_wdata,
    input      [7:0]  i2c_rdata,
    input             i2c_xfc_read,
	output reg        i2c_sda_out,
               
    output    [10:0]  i2c_addr   // was i2c_wraddr
	);
	 
    //Double and triple rank sda and scl
    reg scl_p1;
    reg sda_p1;
    reg sda_p2;
    reg sda_p3;
    reg i2c_scl;
    reg i2c_sda;
    reg i2c_wr;

    reg [ 3:0] i2c_deserial_state;
    reg [ 3:0] i2c_deserial_state_p1;
    reg [ 2:0] byte_bit_cnt;
    reg [ 6:0] i2c_received_id;
    reg [15:0] i2c_addr_rx;
    reg [ 7:0] i2c_rdata_reg;

    //Set address with offboard bits 1010XXX
    wire [6:0] slave_addr;
    wire       ack_state;
    
    always@(posedge clk)
    begin
        scl_p1  <= i2c_scl_raw;
        i2c_scl <= scl_p1;
        
        sda_p1  <= i2c_sda_raw;
        sda_p2  <= sda_p1;
        sda_p3  <= sda_p2;
        i2c_sda <= sda_p2;          // Delay SDA input two cycles beyond SCL
        
        i2c_deserial_state_p1 <= i2c_deserial_state;
    end

    //Create SDA and SCL Pulse Signals, and states
    wire i2c_sda_pos_pulse;
    wire i2c_sda_neg_pulse;
    wire i2c_scl_pos_pulse;
    wire i2c_scl_neg_pulse;

    reg Q_sda;
    reg Q_scl;

    //Find incoming pulses and createlocal clocked pulses at edges
    always@(posedge clk)
    begin
        Q_sda = i2c_sda;
        Q_scl = i2c_scl;
    end
    
    assign i2c_sda_neg_pulse =  Q_sda && !i2c_sda;
    assign i2c_sda_pos_pulse = !Q_sda &&  i2c_sda;
    assign i2c_scl_neg_pulse =  Q_scl && !i2c_scl;
    assign i2c_scl_pos_pulse = !Q_scl &&  i2c_scl;

    assign slave_addr = {4'b1010 , i2c_addr_bits};  //set slave_addr = 1010XXX with external pins

    // A HIGH to LOW transition on the SDA line while SCL is HIGH defines a START condition.
    assign i2c_strt_condition = i2c_sda_neg_pulse && i2c_scl;
    
    // A LOW to HIGH transition on the SDA line while SCL is HIGH defines a STOP condition.        
    assign i2c_stop_condition = i2c_sda_pos_pulse && i2c_scl;

    always@(posedge clk or negedge rst_n)
    begin
        if (!rst_n)
        begin
            i2c_deserial_state <= `I2C_DESERIAL_STATE_IDLE;
            byte_bit_cnt <= 0;
        end
        
        else if (i2c_strt_condition)
        begin
            i2c_deserial_state <= `I2C_DESERIAL_STATE_ID;
            byte_bit_cnt <= 0;
        end   
        else if (i2c_stop_condition)
        begin
            i2c_deserial_state <= `I2C_DESERIAL_STATE_IDLE;
        end

        else if (i2c_scl_pos_pulse)
        begin
            case (i2c_deserial_state)
                `I2C_DESERIAL_STATE_ID:
                    if (byte_bit_cnt == 7)
                    begin
                        if (i2c_received_id == slave_addr)
                            i2c_deserial_state <= `I2C_DESERIAL_STATE_ACK_ID;
                        else
                            i2c_deserial_state <= `I2C_DESERIAL_STATE_IDLE;
                            
                        byte_bit_cnt <= 0;
                    end
                    
                    else
                        byte_bit_cnt <= byte_bit_cnt + 1;       
                    
                `I2C_DESERIAL_STATE_ACK_ID:
                    if (i2c_wr == 0)
                        i2c_deserial_state <= `I2C_DESERIAL_STATE_RD_DAT;
                    else
                        i2c_deserial_state <= `I2C_DESERIAL_STATE_WR_ADDR_HI;

                `I2C_DESERIAL_STATE_RD_DAT:
                    if (byte_bit_cnt == 7)
                    begin
                        i2c_deserial_state <= `I2C_DESERIAL_STATE_MASTER_ACK_RD_DAT;
                        byte_bit_cnt <= 0;
                    end
                    
                    else
                        byte_bit_cnt <= byte_bit_cnt + 1;       
                    
                `I2C_DESERIAL_STATE_WR_ADDR_HI:
                    if (byte_bit_cnt == 7)
                    begin
                        i2c_deserial_state <= `I2C_DESERIAL_STATE_ACK_WR_ADDR_HI;
                        byte_bit_cnt <= 0;
                    end
                    else
                        byte_bit_cnt <= byte_bit_cnt + 1;       
                    
                `I2C_DESERIAL_STATE_WR_ADDR_LO:
                    if (byte_bit_cnt == 7)
                    begin
                        i2c_deserial_state <= `I2C_DESERIAL_STATE_ACK_WR_ADDR_LO;
                        byte_bit_cnt <= 0;
                    end
                    else
                        byte_bit_cnt <= byte_bit_cnt + 1;       
                    
                `I2C_DESERIAL_STATE_WR_DAT:
                    if (byte_bit_cnt == 7)
                    begin
                        i2c_deserial_state <= `I2C_DESERIAL_STATE_ACK_WR_DAT;
                        byte_bit_cnt <= 0;
                    end
                    else
                        byte_bit_cnt <= byte_bit_cnt + 1;       
                    
                `I2C_DESERIAL_STATE_MASTER_ACK_RD_DAT:
                    i2c_deserial_state <= `I2C_DESERIAL_STATE_RD_DAT;

                `I2C_DESERIAL_STATE_ACK_WR_ADDR_HI:
                    i2c_deserial_state <= `I2C_DESERIAL_STATE_WR_ADDR_LO;
                
                `I2C_DESERIAL_STATE_ACK_WR_ADDR_LO:
                    i2c_deserial_state <= `I2C_DESERIAL_STATE_WR_DAT;
                
                `I2C_DESERIAL_STATE_ACK_WR_DAT:
                    i2c_deserial_state <= `I2C_DESERIAL_STATE_WR_DAT;
                
            endcase    
        end
    end

    assign i2c_ack = (i2c_deserial_state == `I2C_DESERIAL_STATE_ACK_WR_ADDR_HI || i2c_deserial_state == `I2C_DESERIAL_STATE_ACK_WR_ADDR_LO || i2c_deserial_state == `I2C_DESERIAL_STATE_ACK_WR_DAT);
        

    always @ (posedge clk or negedge rst_n)
    begin
        if (!rst_n)
            i2c_rdata_reg <= 8'b0;
        else
            if (i2c_xfc_read)
                i2c_rdata_reg <= i2c_rdata;
    end
    

    always @ (posedge clk or negedge rst_n)
    begin
        if (!rst_n)
        begin
            i2c_wr	    <= 0;
            i2c_addr_rx <= 0;
            i2c_wdata   <= 0;
            i2c_sda_out <= 1;
        end
        else if (i2c_scl_pos_pulse)
        begin
            if (i2c_deserial_state == `I2C_DESERIAL_STATE_ID)
                if (byte_bit_cnt == 7)
                    i2c_wr <= ~i2c_sda;     // i2c_wr: 1 - write, 0 - read, complement of the I2C usage
                else
                    i2c_received_id[6-byte_bit_cnt] <= i2c_sda;
                
            if (i2c_deserial_state == `I2C_DESERIAL_STATE_WR_ADDR_HI)
                i2c_addr_rx[15-byte_bit_cnt] <= i2c_sda;
                
            if (i2c_deserial_state == `I2C_DESERIAL_STATE_WR_ADDR_LO)
                i2c_addr_rx[7-byte_bit_cnt] <= i2c_sda;
            
            if (i2c_deserial_state == `I2C_DESERIAL_STATE_WR_DAT)
                i2c_wdata[7-byte_bit_cnt] <= i2c_sda;
        end
        else if (i2c_scl_neg_pulse)
        begin
            if (ack_state)
                i2c_sda_out <= 0;
            else if (i2c_deserial_state == `I2C_DESERIAL_STATE_RD_DAT)
                i2c_sda_out <= i2c_rdata[7-byte_bit_cnt];
            else i2c_sda_out <= 1;
        end
    end

    assign i2c_xfc_write = ((i2c_deserial_state == `I2C_DESERIAL_STATE_ACK_WR_DAT) && (i2c_deserial_state_p1 != `I2C_DESERIAL_STATE_ACK_WR_DAT) ||
                            (i2c_deserial_state == `I2C_DESERIAL_STATE_ACK_ID) && (i2c_deserial_state_p1 != `I2C_DESERIAL_STATE_ACK_ID) && (i2c_wr == 0));

    assign ack_state = (i2c_deserial_state == `I2C_DESERIAL_STATE_ACK_WR_ADDR_HI) || 
                (i2c_deserial_state == `I2C_DESERIAL_STATE_ACK_WR_ADDR_LO) || 
                (i2c_deserial_state == `I2C_DESERIAL_STATE_ACK_WR_DAT);

    assign i2c_addr = i2c_addr_rx[10:0];
    
    assign i2c_op   = i2c_wr;
                         
    // i2s_sda_out: goes low when ack_state, and negedge of SCL
endmodule

