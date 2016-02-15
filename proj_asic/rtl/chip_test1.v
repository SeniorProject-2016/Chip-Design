`timescale 1ns / 1ps
`define N 11 // number of test elements

////////////////////////////////////////////////////////////////////////////////
// Module Name:   chip_test1.v
// Create Date:   2/14/2016
// Last Edit:     2/14/16
// Author:        Kevin Cao, 
//
// Description:     First attempt to create test bench for overall chip.
//                      Attempting to just get a working simulation
// 
////////////////////////////////////////////////////////////////////////////////

module chip_test1;

	// General Inputs
	reg                     clk;
	wire                    rst_n;
    
    // I2S Inputs
	reg                     i2si_sck;
	reg                     i2si_ws;
	reg                     i2si_sd;
    
    // I2C Inputs
	reg     [2:0]           i2c_addr_bits;
	reg                     i2c_scl;
	reg                     i2c_sda_in;

	// I2S Outputs
	wire                    i2so_sck;
	wire                    i2so_ws;
	wire                    i2so_sd;
    
    // I2C Outputs
	wire                    i2c_sda_out;
    
    
    // General Internal Variables
    integer                         clk_count;                                                      // clock counter

    
    
    // I2S Internal Variables
    reg     [15:0]                  i2s_test_data [`N-1:0] [0:1];                                       // [Bits Per Word] i2s_test_data [# of entities in test] [Left/Right]
    reg                             i2s_sck_dl;                                                         // serial clock delay
    integer                         i2s_sck_cnt;                                                        // serial clock counter
    integer                         i2s_bit_cnt;                                                        // bit number counter
    integer                         i2s_lr_cnt;                                                         // left right counter
    integer                         i2s_word_cnt;                                                       // word counter
    parameter                       i2s_cyc_per_half_sck = 33;                                          // about (100 MHz / 1.536 MHz)/2
    parameter                       i2s_bit_tc =  15;                                                   // number of bits in a word

    
    // I2C Internal Variables
		reg [3:0] i2c_bit_count;
		reg [2:0] i2c_master_state;
		reg [9:0] i2c_data_byte;
		reg i2c_slave_acknowledgement;
		reg [7:0] i2c_test_data [1023:0];
		reg [11:0] i2c_reg_addr_test_data;
		reg [7:0] i2c_slave_addr_test_data;
		reg [6:0] i2c_count;
    
                                                                                                                        
    // Instantiate the Unit Under Test (UUT)
	chip uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.i2si_sck(i2si_sck), 
		.i2si_ws(i2si_ws), 
		.i2si_sd(i2si_sd), 
		.i2so_sck(i2so_sck), 
		.i2so_ws(i2so_ws), 
		.i2so_sd(i2so_sd), 
		.i2c_addr_bits(i2c_addr_bits), 
		.i2c_scl(i2c_scl), 
		.i2c_sda_in(i2c_sda_in), 
		.i2c_sda_out(i2c_sda_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
        
		i2si_sck = 0;
		i2si_ws = 0;
		i2si_sd = 0;
        
		i2c_addr_bits = 0;
		i2c_scl = 0;
		i2c_sda_in = 0;
        
        
        
        
        // Instantiate I2S Test Data
        
        i2s_test_data [ 0] [0] = 16'hAAAA;                                                                                   
        i2s_test_data [ 0] [1] = 16'hFFFF;                                                                                           
        i2s_test_data [ 1] [0] = 16'hAAAA;                                                                           
        i2s_test_data [ 1] [1] = 16'hCCCC;                                                                                                       
        i2s_test_data [ 2] [0] = 16'hCDD7;                                                                                                   
        i2s_test_data [ 2] [1] = 16'hBABA;                                                                                                   
        i2s_test_data [ 3] [0] = 16'h4444;                                                                                   
        i2s_test_data [ 3] [1] = 16'hAAAA;                                                                               
        i2s_test_data [ 4] [0] = 16'h7398;                                                                                           
        i2s_test_data [ 4] [1] = 16'hFFDD;                                                                               
        i2s_test_data [ 5] [0] = 16'h1111;                                                                           
        i2s_test_data [ 5] [1] = 16'h5982;                                                                               
        i2s_test_data [ 6] [0] = 16'hFFFF;                                                                       
        i2s_test_data [ 6] [1] = 16'hFFFF;                                                                               
        i2s_test_data [ 7] [0] = 16'h1478;                                                                               
        i2s_test_data [ 7] [1] = 16'hA3B9;                                                                                                   
        i2s_test_data [ 8] [0] = 16'h0000;                                                                                   
        i2s_test_data [ 8] [1] = 16'h0000;                                                                                   
        i2s_test_data [ 9] [0] = 16'h99C5;                                                                           
        i2s_test_data [ 9] [1] = 16'h7435;                                                                                               
        i2s_test_data [10] [0] = 16'h69D9;                                                              
        i2s_test_data [10] [1] = 16'hABCD;
        
        // Instantiate I2C Test Data
        i2c_test_data[0] = 8'h0;
		i2c_test_data[1] = 8'h1;
		i2c_test_data[2] = 8'h2;
		i2c_test_data[3] = 8'h3;
		i2c_test_data[4] = 8'h4;
		i2c_test_data[5] = 8'h5;
		i2c_test_data[6] = 8'h6;
		i2c_test_data[7] = 8'h7;
		i2c_test_data[8] = 8'h8;
		i2c_test_data[9] = 8'h9;
		i2c_test_data[10] = 8'h0a;
		i2c_test_data[11] = 8'h0b;
		i2c_test_data[12] = 8'hc;
		i2c_test_data[13] = 8'hd;
		i2c_test_data[14] = 8'he;
		i2c_test_data[15] = 8'hf;
		i2c_test_data[16] = 8'h10;
		i2c_test_data[17] = 8'h11;
		i2c_test_data[18] = 8'h12;
		i2c_test_data[19] = 8'h13;
		i2c_test_data[20] = 8'h14;
		i2c_test_data[21] = 8'h15;
		i2c_test_data[22] = 8'h16;
		i2c_test_data[23] = 8'h17;
		i2c_test_data[24] = 8'h18;
		i2c_test_data[25] = 8'h19;
		i2c_test_data[26] = 8'h1a;
		i2c_test_data[27] = 8'h1b;
		i2c_test_data[28] = 8'h1c;
		i2c_test_data[29] = 8'h1d;
		i2c_test_data[30] = 8'h1e;
		i2c_test_data[31] = 8'h1f;
		i2c_test_data[32] = 8'h20;
		i2c_test_data[33] = 8'h21;
		i2c_test_data[34] = 8'h22;
		i2c_test_data[35] = 8'h23;
		i2c_test_data[36] = 8'h24;
		i2c_test_data[37] = 8'h25;
		i2c_test_data[38] = 8'h26;
		i2c_test_data[39] = 8'h27;
		i2c_test_data[40] = 8'h28;
		i2c_test_data[41] = 8'h29;
		i2c_test_data[42] = 8'h2a;
		i2c_test_data[43] = 8'h2b;
		i2c_test_data[44] = 8'h2c;
		i2c_test_data[45] = 8'h2d;
		i2c_test_data[46] = 8'h2e;
		i2c_test_data[47] = 8'h2f;
		i2c_test_data[48] = 8'h30;
		i2c_test_data[49] = 8'h31;
		i2c_test_data[50] = 8'h32;
		i2c_test_data[51] = 8'h33;
		i2c_test_data[52] = 8'h34;
		i2c_test_data[53] = 8'h35;
		i2c_test_data[54] = 8'h36;
		i2c_test_data[55] = 8'h37;
		i2c_test_data[56] = 8'h38;
		i2c_test_data[57] = 8'h39;
		i2c_test_data[58] = 8'h3a;
		i2c_test_data[59] = 8'h3b;
		i2c_test_data[60] = 8'h3c;
		i2c_test_data[61] = 8'h3d;
		i2c_test_data[62] = 8'h3e;
		i2c_test_data[63] = 8'h3f;
		i2c_test_data[64] = 8'h40;
		i2c_test_data[65] = 8'h41;
		i2c_test_data[66] = 8'h42;
		i2c_test_data[67] = 8'h43;
		i2c_test_data[68] = 8'h44;
		i2c_test_data[69] = 8'h45;
		i2c_test_data[70] = 8'h46;
		i2c_test_data[71] = 8'h47;
		i2c_test_data[72] = 8'h48;
		i2c_test_data[73] = 8'h49;
		i2c_test_data[74] = 8'h4a;
		i2c_test_data[75] = 8'h4b;
		i2c_test_data[76] = 8'h4c;
		i2c_test_data[77] = 8'h4d;
		i2c_test_data[78] = 8'h4e;
		i2c_test_data[79] = 8'h4f;
		i2c_test_data[80] = 8'h50;
		i2c_test_data[81] = 8'h51;
		i2c_test_data[82] = 8'h52;
		i2c_test_data[83] = 8'h53;
		i2c_test_data[84] = 8'h54;
		i2c_test_data[85] = 8'h55;
		i2c_test_data[86] = 8'h56;
		i2c_test_data[87] = 8'h57;
		i2c_test_data[88] = 8'h58;
		i2c_test_data[89] = 8'h59;
		i2c_test_data[90] = 8'h5a;
		i2c_test_data[91] = 8'h5b;
		i2c_test_data[92] = 8'h5c;
		i2c_test_data[93] = 8'h5d;
		i2c_test_data[94] = 8'h5e;
		i2c_test_data[95] = 8'h5f;
		i2c_test_data[96] = 8'h60;
		i2c_test_data[97] = 8'h61;
		i2c_test_data[98] = 8'h62;
		i2c_test_data[99] = 8'h63;
		i2c_test_data[100] = 8'h64;
		i2c_test_data[101] = 8'h65;
		i2c_test_data[102] = 8'h66;
		i2c_test_data[103] = 8'h67;
		i2c_test_data[104] = 8'h68;
		i2c_test_data[105] = 8'h69;
		i2c_test_data[106] = 8'h6a;
		i2c_test_data[107] = 8'h6b;
		i2c_test_data[108] = 8'h6c;
		i2c_test_data[109] = 8'h6d;
		i2c_test_data[110] = 8'h6e;
		i2c_test_data[111] = 8'h6f;
		i2c_test_data[112] = 8'h70;
		i2c_test_data[113] = 8'h71;
		i2c_test_data[114] = 8'h72;
		i2c_test_data[115] = 8'h73;
		i2c_test_data[116] = 8'h74;
		i2c_test_data[117] = 8'h75;
		i2c_test_data[118] = 8'h76;
		i2c_test_data[119] = 8'h77;
		i2c_test_data[120] = 8'h78;
		i2c_test_data[121] = 8'h79;
		i2c_test_data[122] = 8'h7a;
		i2c_test_data[123] = 8'h7b;
		i2c_test_data[124] = 8'h7c;
		i2c_test_data[125] = 8'h7d;
		i2c_test_data[126] = 8'h7e;
		i2c_test_data[127] = 8'h7f;
		i2c_test_data[128] = 8'h80;
		i2c_test_data[129] = 8'h81;
		i2c_test_data[130] = 8'h82;
		i2c_test_data[131] = 8'h83;
		i2c_test_data[132] = 8'h84;
		i2c_test_data[133] = 8'h85;
		i2c_test_data[134] = 8'h86;
		i2c_test_data[135] = 8'h87;
		i2c_test_data[136] = 8'h88;
		i2c_test_data[137] = 8'h89;
		i2c_test_data[138] = 8'h8a;
		i2c_test_data[139] = 8'h8b;
		i2c_test_data[140] = 8'h8c;
		i2c_test_data[141] = 8'h8d;
		i2c_test_data[142] = 8'h8e;
		i2c_test_data[143] = 8'h8f;
		i2c_test_data[144] = 8'h90;
		i2c_test_data[145] = 8'h91;
		i2c_test_data[146] = 8'h92;
		i2c_test_data[147] = 8'h93;
		i2c_test_data[148] = 8'h94;
		i2c_test_data[149] = 8'h95;
		i2c_test_data[150] = 8'h96;
		i2c_test_data[151] = 8'h97;
		i2c_test_data[152] = 8'h98;
		i2c_test_data[153] = 8'h99;
		i2c_test_data[154] = 8'h9a;
		i2c_test_data[155] = 8'h9b;
		i2c_test_data[156] = 8'h9c;
		i2c_test_data[157] = 8'h9d;
		i2c_test_data[158] = 8'h9e;
		i2c_test_data[159] = 8'h9f;
		i2c_test_data[160] = 8'ha0;
		i2c_test_data[161] = 8'ha1;
		i2c_test_data[162] = 8'ha2;
		i2c_test_data[163] = 8'ha3;
		i2c_test_data[164] = 8'ha4;
		i2c_test_data[165] = 8'ha5;
		i2c_test_data[166] = 8'ha6;
		i2c_test_data[167] = 8'ha7;
		i2c_test_data[168] = 8'ha8;
		i2c_test_data[169] = 8'ha9;
		i2c_test_data[170] = 8'haa;
		i2c_test_data[171] = 8'hab;
		i2c_test_data[172] = 8'hac;
		i2c_test_data[173] = 8'had;
		i2c_test_data[174] = 8'hae;
		i2c_test_data[175] = 8'haf;
		i2c_test_data[176] = 8'hb0;
		i2c_test_data[177] = 8'hb1;
		i2c_test_data[178] = 8'hb2;
		i2c_test_data[179] = 8'hb3;
		i2c_test_data[180] = 8'hb4;
		i2c_test_data[181] = 8'hb5;
		i2c_test_data[182] = 8'hb6;
		i2c_test_data[183] = 8'hb7;
		i2c_test_data[184] = 8'hb8;
		i2c_test_data[185] = 8'hb9;
		i2c_test_data[186] = 8'hba;
		i2c_test_data[187] = 8'hbb;
		i2c_test_data[188] = 8'hbc;
		i2c_test_data[189] = 8'hbd;
		i2c_test_data[190] = 8'hbe;
		i2c_test_data[191] = 8'hbf;
		i2c_test_data[192] = 8'hc0;
		i2c_test_data[193] = 8'hc1;
		i2c_test_data[194] = 8'hc2;
		i2c_test_data[195] = 8'hc3;
		i2c_test_data[196] = 8'hc4;
		i2c_test_data[197] = 8'hc5;
		i2c_test_data[198] = 8'hc6;
		i2c_test_data[199] = 8'hc7;
		i2c_test_data[200] = 8'hc8;
		i2c_test_data[201] = 8'hc9;
		i2c_test_data[202] = 8'hca;
		i2c_test_data[203] = 8'hcb;
		i2c_test_data[204] = 8'hcc;
		i2c_test_data[205] = 8'hcd;
		i2c_test_data[206] = 8'hce;
		i2c_test_data[207] = 8'hcf;
		i2c_test_data[208] = 8'hd0;
		i2c_test_data[209] = 8'hd1;
		i2c_test_data[210] = 8'hd2;
		i2c_test_data[211] = 8'hd3;
		i2c_test_data[212] = 8'hd4;
		i2c_test_data[213] = 8'hd5;
		i2c_test_data[214] = 8'hd6;
		i2c_test_data[215] = 8'hd7;
		i2c_test_data[216] = 8'hd8;
		i2c_test_data[217] = 8'hd9;
		i2c_test_data[218] = 8'hda;
		i2c_test_data[219] = 8'hdb;
		i2c_test_data[220] = 8'hdc;
		i2c_test_data[221] = 8'hdd;
		i2c_test_data[222] = 8'hde;
		i2c_test_data[223] = 8'hdf;
		i2c_test_data[224] = 8'he0;
		i2c_test_data[225] = 8'he1;
		i2c_test_data[226] = 8'he2;
		i2c_test_data[227] = 8'he3;
		i2c_test_data[228] = 8'he4;
		i2c_test_data[229] = 8'he5;
		i2c_test_data[230] = 8'he6;
		i2c_test_data[231] = 8'he7;
		i2c_test_data[232] = 8'he8;
		i2c_test_data[233] = 8'he9;
		i2c_test_data[234] = 8'hea;
		i2c_test_data[235] = 8'heb;
		i2c_test_data[236] = 8'hec;
		i2c_test_data[237] = 8'hed;
		i2c_test_data[238] = 8'hee;
		i2c_test_data[239] = 8'hef;
		i2c_test_data[240] = 8'hf0;
		i2c_test_data[241] = 8'hf1;
		i2c_test_data[242] = 8'hf2;
		i2c_test_data[243] = 8'hf3;
		i2c_test_data[244] = 8'hf4;
		i2c_test_data[245] = 8'hf5;
		i2c_test_data[246] = 8'hf6;
		i2c_test_data[247] = 8'hf7;
		i2c_test_data[248] = 8'hf8;
		i2c_test_data[249] = 8'hf9;
		i2c_test_data[250] = 8'hfa;
		i2c_test_data[251] = 8'hfb;
		i2c_test_data[252] = 8'hfc;
		i2c_test_data[253] = 8'hfd;
		i2c_test_data[254] = 8'hfe;
		i2c_test_data[255] = 8'hff;
		i2c_test_data[256] = 8'h0;
		i2c_test_data[257] = 8'h1;
		i2c_test_data[258] = 8'h2;
		i2c_test_data[259] = 8'h3;
		i2c_test_data[260] = 8'h4;
		i2c_test_data[261] = 8'h5;
		i2c_test_data[262] = 8'h6;
		i2c_test_data[263] = 8'h7;
		i2c_test_data[264] = 8'h8;
		i2c_test_data[265] = 8'h9;
		i2c_test_data[266] = 8'ha;
		i2c_test_data[267] = 8'hb;
		i2c_test_data[268] = 8'hc;
		i2c_test_data[269] = 8'hd;
		i2c_test_data[270] = 8'he;
		i2c_test_data[271] = 8'hf;
		i2c_test_data[272] = 8'h10;
		i2c_test_data[273] = 8'h11;
		i2c_test_data[274] = 8'h12;
		i2c_test_data[275] = 8'h13;
		i2c_test_data[276] = 8'h14;
		i2c_test_data[277] = 8'h15;
		i2c_test_data[278] = 8'h16;
		i2c_test_data[279] = 8'h17;
		i2c_test_data[280] = 8'h18;
		i2c_test_data[281] = 8'h19;
		i2c_test_data[282] = 8'h1a;
		i2c_test_data[283] = 8'h1b;
		i2c_test_data[284] = 8'h1c;
		i2c_test_data[285] = 8'h1d;
		i2c_test_data[286] = 8'h1e;
		i2c_test_data[287] = 8'h1f;
		i2c_test_data[288] = 8'h20;
		i2c_test_data[289] = 8'h21;
		i2c_test_data[290] = 8'h22;
		i2c_test_data[291] = 8'h23;
		i2c_test_data[292] = 8'h24;
		i2c_test_data[293] = 8'h25;
		i2c_test_data[294] = 8'h26;
		i2c_test_data[295] = 8'h27;
		i2c_test_data[296] = 8'h28;
		i2c_test_data[297] = 8'h29;
		i2c_test_data[298] = 8'h2a;
		i2c_test_data[299] = 8'h2b;
		i2c_test_data[300] = 8'h2c;
		i2c_test_data[301] = 8'h2d;
		i2c_test_data[302] = 8'h2e;
		i2c_test_data[303] = 8'h2f;
		i2c_test_data[304] = 8'h30;
		i2c_test_data[305] = 8'h31;
		i2c_test_data[306] = 8'h32;
		i2c_test_data[307] = 8'h33;
		i2c_test_data[308] = 8'h34;
		i2c_test_data[309] = 8'h35;
		i2c_test_data[310] = 8'h36;
		i2c_test_data[311] = 8'h37;
		i2c_test_data[312] = 8'h38;
		i2c_test_data[313] = 8'h39;
		i2c_test_data[314] = 8'h3a;
		i2c_test_data[315] = 8'h3b;
		i2c_test_data[316] = 8'h3c;
		i2c_test_data[317] = 8'h3d;
		i2c_test_data[318] = 8'h3e;
		i2c_test_data[319] = 8'h3f;
		i2c_test_data[320] = 8'h40;
		i2c_test_data[321] = 8'h41;
		i2c_test_data[322] = 8'h42;
		i2c_test_data[323] = 8'h43;
		i2c_test_data[324] = 8'h44;
		i2c_test_data[325] = 8'h45;
		i2c_test_data[326] = 8'h46;
		i2c_test_data[327] = 8'h47;
		i2c_test_data[328] = 8'h48;
		i2c_test_data[329] = 8'h49;
		i2c_test_data[330] = 8'h4a;
		i2c_test_data[331] = 8'h4b;
		i2c_test_data[332] = 8'h4c;
		i2c_test_data[333] = 8'h4d;
		i2c_test_data[334] = 8'h4e;
		i2c_test_data[335] = 8'h4f;
		i2c_test_data[336] = 8'h50;
		i2c_test_data[337] = 8'h51;
		i2c_test_data[338] = 8'h52;
		i2c_test_data[339] = 8'h53;
		i2c_test_data[340] = 8'h54;
		i2c_test_data[341] = 8'h55;
		i2c_test_data[342] = 8'h56;
		i2c_test_data[343] = 8'h57;
		i2c_test_data[344] = 8'h58;
		i2c_test_data[345] = 8'h59;
		i2c_test_data[346] = 8'h5a;
		i2c_test_data[347] = 8'h5b;
		i2c_test_data[348] = 8'h5c;
		i2c_test_data[349] = 8'h5d;
		i2c_test_data[350] = 8'h5e;
		i2c_test_data[351] = 8'h5f;
		i2c_test_data[352] = 8'h60;
		i2c_test_data[353] = 8'h61;
		i2c_test_data[354] = 8'h62;
		i2c_test_data[355] = 8'h63;
		i2c_test_data[356] = 8'h64;
		i2c_test_data[357] = 8'h65;
		i2c_test_data[358] = 8'h66;
		i2c_test_data[359] = 8'h67;
		i2c_test_data[360] = 8'h68;
		i2c_test_data[361] = 8'h69;
		i2c_test_data[362] = 8'h6a;
		i2c_test_data[363] = 8'h6b;
		i2c_test_data[364] = 8'h6c;
		i2c_test_data[365] = 8'h6d;
		i2c_test_data[366] = 8'h6e;
		i2c_test_data[367] = 8'h6f;
		i2c_test_data[368] = 8'h70;
		i2c_test_data[369] = 8'h71;
		i2c_test_data[370] = 8'h72;
		i2c_test_data[371] = 8'h73;
		i2c_test_data[372] = 8'h74;
		i2c_test_data[373] = 8'h75;
		i2c_test_data[374] = 8'h76;
		i2c_test_data[375] = 8'h77;
		i2c_test_data[376] = 8'h78;
		i2c_test_data[377] = 8'h79;
		i2c_test_data[378] = 8'h7a;
		i2c_test_data[379] = 8'h7b;
		i2c_test_data[380] = 8'h7c;
		i2c_test_data[381] = 8'h7d;
		i2c_test_data[382] = 8'h7e;
		i2c_test_data[383] = 8'h7f;
		i2c_test_data[384] = 8'h80;
		i2c_test_data[385] = 8'h81;
		i2c_test_data[386] = 8'h82;
		i2c_test_data[387] = 8'h83;
		i2c_test_data[388] = 8'h84;
		i2c_test_data[389] = 8'h85;
		i2c_test_data[390] = 8'h86;
		i2c_test_data[391] = 8'h87;
		i2c_test_data[392] = 8'h88;
		i2c_test_data[393] = 8'h89;
		i2c_test_data[394] = 8'h8a;
		i2c_test_data[395] = 8'h8b;
		i2c_test_data[396] = 8'h8c;
		i2c_test_data[397] = 8'h8d;
		i2c_test_data[398] = 8'h8e;
		i2c_test_data[399] = 8'h8f;
		i2c_test_data[400] = 8'h90;
		i2c_test_data[401] = 8'h91;
		i2c_test_data[402] = 8'h92;
		i2c_test_data[403] = 8'h93;
		i2c_test_data[404] = 8'h94;
		i2c_test_data[405] = 8'h95;
		i2c_test_data[406] = 8'h96;
		i2c_test_data[407] = 8'h97;
		i2c_test_data[408] = 8'h98;
		i2c_test_data[409] = 8'h99;
		i2c_test_data[410] = 8'h9a;
		i2c_test_data[411] = 8'h9b;
		i2c_test_data[412] = 8'h9c;
		i2c_test_data[413] = 8'h9d;
		i2c_test_data[414] = 8'h9e;
		i2c_test_data[415] = 8'h9f;
		i2c_test_data[416] = 8'ha0;
		i2c_test_data[417] = 8'ha1;
		i2c_test_data[418] = 8'ha2;
		i2c_test_data[419] = 8'ha3;
		i2c_test_data[420] = 8'ha4;
		i2c_test_data[421] = 8'ha5;
		i2c_test_data[422] = 8'ha6;
		i2c_test_data[423] = 8'ha7;
		i2c_test_data[424] = 8'ha8;
		i2c_test_data[425] = 8'ha9;
		i2c_test_data[426] = 8'haa;
		i2c_test_data[427] = 8'hab;
		i2c_test_data[428] = 8'hac;
		i2c_test_data[429] = 8'had;
		i2c_test_data[430] = 8'hae;
		i2c_test_data[431] = 8'haf;
		i2c_test_data[432] = 8'hb0;
		i2c_test_data[433] = 8'hb1;
		i2c_test_data[434] = 8'hb2;
		i2c_test_data[435] = 8'hb3;
		i2c_test_data[436] = 8'hb4;
		i2c_test_data[437] = 8'hb5;
		i2c_test_data[438] = 8'hb6;
		i2c_test_data[439] = 8'hb7;
		i2c_test_data[440] = 8'hb8;
		i2c_test_data[441] = 8'hb9;
		i2c_test_data[442] = 8'hba;
		i2c_test_data[443] = 8'hbb;
		i2c_test_data[444] = 8'hbc;
		i2c_test_data[445] = 8'hbd;
		i2c_test_data[446] = 8'hbe;
		i2c_test_data[447] = 8'hbf;
		i2c_test_data[448] = 8'hc0;
		i2c_test_data[449] = 8'hc1;
		i2c_test_data[450] = 8'hc2;
		i2c_test_data[451] = 8'hc3;
		i2c_test_data[452] = 8'hc4;
		i2c_test_data[453] = 8'hc5;
		i2c_test_data[454] = 8'hc6;
		i2c_test_data[455] = 8'hc7;
		i2c_test_data[456] = 8'hc8;
		i2c_test_data[457] = 8'hc9;
		i2c_test_data[458] = 8'hca;
		i2c_test_data[459] = 8'hcb;
		i2c_test_data[460] = 8'hcc;
		i2c_test_data[461] = 8'hcd;
		i2c_test_data[462] = 8'hce;
		i2c_test_data[463] = 8'hcf;
		i2c_test_data[464] = 8'hd0;
		i2c_test_data[465] = 8'hd1;
		i2c_test_data[466] = 8'hd2;
		i2c_test_data[467] = 8'hd3;
		i2c_test_data[468] = 8'hd4;
		i2c_test_data[469] = 8'hd5;
		i2c_test_data[470] = 8'hd6;
		i2c_test_data[471] = 8'hd7;
		i2c_test_data[472] = 8'hd8;
		i2c_test_data[473] = 8'hd9;
		i2c_test_data[474] = 8'hda;
		i2c_test_data[475] = 8'hdb;
		i2c_test_data[476] = 8'hdc;
		i2c_test_data[477] = 8'hdd;
		i2c_test_data[478] = 8'hde;
		i2c_test_data[479] = 8'hdf;
		i2c_test_data[480] = 8'he0;
		i2c_test_data[481] = 8'he1;
		i2c_test_data[482] = 8'he2;
		i2c_test_data[483] = 8'he3;
		i2c_test_data[484] = 8'he4;
		i2c_test_data[485] = 8'he5;
		i2c_test_data[486] = 8'he6;
		i2c_test_data[487] = 8'he7;
		i2c_test_data[488] = 8'he8;
		i2c_test_data[489] = 8'he9;
		i2c_test_data[490] = 8'hea;
		i2c_test_data[491] = 8'heb;
		i2c_test_data[492] = 8'hec;
		i2c_test_data[493] = 8'hed;
		i2c_test_data[494] = 8'hee;
		i2c_test_data[495] = 8'hef;
		i2c_test_data[496] = 8'hf0;
		i2c_test_data[497] = 8'hf1;
		i2c_test_data[498] = 8'hf2;
		i2c_test_data[499] = 8'hf3;
		i2c_test_data[500] = 8'hf4;
		i2c_test_data[501] = 8'hf5;
		i2c_test_data[502] = 8'hf6;
		i2c_test_data[503] = 8'hf7;
		i2c_test_data[504] = 8'hf8;
		i2c_test_data[505] = 8'hf9;
		i2c_test_data[506] = 8'hfa;
		i2c_test_data[507] = 8'hfb;
		i2c_test_data[508] = 8'hfc;
		i2c_test_data[509] = 8'hfd;
		i2c_test_data[510] = 8'hfe;
		i2c_test_data[511] = 8'hff;
		i2c_test_data[512] = 8'h0;
		i2c_test_data[513] = 8'h1;
		i2c_test_data[514] = 8'h2;
		i2c_test_data[515] = 8'h3;
		i2c_test_data[516] = 8'h4;
		i2c_test_data[517] = 8'h5;
		i2c_test_data[518] = 8'h6;
		i2c_test_data[519] = 8'h7;
		i2c_test_data[520] = 8'h8;
		i2c_test_data[521] = 8'h9;
		i2c_test_data[522] = 8'ha;
		i2c_test_data[523] = 8'hb;
		i2c_test_data[524] = 8'hc;
		i2c_test_data[525] = 8'hd;
		i2c_test_data[526] = 8'he;
		i2c_test_data[527] = 8'hf;
		i2c_test_data[528] = 8'h10;
		i2c_test_data[529] = 8'h11;
		i2c_test_data[530] = 8'h12;
		i2c_test_data[531] = 8'h13;
		i2c_test_data[532] = 8'h14;
		i2c_test_data[533] = 8'h15;
		i2c_test_data[534] = 8'h16;
		i2c_test_data[535] = 8'h17;
		i2c_test_data[536] = 8'h18;
		i2c_test_data[537] = 8'h19;
		i2c_test_data[538] = 8'h1a;
		i2c_test_data[539] = 8'h1b;
		i2c_test_data[540] = 8'h1c;
		i2c_test_data[541] = 8'h1d;
		i2c_test_data[542] = 8'h1e;
		i2c_test_data[543] = 8'h1f;
		i2c_test_data[544] = 8'h20;
		i2c_test_data[545] = 8'h21;
		i2c_test_data[546] = 8'h22;
		i2c_test_data[547] = 8'h23;
		i2c_test_data[548] = 8'h24;
		i2c_test_data[549] = 8'h25;
		i2c_test_data[550] = 8'h26;
		i2c_test_data[551] = 8'h27;
		i2c_test_data[552] = 8'h28;
		i2c_test_data[553] = 8'h29;
		i2c_test_data[554] = 8'h2a;
		i2c_test_data[555] = 8'h2b;
		i2c_test_data[556] = 8'h2c;
		i2c_test_data[557] = 8'h2d;
		i2c_test_data[558] = 8'h2e;
		i2c_test_data[559] = 8'h2f;
		i2c_test_data[560] = 8'h30;
		i2c_test_data[561] = 8'h31;
		i2c_test_data[562] = 8'h32;
		i2c_test_data[563] = 8'h33;
		i2c_test_data[564] = 8'h34;
		i2c_test_data[565] = 8'h35;
		i2c_test_data[566] = 8'h36;
		i2c_test_data[567] = 8'h37;
		i2c_test_data[568] = 8'h38;
		i2c_test_data[569] = 8'h39;
		i2c_test_data[570] = 8'h3a;
		i2c_test_data[571] = 8'h3b;
		i2c_test_data[572] = 8'h3c;
		i2c_test_data[573] = 8'h3d;
		i2c_test_data[574] = 8'h3e;
		i2c_test_data[575] = 8'h3f;
		i2c_test_data[576] = 8'h40;
		i2c_test_data[577] = 8'h41;
		i2c_test_data[578] = 8'h42;
		i2c_test_data[579] = 8'h43;
		i2c_test_data[580] = 8'h44;
		i2c_test_data[581] = 8'h45;
		i2c_test_data[582] = 8'h46;
		i2c_test_data[583] = 8'h47;
		i2c_test_data[584] = 8'h48;
		i2c_test_data[585] = 8'h49;
		i2c_test_data[586] = 8'h4a;
		i2c_test_data[587] = 8'h4b;
		i2c_test_data[588] = 8'h4c;
		i2c_test_data[589] = 8'h4d;
		i2c_test_data[590] = 8'h4e;
		i2c_test_data[591] = 8'h4f;
		i2c_test_data[592] = 8'h50;
		i2c_test_data[593] = 8'h51;
		i2c_test_data[594] = 8'h52;
		i2c_test_data[595] = 8'h53;
		i2c_test_data[596] = 8'h54;
		i2c_test_data[597] = 8'h55;
		i2c_test_data[598] = 8'h56;
		i2c_test_data[599] = 8'h57;
		i2c_test_data[600] = 8'h58;
		i2c_test_data[601] = 8'h59;
		i2c_test_data[602] = 8'h5a;
		i2c_test_data[603] = 8'h5b;
		i2c_test_data[604] = 8'h5c;
		i2c_test_data[605] = 8'h5d;
		i2c_test_data[606] = 8'h5e;
		i2c_test_data[607] = 8'h5f;
		i2c_test_data[608] = 8'h60;
		i2c_test_data[609] = 8'h61;
		i2c_test_data[610] = 8'h62;
		i2c_test_data[611] = 8'h63;
		i2c_test_data[612] = 8'h64;
		i2c_test_data[613] = 8'h65;
		i2c_test_data[614] = 8'h66;
		i2c_test_data[615] = 8'h67;
		i2c_test_data[616] = 8'h68;
		i2c_test_data[617] = 8'h69;
		i2c_test_data[618] = 8'h6a;
		i2c_test_data[619] = 8'h6b;
		i2c_test_data[620] = 8'h6c;
		i2c_test_data[621] = 8'h6d;
		i2c_test_data[622] = 8'h6e;
		i2c_test_data[623] = 8'h6f;
		i2c_test_data[624] = 8'h70;
		i2c_test_data[625] = 8'h71;
		i2c_test_data[626] = 8'h72;
		i2c_test_data[627] = 8'h73;
		i2c_test_data[628] = 8'h74;
		i2c_test_data[629] = 8'h75;
		i2c_test_data[630] = 8'h76;
		i2c_test_data[631] = 8'h77;
		i2c_test_data[632] = 8'h78;
		i2c_test_data[633] = 8'h79;
		i2c_test_data[634] = 8'h7a;
		i2c_test_data[635] = 8'h7b;
		i2c_test_data[636] = 8'h7c;
		i2c_test_data[637] = 8'h7d;
		i2c_test_data[638] = 8'h7e;
		i2c_test_data[639] = 8'h7f;
		i2c_test_data[640] = 8'h80;
		i2c_test_data[641] = 8'h81;
		i2c_test_data[642] = 8'h82;
		i2c_test_data[643] = 8'h83;
		i2c_test_data[644] = 8'h84;
		i2c_test_data[645] = 8'h85;
		i2c_test_data[646] = 8'h86;
		i2c_test_data[647] = 8'h87;
		i2c_test_data[648] = 8'h88;
		i2c_test_data[649] = 8'h89;
		i2c_test_data[650] = 8'h8a;
		i2c_test_data[651] = 8'h8b;
		i2c_test_data[652] = 8'h8c;
		i2c_test_data[653] = 8'h8d;
		i2c_test_data[654] = 8'h8e;
		i2c_test_data[655] = 8'h8f;
		i2c_test_data[656] = 8'h90;
		i2c_test_data[657] = 8'h91;
		i2c_test_data[658] = 8'h92;
		i2c_test_data[659] = 8'h93;
		i2c_test_data[660] = 8'h94;
		i2c_test_data[661] = 8'h95;
		i2c_test_data[662] = 8'h96;
		i2c_test_data[663] = 8'h97;
		i2c_test_data[664] = 8'h98;
		i2c_test_data[665] = 8'h99;
		i2c_test_data[666] = 8'h9a;
		i2c_test_data[667] = 8'h9b;
		i2c_test_data[668] = 8'h9c;
		i2c_test_data[669] = 8'h9d;
		i2c_test_data[670] = 8'h9e;
		i2c_test_data[671] = 8'h9f;
		i2c_test_data[672] = 8'ha0;
		i2c_test_data[673] = 8'ha1;
		i2c_test_data[674] = 8'ha2;
		i2c_test_data[675] = 8'ha3;
		i2c_test_data[676] = 8'ha4;
		i2c_test_data[677] = 8'ha5;
		i2c_test_data[678] = 8'ha6;
		i2c_test_data[679] = 8'ha7;
		i2c_test_data[680] = 8'ha8;
		i2c_test_data[681] = 8'ha9;
		i2c_test_data[682] = 8'haa;
		i2c_test_data[683] = 8'hab;
		i2c_test_data[684] = 8'hac;
		i2c_test_data[685] = 8'had;
		i2c_test_data[686] = 8'hae;
		i2c_test_data[687] = 8'haf;
		i2c_test_data[688] = 8'hb0;
		i2c_test_data[689] = 8'hb1;
		i2c_test_data[690] = 8'hb2;
		i2c_test_data[691] = 8'hb3;
		i2c_test_data[692] = 8'hb4;
		i2c_test_data[693] = 8'hb5;
		i2c_test_data[694] = 8'hb6;
		i2c_test_data[695] = 8'hb7;
		i2c_test_data[696] = 8'hb8;
		i2c_test_data[697] = 8'hb9;
		i2c_test_data[698] = 8'hba;
		i2c_test_data[699] = 8'hbb;
		i2c_test_data[700] = 8'hbc;
		i2c_test_data[701] = 8'hbd;
		i2c_test_data[702] = 8'hbe;
		i2c_test_data[703] = 8'hbf;
		i2c_test_data[704] = 8'hc0;
		i2c_test_data[705] = 8'hc1;
		i2c_test_data[706] = 8'hc2;
		i2c_test_data[707] = 8'hc3;
		i2c_test_data[708] = 8'hc4;
		i2c_test_data[709] = 8'hc5;
		i2c_test_data[710] = 8'hc6;
		i2c_test_data[711] = 8'hc7;
		i2c_test_data[712] = 8'hc8;
		i2c_test_data[713] = 8'hc9;
		i2c_test_data[714] = 8'hca;
		i2c_test_data[715] = 8'hcb;
		i2c_test_data[716] = 8'hcc;
		i2c_test_data[717] = 8'hcd;
		i2c_test_data[718] = 8'hce;
		i2c_test_data[719] = 8'hcf;
		i2c_test_data[720] = 8'hd0;
		i2c_test_data[721] = 8'hd1;
		i2c_test_data[722] = 8'hd2;
		i2c_test_data[723] = 8'hd3;
		i2c_test_data[724] = 8'hd4;
		i2c_test_data[725] = 8'hd5;
		i2c_test_data[726] = 8'hd6;
		i2c_test_data[727] = 8'hd7;
		i2c_test_data[728] = 8'hd8;
		i2c_test_data[729] = 8'hd9;
		i2c_test_data[730] = 8'hda;
		i2c_test_data[731] = 8'hdb;
		i2c_test_data[732] = 8'hdc;
		i2c_test_data[733] = 8'hdd;
		i2c_test_data[734] = 8'hde;
		i2c_test_data[735] = 8'hdf;
		i2c_test_data[736] = 8'he0;
		i2c_test_data[737] = 8'he1;
		i2c_test_data[738] = 8'he2;
		i2c_test_data[739] = 8'he3;
		i2c_test_data[740] = 8'he4;
		i2c_test_data[741] = 8'he5;
		i2c_test_data[742] = 8'he6;
		i2c_test_data[743] = 8'he7;
		i2c_test_data[744] = 8'he8;
		i2c_test_data[745] = 8'he9;
		i2c_test_data[746] = 8'hea;
		i2c_test_data[747] = 8'heb;
		i2c_test_data[748] = 8'hec;
		i2c_test_data[749] = 8'hed;
		i2c_test_data[750] = 8'hee;
		i2c_test_data[751] = 8'hef;
		i2c_test_data[752] = 8'hf0;
		i2c_test_data[753] = 8'hf1;
		i2c_test_data[754] = 8'hf2;
		i2c_test_data[755] = 8'hf3;
		i2c_test_data[756] = 8'hf4;
		i2c_test_data[757] = 8'hf5;
		i2c_test_data[758] = 8'hf6;
		i2c_test_data[759] = 8'hf7;
		i2c_test_data[760] = 8'hf8;
		i2c_test_data[761] = 8'hf9;
		i2c_test_data[762] = 8'hfa;
		i2c_test_data[763] = 8'hfb;
		i2c_test_data[764] = 8'hfc;
		i2c_test_data[765] = 8'hfd;
		i2c_test_data[766] = 8'hfe;
		i2c_test_data[767] = 8'hff;
		i2c_test_data[768] = 8'h0;
		i2c_test_data[769] = 8'h1;
		i2c_test_data[770] = 8'h2;
		i2c_test_data[771] = 8'h3;
		i2c_test_data[772] = 8'h4;
		i2c_test_data[773] = 8'h5;
		i2c_test_data[774] = 8'h6;
		i2c_test_data[775] = 8'h7;
		i2c_test_data[776] = 8'h8;
		i2c_test_data[777] = 8'h9;
		i2c_test_data[778] = 8'ha;
		i2c_test_data[779] = 8'hb;
		i2c_test_data[780] = 8'hc;
		i2c_test_data[781] = 8'hd;
		i2c_test_data[782] = 8'he;
		i2c_test_data[783] = 8'hf;
		i2c_test_data[784] = 8'h10;
		i2c_test_data[785] = 8'h11;
		i2c_test_data[786] = 8'h12;
		i2c_test_data[787] = 8'h13;
		i2c_test_data[788] = 8'h14;
		i2c_test_data[789] = 8'h15;
		i2c_test_data[790] = 8'h16;
		i2c_test_data[791] = 8'h17;
		i2c_test_data[792] = 8'h18;
		i2c_test_data[793] = 8'h19;
		i2c_test_data[794] = 8'h1a;
		i2c_test_data[795] = 8'h1b;
		i2c_test_data[796] = 8'h1c;
		i2c_test_data[797] = 8'h1d;
		i2c_test_data[798] = 8'h1e;
		i2c_test_data[799] = 8'h1f;
		i2c_test_data[800] = 8'h20;
		i2c_test_data[801] = 8'h21;
		i2c_test_data[802] = 8'h22;
		i2c_test_data[803] = 8'h23;
		i2c_test_data[804] = 8'h24;
		i2c_test_data[805] = 8'h25;
		i2c_test_data[806] = 8'h26;
		i2c_test_data[807] = 8'h27;
		i2c_test_data[808] = 8'h28;
		i2c_test_data[809] = 8'h29;
		i2c_test_data[810] = 8'h2a;
		i2c_test_data[811] = 8'h2b;
		i2c_test_data[812] = 8'h2c;
		i2c_test_data[813] = 8'h2d;
		i2c_test_data[814] = 8'h2e;
		i2c_test_data[815] = 8'h2f;
		i2c_test_data[816] = 8'h30;
		i2c_test_data[817] = 8'h31;
		i2c_test_data[818] = 8'h32;
		i2c_test_data[819] = 8'h33;
		i2c_test_data[820] = 8'h34;
		i2c_test_data[821] = 8'h35;
		i2c_test_data[822] = 8'h36;
		i2c_test_data[823] = 8'h37;
		i2c_test_data[824] = 8'h38;
		i2c_test_data[825] = 8'h39;
		i2c_test_data[826] = 8'h3a;
		i2c_test_data[827] = 8'h3b;
		i2c_test_data[828] = 8'h3c;
		i2c_test_data[829] = 8'h3d;
		i2c_test_data[830] = 8'h3e;
		i2c_test_data[831] = 8'h3f;
		i2c_test_data[832] = 8'h40;
		i2c_test_data[833] = 8'h41;
		i2c_test_data[834] = 8'h42;
		i2c_test_data[835] = 8'h43;
		i2c_test_data[836] = 8'h44;
		i2c_test_data[837] = 8'h45;
		i2c_test_data[838] = 8'h46;
		i2c_test_data[839] = 8'h47;
		i2c_test_data[840] = 8'h48;
		i2c_test_data[841] = 8'h49;
		i2c_test_data[842] = 8'h4a;
		i2c_test_data[843] = 8'h4b;
		i2c_test_data[844] = 8'h4c;
		i2c_test_data[845] = 8'h4d;
		i2c_test_data[846] = 8'h4e;
		i2c_test_data[847] = 8'h4f;
		i2c_test_data[848] = 8'h50;
		i2c_test_data[849] = 8'h51;
		i2c_test_data[850] = 8'h52;
		i2c_test_data[851] = 8'h53;
		i2c_test_data[852] = 8'h54;
		i2c_test_data[853] = 8'h55;
		i2c_test_data[854] = 8'h56;
		i2c_test_data[855] = 8'h57;
		i2c_test_data[856] = 8'h58;
		i2c_test_data[857] = 8'h59;
		i2c_test_data[858] = 8'h5a;
		i2c_test_data[859] = 8'h5b;
		i2c_test_data[860] = 8'h5c;
		i2c_test_data[861] = 8'h5d;
		i2c_test_data[862] = 8'h5e;
		i2c_test_data[863] = 8'h5f;
		i2c_test_data[864] = 8'h60;
		i2c_test_data[865] = 8'h61;
		i2c_test_data[866] = 8'h62;
		i2c_test_data[867] = 8'h63;
		i2c_test_data[868] = 8'h64;
		i2c_test_data[869] = 8'h65;
		i2c_test_data[870] = 8'h66;
		i2c_test_data[871] = 8'h67;
		i2c_test_data[872] = 8'h68;
		i2c_test_data[873] = 8'h69;
		i2c_test_data[874] = 8'h6a;
		i2c_test_data[875] = 8'h6b;
		i2c_test_data[876] = 8'h6c;
		i2c_test_data[877] = 8'h6d;
		i2c_test_data[878] = 8'h6e;
		i2c_test_data[879] = 8'h6f;
		i2c_test_data[880] = 8'h70;
		i2c_test_data[881] = 8'h71;
		i2c_test_data[882] = 8'h72;
		i2c_test_data[883] = 8'h73;
		i2c_test_data[884] = 8'h74;
		i2c_test_data[885] = 8'h75;
		i2c_test_data[886] = 8'h76;
		i2c_test_data[887] = 8'h77;
		i2c_test_data[888] = 8'h78;
		i2c_test_data[889] = 8'h79;
		i2c_test_data[890] = 8'h7a;
		i2c_test_data[891] = 8'h7b;
		i2c_test_data[892] = 8'h7c;
		i2c_test_data[893] = 8'h7d;
		i2c_test_data[894] = 8'h7e;
		i2c_test_data[895] = 8'h7f;
		i2c_test_data[896] = 8'h80;
		i2c_test_data[897] = 8'h81;
		i2c_test_data[898] = 8'h82;
		i2c_test_data[899] = 8'h83;
		i2c_test_data[900] = 8'h84;
		i2c_test_data[901] = 8'h85;
		i2c_test_data[902] = 8'h86;
		i2c_test_data[903] = 8'h87;
		i2c_test_data[904] = 8'h88;
		i2c_test_data[905] = 8'h89;
		i2c_test_data[906] = 8'h8a;
		i2c_test_data[907] = 8'h8b;
		i2c_test_data[908] = 8'h8c;
		i2c_test_data[909] = 8'h8d;
		i2c_test_data[910] = 8'h8e;
		i2c_test_data[911] = 8'h8f;
		i2c_test_data[912] = 8'h90;
		i2c_test_data[913] = 8'h91;
		i2c_test_data[914] = 8'h92;
		i2c_test_data[915] = 8'h93;
		i2c_test_data[916] = 8'h94;
		i2c_test_data[917] = 8'h95;
		i2c_test_data[918] = 8'h96;
		i2c_test_data[919] = 8'h97;
		i2c_test_data[920] = 8'h98;
		i2c_test_data[921] = 8'h99;
		i2c_test_data[922] = 8'h9a;
		i2c_test_data[923] = 8'h9b;
		i2c_test_data[924] = 8'h9c;
		i2c_test_data[925] = 8'h9d;
		i2c_test_data[926] = 8'h9e;
		i2c_test_data[927] = 8'h9f;
		i2c_test_data[928] = 8'ha0;
		i2c_test_data[929] = 8'ha1;
		i2c_test_data[930] = 8'ha2;
		i2c_test_data[931] = 8'ha3;
		i2c_test_data[932] = 8'ha4;
		i2c_test_data[933] = 8'ha5;
		i2c_test_data[934] = 8'ha6;
		i2c_test_data[935] = 8'ha7;
		i2c_test_data[936] = 8'ha8;
		i2c_test_data[937] = 8'ha9;
		i2c_test_data[938] = 8'haa;
		i2c_test_data[939] = 8'hab;
		i2c_test_data[940] = 8'hac;
		i2c_test_data[941] = 8'had;
		i2c_test_data[942] = 8'hae;
		i2c_test_data[943] = 8'haf;
		i2c_test_data[944] = 8'hb0;
		i2c_test_data[945] = 8'hb1;
		i2c_test_data[946] = 8'hb2;
		i2c_test_data[947] = 8'hb3;
		i2c_test_data[948] = 8'hb4;
		i2c_test_data[949] = 8'hb5;
		i2c_test_data[950] = 8'hb6;
		i2c_test_data[951] = 8'hb7;
		i2c_test_data[952] = 8'hb8;
		i2c_test_data[953] = 8'hb9;
		i2c_test_data[954] = 8'hba;
		i2c_test_data[955] = 8'hbb;
		i2c_test_data[956] = 8'hbc;
		i2c_test_data[957] = 8'hbd;
		i2c_test_data[958] = 8'hbe;
		i2c_test_data[959] = 8'hbf;
		i2c_test_data[960] = 8'hc0;
		i2c_test_data[961] = 8'hc1;
		i2c_test_data[962] = 8'hc2;
		i2c_test_data[963] = 8'hc3;
		i2c_test_data[964] = 8'hc4;
		i2c_test_data[965] = 8'hc5;
		i2c_test_data[966] = 8'hc6;
		i2c_test_data[967] = 8'hc7;
		i2c_test_data[968] = 8'hc8;
		i2c_test_data[969] = 8'hc9;
		i2c_test_data[970] = 8'hca;
		i2c_test_data[971] = 8'hcb;
		i2c_test_data[972] = 8'hcc;
		i2c_test_data[973] = 8'hcd;
		i2c_test_data[974] = 8'hce;
		i2c_test_data[975] = 8'hcf;
		i2c_test_data[976] = 8'hd0;
		i2c_test_data[977] = 8'hd1;
		i2c_test_data[978] = 8'hd2;
		i2c_test_data[979] = 8'hd3;
		i2c_test_data[980] = 8'hd4;
		i2c_test_data[981] = 8'hd5;
		i2c_test_data[982] = 8'hd6;
		i2c_test_data[983] = 8'hd7;
		i2c_test_data[984] = 8'hd8;
		i2c_test_data[985] = 8'hd9;
		i2c_test_data[986] = 8'hda;
		i2c_test_data[987] = 8'hdb;
		i2c_test_data[988] = 8'hdc;
		i2c_test_data[989] = 8'hdd;
		i2c_test_data[990] = 8'hde;
		i2c_test_data[991] = 8'hdf;
		i2c_test_data[992] = 8'he0;
		i2c_test_data[993] = 8'he1;
		i2c_test_data[994] = 8'he2;
		i2c_test_data[995] = 8'he3;
		i2c_test_data[996] = 8'he4;
		i2c_test_data[997] = 8'he5;
		i2c_test_data[998] = 8'he6;
		i2c_test_data[999] = 8'he7;
		i2c_test_data[1000] = 8'he8;
		i2c_test_data[1001] = 8'he9;
		i2c_test_data[1002] = 8'hea;
		i2c_test_data[1003] = 8'heb;
		i2c_test_data[1004] = 8'hec;
		i2c_test_data[1005] = 8'hed;
		i2c_test_data[1006] = 8'hee;
		i2c_test_data[1007] = 8'hef;
		i2c_test_data[1008] = 8'hf0;
		i2c_test_data[1009] = 8'hf1;
		i2c_test_data[1010] = 8'hf2;
		i2c_test_data[1011] = 8'hf3;
		i2c_test_data[1012] = 8'hf4;
		i2c_test_data[1013] = 8'hf5;
		i2c_test_data[1014] = 8'hf6;
		i2c_test_data[1015] = 8'hf7;
		i2c_test_data[1016] = 8'hf8;
		i2c_test_data[1017] = 8'hf9;
		i2c_test_data[1018] = 8'hfa;
		i2c_test_data[1019] = 8'hfb;
		i2c_test_data[1020] = 8'hfc;
		i2c_test_data[1021] = 8'hfd;
		i2c_test_data[1022] = 8'hfe;
		i2c_test_data[1023] = 8'hff;
        
        i2c_reg_addr_test_data = 11'b00000000001;	//11'h400 = start of coefficient registers
		i2c_slave_addr_test_data = 8'b11010101;		//current slave address w/ 3'b101 as i2c_addr_bits


	end
    
    // Generates master clock signal
    always                                                                                                                              
    begin                                                                                               
        clk_count = 0;                                                                                                      
        forever                                                                                                 
        begin                                                                                                           
            #5 clk = ~clk;                                                                          // 100 MHz clock rate (100MHz/10^9)/2
            clk_count = clk_count + 1;                                                                                  
        end                                                                                                                 
    end        
      
    
    // Defines the counters to determine which bit to input into serial data for I2S Interface
    always @ (posedge clk or negedge rst_n)                                                                             
    begin                                                                                                           
        if(!rst_n)                                                                                              
        begin                                                                                                   
            i2s_sck_cnt     <= 0;                                                                       // counts master clock cycles, causes sck to toggle each time it hits i2s_cyc_per_half_sck
            i2s_bit_cnt     <= 0;                                                                       // count number of bits
            i2s_word_cnt    <= 0;                                                                       // count the word number
            i2s_lr_cnt      <= 0;                                                                       // left=0 and right=1
            i2si_sck        <= 0;                                                                      // serial clock
            i2s_sck_dl      <= 0;                                                                       // serial clock delayed by one clock cycle
        end                                                                                                             
        else                                                                                                                
        begin                                                                                                                           
                                                                                                                                
            if (i2s_sck_cnt == i2s_cyc_per_half_sck-1)                                                      // i2s_cyc_per_half_sck ~ (100 MHz/1.44 MHz)/2
            begin                                                                                       
                i2s_sck_cnt <= 0;                                                                       // reset serial clock counter
                i2si_sck <= ~i2si_sck;                                                              // toggle serial clock
            end                                                                                         
            else                                                                                        
                i2s_sck_cnt <= i2s_sck_cnt + 1;                                                             // increment serial clock counter
                                                                                                        
            i2s_sck_dl<=i2si_sck;                                                                       // generate 1 cycle delay of i2si_sck
            if(i2si_sck & ~i2s_sck_dl)                                                                  // on a positive transition of sck...
                                                                                                                   
            begin                                                                                                       
                if (i2s_bit_cnt==i2s_bit_tc)                                                                // i2s_bit_tc = 15
                begin                                                                                               
                    if (i2s_lr_cnt == 1)                                                                // if right
                    begin                                                                                                   
                        i2s_word_cnt<=i2s_word_cnt+1;                                                       // words in the testbench array
                        i2s_lr_cnt<=0;                                                                  // set to left 
                    end                                                                                                                 
                    else                                                                                                    
                        i2s_lr_cnt<=1;                                                                  // set to right
                    i2s_bit_cnt<=0;                                                                     // reset bit counter
                end                                                                                                         
                else                                                                                                                
                    i2s_bit_cnt<=i2s_bit_cnt+1;                                                             // increment bit counter
            end                                                                                                     
        end                                                                                                             
    end      
    
    
    // Set rst_n high after 10 clock cycles
    assign rst_n = !(clk_count < 20);

    // Set which word channel to read from for I2S Interface
    assign inp_ws = ((0<=i2s_bit_cnt& i2s_bit_cnt<=16'd14)&i2s_lr_cnt==1) | ((i2s_bit_cnt==16'd15)&(i2s_lr_cnt==0));  

    // Set which serial data bit to input
    assign inp_sd = i2s_test_data [i2s_word_cnt][i2s_lr_cnt][i2s_bit_tc-i2s_bit_cnt];  
    
    
    
    
    
    
    
    
    
    
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------    
    
    // I2C TEST BENCH PORTION
    
    // From here onward I mostly copied and pasted from i2c_reg_test_automated.v found in the folder "Control Flow Subsystem"
    // I have no idea if this will work with the I2S portion
    
    // Issues that I (Kevin) can identify.
    // 1. Whitely and I (Kevin) define the reset signal differently. Whitely uses reset, I use rst_n
    //      Whitely has reset as a reg, I have it as a wire
    //      Whitely defines reset in intial block, I use an assign statement
    // 2. Master clock has two different rates in Whitely's and my portion. Whitely uses #50, I use #5. Should not be a problem afaik
    // 3. I have no idea if Whitely's portion will affect how my block functions, or vice versa (I believe my block will not change how Whitely's block functions). <<<<< BIGGEST ISSUE :)
    
    
    
    always @ (posedge clk or negedge rst_n)
    begin
            i2c_count = i2c_count + 1;
        if(!rst_n)
        begin
        i2c_count <= 0;
        end
        if (i2c_count == 25)			//reset i2c_count on full scl cycle
        begin
        i2c_count <= 0;
        end  
    end
    
    
    always @ (posedge clk or negedge rst_n)                                                                             
    begin                                                                                                           
        if(!rst_n)                                                                                              
        begin                                                                                                   
            i2c_bit_count<=0;                                                                              
            i2c_master_state<=3'b000;
            i2c_data_byte <= 0; 
            i2c_slave_acknowledgement <= 0;
                                                                                       
        end

        else if ((i2c_master_state == 3'b000) & (i2c_count == 25))  //start condition
        begin
            i2c_sda_in <= 0;
            i2c_master_state <= 3'b001;
        end

        else if ((i2c_master_state == 3'b001))    //serialize slave address and RW bit
        begin
            if(i2c_count == 19)
            begin
                i2c_bit_count <= i2c_bit_count + 1;
                if (i2c_bit_count == 8)
                begin
                    i2c_sda_in <= 1;
                end
                if (i2c_bit_count < 8)
                begin
                    i2c_sda_in <= i2c_slave_addr_test_data [i2c_bit_count];
                end
            end
            
            else if((i2c_count == 6) & (i2c_bit_count == 9))
            begin
                i2c_bit_count <= 0;
                i2c_slave_acknowledgement <= i2c_sda_out;
            end

            else if(i2c_slave_acknowledgement == 1)
            begin
                i2c_slave_acknowledgement <= 0;
                i2c_master_state <= 3'b010;
            end
        end
            
        else if ((i2c_master_state == 3'b010))    //serialize reg address part 1
        begin
            if(i2c_count == 19)
            begin
                i2c_bit_count <= i2c_bit_count + 1;
                if (i2c_bit_count == 8)
                begin
                    i2c_sda_in <= 1;
                end
                if (i2c_bit_count < 8)
                begin
                    i2c_sda_in <= i2c_reg_addr_test_data [i2c_bit_count];
                end
            end
            
            else if((i2c_count == 6) & (i2c_bit_count == 9))
            begin
                i2c_bit_count <= 0;
                i2c_slave_acknowledgement <= i2c_sda_out;
            end

            else if(i2c_slave_acknowledgement == 1)
            begin
                i2c_slave_acknowledgement <= 0;
                i2c_master_state <= 3'b011;
            end
        end

        else if ((i2c_master_state == 3'b011))    //serialize reg address part 2
        begin
            if(i2c_count == 19)
            begin
                i2c_bit_count <= i2c_bit_count + 1;
                if (i2c_bit_count == 8)
                begin
                    i2c_sda_in <= 1;
                end
                if (i2c_bit_count < 8)
                begin
                    i2c_sda_in <= i2c_reg_addr_test_data [i2c_bit_count+8];
                end
            end
            
            else if((i2c_count == 6) & (i2c_bit_count == 9))
            begin
                i2c_bit_count <= 0;
                i2c_slave_acknowledgement <= i2c_sda_out;
            end

            else if(i2c_slave_acknowledgement == 1)
            begin
                i2c_slave_acknowledgement <= 0;
                i2c_master_state <= 3'b100;
            end
            
        end

        else if ((i2c_master_state == 3'b100) & (i2c_data_byte < 1024) & (i2c_slave_addr_test_data [7] == 1))    //serialize data
        begin
    //		if(i2c_count == 19)
    //		begin
    //		i2c_sda_in <= i2c_test_data [i2c_data_byte] [i2c_bit_count];
    //		i2c_bit_count <= i2c_bit_count + 1;
    //			if (i2c_bit_count == 9)
    //			begin
    //			i2c_sda_in <= 1;
    //			end
    //		end
            if(i2c_count == 19)
            begin
                i2c_bit_count <= i2c_bit_count + 1;
                if (i2c_bit_count == 8)
                begin
                    i2c_sda_in <= 1;
                end
                if (i2c_bit_count < 8)
                begin
                    i2c_sda_in <= i2c_test_data [i2c_data_byte] [i2c_bit_count];
                end
            end
            
            else if((i2c_count == 6) & (i2c_bit_count == 9))
            begin
                i2c_bit_count <= 0;
                i2c_slave_acknowledgement <= i2c_sda_out;
            end

            else if(i2c_slave_acknowledgement == 1)
            begin
                i2c_slave_acknowledgement <= 0;
                i2c_data_byte <= i2c_data_byte + 1;
            end
            
            else if (i2c_data_byte == 1023)
            begin
                i2c_data_byte <= 0;
                i2c_master_state <= 3'b101; 		//enter stop condition
                i2c_slave_acknowledgement <= 0;
                i2c_bit_count <= 0;
            end
        end
        
        else if (i2c_master_state == 3'b101)		// stop condition
        begin
            if (i2c_count == 19)
            begin
                i2c_sda_in <= 0;
            end
            
            if (i2c_count == 3)
            begin
                i2c_sda_in <=1;
                i2c_master_state <= 3'b110;
            end
            ////////////////////////////enter read algorithm
        end
    end    
    
      
endmodule

