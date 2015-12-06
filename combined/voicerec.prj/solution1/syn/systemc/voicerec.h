// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _voicerec_HH_
#define _voicerec_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "voicerec_processChunk.h"
#include "voicerec_classifySound.h"
#include "voicerec_preprocessSound.h"
#include "voicerec_result.h"
#include "voicerec_outSound.h"

namespace ap_rtl {

struct voicerec : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > np;
    sc_out< sc_lv<14> > inSound_address0;
    sc_out< sc_logic > inSound_ce0;
    sc_out< sc_logic > inSound_we0;
    sc_out< sc_lv<64> > inSound_d0;
    sc_in< sc_lv<64> > inSound_q0;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    voicerec(sc_module_name name);
    SC_HAS_PROCESS(voicerec);

    ~voicerec();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    voicerec_result* result_U;
    voicerec_outSound* outSound_U;
    voicerec_processChunk* grp_voicerec_processChunk_fu_92;
    voicerec_classifySound* grp_voicerec_classifySound_fu_118;
    voicerec_preprocessSound* grp_voicerec_preprocessSound_fu_134;
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_21;
    sc_signal< sc_lv<10> > result_address0;
    sc_signal< sc_logic > result_ce0;
    sc_signal< sc_logic > result_we0;
    sc_signal< sc_lv<64> > result_d0;
    sc_signal< sc_lv<64> > result_q0;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_55;
    sc_signal< sc_logic > grp_voicerec_preprocessSound_fu_134_ap_done;
    sc_signal< sc_lv<32> > stride_fu_190_p3;
    sc_signal< sc_lv<32> > stride_reg_226;
    sc_signal< sc_lv<32> > index_1_fu_209_p2;
    sc_signal< sc_lv<32> > index_1_reg_234;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_bdd_70;
    sc_signal< sc_lv<32> > i_1_fu_215_p2;
    sc_signal< sc_lv<32> > i_1_reg_239;
    sc_signal< sc_lv<1> > tmp_s_fu_203_p2;
    sc_signal< sc_lv<13> > outSound_address0;
    sc_signal< sc_logic > outSound_ce0;
    sc_signal< sc_logic > outSound_we0;
    sc_signal< sc_lv<64> > outSound_d0;
    sc_signal< sc_lv<64> > outSound_q0;
    sc_signal< sc_logic > grp_voicerec_processChunk_fu_92_ap_start;
    sc_signal< sc_logic > grp_voicerec_processChunk_fu_92_ap_done;
    sc_signal< sc_logic > grp_voicerec_processChunk_fu_92_ap_idle;
    sc_signal< sc_logic > grp_voicerec_processChunk_fu_92_ap_ready;
    sc_signal< sc_lv<32> > grp_voicerec_processChunk_fu_92_sp;
    sc_signal< sc_lv<32> > grp_voicerec_processChunk_fu_92_np;
    sc_signal< sc_lv<10> > grp_voicerec_processChunk_fu_92_ret_address0;
    sc_signal< sc_logic > grp_voicerec_processChunk_fu_92_ret_ce0;
    sc_signal< sc_logic > grp_voicerec_processChunk_fu_92_ret_we0;
    sc_signal< sc_lv<64> > grp_voicerec_processChunk_fu_92_ret_d0;
    sc_signal< sc_lv<32> > grp_voicerec_processChunk_fu_92_tmp_122;
    sc_signal< sc_lv<13> > grp_voicerec_processChunk_fu_92_inputSound_address0;
    sc_signal< sc_logic > grp_voicerec_processChunk_fu_92_inputSound_ce0;
    sc_signal< sc_lv<64> > grp_voicerec_processChunk_fu_92_inputSound_q0;
    sc_signal< sc_logic > grp_voicerec_classifySound_fu_118_ap_start;
    sc_signal< sc_logic > grp_voicerec_classifySound_fu_118_ap_done;
    sc_signal< sc_logic > grp_voicerec_classifySound_fu_118_ap_idle;
    sc_signal< sc_logic > grp_voicerec_classifySound_fu_118_ap_ready;
    sc_signal< sc_lv<10> > grp_voicerec_classifySound_fu_118_result_address0;
    sc_signal< sc_logic > grp_voicerec_classifySound_fu_118_result_ce0;
    sc_signal< sc_lv<64> > grp_voicerec_classifySound_fu_118_result_q0;
    sc_signal< sc_lv<32> > grp_voicerec_classifySound_fu_118_ap_return;
    sc_signal< sc_logic > grp_voicerec_preprocessSound_fu_134_ap_start;
    sc_signal< sc_logic > grp_voicerec_preprocessSound_fu_134_ap_idle;
    sc_signal< sc_logic > grp_voicerec_preprocessSound_fu_134_ap_ready;
    sc_signal< sc_lv<14> > grp_voicerec_preprocessSound_fu_134_inSound_address0;
    sc_signal< sc_logic > grp_voicerec_preprocessSound_fu_134_inSound_ce0;
    sc_signal< sc_logic > grp_voicerec_preprocessSound_fu_134_inSound_we0;
    sc_signal< sc_lv<64> > grp_voicerec_preprocessSound_fu_134_inSound_d0;
    sc_signal< sc_lv<64> > grp_voicerec_preprocessSound_fu_134_inSound_q0;
    sc_signal< sc_lv<13> > grp_voicerec_preprocessSound_fu_134_outSound_address0;
    sc_signal< sc_logic > grp_voicerec_preprocessSound_fu_134_outSound_ce0;
    sc_signal< sc_logic > grp_voicerec_preprocessSound_fu_134_outSound_we0;
    sc_signal< sc_lv<64> > grp_voicerec_preprocessSound_fu_134_outSound_d0;
    sc_signal< sc_lv<32> > i_reg_68;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_bdd_136;
    sc_signal< sc_lv<32> > index_reg_80;
    sc_signal< sc_logic > grp_voicerec_processChunk_fu_92_ap_start_ap_start_reg;
    sc_signal< sc_logic > grp_voicerec_classifySound_fu_118_ap_start_ap_start_reg;
    sc_signal< sc_logic > ap_sig_cseq_ST_st5_fsm_4;
    sc_signal< bool > ap_sig_bdd_234;
    sc_signal< sc_logic > grp_voicerec_preprocessSound_fu_134_ap_start_ap_start_reg;
    sc_signal< sc_lv<32> > p_neg_fu_150_p2;
    sc_signal< sc_lv<31> > p_lshr_fu_156_p4;
    sc_signal< sc_lv<32> > tmp_1_fu_166_p1;
    sc_signal< sc_lv<31> > p_lshr_f_fu_176_p4;
    sc_signal< sc_lv<1> > tmp_3_fu_142_p3;
    sc_signal< sc_lv<32> > p_neg_t_fu_170_p2;
    sc_signal< sc_lv<32> > tmp_2_fu_186_p1;
    sc_signal< sc_lv<32> > tmp_fu_198_p2;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_st1_fsm_0;
    static const sc_lv<5> ap_ST_st2_fsm_1;
    static const sc_lv<5> ap_ST_st3_fsm_2;
    static const sc_lv<5> ap_ST_st4_fsm_3;
    static const sc_lv<5> ap_ST_st5_fsm_4;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_1F40;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_ap_sig_bdd_136();
    void thread_ap_sig_bdd_21();
    void thread_ap_sig_bdd_234();
    void thread_ap_sig_bdd_55();
    void thread_ap_sig_bdd_70();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_ap_sig_cseq_ST_st5_fsm_4();
    void thread_grp_voicerec_classifySound_fu_118_ap_start();
    void thread_grp_voicerec_classifySound_fu_118_result_q0();
    void thread_grp_voicerec_preprocessSound_fu_134_ap_start();
    void thread_grp_voicerec_preprocessSound_fu_134_inSound_q0();
    void thread_grp_voicerec_processChunk_fu_92_ap_start();
    void thread_grp_voicerec_processChunk_fu_92_inputSound_q0();
    void thread_grp_voicerec_processChunk_fu_92_np();
    void thread_grp_voicerec_processChunk_fu_92_sp();
    void thread_grp_voicerec_processChunk_fu_92_tmp_122();
    void thread_i_1_fu_215_p2();
    void thread_inSound_address0();
    void thread_inSound_ce0();
    void thread_inSound_d0();
    void thread_inSound_we0();
    void thread_index_1_fu_209_p2();
    void thread_outSound_address0();
    void thread_outSound_ce0();
    void thread_outSound_d0();
    void thread_outSound_we0();
    void thread_p_lshr_f_fu_176_p4();
    void thread_p_lshr_fu_156_p4();
    void thread_p_neg_fu_150_p2();
    void thread_p_neg_t_fu_170_p2();
    void thread_result_address0();
    void thread_result_ce0();
    void thread_result_d0();
    void thread_result_we0();
    void thread_stride_fu_190_p3();
    void thread_tmp_1_fu_166_p1();
    void thread_tmp_2_fu_186_p1();
    void thread_tmp_3_fu_142_p3();
    void thread_tmp_fu_198_p2();
    void thread_tmp_s_fu_203_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
