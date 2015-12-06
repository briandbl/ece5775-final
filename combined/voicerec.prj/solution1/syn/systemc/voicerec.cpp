// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "voicerec.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic voicerec::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic voicerec::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> voicerec::ap_ST_st1_fsm_0 = "1";
const sc_lv<5> voicerec::ap_ST_st2_fsm_1 = "10";
const sc_lv<5> voicerec::ap_ST_st3_fsm_2 = "100";
const sc_lv<5> voicerec::ap_ST_st4_fsm_3 = "1000";
const sc_lv<5> voicerec::ap_ST_st5_fsm_4 = "10000";
const sc_lv<32> voicerec::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> voicerec::ap_const_lv1_1 = "1";
const sc_lv<32> voicerec::ap_const_lv32_2 = "10";
const sc_lv<1> voicerec::ap_const_lv1_0 = "0";
const sc_lv<13> voicerec::ap_const_lv13_0 = "0000000000000";
const sc_lv<32> voicerec::ap_const_lv32_1 = "1";
const sc_lv<32> voicerec::ap_const_lv32_3 = "11";
const sc_lv<6> voicerec::ap_const_lv6_0 = "000000";
const sc_lv<32> voicerec::ap_const_lv32_4 = "100";
const sc_lv<6> voicerec::ap_const_lv6_3D = "111101";
const sc_lv<6> voicerec::ap_const_lv6_1 = "1";
const sc_lv<13> voicerec::ap_const_lv13_80 = "10000000";

voicerec::voicerec(sc_module_name name) : sc_module(name), mVcdFile(0) {
    result_U = new voicerec_result("result_U");
    result_U->clk(ap_clk);
    result_U->reset(ap_rst);
    result_U->address0(result_address0);
    result_U->ce0(result_ce0);
    result_U->we0(result_we0);
    result_U->d0(result_d0);
    result_U->q0(result_q0);
    outSound_U = new voicerec_outSound("outSound_U");
    outSound_U->clk(ap_clk);
    outSound_U->reset(ap_rst);
    outSound_U->address0(outSound_address0);
    outSound_U->ce0(outSound_ce0);
    outSound_U->we0(outSound_we0);
    outSound_U->d0(outSound_d0);
    outSound_U->q0(outSound_q0);
    grp_voicerec_processChunk_fu_86 = new voicerec_processChunk("grp_voicerec_processChunk_fu_86");
    grp_voicerec_processChunk_fu_86->ap_clk(ap_clk);
    grp_voicerec_processChunk_fu_86->ap_rst(ap_rst);
    grp_voicerec_processChunk_fu_86->ap_start(grp_voicerec_processChunk_fu_86_ap_start);
    grp_voicerec_processChunk_fu_86->ap_done(grp_voicerec_processChunk_fu_86_ap_done);
    grp_voicerec_processChunk_fu_86->ap_idle(grp_voicerec_processChunk_fu_86_ap_idle);
    grp_voicerec_processChunk_fu_86->ap_ready(grp_voicerec_processChunk_fu_86_ap_ready);
    grp_voicerec_processChunk_fu_86->sp(grp_voicerec_processChunk_fu_86_sp);
    grp_voicerec_processChunk_fu_86->ret_address0(grp_voicerec_processChunk_fu_86_ret_address0);
    grp_voicerec_processChunk_fu_86->ret_ce0(grp_voicerec_processChunk_fu_86_ret_ce0);
    grp_voicerec_processChunk_fu_86->ret_we0(grp_voicerec_processChunk_fu_86_ret_we0);
    grp_voicerec_processChunk_fu_86->ret_d0(grp_voicerec_processChunk_fu_86_ret_d0);
    grp_voicerec_processChunk_fu_86->tmp(grp_voicerec_processChunk_fu_86_tmp);
    grp_voicerec_processChunk_fu_86->inputSound_address0(grp_voicerec_processChunk_fu_86_inputSound_address0);
    grp_voicerec_processChunk_fu_86->inputSound_ce0(grp_voicerec_processChunk_fu_86_inputSound_ce0);
    grp_voicerec_processChunk_fu_86->inputSound_q0(grp_voicerec_processChunk_fu_86_inputSound_q0);
    grp_voicerec_classifySound_fu_111 = new voicerec_classifySound("grp_voicerec_classifySound_fu_111");
    grp_voicerec_classifySound_fu_111->ap_clk(ap_clk);
    grp_voicerec_classifySound_fu_111->ap_rst(ap_rst);
    grp_voicerec_classifySound_fu_111->ap_start(grp_voicerec_classifySound_fu_111_ap_start);
    grp_voicerec_classifySound_fu_111->ap_done(grp_voicerec_classifySound_fu_111_ap_done);
    grp_voicerec_classifySound_fu_111->ap_idle(grp_voicerec_classifySound_fu_111_ap_idle);
    grp_voicerec_classifySound_fu_111->ap_ready(grp_voicerec_classifySound_fu_111_ap_ready);
    grp_voicerec_classifySound_fu_111->result_address0(grp_voicerec_classifySound_fu_111_result_address0);
    grp_voicerec_classifySound_fu_111->result_ce0(grp_voicerec_classifySound_fu_111_result_ce0);
    grp_voicerec_classifySound_fu_111->result_q0(grp_voicerec_classifySound_fu_111_result_q0);
    grp_voicerec_classifySound_fu_111->ap_return(grp_voicerec_classifySound_fu_111_ap_return);
    grp_voicerec_preprocessSound_fu_127 = new voicerec_preprocessSound("grp_voicerec_preprocessSound_fu_127");
    grp_voicerec_preprocessSound_fu_127->ap_clk(ap_clk);
    grp_voicerec_preprocessSound_fu_127->ap_rst(ap_rst);
    grp_voicerec_preprocessSound_fu_127->ap_start(grp_voicerec_preprocessSound_fu_127_ap_start);
    grp_voicerec_preprocessSound_fu_127->ap_done(grp_voicerec_preprocessSound_fu_127_ap_done);
    grp_voicerec_preprocessSound_fu_127->ap_idle(grp_voicerec_preprocessSound_fu_127_ap_idle);
    grp_voicerec_preprocessSound_fu_127->ap_ready(grp_voicerec_preprocessSound_fu_127_ap_ready);
    grp_voicerec_preprocessSound_fu_127->inSound_address0(grp_voicerec_preprocessSound_fu_127_inSound_address0);
    grp_voicerec_preprocessSound_fu_127->inSound_ce0(grp_voicerec_preprocessSound_fu_127_inSound_ce0);
    grp_voicerec_preprocessSound_fu_127->inSound_we0(grp_voicerec_preprocessSound_fu_127_inSound_we0);
    grp_voicerec_preprocessSound_fu_127->inSound_d0(grp_voicerec_preprocessSound_fu_127_inSound_d0);
    grp_voicerec_preprocessSound_fu_127->inSound_q0(grp_voicerec_preprocessSound_fu_127_inSound_q0);
    grp_voicerec_preprocessSound_fu_127->outSound_address0(grp_voicerec_preprocessSound_fu_127_outSound_address0);
    grp_voicerec_preprocessSound_fu_127->outSound_ce0(grp_voicerec_preprocessSound_fu_127_outSound_ce0);
    grp_voicerec_preprocessSound_fu_127->outSound_we0(grp_voicerec_preprocessSound_fu_127_outSound_we0);
    grp_voicerec_preprocessSound_fu_127->outSound_d0(grp_voicerec_preprocessSound_fu_127_outSound_d0);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( grp_voicerec_classifySound_fu_111_ap_done );
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( grp_voicerec_classifySound_fu_111_ap_done );
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );

    SC_METHOD(thread_ap_return);
    sensitive << ( grp_voicerec_classifySound_fu_111_ap_done );
    sensitive << ( grp_voicerec_classifySound_fu_111_ap_return );
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );

    SC_METHOD(thread_ap_sig_bdd_120);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_130);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_21);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_230);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_54);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_bdd_21 );

    SC_METHOD(thread_ap_sig_cseq_ST_st2_fsm_1);
    sensitive << ( ap_sig_bdd_120 );

    SC_METHOD(thread_ap_sig_cseq_ST_st3_fsm_2);
    sensitive << ( ap_sig_bdd_54 );

    SC_METHOD(thread_ap_sig_cseq_ST_st4_fsm_3);
    sensitive << ( ap_sig_bdd_130 );

    SC_METHOD(thread_ap_sig_cseq_ST_st5_fsm_4);
    sensitive << ( ap_sig_bdd_230 );

    SC_METHOD(thread_exitcond1_fu_135_p2);
    sensitive << ( ap_sig_cseq_ST_st3_fsm_2 );
    sensitive << ( index_reg_74 );

    SC_METHOD(thread_grp_voicerec_classifySound_fu_111_ap_start);
    sensitive << ( grp_voicerec_classifySound_fu_111_ap_start_ap_start_reg );

    SC_METHOD(thread_grp_voicerec_classifySound_fu_111_result_q0);
    sensitive << ( result_q0 );
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );

    SC_METHOD(thread_grp_voicerec_preprocessSound_fu_127_ap_start);
    sensitive << ( grp_voicerec_preprocessSound_fu_127_ap_start_ap_start_reg );

    SC_METHOD(thread_grp_voicerec_preprocessSound_fu_127_inSound_q0);
    sensitive << ( inSound_q0 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_grp_voicerec_processChunk_fu_86_ap_start);
    sensitive << ( grp_voicerec_processChunk_fu_86_ap_start_ap_start_reg );

    SC_METHOD(thread_grp_voicerec_processChunk_fu_86_inputSound_q0);
    sensitive << ( outSound_q0 );
    sensitive << ( ap_sig_cseq_ST_st4_fsm_3 );

    SC_METHOD(thread_grp_voicerec_processChunk_fu_86_sp);
    sensitive << ( i_reg_62 );
    sensitive << ( ap_sig_cseq_ST_st4_fsm_3 );

    SC_METHOD(thread_grp_voicerec_processChunk_fu_86_tmp);
    sensitive << ( ap_sig_cseq_ST_st4_fsm_3 );
    sensitive << ( index_reg_74 );

    SC_METHOD(thread_i_1_fu_147_p2);
    sensitive << ( i_reg_62 );

    SC_METHOD(thread_inSound_address0);
    sensitive << ( grp_voicerec_preprocessSound_fu_127_inSound_address0 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_inSound_ce0);
    sensitive << ( grp_voicerec_preprocessSound_fu_127_inSound_ce0 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_inSound_d0);
    sensitive << ( grp_voicerec_preprocessSound_fu_127_inSound_d0 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_inSound_we0);
    sensitive << ( grp_voicerec_preprocessSound_fu_127_inSound_we0 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_index_1_fu_141_p2);
    sensitive << ( index_reg_74 );

    SC_METHOD(thread_outSound_address0);
    sensitive << ( grp_voicerec_processChunk_fu_86_inputSound_address0 );
    sensitive << ( grp_voicerec_preprocessSound_fu_127_outSound_address0 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( ap_sig_cseq_ST_st4_fsm_3 );

    SC_METHOD(thread_outSound_ce0);
    sensitive << ( grp_voicerec_processChunk_fu_86_inputSound_ce0 );
    sensitive << ( grp_voicerec_preprocessSound_fu_127_outSound_ce0 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( ap_sig_cseq_ST_st4_fsm_3 );

    SC_METHOD(thread_outSound_d0);
    sensitive << ( grp_voicerec_preprocessSound_fu_127_outSound_d0 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_outSound_we0);
    sensitive << ( grp_voicerec_preprocessSound_fu_127_outSound_we0 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_result_address0);
    sensitive << ( grp_voicerec_processChunk_fu_86_ret_address0 );
    sensitive << ( grp_voicerec_classifySound_fu_111_result_address0 );
    sensitive << ( ap_sig_cseq_ST_st4_fsm_3 );
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );

    SC_METHOD(thread_result_ce0);
    sensitive << ( grp_voicerec_processChunk_fu_86_ret_ce0 );
    sensitive << ( grp_voicerec_classifySound_fu_111_result_ce0 );
    sensitive << ( ap_sig_cseq_ST_st4_fsm_3 );
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );

    SC_METHOD(thread_result_d0);
    sensitive << ( grp_voicerec_processChunk_fu_86_ret_d0 );
    sensitive << ( ap_sig_cseq_ST_st4_fsm_3 );

    SC_METHOD(thread_result_we0);
    sensitive << ( grp_voicerec_processChunk_fu_86_ret_we0 );
    sensitive << ( ap_sig_cseq_ST_st4_fsm_3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond1_fu_135_p2 );
    sensitive << ( grp_voicerec_processChunk_fu_86_ap_done );
    sensitive << ( grp_voicerec_classifySound_fu_111_ap_done );
    sensitive << ( grp_voicerec_preprocessSound_fu_127_ap_done );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "00001";
    grp_voicerec_processChunk_fu_86_ap_start_ap_start_reg = SC_LOGIC_0;
    grp_voicerec_classifySound_fu_111_ap_start_ap_start_reg = SC_LOGIC_0;
    grp_voicerec_preprocessSound_fu_127_ap_start_ap_start_reg = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "voicerec_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, inSound_address0, "(port)inSound_address0");
    sc_trace(mVcdFile, inSound_ce0, "(port)inSound_ce0");
    sc_trace(mVcdFile, inSound_we0, "(port)inSound_we0");
    sc_trace(mVcdFile, inSound_d0, "(port)inSound_d0");
    sc_trace(mVcdFile, inSound_q0, "(port)inSound_q0");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_bdd_21, "ap_sig_bdd_21");
    sc_trace(mVcdFile, result_address0, "result_address0");
    sc_trace(mVcdFile, result_ce0, "result_ce0");
    sc_trace(mVcdFile, result_we0, "result_we0");
    sc_trace(mVcdFile, result_d0, "result_d0");
    sc_trace(mVcdFile, result_q0, "result_q0");
    sc_trace(mVcdFile, index_1_fu_141_p2, "index_1_fu_141_p2");
    sc_trace(mVcdFile, index_1_reg_156, "index_1_reg_156");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st3_fsm_2, "ap_sig_cseq_ST_st3_fsm_2");
    sc_trace(mVcdFile, ap_sig_bdd_54, "ap_sig_bdd_54");
    sc_trace(mVcdFile, i_1_fu_147_p2, "i_1_fu_147_p2");
    sc_trace(mVcdFile, i_1_reg_161, "i_1_reg_161");
    sc_trace(mVcdFile, exitcond1_fu_135_p2, "exitcond1_fu_135_p2");
    sc_trace(mVcdFile, outSound_address0, "outSound_address0");
    sc_trace(mVcdFile, outSound_ce0, "outSound_ce0");
    sc_trace(mVcdFile, outSound_we0, "outSound_we0");
    sc_trace(mVcdFile, outSound_d0, "outSound_d0");
    sc_trace(mVcdFile, outSound_q0, "outSound_q0");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_ap_start, "grp_voicerec_processChunk_fu_86_ap_start");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_ap_done, "grp_voicerec_processChunk_fu_86_ap_done");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_ap_idle, "grp_voicerec_processChunk_fu_86_ap_idle");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_ap_ready, "grp_voicerec_processChunk_fu_86_ap_ready");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_sp, "grp_voicerec_processChunk_fu_86_sp");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_ret_address0, "grp_voicerec_processChunk_fu_86_ret_address0");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_ret_ce0, "grp_voicerec_processChunk_fu_86_ret_ce0");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_ret_we0, "grp_voicerec_processChunk_fu_86_ret_we0");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_ret_d0, "grp_voicerec_processChunk_fu_86_ret_d0");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_tmp, "grp_voicerec_processChunk_fu_86_tmp");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_inputSound_address0, "grp_voicerec_processChunk_fu_86_inputSound_address0");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_inputSound_ce0, "grp_voicerec_processChunk_fu_86_inputSound_ce0");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_inputSound_q0, "grp_voicerec_processChunk_fu_86_inputSound_q0");
    sc_trace(mVcdFile, grp_voicerec_classifySound_fu_111_ap_start, "grp_voicerec_classifySound_fu_111_ap_start");
    sc_trace(mVcdFile, grp_voicerec_classifySound_fu_111_ap_done, "grp_voicerec_classifySound_fu_111_ap_done");
    sc_trace(mVcdFile, grp_voicerec_classifySound_fu_111_ap_idle, "grp_voicerec_classifySound_fu_111_ap_idle");
    sc_trace(mVcdFile, grp_voicerec_classifySound_fu_111_ap_ready, "grp_voicerec_classifySound_fu_111_ap_ready");
    sc_trace(mVcdFile, grp_voicerec_classifySound_fu_111_result_address0, "grp_voicerec_classifySound_fu_111_result_address0");
    sc_trace(mVcdFile, grp_voicerec_classifySound_fu_111_result_ce0, "grp_voicerec_classifySound_fu_111_result_ce0");
    sc_trace(mVcdFile, grp_voicerec_classifySound_fu_111_result_q0, "grp_voicerec_classifySound_fu_111_result_q0");
    sc_trace(mVcdFile, grp_voicerec_classifySound_fu_111_ap_return, "grp_voicerec_classifySound_fu_111_ap_return");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_ap_start, "grp_voicerec_preprocessSound_fu_127_ap_start");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_ap_done, "grp_voicerec_preprocessSound_fu_127_ap_done");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_ap_idle, "grp_voicerec_preprocessSound_fu_127_ap_idle");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_ap_ready, "grp_voicerec_preprocessSound_fu_127_ap_ready");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_inSound_address0, "grp_voicerec_preprocessSound_fu_127_inSound_address0");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_inSound_ce0, "grp_voicerec_preprocessSound_fu_127_inSound_ce0");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_inSound_we0, "grp_voicerec_preprocessSound_fu_127_inSound_we0");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_inSound_d0, "grp_voicerec_preprocessSound_fu_127_inSound_d0");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_inSound_q0, "grp_voicerec_preprocessSound_fu_127_inSound_q0");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_outSound_address0, "grp_voicerec_preprocessSound_fu_127_outSound_address0");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_outSound_ce0, "grp_voicerec_preprocessSound_fu_127_outSound_ce0");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_outSound_we0, "grp_voicerec_preprocessSound_fu_127_outSound_we0");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_outSound_d0, "grp_voicerec_preprocessSound_fu_127_outSound_d0");
    sc_trace(mVcdFile, i_reg_62, "i_reg_62");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st2_fsm_1, "ap_sig_cseq_ST_st2_fsm_1");
    sc_trace(mVcdFile, ap_sig_bdd_120, "ap_sig_bdd_120");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st4_fsm_3, "ap_sig_cseq_ST_st4_fsm_3");
    sc_trace(mVcdFile, ap_sig_bdd_130, "ap_sig_bdd_130");
    sc_trace(mVcdFile, index_reg_74, "index_reg_74");
    sc_trace(mVcdFile, grp_voicerec_processChunk_fu_86_ap_start_ap_start_reg, "grp_voicerec_processChunk_fu_86_ap_start_ap_start_reg");
    sc_trace(mVcdFile, grp_voicerec_classifySound_fu_111_ap_start_ap_start_reg, "grp_voicerec_classifySound_fu_111_ap_start_ap_start_reg");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st5_fsm_4, "ap_sig_cseq_ST_st5_fsm_4");
    sc_trace(mVcdFile, ap_sig_bdd_230, "ap_sig_bdd_230");
    sc_trace(mVcdFile, grp_voicerec_preprocessSound_fu_127_ap_start_ap_start_reg, "grp_voicerec_preprocessSound_fu_127_ap_start_ap_start_reg");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("voicerec.hdltvin.dat");
    mHdltvoutHandle.open("voicerec.hdltvout.dat");
}

voicerec::~voicerec() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete result_U;
    delete outSound_U;
    delete grp_voicerec_processChunk_fu_86;
    delete grp_voicerec_classifySound_fu_111;
    delete grp_voicerec_preprocessSound_fu_127;
}

void voicerec::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_voicerec_classifySound_fu_111_ap_start_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) && 
             !esl_seteq<1,1,1>(exitcond1_fu_135_p2.read(), ap_const_lv1_0))) {
            grp_voicerec_classifySound_fu_111_ap_start_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_voicerec_classifySound_fu_111_ap_ready.read())) {
            grp_voicerec_classifySound_fu_111_ap_start_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_voicerec_preprocessSound_fu_127_ap_start_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
             !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
            grp_voicerec_preprocessSound_fu_127_ap_start_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_voicerec_preprocessSound_fu_127_ap_ready.read())) {
            grp_voicerec_preprocessSound_fu_127_ap_start_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_voicerec_processChunk_fu_86_ap_start_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) && 
             esl_seteq<1,1,1>(exitcond1_fu_135_p2.read(), ap_const_lv1_0))) {
            grp_voicerec_processChunk_fu_86_ap_start_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_voicerec_processChunk_fu_86_ap_ready.read())) {
            grp_voicerec_processChunk_fu_86_ap_start_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) && 
         !esl_seteq<1,1,1>(ap_const_logic_0, grp_voicerec_processChunk_fu_86_ap_done.read()))) {
        i_reg_62 = i_1_reg_161.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                !esl_seteq<1,1,1>(ap_const_logic_0, grp_voicerec_preprocessSound_fu_127_ap_done.read()))) {
        i_reg_62 = ap_const_lv13_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) && 
         !esl_seteq<1,1,1>(ap_const_logic_0, grp_voicerec_processChunk_fu_86_ap_done.read()))) {
        index_reg_74 = index_1_reg_156.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                !esl_seteq<1,1,1>(ap_const_logic_0, grp_voicerec_preprocessSound_fu_127_ap_done.read()))) {
        index_reg_74 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) && esl_seteq<1,1,1>(exitcond1_fu_135_p2.read(), ap_const_lv1_0))) {
        i_1_reg_161 = i_1_fu_147_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        index_1_reg_156 = index_1_fu_141_p2.read();
    }
}

void voicerec::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read()) && 
         !esl_seteq<1,1,1>(ap_const_logic_0, grp_voicerec_classifySound_fu_111_ap_done.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void voicerec::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void voicerec::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read()) && 
         !esl_seteq<1,1,1>(ap_const_logic_0, grp_voicerec_classifySound_fu_111_ap_done.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void voicerec::thread_ap_return() {
    ap_return = grp_voicerec_classifySound_fu_111_ap_return.read();
}

void voicerec::thread_ap_sig_bdd_120() {
    ap_sig_bdd_120 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void voicerec::thread_ap_sig_bdd_130() {
    ap_sig_bdd_130 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(3, 3));
}

void voicerec::thread_ap_sig_bdd_21() {
    ap_sig_bdd_21 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void voicerec::thread_ap_sig_bdd_230() {
    ap_sig_bdd_230 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(4, 4));
}

void voicerec::thread_ap_sig_bdd_54() {
    ap_sig_bdd_54 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void voicerec::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_21.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void voicerec::thread_ap_sig_cseq_ST_st2_fsm_1() {
    if (ap_sig_bdd_120.read()) {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    }
}

void voicerec::thread_ap_sig_cseq_ST_st3_fsm_2() {
    if (ap_sig_bdd_54.read()) {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_0;
    }
}

void voicerec::thread_ap_sig_cseq_ST_st4_fsm_3() {
    if (ap_sig_bdd_130.read()) {
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_0;
    }
}

void voicerec::thread_ap_sig_cseq_ST_st5_fsm_4() {
    if (ap_sig_bdd_230.read()) {
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_0;
    }
}

void voicerec::thread_exitcond1_fu_135_p2() {
    exitcond1_fu_135_p2 = (!index_reg_74.read().is_01() || !ap_const_lv6_3D.is_01())? sc_lv<1>(): sc_lv<1>(index_reg_74.read() == ap_const_lv6_3D);
}

void voicerec::thread_grp_voicerec_classifySound_fu_111_ap_start() {
    grp_voicerec_classifySound_fu_111_ap_start = grp_voicerec_classifySound_fu_111_ap_start_ap_start_reg.read();
}

void voicerec::thread_grp_voicerec_classifySound_fu_111_result_q0() {
    grp_voicerec_classifySound_fu_111_result_q0 = result_q0.read();
}

void voicerec::thread_grp_voicerec_preprocessSound_fu_127_ap_start() {
    grp_voicerec_preprocessSound_fu_127_ap_start = grp_voicerec_preprocessSound_fu_127_ap_start_ap_start_reg.read();
}

void voicerec::thread_grp_voicerec_preprocessSound_fu_127_inSound_q0() {
    grp_voicerec_preprocessSound_fu_127_inSound_q0 = inSound_q0.read();
}

void voicerec::thread_grp_voicerec_processChunk_fu_86_ap_start() {
    grp_voicerec_processChunk_fu_86_ap_start = grp_voicerec_processChunk_fu_86_ap_start_ap_start_reg.read();
}

void voicerec::thread_grp_voicerec_processChunk_fu_86_inputSound_q0() {
    grp_voicerec_processChunk_fu_86_inputSound_q0 = outSound_q0.read();
}

void voicerec::thread_grp_voicerec_processChunk_fu_86_sp() {
    grp_voicerec_processChunk_fu_86_sp = i_reg_62.read();
}

void voicerec::thread_grp_voicerec_processChunk_fu_86_tmp() {
    grp_voicerec_processChunk_fu_86_tmp = index_reg_74.read();
}

void voicerec::thread_i_1_fu_147_p2() {
    i_1_fu_147_p2 = (!i_reg_62.read().is_01() || !ap_const_lv13_80.is_01())? sc_lv<13>(): (sc_biguint<13>(i_reg_62.read()) + sc_biguint<13>(ap_const_lv13_80));
}

void voicerec::thread_inSound_address0() {
    inSound_address0 = grp_voicerec_preprocessSound_fu_127_inSound_address0.read();
}

void voicerec::thread_inSound_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        inSound_ce0 = grp_voicerec_preprocessSound_fu_127_inSound_ce0.read();
    } else {
        inSound_ce0 = ap_const_logic_0;
    }
}

void voicerec::thread_inSound_d0() {
    inSound_d0 = grp_voicerec_preprocessSound_fu_127_inSound_d0.read();
}

void voicerec::thread_inSound_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        inSound_we0 = grp_voicerec_preprocessSound_fu_127_inSound_we0.read();
    } else {
        inSound_we0 = ap_const_logic_0;
    }
}

void voicerec::thread_index_1_fu_141_p2() {
    index_1_fu_141_p2 = (!index_reg_74.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(index_reg_74.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void voicerec::thread_outSound_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        outSound_address0 = grp_voicerec_preprocessSound_fu_127_outSound_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        outSound_address0 = grp_voicerec_processChunk_fu_86_inputSound_address0.read();
    } else {
        outSound_address0 = "XXXXXXXXXXXXX";
    }
}

void voicerec::thread_outSound_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        outSound_ce0 = grp_voicerec_preprocessSound_fu_127_outSound_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        outSound_ce0 = grp_voicerec_processChunk_fu_86_inputSound_ce0.read();
    } else {
        outSound_ce0 = ap_const_logic_0;
    }
}

void voicerec::thread_outSound_d0() {
    outSound_d0 = grp_voicerec_preprocessSound_fu_127_outSound_d0.read();
}

void voicerec::thread_outSound_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        outSound_we0 = grp_voicerec_preprocessSound_fu_127_outSound_we0.read();
    } else {
        outSound_we0 = ap_const_logic_0;
    }
}

void voicerec::thread_result_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read())) {
        result_address0 = grp_voicerec_classifySound_fu_111_result_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        result_address0 = grp_voicerec_processChunk_fu_86_ret_address0.read();
    } else {
        result_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void voicerec::thread_result_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read())) {
        result_ce0 = grp_voicerec_classifySound_fu_111_result_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        result_ce0 = grp_voicerec_processChunk_fu_86_ret_ce0.read();
    } else {
        result_ce0 = ap_const_logic_0;
    }
}

void voicerec::thread_result_d0() {
    result_d0 = grp_voicerec_processChunk_fu_86_ret_d0.read();
}

void voicerec::thread_result_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        result_we0 = grp_voicerec_processChunk_fu_86_ret_we0.read();
    } else {
        result_we0 = ap_const_logic_0;
    }
}

void voicerec::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if (!esl_seteq<1,1,1>(ap_const_logic_0, grp_voicerec_preprocessSound_fu_127_ap_done.read())) {
                ap_NS_fsm = ap_ST_st3_fsm_2;
            } else {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            }
            break;
        case 4 : 
            if (!esl_seteq<1,1,1>(exitcond1_fu_135_p2.read(), ap_const_lv1_0)) {
                ap_NS_fsm = ap_ST_st5_fsm_4;
            } else {
                ap_NS_fsm = ap_ST_st4_fsm_3;
            }
            break;
        case 8 : 
            if (!esl_seteq<1,1,1>(ap_const_logic_0, grp_voicerec_processChunk_fu_86_ap_done.read())) {
                ap_NS_fsm = ap_ST_st3_fsm_2;
            } else {
                ap_NS_fsm = ap_ST_st4_fsm_3;
            }
            break;
        case 16 : 
            if (!esl_seteq<1,1,1>(ap_const_logic_0, grp_voicerec_classifySound_fu_111_ap_done.read())) {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            } else {
                ap_NS_fsm = ap_ST_st5_fsm_4;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

void voicerec::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"inSound_address0\" :  \"" << inSound_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"inSound_ce0\" :  \"" << inSound_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"inSound_we0\" :  \"" << inSound_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"inSound_d0\" :  \"" << inSound_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"inSound_q0\" :  \"" << inSound_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_return\" :  \"" << ap_return.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

