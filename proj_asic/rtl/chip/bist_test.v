module bist_test;

    // Inputs
    reg clk;
    wire rst;
    reg i2si_sck;
    reg [11:0] rf_bist_start_val;
    reg [7:0] rf_bist_inc;
    reg [11:0] rf_bist_up_limit;
    
    // Internal Variables
    reg sck_d1; // serial clock delay
    reg [31:0] count; 
    reg [31:0] sck_cnt; // serial clock counter
    reg [31:0] cyc_per_half_sck = 40; // about (100 MHz / 1.44 MHz)/2

    // Outputs
    wire [31:0] i2si_bist_out_data;

    // Instantiate the Unit Under Test (UUT)
    i2si_bist_gen uut (
        .clk(clk), 
        .rst(rst),
        .i2si_sck(i2si_sck), 
        .rf_bist_start_val(rf_bist_start_val), 
        .rf_bist_inc(rf_bist_inc), 
        .rf_bist_up_limit(rf_bist_up_limit), 
        .i2si_bist_out_data(i2si_bist_out_data)
    );

    initial begin
        // Initialize Inputs
        clk = 0;
        i2si_sck=0;
        rf_bist_start_val = 12'h001;
        rf_bist_inc = 12'h001;
        rf_bist_up_limit = 12'h019;        
    end
    
    assign rst = (count < 20); // turn on reset not after 10 clock cycles

    always
    begin
        count = 0; // set clock counter to zero
    forever
        begin
            #5 clk = ~clk; // 100 MHz clock
            count = count + 1; // increment clock counter
        end
    end
    
    always @ (posedge clk or negedge rst)
    begin
        if(rst!=0)
        begin
            sck_cnt<=0;     // counts master clock cycles, causes sck to toggle each time it hits cyc_per_half_sck
            i2si_sck<=0;    // serial clock
            sck_d1<=0;      // serial clock delayed by one clock cycle
        end
        else
            sck_cnt <= sck_cnt + 1; // increment serial clock counter       
        sck_d1<=i2si_sck;           // generate 1 cycle delay of i2si_sck
        
        begin
            if (sck_cnt == cyc_per_half_sck-1) // cyc_per_half_sck ~ (100 MHz/1.44 MHz)/2
            begin
                sck_cnt <= 0;   // reset serial clock counter
                i2si_sck <= ~i2si_sck; // toggle serial clock
            end
        end
    end 
    
endmodule

