// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module voicerec_preprocessSound (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        inSound_address0,
        inSound_ce0,
        inSound_we0,
        inSound_d0,
        inSound_q0,
        outSound_address0,
        outSound_ce0,
        outSound_we0,
        outSound_d0
);

parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_st1_fsm_0 = 16'b1;
parameter    ap_ST_st2_fsm_1 = 16'b10;
parameter    ap_ST_st3_fsm_2 = 16'b100;
parameter    ap_ST_st4_fsm_3 = 16'b1000;
parameter    ap_ST_st5_fsm_4 = 16'b10000;
parameter    ap_ST_st6_fsm_5 = 16'b100000;
parameter    ap_ST_st7_fsm_6 = 16'b1000000;
parameter    ap_ST_st8_fsm_7 = 16'b10000000;
parameter    ap_ST_st9_fsm_8 = 16'b100000000;
parameter    ap_ST_st10_fsm_9 = 16'b1000000000;
parameter    ap_ST_st11_fsm_10 = 16'b10000000000;
parameter    ap_ST_st12_fsm_11 = 16'b100000000000;
parameter    ap_ST_st13_fsm_12 = 16'b1000000000000;
parameter    ap_ST_st14_fsm_13 = 16'b10000000000000;
parameter    ap_ST_st15_fsm_14 = 16'b100000000000000;
parameter    ap_ST_st16_fsm_15 = 16'b1000000000000000;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv1_1 = 1'b1;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_const_lv32_6 = 32'b110;
parameter    ap_const_lv32_A = 32'b1010;
parameter    ap_const_lv32_E = 32'b1110;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv32_3 = 32'b11;
parameter    ap_const_lv32_4 = 32'b100;
parameter    ap_const_lv32_5 = 32'b101;
parameter    ap_const_lv32_7 = 32'b111;
parameter    ap_const_lv32_8 = 32'b1000;
parameter    ap_const_lv32_9 = 32'b1001;
parameter    ap_const_lv32_B = 32'b1011;
parameter    ap_const_lv32_C = 32'b1100;
parameter    ap_const_lv32_D = 32'b1101;
parameter    ap_const_lv32_F = 32'b1111;
parameter    ap_const_lv14_0 = 14'b00000000000000;
parameter    ap_const_lv14_3E80 = 14'b11111010000000;
parameter    ap_const_lv15_0 = 15'b000000000000000;
parameter    ap_const_lv64_0 = 64'b0000000000000000000000000000000000000000000000000000000000000000;
parameter    ap_const_lv64_3FC3333333333333 = 64'b11111111000011001100110011001100110011001100110011001100110011;
parameter    ap_const_lv14_1 = 14'b1;
parameter    ap_const_lv32_34 = 32'b110100;
parameter    ap_const_lv32_3E = 32'b111110;
parameter    ap_const_lv11_7FF = 11'b11111111111;
parameter    ap_const_lv52_0 = 52'b0000000000000000000000000000000000000000000000000000;
parameter    ap_const_lv15_7FFF = 15'b111111111111111;
parameter    ap_const_lv32_C8 = 32'b11001000;
parameter    ap_const_lv32_1F40 = 32'b1111101000000;
parameter    ap_const_lv5_2 = 5'b10;
parameter    ap_const_lv5_4 = 5'b100;
parameter    ap_true = 1'b1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [13:0] inSound_address0;
output   inSound_ce0;
output   inSound_we0;
output  [63:0] inSound_d0;
input  [63:0] inSound_q0;
output  [12:0] outSound_address0;
output   outSound_ce0;
output   outSound_we0;
output  [63:0] outSound_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[13:0] inSound_address0;
reg inSound_ce0;
reg inSound_we0;
reg outSound_ce0;
reg outSound_we0;
(* fsm_encoding = "none" *) reg   [15:0] ap_CS_fsm = 16'b1;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_34;
reg   [63:0] reg_219;
reg    ap_sig_cseq_ST_st3_fsm_2;
reg    ap_sig_bdd_60;
reg    ap_sig_cseq_ST_st7_fsm_6;
reg    ap_sig_bdd_67;
reg    ap_sig_cseq_ST_st11_fsm_10;
reg    ap_sig_bdd_75;
reg    ap_sig_cseq_ST_st15_fsm_14;
reg    ap_sig_bdd_83;
wire   [0:0] tmp_fu_225_p2;
reg   [0:0] tmp_reg_626;
reg    ap_sig_cseq_ST_st2_fsm_1;
reg    ap_sig_bdd_93;
wire   [13:0] i_2_fu_231_p2;
reg   [13:0] i_2_reg_630;
wire   [0:0] tmp_20_fu_278_p2;
reg   [0:0] tmp_20_reg_640;
reg    ap_sig_cseq_ST_st4_fsm_3;
reg    ap_sig_bdd_110;
wire   [31:0] i_cast_fu_284_p1;
reg   [31:0] i_cast_reg_644;
reg    ap_sig_cseq_ST_st5_fsm_4;
reg    ap_sig_bdd_119;
wire  signed [14:0] last_2_fu_292_p2;
reg  signed [14:0] last_2_reg_650;
reg    ap_sig_cseq_ST_st6_fsm_5;
reg    ap_sig_bdd_133;
wire   [13:0] tmp_15_fu_302_p1;
reg   [13:0] tmp_15_reg_655;
wire   [0:0] tmp_47_fu_306_p2;
reg   [0:0] tmp_47_reg_660;
wire   [0:0] tmp_25_fu_353_p2;
reg   [0:0] tmp_25_reg_669;
reg    ap_sig_cseq_ST_st8_fsm_7;
reg    ap_sig_bdd_150;
wire  signed [31:0] last_cast_fu_359_p1;
reg  signed [31:0] last_cast_reg_694;
reg    ap_sig_cseq_ST_st9_fsm_8;
reg    ap_sig_bdd_159;
reg   [31:0] j_9_reg_700;
reg    ap_sig_cseq_ST_st10_fsm_9;
reg    ap_sig_bdd_174;
wire   [0:0] tmp_49_fu_366_p2;
wire   [0:0] tmp_50_fu_381_p2;
reg   [0:0] tmp_50_reg_721;
reg    ap_sig_cseq_ST_st12_fsm_11;
reg    ap_sig_bdd_188;
wire   [0:0] tmp_37_fu_439_p2;
reg   [0:0] tmp_37_reg_725;
wire   [0:0] tmp_55_fu_448_p2;
reg   [0:0] tmp_55_reg_730;
wire   [31:0] j_8_fu_498_p2;
reg    ap_sig_cseq_ST_st13_fsm_12;
reg    ap_sig_bdd_205;
wire   [0:0] tmp_57_fu_487_p2;
wire   [31:0] i_6_fu_516_p2;
reg   [31:0] j_1_load_reg_747;
reg    ap_sig_cseq_ST_st14_fsm_13;
reg    ap_sig_bdd_233;
wire   [0:0] demorgan_fu_536_p2;
wire   [31:0] i_5_fu_620_p2;
reg    ap_sig_cseq_ST_st16_fsm_15;
reg    ap_sig_bdd_247;
reg   [13:0] first_reg_123;
reg   [13:0] i_phi_fu_139_p4;
reg   [13:0] i_reg_135;
reg   [13:0] i_1_in_reg_147;
reg   [14:0] last_phi_fu_162_p4;
reg   [14:0] last_reg_158;
reg   [31:0] markBegin_reg_169;
reg   [31:0] j9_reg_179;
reg   [31:0] i_3_reg_188;
wire   [63:0] tmp_s_fu_237_p1;
wire   [63:0] tmp_48_fu_312_p1;
wire  signed [63:0] tmp_52_fu_371_p1;
wire  signed [63:0] tmp_58_fu_493_p1;
wire  signed [63:0] tmp_53_fu_542_p1;
wire  signed [63:0] tmp_56_fu_606_p1;
wire   [0:0] tmp_31_fu_600_p2;
reg   [31:0] j_fu_50;
wire   [31:0] markBegin_1_fu_504_p3;
reg   [31:0] deleteFlag_fu_54;
wire   [31:0] p_deleteFlag_fu_469_p3;
reg   [31:0] count_fu_58;
wire   [31:0] count_1_fu_457_p2;
reg   [31:0] j_1_fu_62;
wire   [31:0] j_7_fu_610_p2;
reg   [63:0] grp_fu_198_p0;
wire   [63:0] ret_i_i_i_i_i_fu_406_p1;
wire   [63:0] ret_i_i_i_i_i2_fu_567_p1;
reg   [63:0] grp_fu_198_p1;
wire   [63:0] inSound_load_to_int_fu_242_p1;
wire   [10:0] tmp_16_fu_246_p4;
wire   [51:0] tmp_14_fu_256_p1;
wire   [0:0] notrhs1_fu_266_p2;
wire   [0:0] notlhs1_fu_260_p2;
wire   [0:0] tmp_18_fu_272_p2;
wire   [0:0] grp_fu_198_p2;
wire   [14:0] i_1_in_cast_fu_288_p1;
wire  signed [31:0] last_2_cast1_fu_298_p1;
wire   [63:0] inSound_load_1_to_int_fu_317_p1;
wire   [10:0] tmp_21_fu_321_p4;
wire   [51:0] tmp_17_fu_331_p1;
wire   [0:0] notrhs2_fu_341_p2;
wire   [0:0] notlhs2_fu_335_p2;
wire   [0:0] tmp_23_fu_347_p2;
wire   [63:0] p_Val2_s_fu_386_p1;
wire   [62:0] tmp_22_fu_390_p1;
wire   [63:0] p_Result_s_fu_398_p3;
wire   [10:0] tmp_34_fu_411_p4;
wire   [51:0] tmp_26_fu_394_p1;
wire   [0:0] notrhs8_fu_427_p2;
wire   [0:0] notlhs7_fu_421_p2;
wire   [0:0] tmp_35_fu_433_p2;
wire   [0:0] tmp_54_fu_463_p2;
wire   [0:0] slt_fu_531_p2;
wire   [0:0] tmp_51_fu_525_p2;
wire   [63:0] p_Val2_1_fu_547_p1;
wire   [62:0] tmp_27_fu_551_p1;
wire   [63:0] p_Result_1_fu_559_p3;
wire   [10:0] tmp_28_fu_572_p4;
wire   [51:0] tmp_32_fu_555_p1;
wire   [0:0] notrhs3_fu_588_p2;
wire   [0:0] notlhs9_fu_582_p2;
wire   [0:0] tmp_29_fu_594_p2;
reg   [4:0] grp_fu_198_opcode;
reg   [15:0] ap_NS_fsm;


voicerec_dcmp_64ns_64ns_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 1 ))
voicerec_dcmp_64ns_64ns_1_1_U1(
    .din0( grp_fu_198_p0 ),
    .din1( grp_fu_198_p1 ),
    .opcode( grp_fu_198_opcode ),
    .dout( grp_fu_198_p2 )
);



/// the current state (ap_CS_fsm) of the state machine. ///
always @ (posedge ap_clk)
begin : ap_ret_ap_CS_fsm
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st12_fsm_11) & (ap_const_lv1_0 == tmp_50_fu_381_p2) & ~(ap_const_lv1_0 == tmp_37_fu_439_p2))) begin
        count_fu_58 <= count_1_fu_457_p2;
    end else if ((((ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_8) & (~(ap_const_lv1_0 == tmp_47_reg_660) | ~(ap_const_lv1_0 == tmp_25_reg_669))) | ((ap_const_logic_1 == ap_sig_cseq_ST_st13_fsm_12) & (((ap_const_lv1_0 == tmp_50_reg_721) & (ap_const_lv1_0 == tmp_37_reg_725) & (ap_const_lv1_0 == tmp_55_reg_730)) | ((ap_const_lv1_0 == tmp_50_reg_721) & (ap_const_lv1_0 == tmp_37_reg_725) & (ap_const_lv1_0 == tmp_57_fu_487_p2)))))) begin
        count_fu_58 <= ap_const_lv32_0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st12_fsm_11) & (ap_const_lv1_0 == tmp_50_fu_381_p2) & ~(ap_const_lv1_0 == tmp_37_fu_439_p2))) begin
        deleteFlag_fu_54 <= p_deleteFlag_fu_469_p3;
    end else if ((((ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_8) & (~(ap_const_lv1_0 == tmp_47_reg_660) | ~(ap_const_lv1_0 == tmp_25_reg_669))) | ((ap_const_logic_1 == ap_sig_cseq_ST_st13_fsm_12) & (((ap_const_lv1_0 == tmp_50_reg_721) & (ap_const_lv1_0 == tmp_37_reg_725) & (ap_const_lv1_0 == tmp_55_reg_730)) | ((ap_const_lv1_0 == tmp_50_reg_721) & (ap_const_lv1_0 == tmp_37_reg_725) & (ap_const_lv1_0 == tmp_57_fu_487_p2)))))) begin
        deleteFlag_fu_54 <= ap_const_lv32_0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st5_fsm_4) & (ap_const_lv1_0 == tmp_20_reg_640) & ~(tmp_reg_626 == ap_const_lv1_0))) begin
        first_reg_123 <= i_2_reg_630;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == ap_const_logic_0))) begin
        first_reg_123 <= ap_const_lv14_0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_8) & (ap_const_lv1_0 == tmp_47_reg_660) & (ap_const_lv1_0 == tmp_25_reg_669))) begin
        i_1_in_reg_147 <= tmp_15_reg_655;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st5_fsm_4) & ((tmp_reg_626 == ap_const_lv1_0) | ~(ap_const_lv1_0 == tmp_20_reg_640)))) begin
        i_1_in_reg_147 <= ap_const_lv14_3E80;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st10_fsm_9) & ~(ap_const_lv1_0 == tmp_49_fu_366_p2))) begin
        i_3_reg_188 <= i_cast_reg_644;
    end else if ((ap_const_logic_1 == ap_sig_cseq_ST_st16_fsm_15)) begin
        i_3_reg_188 <= i_5_fu_620_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st5_fsm_4) & ~(ap_const_lv1_0 == tmp_20_reg_640) & ~(tmp_reg_626 == ap_const_lv1_0))) begin
        i_reg_135 <= first_reg_123;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) & (tmp_fu_225_p2 == ap_const_lv1_0))) begin
        i_reg_135 <= ap_const_lv14_0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st12_fsm_11) & (ap_const_lv1_0 == tmp_50_fu_381_p2) & (ap_const_lv1_0 == tmp_37_fu_439_p2) & ~(ap_const_lv1_0 == tmp_55_fu_448_p2))) begin
        j9_reg_179 <= j_9_reg_700;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st13_fsm_12) & (ap_const_lv1_0 == tmp_50_reg_721) & (ap_const_lv1_0 == tmp_37_reg_725) & ~(ap_const_lv1_0 == tmp_55_reg_730) & ~(ap_const_lv1_0 == tmp_57_fu_487_p2))) begin
        j9_reg_179 <= j_8_fu_498_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st16_fsm_15) & ~(ap_const_lv1_0 == tmp_31_fu_600_p2))) begin
        j_1_fu_62 <= j_7_fu_610_p2;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st10_fsm_9) & ~(ap_const_lv1_0 == tmp_49_fu_366_p2))) begin
        j_1_fu_62 <= ap_const_lv32_0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st13_fsm_12) & ~(ap_const_lv1_0 == tmp_50_reg_721))) begin
        j_fu_50 <= markBegin_1_fu_504_p3;
    end else if ((((ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_8) & (~(ap_const_lv1_0 == tmp_47_reg_660) | ~(ap_const_lv1_0 == tmp_25_reg_669))) | ((ap_const_logic_1 == ap_sig_cseq_ST_st13_fsm_12) & (((ap_const_lv1_0 == tmp_50_reg_721) & (ap_const_lv1_0 == tmp_37_reg_725) & (ap_const_lv1_0 == tmp_55_reg_730)) | ((ap_const_lv1_0 == tmp_50_reg_721) & (ap_const_lv1_0 == tmp_37_reg_725) & (ap_const_lv1_0 == tmp_57_fu_487_p2)))))) begin
        j_fu_50 <= ap_const_lv32_0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_8) & (ap_const_lv1_0 == tmp_47_reg_660) & ~(ap_const_lv1_0 == tmp_25_reg_669))) begin
        last_reg_158 <= last_2_reg_650;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st6_fsm_5) & ~(ap_const_lv1_0 == tmp_47_fu_306_p2))) begin
        last_reg_158 <= ap_const_lv15_0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st13_fsm_12) & ((ap_const_lv1_0 == tmp_55_reg_730) | (ap_const_lv1_0 == tmp_57_fu_487_p2) | ~(ap_const_lv1_0 == tmp_50_reg_721) | ~(ap_const_lv1_0 == tmp_37_reg_725)))) begin
        markBegin_reg_169 <= i_6_fu_516_p2;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_8) & (~(ap_const_lv1_0 == tmp_47_reg_660) | ~(ap_const_lv1_0 == tmp_25_reg_669)))) begin
        markBegin_reg_169 <= i_cast_reg_644;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        i_2_reg_630 <= i_2_fu_231_p2;
        tmp_reg_626 <= tmp_fu_225_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st5_fsm_4) & ((tmp_reg_626 == ap_const_lv1_0) | ~(ap_const_lv1_0 == tmp_20_reg_640)))) begin
        i_cast_reg_644[13 : 0] <= i_cast_fu_284_p1[13 : 0];
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st14_fsm_13)) begin
        j_1_load_reg_747 <= j_1_fu_62;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st10_fsm_9)) begin
        j_9_reg_700 <= j_fu_50;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st6_fsm_5)) begin
        last_2_reg_650 <= last_2_fu_292_p2;
        tmp_15_reg_655 <= tmp_15_fu_302_p1;
        tmp_47_reg_660 <= tmp_47_fu_306_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_8) & (~(ap_const_lv1_0 == tmp_47_reg_660) | ~(ap_const_lv1_0 == tmp_25_reg_669)))) begin
        last_cast_reg_694 <= last_cast_fu_359_p1;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st3_fsm_2) | (ap_const_logic_1 == ap_sig_cseq_ST_st7_fsm_6) | (ap_const_logic_1 == ap_sig_cseq_ST_st11_fsm_10) | (ap_const_logic_1 == ap_sig_cseq_ST_st15_fsm_14))) begin
        reg_219 <= inSound_q0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st4_fsm_3)) begin
        tmp_20_reg_640 <= tmp_20_fu_278_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st8_fsm_7)) begin
        tmp_25_reg_669 <= tmp_25_fu_353_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st12_fsm_11)) begin
        tmp_37_reg_725 <= tmp_37_fu_439_p2;
        tmp_50_reg_721 <= tmp_50_fu_381_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st12_fsm_11) & (ap_const_lv1_0 == tmp_50_fu_381_p2) & (ap_const_lv1_0 == tmp_37_fu_439_p2))) begin
        tmp_55_reg_730 <= tmp_55_fu_448_p2;
    end
end

/// ap_done assign process. ///
always @ (ap_start or ap_sig_cseq_ST_st1_fsm_0 or ap_sig_cseq_ST_st14_fsm_13 or demorgan_fu_536_p2)
begin
    if (((~(ap_const_logic_1 == ap_start) & (ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0)) | ((ap_const_logic_1 == ap_sig_cseq_ST_st14_fsm_13) & ~(ap_const_lv1_0 == demorgan_fu_536_p2)))) begin
        ap_done = ap_const_logic_1;
    end else begin
        ap_done = ap_const_logic_0;
    end
end

/// ap_idle assign process. ///
always @ (ap_start or ap_sig_cseq_ST_st1_fsm_0)
begin
    if ((~(ap_const_logic_1 == ap_start) & (ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0))) begin
        ap_idle = ap_const_logic_1;
    end else begin
        ap_idle = ap_const_logic_0;
    end
end

/// ap_ready assign process. ///
always @ (ap_sig_cseq_ST_st14_fsm_13 or demorgan_fu_536_p2)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st14_fsm_13) & ~(ap_const_lv1_0 == demorgan_fu_536_p2))) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st10_fsm_9 assign process. ///
always @ (ap_sig_bdd_174)
begin
    if (ap_sig_bdd_174) begin
        ap_sig_cseq_ST_st10_fsm_9 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st10_fsm_9 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st11_fsm_10 assign process. ///
always @ (ap_sig_bdd_75)
begin
    if (ap_sig_bdd_75) begin
        ap_sig_cseq_ST_st11_fsm_10 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st11_fsm_10 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st12_fsm_11 assign process. ///
always @ (ap_sig_bdd_188)
begin
    if (ap_sig_bdd_188) begin
        ap_sig_cseq_ST_st12_fsm_11 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st12_fsm_11 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st13_fsm_12 assign process. ///
always @ (ap_sig_bdd_205)
begin
    if (ap_sig_bdd_205) begin
        ap_sig_cseq_ST_st13_fsm_12 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st13_fsm_12 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st14_fsm_13 assign process. ///
always @ (ap_sig_bdd_233)
begin
    if (ap_sig_bdd_233) begin
        ap_sig_cseq_ST_st14_fsm_13 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st14_fsm_13 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st15_fsm_14 assign process. ///
always @ (ap_sig_bdd_83)
begin
    if (ap_sig_bdd_83) begin
        ap_sig_cseq_ST_st15_fsm_14 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st15_fsm_14 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st16_fsm_15 assign process. ///
always @ (ap_sig_bdd_247)
begin
    if (ap_sig_bdd_247) begin
        ap_sig_cseq_ST_st16_fsm_15 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st16_fsm_15 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st1_fsm_0 assign process. ///
always @ (ap_sig_bdd_34)
begin
    if (ap_sig_bdd_34) begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st2_fsm_1 assign process. ///
always @ (ap_sig_bdd_93)
begin
    if (ap_sig_bdd_93) begin
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st3_fsm_2 assign process. ///
always @ (ap_sig_bdd_60)
begin
    if (ap_sig_bdd_60) begin
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st4_fsm_3 assign process. ///
always @ (ap_sig_bdd_110)
begin
    if (ap_sig_bdd_110) begin
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st5_fsm_4 assign process. ///
always @ (ap_sig_bdd_119)
begin
    if (ap_sig_bdd_119) begin
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st6_fsm_5 assign process. ///
always @ (ap_sig_bdd_133)
begin
    if (ap_sig_bdd_133) begin
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st7_fsm_6 assign process. ///
always @ (ap_sig_bdd_67)
begin
    if (ap_sig_bdd_67) begin
        ap_sig_cseq_ST_st7_fsm_6 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st7_fsm_6 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st8_fsm_7 assign process. ///
always @ (ap_sig_bdd_150)
begin
    if (ap_sig_bdd_150) begin
        ap_sig_cseq_ST_st8_fsm_7 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st8_fsm_7 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st9_fsm_8 assign process. ///
always @ (ap_sig_bdd_159)
begin
    if (ap_sig_bdd_159) begin
        ap_sig_cseq_ST_st9_fsm_8 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st9_fsm_8 = ap_const_logic_0;
    end
end

/// grp_fu_198_opcode assign process. ///
always @ (ap_sig_cseq_ST_st4_fsm_3 or ap_sig_cseq_ST_st8_fsm_7 or ap_sig_cseq_ST_st12_fsm_11 or ap_sig_cseq_ST_st16_fsm_15)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st12_fsm_11)) begin
        grp_fu_198_opcode = ap_const_lv5_4;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st4_fsm_3) | (ap_const_logic_1 == ap_sig_cseq_ST_st8_fsm_7) | (ap_const_logic_1 == ap_sig_cseq_ST_st16_fsm_15))) begin
        grp_fu_198_opcode = ap_const_lv5_2;
    end else begin
        grp_fu_198_opcode = 'bx;
    end
end

/// grp_fu_198_p0 assign process. ///
always @ (reg_219 or ap_sig_cseq_ST_st4_fsm_3 or ap_sig_cseq_ST_st8_fsm_7 or ap_sig_cseq_ST_st12_fsm_11 or ap_sig_cseq_ST_st16_fsm_15 or ret_i_i_i_i_i_fu_406_p1 or ret_i_i_i_i_i2_fu_567_p1)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st16_fsm_15)) begin
        grp_fu_198_p0 = ret_i_i_i_i_i2_fu_567_p1;
    end else if ((ap_const_logic_1 == ap_sig_cseq_ST_st12_fsm_11)) begin
        grp_fu_198_p0 = ret_i_i_i_i_i_fu_406_p1;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st4_fsm_3) | (ap_const_logic_1 == ap_sig_cseq_ST_st8_fsm_7))) begin
        grp_fu_198_p0 = reg_219;
    end else begin
        grp_fu_198_p0 = 'bx;
    end
end

/// grp_fu_198_p1 assign process. ///
always @ (ap_sig_cseq_ST_st4_fsm_3 or ap_sig_cseq_ST_st8_fsm_7 or ap_sig_cseq_ST_st12_fsm_11 or ap_sig_cseq_ST_st16_fsm_15)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st16_fsm_15)) begin
        grp_fu_198_p1 = ap_const_lv64_0;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st4_fsm_3) | (ap_const_logic_1 == ap_sig_cseq_ST_st8_fsm_7) | (ap_const_logic_1 == ap_sig_cseq_ST_st12_fsm_11))) begin
        grp_fu_198_p1 = ap_const_lv64_3FC3333333333333;
    end else begin
        grp_fu_198_p1 = 'bx;
    end
end

/// i_phi_fu_139_p4 assign process. ///
always @ (tmp_reg_626 or tmp_20_reg_640 or ap_sig_cseq_ST_st5_fsm_4 or first_reg_123 or i_reg_135)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st5_fsm_4) & ~(ap_const_lv1_0 == tmp_20_reg_640) & ~(tmp_reg_626 == ap_const_lv1_0))) begin
        i_phi_fu_139_p4 = first_reg_123;
    end else begin
        i_phi_fu_139_p4 = i_reg_135;
    end
end

/// inSound_address0 assign process. ///
always @ (ap_sig_cseq_ST_st2_fsm_1 or ap_sig_cseq_ST_st6_fsm_5 or ap_sig_cseq_ST_st10_fsm_9 or ap_sig_cseq_ST_st13_fsm_12 or ap_sig_cseq_ST_st14_fsm_13 or tmp_s_fu_237_p1 or tmp_48_fu_312_p1 or tmp_52_fu_371_p1 or tmp_58_fu_493_p1 or tmp_53_fu_542_p1)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st13_fsm_12)) begin
        inSound_address0 = tmp_58_fu_493_p1;
    end else if ((ap_const_logic_1 == ap_sig_cseq_ST_st14_fsm_13)) begin
        inSound_address0 = tmp_53_fu_542_p1;
    end else if ((ap_const_logic_1 == ap_sig_cseq_ST_st10_fsm_9)) begin
        inSound_address0 = tmp_52_fu_371_p1;
    end else if ((ap_const_logic_1 == ap_sig_cseq_ST_st6_fsm_5)) begin
        inSound_address0 = tmp_48_fu_312_p1;
    end else if ((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        inSound_address0 = tmp_s_fu_237_p1;
    end else begin
        inSound_address0 = 'bx;
    end
end

/// inSound_ce0 assign process. ///
always @ (ap_sig_cseq_ST_st2_fsm_1 or ap_sig_cseq_ST_st6_fsm_5 or ap_sig_cseq_ST_st10_fsm_9 or ap_sig_cseq_ST_st13_fsm_12 or ap_sig_cseq_ST_st14_fsm_13)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) | (ap_const_logic_1 == ap_sig_cseq_ST_st6_fsm_5) | (ap_const_logic_1 == ap_sig_cseq_ST_st10_fsm_9) | (ap_const_logic_1 == ap_sig_cseq_ST_st13_fsm_12) | (ap_const_logic_1 == ap_sig_cseq_ST_st14_fsm_13))) begin
        inSound_ce0 = ap_const_logic_1;
    end else begin
        inSound_ce0 = ap_const_logic_0;
    end
end

/// inSound_we0 assign process. ///
always @ (tmp_50_reg_721 or tmp_37_reg_725 or tmp_55_reg_730 or ap_sig_cseq_ST_st13_fsm_12 or tmp_57_fu_487_p2)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st13_fsm_12) & (ap_const_lv1_0 == tmp_50_reg_721) & (ap_const_lv1_0 == tmp_37_reg_725) & ~(ap_const_lv1_0 == tmp_55_reg_730) & ~(ap_const_lv1_0 == tmp_57_fu_487_p2))) begin
        inSound_we0 = ap_const_logic_1;
    end else begin
        inSound_we0 = ap_const_logic_0;
    end
end

/// last_phi_fu_162_p4 assign process. ///
always @ (last_2_reg_650 or tmp_47_reg_660 or tmp_25_reg_669 or ap_sig_cseq_ST_st9_fsm_8 or last_reg_158)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_8) & (ap_const_lv1_0 == tmp_47_reg_660) & ~(ap_const_lv1_0 == tmp_25_reg_669))) begin
        last_phi_fu_162_p4 = last_2_reg_650;
    end else begin
        last_phi_fu_162_p4 = last_reg_158;
    end
end

/// outSound_ce0 assign process. ///
always @ (ap_sig_cseq_ST_st16_fsm_15)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st16_fsm_15)) begin
        outSound_ce0 = ap_const_logic_1;
    end else begin
        outSound_ce0 = ap_const_logic_0;
    end
end

/// outSound_we0 assign process. ///
always @ (ap_sig_cseq_ST_st16_fsm_15 or tmp_31_fu_600_p2)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st16_fsm_15) & ~(ap_const_lv1_0 == tmp_31_fu_600_p2))) begin
        outSound_we0 = ap_const_logic_1;
    end else begin
        outSound_we0 = ap_const_logic_0;
    end
end
/// the next state (ap_NS_fsm) of the state machine. ///
always @ (ap_start or ap_CS_fsm or tmp_fu_225_p2 or tmp_reg_626 or tmp_20_reg_640 or tmp_47_fu_306_p2 or tmp_47_reg_660 or tmp_25_reg_669 or tmp_49_fu_366_p2 or tmp_50_reg_721 or tmp_37_reg_725 or tmp_55_reg_730 or tmp_57_fu_487_p2 or demorgan_fu_536_p2)
begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
        begin
            if (~(ap_start == ap_const_logic_0)) begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_st2_fsm_1 : 
        begin
            if ((tmp_fu_225_p2 == ap_const_lv1_0)) begin
                ap_NS_fsm = ap_ST_st5_fsm_4;
            end else begin
                ap_NS_fsm = ap_ST_st3_fsm_2;
            end
        end
        ap_ST_st3_fsm_2 : 
        begin
            ap_NS_fsm = ap_ST_st4_fsm_3;
        end
        ap_ST_st4_fsm_3 : 
        begin
            ap_NS_fsm = ap_ST_st5_fsm_4;
        end
        ap_ST_st5_fsm_4 : 
        begin
            if (((tmp_reg_626 == ap_const_lv1_0) | ~(ap_const_lv1_0 == tmp_20_reg_640))) begin
                ap_NS_fsm = ap_ST_st6_fsm_5;
            end else begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end
        end
        ap_ST_st6_fsm_5 : 
        begin
            if (~(ap_const_lv1_0 == tmp_47_fu_306_p2)) begin
                ap_NS_fsm = ap_ST_st9_fsm_8;
            end else begin
                ap_NS_fsm = ap_ST_st7_fsm_6;
            end
        end
        ap_ST_st7_fsm_6 : 
        begin
            ap_NS_fsm = ap_ST_st8_fsm_7;
        end
        ap_ST_st8_fsm_7 : 
        begin
            ap_NS_fsm = ap_ST_st9_fsm_8;
        end
        ap_ST_st9_fsm_8 : 
        begin
            if ((~(ap_const_lv1_0 == tmp_47_reg_660) | ~(ap_const_lv1_0 == tmp_25_reg_669))) begin
                ap_NS_fsm = ap_ST_st10_fsm_9;
            end else begin
                ap_NS_fsm = ap_ST_st6_fsm_5;
            end
        end
        ap_ST_st10_fsm_9 : 
        begin
            if (~(ap_const_lv1_0 == tmp_49_fu_366_p2)) begin
                ap_NS_fsm = ap_ST_st14_fsm_13;
            end else begin
                ap_NS_fsm = ap_ST_st11_fsm_10;
            end
        end
        ap_ST_st11_fsm_10 : 
        begin
            ap_NS_fsm = ap_ST_st12_fsm_11;
        end
        ap_ST_st12_fsm_11 : 
        begin
            ap_NS_fsm = ap_ST_st13_fsm_12;
        end
        ap_ST_st13_fsm_12 : 
        begin
            if (((ap_const_lv1_0 == tmp_55_reg_730) | (ap_const_lv1_0 == tmp_57_fu_487_p2) | ~(ap_const_lv1_0 == tmp_50_reg_721) | ~(ap_const_lv1_0 == tmp_37_reg_725))) begin
                ap_NS_fsm = ap_ST_st10_fsm_9;
            end else begin
                ap_NS_fsm = ap_ST_st13_fsm_12;
            end
        end
        ap_ST_st14_fsm_13 : 
        begin
            if (~(ap_const_lv1_0 == demorgan_fu_536_p2)) begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end else begin
                ap_NS_fsm = ap_ST_st15_fsm_14;
            end
        end
        ap_ST_st15_fsm_14 : 
        begin
            ap_NS_fsm = ap_ST_st16_fsm_15;
        end
        ap_ST_st16_fsm_15 : 
        begin
            ap_NS_fsm = ap_ST_st14_fsm_13;
        end
        default : 
        begin
            ap_NS_fsm = 'bx;
        end
    endcase
end


/// ap_sig_bdd_110 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_110 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_3]);
end

/// ap_sig_bdd_119 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_119 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_4]);
end

/// ap_sig_bdd_133 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_133 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_5]);
end

/// ap_sig_bdd_150 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_150 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_7]);
end

/// ap_sig_bdd_159 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_159 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_8]);
end

/// ap_sig_bdd_174 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_174 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_9]);
end

/// ap_sig_bdd_188 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_188 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_B]);
end

/// ap_sig_bdd_205 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_205 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_C]);
end

/// ap_sig_bdd_233 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_233 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_D]);
end

/// ap_sig_bdd_247 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_247 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_F]);
end

/// ap_sig_bdd_34 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_34 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end

/// ap_sig_bdd_60 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_60 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_2]);
end

/// ap_sig_bdd_67 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_67 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_6]);
end

/// ap_sig_bdd_75 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_75 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_A]);
end

/// ap_sig_bdd_83 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_83 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_E]);
end

/// ap_sig_bdd_93 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_93 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end
assign count_1_fu_457_p2 = (count_fu_58 + ap_const_lv32_1);
assign demorgan_fu_536_p2 = (slt_fu_531_p2 | tmp_51_fu_525_p2);
assign i_1_in_cast_fu_288_p1 = i_1_in_reg_147;
assign i_2_fu_231_p2 = (first_reg_123 + ap_const_lv14_1);
assign i_5_fu_620_p2 = (i_3_reg_188 + ap_const_lv32_1);
assign i_6_fu_516_p2 = (markBegin_reg_169 + ap_const_lv32_1);
assign i_cast_fu_284_p1 = i_phi_fu_139_p4;
assign inSound_d0 = ap_const_lv64_0;
assign inSound_load_1_to_int_fu_317_p1 = reg_219;
assign inSound_load_to_int_fu_242_p1 = reg_219;
assign j_7_fu_610_p2 = (j_1_load_reg_747 + ap_const_lv32_1);
assign j_8_fu_498_p2 = (j9_reg_179 + ap_const_lv32_1);
assign last_2_cast1_fu_298_p1 = last_2_fu_292_p2;
assign last_2_fu_292_p2 = ($signed(ap_const_lv15_7FFF) + $signed(i_1_in_cast_fu_288_p1));
assign last_cast_fu_359_p1 = $signed(last_phi_fu_162_p4);
assign markBegin_1_fu_504_p3 = ((tmp_37_reg_725[0:0]===1'b1)? markBegin_reg_169: ap_const_lv32_0);
assign notlhs1_fu_260_p2 = (tmp_16_fu_246_p4 != ap_const_lv11_7FF? 1'b1: 1'b0);
assign notlhs2_fu_335_p2 = (tmp_21_fu_321_p4 != ap_const_lv11_7FF? 1'b1: 1'b0);
assign notlhs7_fu_421_p2 = (tmp_34_fu_411_p4 != ap_const_lv11_7FF? 1'b1: 1'b0);
assign notlhs9_fu_582_p2 = (tmp_28_fu_572_p4 != ap_const_lv11_7FF? 1'b1: 1'b0);
assign notrhs1_fu_266_p2 = (tmp_14_fu_256_p1 == ap_const_lv52_0? 1'b1: 1'b0);
assign notrhs2_fu_341_p2 = (tmp_17_fu_331_p1 == ap_const_lv52_0? 1'b1: 1'b0);
assign notrhs3_fu_588_p2 = (tmp_32_fu_555_p1 == ap_const_lv52_0? 1'b1: 1'b0);
assign notrhs8_fu_427_p2 = (tmp_26_fu_394_p1 == ap_const_lv52_0? 1'b1: 1'b0);
assign outSound_address0 = tmp_56_fu_606_p1;
assign outSound_d0 = reg_219;
assign p_Result_1_fu_559_p3 = {{ap_const_lv1_0}, {tmp_27_fu_551_p1}};
assign p_Result_s_fu_398_p3 = {{ap_const_lv1_0}, {tmp_22_fu_390_p1}};
assign p_Val2_1_fu_547_p1 = reg_219;
assign p_Val2_s_fu_386_p1 = reg_219;
assign p_deleteFlag_fu_469_p3 = ((tmp_54_fu_463_p2[0:0]===1'b1)? ap_const_lv32_1: deleteFlag_fu_54);
assign ret_i_i_i_i_i2_fu_567_p1 = p_Result_1_fu_559_p3;
assign ret_i_i_i_i_i_fu_406_p1 = p_Result_s_fu_398_p3;
assign slt_fu_531_p2 = ($signed(last_cast_reg_694) < $signed(i_3_reg_188)? 1'b1: 1'b0);
assign tmp_14_fu_256_p1 = inSound_load_to_int_fu_242_p1[51:0];
assign tmp_15_fu_302_p1 = last_2_fu_292_p2[13:0];
assign tmp_16_fu_246_p4 = {{inSound_load_to_int_fu_242_p1[ap_const_lv32_3E : ap_const_lv32_34]}};
assign tmp_17_fu_331_p1 = inSound_load_1_to_int_fu_317_p1[51:0];
assign tmp_18_fu_272_p2 = (notrhs1_fu_266_p2 | notlhs1_fu_260_p2);
assign tmp_20_fu_278_p2 = (tmp_18_fu_272_p2 & grp_fu_198_p2);
assign tmp_21_fu_321_p4 = {{inSound_load_1_to_int_fu_317_p1[ap_const_lv32_3E : ap_const_lv32_34]}};
assign tmp_22_fu_390_p1 = p_Val2_s_fu_386_p1[62:0];
assign tmp_23_fu_347_p2 = (notrhs2_fu_341_p2 | notlhs2_fu_335_p2);
assign tmp_25_fu_353_p2 = (tmp_23_fu_347_p2 & grp_fu_198_p2);
assign tmp_26_fu_394_p1 = p_Val2_s_fu_386_p1[51:0];
assign tmp_27_fu_551_p1 = p_Val2_1_fu_547_p1[62:0];
assign tmp_28_fu_572_p4 = {{p_Val2_1_fu_547_p1[ap_const_lv32_3E : ap_const_lv32_34]}};
assign tmp_29_fu_594_p2 = (notrhs3_fu_588_p2 | notlhs9_fu_582_p2);
assign tmp_31_fu_600_p2 = (tmp_29_fu_594_p2 & grp_fu_198_p2);
assign tmp_32_fu_555_p1 = p_Val2_1_fu_547_p1[51:0];
assign tmp_34_fu_411_p4 = {{p_Val2_s_fu_386_p1[ap_const_lv32_3E : ap_const_lv32_34]}};
assign tmp_35_fu_433_p2 = (notrhs8_fu_427_p2 | notlhs7_fu_421_p2);
assign tmp_37_fu_439_p2 = (tmp_35_fu_433_p2 & grp_fu_198_p2);
assign tmp_47_fu_306_p2 = (i_1_in_reg_147 == ap_const_lv14_0? 1'b1: 1'b0);
assign tmp_48_fu_312_p1 = $unsigned(last_2_cast1_fu_298_p1);
assign tmp_49_fu_366_p2 = ($signed(markBegin_reg_169) > $signed(last_cast_reg_694)? 1'b1: 1'b0);
assign tmp_50_fu_381_p2 = (j_9_reg_700 == ap_const_lv32_0? 1'b1: 1'b0);
assign tmp_51_fu_525_p2 = (j_1_fu_62 == ap_const_lv32_1F40? 1'b1: 1'b0);
assign tmp_52_fu_371_p1 = $signed(markBegin_reg_169);
assign tmp_53_fu_542_p1 = $signed(i_3_reg_188);
assign tmp_54_fu_463_p2 = (count_1_fu_457_p2 == ap_const_lv32_C8? 1'b1: 1'b0);
assign tmp_55_fu_448_p2 = (deleteFlag_fu_54 == ap_const_lv32_1? 1'b1: 1'b0);
assign tmp_56_fu_606_p1 = $signed(j_1_load_reg_747);
assign tmp_57_fu_487_p2 = ($signed(j9_reg_179) < $signed(markBegin_reg_169)? 1'b1: 1'b0);
assign tmp_58_fu_493_p1 = $signed(j9_reg_179);
assign tmp_fu_225_p2 = (first_reg_123 < ap_const_lv14_3E80? 1'b1: 1'b0);
assign tmp_s_fu_237_p1 = first_reg_123;
always @ (posedge ap_clk)
begin
    i_cast_reg_644[31:14] <= 18'b000000000000000000;
end



endmodule //voicerec_preprocessSound

