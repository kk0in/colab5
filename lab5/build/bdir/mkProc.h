/*
 * Generated by Bluespec Compiler, version 2021.12.1 (build fd50140)
 * 
 * On Wed May 18 15:09:53 KST 2022
 * 
 */

/* Generation options: */
#ifndef __mkProc_h__
#define __mkProc_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkCsrFile.h"
#include "mkDMemory.h"
#include "mkIMemory.h"
#include "mkRFile.h"
#include "module_exec.h"
#include "module_decode.h"


/* Class declaration for the mkProc module */
class MOD_mkProc : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_mkCsrFile INST_csrf;
  MOD_Reg<tUWide> INST_d2r_data_0;
  MOD_Reg<tUWide> INST_d2r_data_1;
  MOD_Reg<tUWide> INST_d2r_data_2;
  MOD_Reg<tUInt8> INST_d2r_deqP_ehrReg;
  MOD_Wire<tUInt8> INST_d2r_deqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_d2r_deqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_d2r_deqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_d2r_deqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_d2r_deqP_wires_0;
  MOD_Wire<tUInt8> INST_d2r_deqP_wires_1;
  MOD_Reg<tUInt8> INST_d2r_empty_ehrReg;
  MOD_Wire<tUInt8> INST_d2r_empty_ignored_wires_0;
  MOD_Wire<tUInt8> INST_d2r_empty_ignored_wires_1;
  MOD_Wire<tUInt8> INST_d2r_empty_ignored_wires_2;
  MOD_Reg<tUInt8> INST_d2r_empty_virtual_reg_0;
  MOD_Reg<tUInt8> INST_d2r_empty_virtual_reg_1;
  MOD_Reg<tUInt8> INST_d2r_empty_virtual_reg_2;
  MOD_Wire<tUInt8> INST_d2r_empty_wires_0;
  MOD_Wire<tUInt8> INST_d2r_empty_wires_1;
  MOD_Wire<tUInt8> INST_d2r_empty_wires_2;
  MOD_Reg<tUInt8> INST_d2r_enqP_ehrReg;
  MOD_Wire<tUInt8> INST_d2r_enqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_d2r_enqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_d2r_enqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_d2r_enqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_d2r_enqP_wires_0;
  MOD_Wire<tUInt8> INST_d2r_enqP_wires_1;
  MOD_Reg<tUInt8> INST_d2r_full_ehrReg;
  MOD_Wire<tUInt8> INST_d2r_full_ignored_wires_0;
  MOD_Wire<tUInt8> INST_d2r_full_ignored_wires_1;
  MOD_Wire<tUInt8> INST_d2r_full_ignored_wires_2;
  MOD_Reg<tUInt8> INST_d2r_full_virtual_reg_0;
  MOD_Reg<tUInt8> INST_d2r_full_virtual_reg_1;
  MOD_Reg<tUInt8> INST_d2r_full_virtual_reg_2;
  MOD_Wire<tUInt8> INST_d2r_full_wires_0;
  MOD_Wire<tUInt8> INST_d2r_full_wires_1;
  MOD_Wire<tUInt8> INST_d2r_full_wires_2;
  MOD_mkDMemory INST_dMem;
  MOD_Reg<tUInt8> INST_eEpoch;
  MOD_Reg<tUInt32> INST_execRedirect_data_0_ehrReg;
  MOD_Wire<tUInt32> INST_execRedirect_data_0_ignored_wires_0;
  MOD_Wire<tUInt32> INST_execRedirect_data_0_ignored_wires_1;
  MOD_Reg<tUInt8> INST_execRedirect_data_0_virtual_reg_0;
  MOD_Reg<tUInt8> INST_execRedirect_data_0_virtual_reg_1;
  MOD_Wire<tUInt32> INST_execRedirect_data_0_wires_0;
  MOD_Wire<tUInt32> INST_execRedirect_data_0_wires_1;
  MOD_Wire<tUInt8> INST_execRedirect_deqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_deqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_execRedirect_deqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_execRedirect_deqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_execRedirect_deqP_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_deqP_wires_1;
  MOD_Reg<tUInt8> INST_execRedirect_empty_ehrReg;
  MOD_Wire<tUInt8> INST_execRedirect_empty_ignored_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_empty_ignored_wires_1;
  MOD_Wire<tUInt8> INST_execRedirect_empty_ignored_wires_2;
  MOD_Reg<tUInt8> INST_execRedirect_empty_virtual_reg_0;
  MOD_Reg<tUInt8> INST_execRedirect_empty_virtual_reg_1;
  MOD_Reg<tUInt8> INST_execRedirect_empty_virtual_reg_2;
  MOD_Wire<tUInt8> INST_execRedirect_empty_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_empty_wires_1;
  MOD_Wire<tUInt8> INST_execRedirect_empty_wires_2;
  MOD_Wire<tUInt8> INST_execRedirect_enqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_enqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_execRedirect_enqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_execRedirect_enqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_execRedirect_enqP_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_enqP_wires_1;
  MOD_Reg<tUInt8> INST_execRedirect_full_ehrReg;
  MOD_Wire<tUInt8> INST_execRedirect_full_ignored_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_full_ignored_wires_1;
  MOD_Wire<tUInt8> INST_execRedirect_full_ignored_wires_2;
  MOD_Reg<tUInt8> INST_execRedirect_full_virtual_reg_0;
  MOD_Reg<tUInt8> INST_execRedirect_full_virtual_reg_1;
  MOD_Reg<tUInt8> INST_execRedirect_full_virtual_reg_2;
  MOD_Wire<tUInt8> INST_execRedirect_full_wires_0;
  MOD_Wire<tUInt8> INST_execRedirect_full_wires_1;
  MOD_Wire<tUInt8> INST_execRedirect_full_wires_2;
  MOD_Reg<tUWide> INST_f2d_data_0;
  MOD_Reg<tUWide> INST_f2d_data_1;
  MOD_Reg<tUInt8> INST_f2d_deqP_ehrReg;
  MOD_Wire<tUInt8> INST_f2d_deqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_f2d_deqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_f2d_deqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_f2d_deqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_f2d_deqP_wires_0;
  MOD_Wire<tUInt8> INST_f2d_deqP_wires_1;
  MOD_Reg<tUInt8> INST_f2d_empty_ehrReg;
  MOD_Wire<tUInt8> INST_f2d_empty_ignored_wires_0;
  MOD_Wire<tUInt8> INST_f2d_empty_ignored_wires_1;
  MOD_Wire<tUInt8> INST_f2d_empty_ignored_wires_2;
  MOD_Reg<tUInt8> INST_f2d_empty_virtual_reg_0;
  MOD_Reg<tUInt8> INST_f2d_empty_virtual_reg_1;
  MOD_Reg<tUInt8> INST_f2d_empty_virtual_reg_2;
  MOD_Wire<tUInt8> INST_f2d_empty_wires_0;
  MOD_Wire<tUInt8> INST_f2d_empty_wires_1;
  MOD_Wire<tUInt8> INST_f2d_empty_wires_2;
  MOD_Reg<tUInt8> INST_f2d_enqP_ehrReg;
  MOD_Wire<tUInt8> INST_f2d_enqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_f2d_enqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_f2d_enqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_f2d_enqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_f2d_enqP_wires_0;
  MOD_Wire<tUInt8> INST_f2d_enqP_wires_1;
  MOD_Reg<tUInt8> INST_f2d_full_ehrReg;
  MOD_Wire<tUInt8> INST_f2d_full_ignored_wires_0;
  MOD_Wire<tUInt8> INST_f2d_full_ignored_wires_1;
  MOD_Wire<tUInt8> INST_f2d_full_ignored_wires_2;
  MOD_Reg<tUInt8> INST_f2d_full_virtual_reg_0;
  MOD_Reg<tUInt8> INST_f2d_full_virtual_reg_1;
  MOD_Reg<tUInt8> INST_f2d_full_virtual_reg_2;
  MOD_Wire<tUInt8> INST_f2d_full_wires_0;
  MOD_Wire<tUInt8> INST_f2d_full_wires_1;
  MOD_Wire<tUInt8> INST_f2d_full_wires_2;
  MOD_Reg<tUInt8> INST_fEpoch;
  MOD_mkIMemory INST_iMem;
  MOD_Reg<tUInt32> INST_pc;
  MOD_mkRFile INST_rf;
  MOD_Reg<tUInt8> INST_stat;
  MOD_Reg<tUInt8> INST_statRedirect_data_0_ehrReg;
  MOD_Wire<tUInt8> INST_statRedirect_data_0_ignored_wires_0;
  MOD_Wire<tUInt8> INST_statRedirect_data_0_ignored_wires_1;
  MOD_Reg<tUInt8> INST_statRedirect_data_0_virtual_reg_0;
  MOD_Reg<tUInt8> INST_statRedirect_data_0_virtual_reg_1;
  MOD_Wire<tUInt8> INST_statRedirect_data_0_wires_0;
  MOD_Wire<tUInt8> INST_statRedirect_data_0_wires_1;
  MOD_Wire<tUInt8> INST_statRedirect_deqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_statRedirect_deqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_statRedirect_deqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_statRedirect_deqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_statRedirect_deqP_wires_0;
  MOD_Wire<tUInt8> INST_statRedirect_deqP_wires_1;
  MOD_Reg<tUInt8> INST_statRedirect_empty_ehrReg;
  MOD_Wire<tUInt8> INST_statRedirect_empty_ignored_wires_0;
  MOD_Wire<tUInt8> INST_statRedirect_empty_ignored_wires_1;
  MOD_Wire<tUInt8> INST_statRedirect_empty_ignored_wires_2;
  MOD_Reg<tUInt8> INST_statRedirect_empty_virtual_reg_0;
  MOD_Reg<tUInt8> INST_statRedirect_empty_virtual_reg_1;
  MOD_Reg<tUInt8> INST_statRedirect_empty_virtual_reg_2;
  MOD_Wire<tUInt8> INST_statRedirect_empty_wires_0;
  MOD_Wire<tUInt8> INST_statRedirect_empty_wires_1;
  MOD_Wire<tUInt8> INST_statRedirect_empty_wires_2;
  MOD_Wire<tUInt8> INST_statRedirect_enqP_ignored_wires_0;
  MOD_Wire<tUInt8> INST_statRedirect_enqP_ignored_wires_1;
  MOD_Reg<tUInt8> INST_statRedirect_enqP_virtual_reg_0;
  MOD_Reg<tUInt8> INST_statRedirect_enqP_virtual_reg_1;
  MOD_Wire<tUInt8> INST_statRedirect_enqP_wires_0;
  MOD_Wire<tUInt8> INST_statRedirect_enqP_wires_1;
  MOD_Reg<tUInt8> INST_statRedirect_full_ehrReg;
  MOD_Wire<tUInt8> INST_statRedirect_full_ignored_wires_0;
  MOD_Wire<tUInt8> INST_statRedirect_full_ignored_wires_1;
  MOD_Wire<tUInt8> INST_statRedirect_full_ignored_wires_2;
  MOD_Reg<tUInt8> INST_statRedirect_full_virtual_reg_0;
  MOD_Reg<tUInt8> INST_statRedirect_full_virtual_reg_1;
  MOD_Reg<tUInt8> INST_statRedirect_full_virtual_reg_2;
  MOD_Wire<tUInt8> INST_statRedirect_full_wires_0;
  MOD_Wire<tUInt8> INST_statRedirect_full_wires_1;
  MOD_Wire<tUInt8> INST_statRedirect_full_wires_2;
  MOD_module_exec INST_instance_exec_1;
  MOD_module_decode INST_instance_decode_0;
 
 /* Constructor */
 public:
  MOD_mkProc(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUInt8 PORT_EN_dMemInit_request_put;
  tUInt8 PORT_EN_iMemInit_request_put;
  tUWide PORT_dMemInit_request_put;
  tUWide PORT_iMemInit_request_put;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_dMemInit_request_put;
  tUInt8 DEF_WILL_FIRE_iMemInit_request_put;
  tUInt8 DEF_dMem_RDY_init_request_put____d124;
  tUInt8 DEF_iMem_RDY_init_request_put____d123;
  tUInt8 DEF_exec_87_BIT_1___d388;
  tUWide DEF_exec___d387;
  tUWide DEF_SEL_ARR_d2r_data_0_50_BITS_139_TO_136_64_d2r_d_ETC___d349;
  tUInt32 DEF_rVal1__h25961;
  tUInt32 DEF_rVal2__h25962;
  tUInt32 DEF_pc__h25244;
  tUInt32 DEF_ppc__h25245;
  tUInt32 DEF_csrVal__h25963;
  tUWide DEF_d2r_data_2___d254;
  tUWide DEF_d2r_data_1___d252;
  tUWide DEF_d2r_data_0___d250;
  tUInt32 DEF_x__h27074;
  tUInt32 DEF_idx__h27071;
  tUInt32 DEF_x__h27009;
  tUInt8 DEF_rindx__h27006;
  tUInt32 DEF_x__h26944;
  tUInt8 DEF_rindx__h26941;
  tUInt8 DEF_x__h25697;
  tUInt8 DEF_d2r_full_wires_0_whas____d117;
  tUInt8 DEF_d2r_full_wires_0_wget____d118;
  tUInt8 DEF_d2r_full_ehrReg__h17153;
  tUInt8 DEF_d2r_empty_ehrReg__h16037;
  tUInt8 DEF_d2r_deqP_virtual_reg_1_read____d240;
  tUInt8 DEF_f2d_full_wires_0_whas____d83;
  tUInt8 DEF_f2d_full_wires_0_wget____d84;
  tUInt8 DEF_f2d_full_ehrReg__h13059;
  tUInt8 DEF_f2d_empty_ehrReg__h11943;
  tUInt8 DEF_execRedirect_full_ehrReg__h9020;
  tUInt8 DEF_execRedirect_empty_wires_0_whas____d39;
  tUInt8 DEF_execRedirect_empty_wires_0_wget____d40;
  tUInt8 DEF_execRedirect_empty_ehrReg__h7904;
  tUInt8 DEF_statRedirect_empty_wires_0_whas____d12;
  tUInt8 DEF_statRedirect_empty_wires_0_wget____d13;
  tUInt8 DEF_statRedirect_empty_ehrReg__h3524;
  tUInt8 DEF_eEpoch__h17356;
  tUInt8 DEF_fEpoch__h17354;
  tUInt8 DEF_csrf_started____d151;
  tUInt8 DEF_dMem_init_done____d128;
  tUInt8 DEF_iMem_init_done____d126;
  tUInt32 DEF_x__h26889;
  tUInt32 DEF__read_pc__h25933;
  tUInt32 DEF__read_ppc__h25934;
  tUInt32 DEF_x__h26883;
  tUInt32 DEF__read_pc__h25917;
  tUInt32 DEF__read_ppc__h25918;
  tUInt32 DEF_x__h26886;
  tUInt32 DEF__read_pc__h25925;
  tUInt32 DEF__read_ppc__h25926;
  tUInt32 DEF_x__h26729;
  tUInt32 DEF_x__h26723;
  tUInt32 DEF_x__h26726;
  tUInt8 DEF_x__h26241;
  tUInt8 DEF_x__h26402;
  tUInt8 DEF_x__h26563;
  tUInt8 DEF_x__h26235;
  tUInt8 DEF_x__h26396;
  tUInt8 DEF_x__h26557;
  tUInt8 DEF_x__h26238;
  tUInt8 DEF_x__h26399;
  tUInt8 DEF_x__h26560;
  tUInt8 DEF_n__read__h25492;
  tUInt32 DEF_SEL_ARR_IF_d2r_data_0_50_BIT_97_33_THEN_d2r_da_ETC___d345;
  tUInt32 DEF_SEL_ARR_IF_d2r_data_0_50_BIT_110_20_THEN_d2r_d_ETC___d332;
  tUInt8 DEF_SEL_ARR_IF_d2r_data_0_50_BIT_116_06_THEN_d2r_d_ETC___d318;
  tUInt8 DEF_SEL_ARR_IF_d2r_data_0_50_BIT_128_79_THEN_d2r_d_ETC___d291;
  tUInt8 DEF_SEL_ARR_IF_d2r_data_0_50_BIT_122_93_THEN_d2r_d_ETC___d305;
  tUInt8 DEF_SEL_ARR_d2r_data_0_50_BITS_139_TO_136_64_d2r_d_ETC___d268;
  tUInt8 DEF_SEL_ARR_d2r_data_0_50_BITS_135_TO_132_69_d2r_d_ETC___d273;
  tUInt8 DEF_SEL_ARR_d2r_data_0_50_BITS_131_TO_129_74_d2r_d_ETC___d278;
  tUInt8 DEF_SEL_ARR_d2r_data_0_50_BIT_97_33_d2r_data_1_52__ETC___d337;
  tUInt8 DEF_SEL_ARR_d2r_data_0_50_BIT_110_20_d2r_data_1_52_ETC___d324;
  tUInt8 DEF_SEL_ARR_d2r_data_0_50_BIT_116_06_d2r_data_1_52_ETC___d310;
  tUInt8 DEF_SEL_ARR_d2r_data_0_50_BIT_122_93_d2r_data_1_52_ETC___d297;
  tUInt8 DEF_SEL_ARR_d2r_data_0_50_BIT_128_79_d2r_data_1_52_ETC___d283;
  tUInt8 DEF_SEL_ARR_d2r_data_0_50_BIT_0_51_d2r_data_1_52_B_ETC___d260;
  tUInt8 DEF_fEpoch_33_EQ_eEpoch_34___d135;
  tUInt8 DEF_SEL_ARR_d2r_data_0_50_BIT_0_51_d2r_data_1_52_B_ETC___d261;
  tUWide DEF_SEL_ARR_d2r_data_0_50_BITS_131_TO_129_74_d2r_d_ETC___d348;
 
 /* Local definitions */
 private:
  tUInt8 DEF_x__h22221;
  tUInt8 DEF_x__h24514;
  tUInt8 DEF_def__h10753;
  tUInt8 DEF_def__h9937;
  tUInt8 DEF_def__h21229;
  tUInt8 DEF_f2d_enqP_virtual_reg_0_read____d163;
  tUInt8 DEF_NOT_f2d_enqP_virtual_reg_1_read__61_62_AND_NOT_ETC___d166;
  tUWide DEF_decode___d220;
  tUWide DEF_f2d_data_1___d213;
  tUWide DEF_f2d_data_0___d211;
  tUInt32 DEF_x_wget__h5027;
  tUInt32 DEF_x__h27480;
  tUInt8 DEF_x_wget__h14359;
  tUInt8 DEF_x_wget__h13543;
  tUInt8 DEF_def__h24738;
  tUInt8 DEF_statRedirect_data_0_ehrReg__h1219;
  tUInt8 DEF_d2r_enqP_virtual_reg_1_read____d206;
  tUInt8 DEF_f2d_deqP_virtual_reg_1_read____d178;
  tUInt8 DEF_x_wget__h10265;
  tUInt8 DEF_f2d_enqP_virtual_reg_1_read____d161;
  tUInt8 DEF_x_wget__h9449;
  tUInt8 DEF_statRedirect_full_ehrReg__h4640;
  tUInt32 DEF_def__h5515;
  tUInt8 DEF_IF_statRedirect_data_0_wires_0_whas_THEN_statR_ETC___d6;
  tUInt8 DEF_y__h24684;
  tUInt8 DEF_def__h14847;
  tUInt8 DEF_def__h14031;
  tUInt8 DEF_IF_d2r_full_wires_0_whas__17_THEN_d2r_full_wir_ETC___d120;
  tUInt8 DEF_IF_d2r_empty_wires_0_whas__07_THEN_d2r_empty_w_ETC___d110;
  tUInt8 DEF_IF_f2d_full_wires_0_whas__3_THEN_f2d_full_wire_ETC___d86;
  tUInt8 DEF_IF_f2d_empty_wires_0_whas__3_THEN_f2d_empty_wi_ETC___d76;
  tUInt8 DEF_IF_execRedirect_full_wires_0_whas__9_THEN_exec_ETC___d52;
  tUInt8 DEF_IF_execRedirect_empty_wires_0_whas__9_THEN_exe_ETC___d42;
  tUInt8 DEF_IF_statRedirect_full_wires_0_whas__2_THEN_stat_ETC___d25;
  tUInt8 DEF_IF_statRedirect_empty_wires_0_whas__2_THEN_sta_ETC___d15;
  tUInt8 DEF_NOT_f2d_deqP_virtual_reg_1_read__78_79_AND_IF__ETC___d180;
  tUInt8 DEF_NOT_f2d_deqP_virtual_reg_1_read__78___d179;
  tUInt8 DEF_NOT_f2d_enqP_virtual_reg_1_read__61___d162;
  tUWide DEF_decode_20_CONCAT_SEL_ARR_f2d_data_0_11_BITS_64_ETC___d234;
  tUWide DEF_iMem_req_pc_56_69_CONCAT_pc_56_CONCAT_pc_56_PL_ETC___d171;
  tUWide DEF__1_CONCAT_DONTCARE___d132;
  tUWide DEF_NOT_exec_87_BITS_88_TO_85_09_EQ_2_19_23_CONCAT_ETC___d429;
 
 /* Rules */
 public:
  void RL_statRedirect_data_0_canonicalize();
  void RL_statRedirect_empty_canonicalize();
  void RL_statRedirect_full_canonicalize();
  void RL_execRedirect_data_0_canonicalize();
  void RL_execRedirect_empty_canonicalize();
  void RL_execRedirect_full_canonicalize();
  void RL_f2d_enqP_canonicalize();
  void RL_f2d_deqP_canonicalize();
  void RL_f2d_empty_canonicalize();
  void RL_f2d_full_canonicalize();
  void RL_d2r_enqP_canonicalize();
  void RL_d2r_deqP_canonicalize();
  void RL_d2r_empty_canonicalize();
  void RL_d2r_full_canonicalize();
  void RL_test();
  void RL_doFetch();
  void RL_doDecode();
  void RL_doRest();
  void RL_upd_Stat();
 
 /* Methods */
 public:
  tUInt64 METH_cpuToHost();
  tUInt8 METH_RDY_cpuToHost();
  void METH_hostToCpu(tUInt32 ARG_hostToCpu_startpc);
  tUInt8 METH_RDY_hostToCpu();
  void METH_iMemInit_request_put(tUWide ARG_iMemInit_request_put);
  tUInt8 METH_RDY_iMemInit_request_put();
  tUInt8 METH_iMemInit_done();
  tUInt8 METH_RDY_iMemInit_done();
  void METH_dMemInit_request_put(tUWide ARG_dMemInit_request_put);
  tUInt8 METH_RDY_dMemInit_request_put();
  tUInt8 METH_dMemInit_done();
  tUInt8 METH_RDY_dMemInit_done();
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkProc &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkProc &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkProc &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkProc &backing);
};

#endif /* ifndef __mkProc_h__ */