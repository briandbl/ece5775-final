// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __voicerec_FFT_cosVec_H__
#define __voicerec_FFT_cosVec_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct voicerec_FFT_cosVec_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 64;
  static const unsigned AddressRange = 256;
  static const unsigned AddressWidth = 8;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(voicerec_FFT_cosVec_ram) {
        ram[0] = "0b0011111111110000000000000000000000000000000000000000000000000000";
        ram[1] = "0b1011111111110000000000000000000000000000000000000000000000000000";
        ram[2] = "0b1011111111100000000000000000000000000000000000000000000000000000";
        ram[3] = "0b0011110010010001101001100001111111000111001001011000010110111100";
        ram[4] = "0b0011111111010011110001101111101111010010011100111101010110111011";
        ram[5] = "0b0011111111100000000000000000000000000000000000000000000000000000";
        ram[6] = "0b0011111111100011111100111010000101001100111011000100000111011101";
        ram[7] = "0b0011111111100110101000001010010100100110100101011001010111111111";
        ram[8] = "0b0011111111101000100000110110011001010001011011011011000011011110";
        ram[9] = "0b0011111111101001111000110111110111101001001110011110101011011101";
        ram[10] = "0b0011111111101010111010111000010100011110101110000101000111101100";
        ram[11] = "0b0011111111101011101101101000010010001011111010110101101100101101";
        ram[12] = "0b0011111111101100010101011011000000110101101111010101000100101111";
        ram[13] = "0b0011111111101100110101001011111100001001100101011010101011111000";
        ram[14] = "0b0011111111101101001110111100110100110101101010000101100001111001";
        ram[15] = "0b0011111111101101100100000110110011001010001011011011011000011100";
        ram[16] = "0b0011111111101101110101101100101101010011010100000000100100101101";
        ram[17] = "0b0011111111101110000100011111000011000011010011000001101010001011";
        ram[18] = "0b0011111111101110010001000010100001001101111111001110001100010101";
        ram[19] = "0b0011111111101110011011110001010101100001100100010001010010010000";
        ram[20] = "0b0011111111101110100101000000011110001001011000010011110100110010";
        ram[21] = "0b0011111111101110101101000010010001011111010110101101100101101010";
        ram[22] = "0b0011111111101110110100000011110110011010100101010100001000011100";
        ram[23] = "0b0011111111101110111010001110011000001000000001110011010101111110";
        ram[24] = "0b0011111111101110111111101001101101111011111100011110100011100110";
        ram[25] = "0b0011111111101111000100011111000011000011010011000001101010001011";
        ram[26] = "0b0011111111101111001000110010010011001000001101100110010100010111";
        ram[27] = "0b0011111111101111001100101010000001100110001111000111010011111011";
        ram[28] = "0b0011111111101111010000000111100010010110000100111101001100011100";
        ram[29] = "0b0011111111101111010011010000000100111010100100101010001100000101";
        ram[30] = "0b0011111111101111010110000100111101001100011011100110110110011100";
        ram[31] = "0b0011111111101111011000101010000110110101110001111100110110001010";
        ram[32] = "0b0011111111101111011010111111100001110110100111101100001011001110";
        ram[33] = "0b0011111111101111011101000111110110000000010111100101111100110001";
        ram[34] = "0b0011111111101111011111000101101011000100011100011011010001111000";
        ram[35] = "0b0011111111101111100000111001000001000010110110001100001010100100";
        ram[36] = "0b0011111111101111100010100011001011110100010010010001001010011001";
        ram[37] = "0b0011111111101111100100000100001011011000110000101010010001010101";
        ram[38] = "0b0011111111101111100101011110100111100001101100001000100110100000";
        ram[39] = "0b0011111111101111100110110010100000001111000100101100001001111010";
        ram[40] = "0b0011111111101111100111111111110101100000111010010100111011100100";
        ram[41] = "0b0011111111101111101001000111111011001111111010011011011110111111";
        ram[42] = "0b0011111111101111101010001010110001011100000100111111110100001101";
        ram[43] = "0b0011111111101111101011001001101011111110000111011010011110110001";
        ram[44] = "0b0011111111101111101100000100101010110110000001101011011110101010";
        ram[45] = "0b0011111111101111101100111011101110000011110011110010110011111001";
        ram[46] = "0b0011111111101111101101101110110101100111011101110000011110011110";
        ram[47] = "0b0011111111101111101110011110000001100000111111100100011110011001";
        ram[48] = "0b0011111111101111101111001011111001100001110011111111111010110000";
        ram[49] = "0b0011111111101111101111110101110101111000100000010001101100011110";
        ram[50] = "0b0011111111101111110000011110011110010110011111001010111010100111";
        ram[51] = "0b0011111111101111110001000100011111000011000011010011000001101010";
        ram[52] = "0b0011111111101111110001100111110111111110001100101010000001100110";
        ram[53] = "0b0011111111101111110010001001111101000000101000101000011101111111";
        ram[54] = "0b0011111111101111110010101001011010010001101001110101110011010001";
        ram[55] = "0b0011111111101111110011000111100011101001111101101010100100111111";
        ram[56] = "0b0011111111101111110011100100011001001001100100000110110011001010";
        ram[57] = "0b0011111111101111110011111111111010110000011101001010011101110010";
        ram[58] = "0b0011111111101111110100011000110100100101111011011101000001010011";
        ram[59] = "0b0011111111101111110100110001101110011011011001101111100100110011";
        ram[60] = "0b0011111111101111110101001001010100011000001010101001100100110001";
        ram[61] = "0b0011111111101111110101011111100110011100001110001011000001001011";
        ram[62] = "0b0011111111101111110101110100100100100111100100010011111010000001";
        ram[63] = "0b0011111111101111110110001000001110111010001101000100001111010100";
        ram[64] = "0b0011111111101111110110011011111001001100110101110100100100101000";
        ram[65] = "0b0011111111101111110110101110001111100110110001001100010110010111";
        ram[66] = "0b0011111111101111110111000000100110000000101100100100001000000111";
        ram[67] = "0b0011111111101111110111010000010100101001001101001010110010110000";
        ram[68] = "0b0011111111101111110111100001010111001010011011001010000000111100";
        ram[69] = "0b0011111111101111110111101111110001111010001110011000001000000010";
        ram[70] = "0b0011111111101111110111111111100000100010101110111110110010101011";
        ram[71] = "0b0011111111101111111000001100100111011001110100110100010110001101";
        ram[72] = "0b0011111111101111111000011011000010001001101000000010011101010010";
        ram[73] = "0b0011111111101111111000101000001001000000101101111000000000110100";
        ram[74] = "0b0011111111101111111000110011111011111111000110010101000000110011";
        ram[75] = "0b0011111111101111111000111111101110111101011110110010000000110010";
        ram[76] = "0b0011111111101111111001001011100001111011110111001111000000110000";
        ram[77] = "0b0011111111101111111001010111010100111010001111101100000000101111";
        ram[78] = "0b0011111111101111111001100001110011111111111010110000011101001010";
        ram[79] = "0b0011111111101111111001101100010011000101100101110100111001100110";
        ram[80] = "0b0011111111101111111001110101011110010010100011100000110010011110";
        ram[81] = "0b0011111111101111111001111111111101011000001110100101001110111001";
        ram[82] = "0b0011111111101111111010001001001000100101001100010001000111110001";
        ram[83] = "0b0011111111101111111010010000111111111001011100100100011101000101";
        ram[84] = "0b0011111111101111111010011010001011000110011010010000010101111101";
        ram[85] = "0b0011111111101111111010100010000010011010101010100011101011010010";
        ram[86] = "0b0011111111101111111010101001111001101110111010110111000000100110";
        ram[87] = "0b0011111111101111111010110001110001000011001011001010010101111010";
        ram[88] = "0b0011111111101111111010111001101000010111011011011101101011001111";
        ram[89] = "0b0011111111101111111011000000001011110010111110011000011101000000";
        ram[90] = "0b0011111111101111111011001000000011000111001110101011110010010100";
        ram[91] = "0b0011111111101111111011001110100110100010110001100110100100000101";
        ram[92] = "0b0011111111101111111011010101001001111110010100100001010101110111";
        ram[93] = "0b0011111111101111111011011011101101011001110111011100000111101000";
        ram[94] = "0b0011111111101111111011100000111100111100101100111110010101110101";
        ram[95] = "0b0011111111101111111011100111100000011000001111111001000111100110";
        ram[96] = "0b0011111111101111111011101100101111111011000101011011010101110100";
        ram[97] = "0b0011111111101111111011110011010011010110101000010110000111100101";
        ram[98] = "0b0011111111101111111011111000100010111001011101111000010101110011";
        ram[99] = "0b0011111111101111111011111101110010011100010011011010100100000000";
        ram[100] = "0b0011111111101111111100000011000001111111001000111100110010001110";
        ram[101] = "0b0011111111101111111100000110111101101001010001000110011100111000";
        ram[102] = "0b0011111111101111111100001100001101001100000110101000101011000110";
        ram[103] = "0b0011111111101111111100010001011100101110111100001010111001010011";
        ram[104] = "0b0011111111101111111100010101011000011001000100010100100011111110";
        ram[105] = "0b0011111111101111111100011001010100000011001100011110001110101000";
        ram[106] = "0b0011111111101111111100011110100011100110000010000000011100110101";
        ram[107] = "0b0011111111101111111100100010011111010000001010001010000111100000";
        ram[108] = "0b0011111111101111111100100110011010111010010010010011110010001010";
        ram[109] = "0b0011111111101111111100101010010110100100011010011101011100110100";
        ram[110] = "0b0011111111101111111100101110010010001110100010100111000111011110";
        ram[111] = "0b0011111111101111111100110010001101111000101010110000110010001001";
        ram[112] = "0b0011111111101111111100110100110101101010000101100001111001001111";
        ram[113] = "0b0011111111101111111100111000110001010100001101101011100011111010";
        ram[114] = "0b0011111111101111111100111100101100111110010101110101001110100100";
        ram[115] = "0b0011111111101111111100111111010100101111110000100110010101101011";
        ram[116] = "0b0011111111101111111101000011010000011001111000110000000000010101";
        ram[117] = "0b0011111111101111111101000101111000001011010011100001000111011100";
        ram[118] = "0b0011111111101111111101001001110011110101011011101010110010000110";
        ram[119] = "0b0011111111101111111101001100011011100110110110011011111001001101";
        ram[120] = "0b0011111111101111111101001111000011011000010001001101000000010100";
        ram[121] = "0b0011111111101111111101010001101011001001101011111110000111011010";
        ram[122] = "0b0011111111101111111101010101100110110011110100000111110010000101";
        ram[123] = "0b0011111111101111111101011000001110100101001110111000111001001100";
        ram[124] = "0b0011111111101111111101011010110110010110101001101010000000010010";
        ram[125] = "0b0011111111101111111101011101011110001000000100011011000111011001";
        ram[126] = "0b0011111111101111111101100000000101111001011111001100001110100000";
        ram[127] = "0b0011111111101111111101100010101101101010111001111101010101100111";
        ram[128] = "0b0011111111101111111101100100000001100011100111010101111001001010";
        ram[129] = "0b0011111111101111111101100110101001010101000010000111000000010001";
        ram[130] = "0b0011111111101111111101101001010001000110011100111000000111011000";
        ram[131] = "0b0011111111101111111101101011111000110111110111101001001110011111";
        ram[132] = "0b0011111111101111111101101101001100110000100101000001110010000010";
        ram[133] = "0b0011111111101111111101101111110100100001111111110010111001001001";
        ram[134] = "0b0011111111101111111101110010011100010011011010100100000000010000";
        ram[135] = "0b0011111111101111111101110011110000001100000111111100100011110011";
        ram[136] = "0b0011111111101111111101110110010111111101100010101101101010111010";
        ram[137] = "0b0011111111101111111101110111101011110110010000000110001110011101";
        ram[138] = "0b0011111111101111111101111010010011100111101010110111010101100100";
        ram[139] = "0b0011111111101111111101111011100111100000011000001111111001001000";
        ram[140] = "0b0011111111101111111101111110001111010001110011000001000000001110";
        ram[141] = "0b0011111111101111111101111111100011001010100000011001100011110010";
        ram[142] = "0b0011111111101111111110000000110111000011001101110010000111010101";
        ram[143] = "0b0011111111101111111110000011011110110100101000100011001110011100";
        ram[144] = "0b0011111111101111111110000100110010101101010101111011110001111111";
        ram[145] = "0b0011111111101111111110000110000110100110000011010100010101100011";
        ram[146] = "0b0011111111101111111110001000101110010111011110000101011100101010";
        ram[147] = "0b0011111111101111111110001010000010010000001011011110000000001101";
        ram[148] = "0b0011111111101111111110001011010110001000111000110110100011110001";
        ram[149] = "0b0011111111101111111110001100101010000001100110001111000111010100";
        ram[150] = "0b0011111111101111111110001101111101111010010011100111101010110111";
        ram[151] = "0b0011111111101111111110010000100101101011101110011000110001111110";
        ram[152] = "0b0011111111101111111110010001111001100100011011110001010101100010";
        ram[153] = "0b0011111111101111111110010011001101011101001001001001111001000101";
        ram[154] = "0b0011111111101111111110010100100001010101110110100010011100101000";
        ram[155] = "0b0011111111101111111110010101110101001110100011111011000000001100";
        ram[156] = "0b0011111111101111111110010111001001000111010001010011100011101111";
        ram[157] = "0b0011111111101111111110011000011100111111111110101100000111010011";
        ram[158] = "0b0011111111101111111110011001110000111000101100000100101010110110";
        ram[159] = "0b0011111111101111111110011011000100110001011001011101001110011001";
        ram[160] = "0b0011111111101111111110011100011000101010000110110101110001111101";
        ram[161] = "0b0011111111101111111110011101101100100010110100001110010101100000";
        ram[162] = "0b0011111111101111111110011111000000011011100001100110111001000100";
        ram[163] = "0b0011111111101111111110100000010100010100001110111111011100100111";
        ram[164] = "0b0011111111101111111110100001101000001100111100011000000000001010";
        ram[165] = "0b0011111111101111111110100001101000001100111100011000000000001010";
        ram[166] = "0b0011111111101111111110100010111100000101101001110000100011101110";
        ram[167] = "0b0011111111101111111110100100001111111110010111001001000111010001";
        ram[168] = "0b0011111111101111111110100101100011110111000100100001101010110101";
        ram[169] = "0b0011111111101111111110100110110111101111110001111010001110011000";
        ram[170] = "0b0011111111101111111110101000001011101000011111010010110001111100";
        ram[171] = "0b0011111111101111111110101000001011101000011111010010110001111100";
        ram[172] = "0b0011111111101111111110101001011111100001001100101011010101011111";
        ram[173] = "0b0011111111101111111110101010110011011001111010000011111001000010";
        ram[174] = "0b0011111111101111111110101100000111010010100111011100011100100110";
        ram[175] = "0b0011111111101111111110101100000111010010100111011100011100100110";
        ram[176] = "0b0011111111101111111110101101011011001011010100110101000000001001";
        ram[177] = "0b0011111111101111111110101110101111000100000010001101100011101101";
        ram[178] = "0b0011111111101111111110101110101111000100000010001101100011101101";
        ram[179] = "0b0011111111101111111110110000000010111100101111100110000111010000";
        ram[180] = "0b0011111111101111111110110001010110110101011100111110101010110011";
        ram[181] = "0b0011111111101111111110110001010110110101011100111110101010110011";
        ram[182] = "0b0011111111101111111110110010101010101110001010010111001110010111";
        ram[183] = "0b0011111111101111111110110011111110100110110111101111110001111010";
        ram[184] = "0b0011111111101111111110110011111110100110110111101111110001111010";
        ram[185] = "0b0011111111101111111110110101010010011111100101001000010101011110";
        ram[186] = "0b0011111111101111111110110110100110011000010010100000111001000001";
        ram[187] = "0b0011111111101111111110110110100110011000010010100000111001000001";
        ram[188] = "0b0011111111101111111110110111111010010000111111111001011100100100";
        ram[189] = "0b0011111111101111111110110111111010010000111111111001011100100100";
        ram[190] = "0b0011111111101111111110111001001110001001101101010010000000001000";
        ram[191] = "0b0011111111101111111110111001001110001001101101010010000000001000";
        ram[192] = "0b0011111111101111111110111010100010000010011010101010100011101011";
        ram[193] = "0b0011111111101111111110111011110101111011001000000011000111001111";
        ram[194] = "0b0011111111101111111110111011110101111011001000000011000111001111";
        ram[195] = "0b0011111111101111111110111101001001110011110101011011101010110010";
        ram[196] = "0b0011111111101111111110111101001001110011110101011011101010110010";
        ram[197] = "0b0011111111101111111110111110011101101100100010110100001110010110";
        ram[198] = "0b0011111111101111111110111110011101101100100010110100001110010110";
        ram[199] = "0b0011111111101111111110111111110001100101010000001100110001111001";
        ram[200] = "0b0011111111101111111110111111110001100101010000001100110001111001";
        ram[201] = "0b0011111111101111111111000001000101011101111101100101010101011100";
        ram[202] = "0b0011111111101111111111000001000101011101111101100101010101011100";
        ram[203] = "0b0011111111101111111111000010011001010110101010111101111001000000";
        ram[204] = "0b0011111111101111111111000010011001010110101010111101111001000000";
        ram[205] = "0b0011111111101111111111000010011001010110101010111101111001000000";
        ram[206] = "0b0011111111101111111111000011101101001111011000010110011100100011";
        ram[207] = "0b0011111111101111111111000011101101001111011000010110011100100011";
        ram[208] = "0b0011111111101111111111000101000001001000000101101111000000000111";
        ram[209] = "0b0011111111101111111111000101000001001000000101101111000000000111";
        ram[210] = "0b0011111111101111111111000110010101000000110011000111100011101010";
        ram[211] = "0b0011111111101111111111000110010101000000110011000111100011101010";
        ram[212] = "0b0011111111101111111111000110010101000000110011000111100011101010";
        ram[213] = "0b0011111111101111111111000111101000111001100000100000000111001101";
        ram[214] = "0b0011111111101111111111000111101000111001100000100000000111001101";
        ram[215] = "0b0011111111101111111111001000111100110010001101111000101010110001";
        ram[216] = "0b0011111111101111111111001000111100110010001101111000101010110001";
        ram[217] = "0b0011111111101111111111001000111100110010001101111000101010110001";
        ram[218] = "0b0011111111101111111111001010010000101010111011010001001110010100";
        ram[219] = "0b0011111111101111111111001010010000101010111011010001001110010100";
        ram[220] = "0b0011111111101111111111001011100100100011101000101001110001111000";
        ram[221] = "0b0011111111101111111111001011100100100011101000101001110001111000";
        ram[222] = "0b0011111111101111111111001011100100100011101000101001110001111000";
        ram[223] = "0b0011111111101111111111001100111000011100010110000010010101011011";
        ram[224] = "0b0011111111101111111111001100111000011100010110000010010101011011";
        ram[225] = "0b0011111111101111111111001100111000011100010110000010010101011011";
        ram[226] = "0b0011111111101111111111001110001100010101000011011010111000111110";
        ram[227] = "0b0011111111101111111111001110001100010101000011011010111000111110";
        ram[228] = "0b0011111111101111111111001110001100010101000011011010111000111110";
        ram[229] = "0b0011111111101111111111001111100000001101110000110011011100100010";
        ram[230] = "0b0011111111101111111111001111100000001101110000110011011100100010";
        ram[231] = "0b0011111111101111111111001111100000001101110000110011011100100010";
        ram[232] = "0b0011111111101111111111010000110100000110011110001100000000000101";
        ram[233] = "0b0011111111101111111111010000110100000110011110001100000000000101";
        ram[234] = "0b0011111111101111111111010000110100000110011110001100000000000101";
        ram[235] = "0b0011111111101111111111010010000111111111001011100100100011101001";
        ram[236] = "0b0011111111101111111111010010000111111111001011100100100011101001";
        ram[237] = "0b0011111111101111111111010010000111111111001011100100100011101001";
        ram[238] = "0b0011111111101111111111010010000111111111001011100100100011101001";
        ram[239] = "0b0011111111101111111111010011011011110111111000111101000111001100";
        ram[240] = "0b0011111111101111111111010011011011110111111000111101000111001100";
        ram[241] = "0b0011111111101111111111010011011011110111111000111101000111001100";
        ram[242] = "0b0011111111101111111111010100101111110000100110010101101010101111";
        ram[243] = "0b0011111111101111111111010100101111110000100110010101101010101111";
        ram[244] = "0b0011111111101111111111010100101111110000100110010101101010101111";
        ram[245] = "0b0011111111101111111111010100101111110000100110010101101010101111";
        ram[246] = "0b0011111111101111111111010110000011101001010011101110001110010011";
        ram[247] = "0b0011111111101111111111010110000011101001010011101110001110010011";
        ram[248] = "0b0011111111101111111111010110000011101001010011101110001110010011";
        ram[249] = "0b0011111111101111111111010110000011101001010011101110001110010011";
        ram[250] = "0b0011111111101111111111010111010111100010000001000110110001110110";
        ram[251] = "0b0011111111101111111111010111010111100010000001000110110001110110";
        ram[252] = "0b0011111111101111111111010111010111100010000001000110110001110110";
        ram[253] = "0b0011111111101111111111010111010111100010000001000110110001110110";
        ram[254] = "0b0011111111101111111111011000101011011010101110011111010101011010";
        ram[255] = "0b0011111111101111111111011000101011011010101110011111010101011010";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(voicerec_FFT_cosVec) {


static const unsigned DataWidth = 64;
static const unsigned AddressRange = 256;
static const unsigned AddressWidth = 8;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


voicerec_FFT_cosVec_ram* meminst;


SC_CTOR(voicerec_FFT_cosVec) {
meminst = new voicerec_FFT_cosVec_ram("voicerec_FFT_cosVec_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~voicerec_FFT_cosVec() {
    delete meminst;
}


};//endmodule
#endif
