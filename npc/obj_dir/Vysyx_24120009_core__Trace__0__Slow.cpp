// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24120009_core__Syms.h"


VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_init_sub__TOP__0(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+532,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+533,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+534,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+535,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+536,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+537,"mem_wen_debug", false,-1);
    tracep->declBit(c+538,"mem_en_debug", false,-1);
    tracep->declBus(c+539,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+540,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+541,"rf_we_debug", false,-1);
    tracep->declBit(c+542,"wbu_active_debug", false,-1);
    tracep->declBus(c+543,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+544,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+545,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+546,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+547,"pc_wen_debug", false,-1);
    tracep->declBit(c+548,"mem_active_debug", false,-1);
    tracep->declBus(c+549,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+550,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+551,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+552,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+553,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+554,"mem_access_done_debug", false,-1);
    tracep->declBus(c+555,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+556,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+557,"ifu_state_debug", false,-1, 2,0);
    tracep->declBit(c+558,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+559,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+560,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+561,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+562,"idu_state_debug", false,-1, 1,0);
    tracep->declBit(c+563,"inst_valid_debug", false,-1);
    tracep->pushNamePrefix("ysyx_24120009_core ");
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+532,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+533,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+534,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+535,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+536,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+537,"mem_wen_debug", false,-1);
    tracep->declBit(c+538,"mem_en_debug", false,-1);
    tracep->declBus(c+539,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+540,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+541,"rf_we_debug", false,-1);
    tracep->declBit(c+542,"wbu_active_debug", false,-1);
    tracep->declBus(c+532,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+544,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+545,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+546,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+547,"pc_wen_debug", false,-1);
    tracep->declBit(c+548,"mem_active_debug", false,-1);
    tracep->declBus(c+549,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+550,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+551,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+552,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+553,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+554,"mem_access_done_debug", false,-1);
    tracep->declBus(c+555,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+556,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+557,"ifu_state_debug", false,-1, 2,0);
    tracep->declBit(c+558,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+559,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+560,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+561,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+562,"idu_state_debug", false,-1, 1,0);
    tracep->declBit(c+563,"inst_valid_debug", false,-1);
    tracep->declBus(c+277,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+571,"alu_op", false,-1, 4,0);
    tracep->declBus(c+278,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+522,"rf_we", false,-1);
    tracep->declBit(c+572,"mem_en", false,-1);
    tracep->declBit(c+573,"mem_wen", false,-1);
    tracep->declBus(c+574,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+279,"Op1", false,-1, 31,0);
    tracep->declBus(c+280,"Op2", false,-1, 31,0);
    tracep->declBus(c+575,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+281,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+282,"br_target", false,-1, 31,0);
    tracep->declBus(c+283,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+564,"pc_wen", false,-1);
    tracep->declBus(c+532,"pc_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+533,"inst_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+284,"pc_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+285,"inst_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+286,"rdata2_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+287,"rd_addr_from_IDU_to_EXU", false,-1, 4,0);
    tracep->declBus(c+288,"pc_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+289,"inst_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+290,"result_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+291,"rdata2_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+292,"rd_addr_from_EXU_to_MEM", false,-1, 4,0);
    tracep->declBus(c+549,"dmem_addr_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+523,"dmem_rdata_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+293,"result_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+294,"rd_addr_from_MEM_to_WBU", false,-1, 4,0);
    tracep->declBus(c+295,"pc_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+296,"inst_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+297,"inst_from_WBU_to_MEM", false,-1, 31,0);
    tracep->declBit(c+554,"mem_access_done", false,-1);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+298,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+299,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+300,"waddr", false,-1, 4,0);
    tracep->declBus(c+301,"rdata1", false,-1, 31,0);
    tracep->declBus(c+286,"rdata2", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+279,"Op1", false,-1, 31,0);
    tracep->declBus(c+280,"Op2", false,-1, 31,0);
    tracep->declBus(c+284,"pc_i", false,-1, 31,0);
    tracep->declBus(c+285,"inst_i", false,-1, 31,0);
    tracep->declBus(c+286,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+287,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBus(c+549,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+289,"inst_o", false,-1, 31,0);
    tracep->declBus(c+288,"pc_o", false,-1, 31,0);
    tracep->declBus(c+290,"result", false,-1, 31,0);
    tracep->declBus(c+291,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+292,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+552,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+553,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+75,"state", false,-1, 1,0);
    tracep->declBus(c+302,"alu_op", false,-1, 4,0);
    tracep->declBus(c+303,"funct3", false,-1, 2,0);
    tracep->declBus(c+304,"funct7", false,-1, 6,0);
    tracep->declBus(c+305,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+279,"A", false,-1, 31,0);
    tracep->declBus(c+280,"B", false,-1, 31,0);
    tracep->declBus(c+302,"ALUFun", false,-1, 4,0);
    tracep->declBus(c+290,"Result", false,-1, 31,0);
    tracep->declBus(c+306,"add_result", false,-1, 31,0);
    tracep->declBus(c+307,"sub_result", false,-1, 31,0);
    tracep->declBus(c+308,"slt_result", false,-1, 31,0);
    tracep->declBus(c+309,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+310,"xor_result", false,-1, 31,0);
    tracep->declBus(c+311,"or_result", false,-1, 31,0);
    tracep->declBus(c+312,"and_result", false,-1, 31,0);
    tracep->declBus(c+313,"sll_result", false,-1, 31,0);
    tracep->declBus(c+314,"srl_result", false,-1, 31,0);
    tracep->declBus(c+315,"sra_result", false,-1, 31,0);
    tracep->declBus(c+539,"op1_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu_mux ");
    tracep->declBus(c+576,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+577,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+290,"out", false,-1, 31,0);
    tracep->declBus(c+302,"key", false,-1, 4,0);
    tracep->declArray(c+316,"lut", false,-1, 406,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+576,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+577,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+579,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+290,"out", false,-1, 31,0);
    tracep->declBus(c+302,"key", false,-1, 4,0);
    tracep->declBus(c+580,"default_out", false,-1, 31,0);
    tracep->declArray(c+316,"lut", false,-1, 406,0);
    tracep->declBus(c+581,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+329+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+351+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+362,"lut_out", false,-1, 31,0);
    tracep->declBit(c+363,"hit", false,-1);
    tracep->declBus(c+582,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inst_reg_EXU ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+285,"din", false,-1, 31,0);
    tracep->declBus(c+289,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_EXU ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+284,"din", false,-1, 31,0);
    tracep->declBus(c+288,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_EXU ");
    tracep->declBus(c+577,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+585,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+287,"din", false,-1, 4,0);
    tracep->declBus(c+292,"dout", false,-1, 4,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_EXU ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+286,"din", false,-1, 31,0);
    tracep->declBus(c+291,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+533,"inst_i", false,-1, 31,0);
    tracep->declBus(c+532,"pc_i", false,-1, 31,0);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBus(c+301,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+286,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+298,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+299,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+287,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+279,"Op1", false,-1, 31,0);
    tracep->declBus(c+280,"Op2", false,-1, 31,0);
    tracep->declBus(c+284,"pc_o", false,-1, 31,0);
    tracep->declBus(c+285,"inst_o", false,-1, 31,0);
    tracep->declBus(c+286,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBus(c+281,"jump_reg_target_o", false,-1, 31,0);
    tracep->declBus(c+282,"br_target_o", false,-1, 31,0);
    tracep->declBus(c+283,"jmp_target_o", false,-1, 31,0);
    tracep->declBus(c+278,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+562,"idu_state_debug", false,-1, 1,0);
    tracep->declBus(c+76,"state", false,-1, 1,0);
    tracep->declBit(c+364,"br_eq", false,-1);
    tracep->declBit(c+365,"br_lt", false,-1);
    tracep->declBit(c+366,"br_ltu", false,-1);
    tracep->declBus(c+367,"Op1Sel", false,-1, 1,0);
    tracep->declBus(c+368,"Op2Sel", false,-1, 1,0);
    tracep->declBus(c+287,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+369,"imm_i", false,-1, 11,0);
    tracep->declBus(c+370,"imm_s", false,-1, 11,0);
    tracep->declBus(c+371,"imm_b", false,-1, 11,0);
    tracep->declBus(c+372,"imm_u", false,-1, 19,0);
    tracep->declBus(c+373,"imm_j", false,-1, 19,0);
    tracep->declBus(c+374,"imm_i_sext", false,-1, 31,0);
    tracep->declBus(c+375,"imm_s_sext", false,-1, 31,0);
    tracep->declBus(c+376,"imm_b_sext", false,-1, 31,0);
    tracep->declBus(c+377,"imm_u_sext", false,-1, 31,0);
    tracep->declBus(c+378,"imm_j_sext", false,-1, 31,0);
    tracep->declBus(c+379,"funct3", false,-1, 2,0);
    tracep->declBus(c+380,"funct7", false,-1, 6,0);
    tracep->declBus(c+381,"opcode", false,-1, 6,0);
    tracep->declBit(c+382,"branch_taken", false,-1);
    tracep->pushNamePrefix("b_taken_mux ");
    tracep->declBus(c+586,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+587,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+588,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"out", false,-1, 0,0);
    tracep->declBus(c+379,"key", false,-1, 2,0);
    tracep->declBus(c+383,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+586,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+587,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+588,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+579,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+382,"out", false,-1, 0,0);
    tracep->declBus(c+379,"key", false,-1, 2,0);
    tracep->declBus(c+589,"default_out", false,-1, 0,0);
    tracep->declBus(c+383,"lut", false,-1, 23,0);
    tracep->declBus(c+590,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+384+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+390+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+396,"lut_out", false,-1, 0,0);
    tracep->declBit(c+397,"hit", false,-1);
    tracep->declBus(c+591,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_reg_IDU ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+533,"din", false,-1, 31,0);
    tracep->declBus(c+285,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op1_sel_mux ");
    tracep->declBus(c+592,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+592,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+279,"out", false,-1, 31,0);
    tracep->declBus(c+367,"key", false,-1, 1,0);
    tracep->declArray(c+398,"lut", false,-1, 67,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+592,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+592,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+579,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+279,"out", false,-1, 31,0);
    tracep->declBus(c+367,"key", false,-1, 1,0);
    tracep->declBus(c+580,"default_out", false,-1, 31,0);
    tracep->declArray(c+398,"lut", false,-1, 67,0);
    tracep->declBus(c+593,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+401+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+405+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+407,"lut_out", false,-1, 31,0);
    tracep->declBit(c+408,"hit", false,-1);
    tracep->declBus(c+594,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("op2_sel_mux ");
    tracep->declBus(c+590,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+592,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+280,"out", false,-1, 31,0);
    tracep->declBus(c+368,"key", false,-1, 1,0);
    tracep->declArray(c+409,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+590,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+592,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+579,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+280,"out", false,-1, 31,0);
    tracep->declBus(c+368,"key", false,-1, 1,0);
    tracep->declBus(c+580,"default_out", false,-1, 31,0);
    tracep->declArray(c+409,"lut", false,-1, 135,0);
    tracep->declBus(c+593,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+414+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+422+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+426,"lut_out", false,-1, 31,0);
    tracep->declBit(c+427,"hit", false,-1);
    tracep->declBus(c+595,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_IDU ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+532,"din", false,-1, 31,0);
    tracep->declBus(c+284,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+278,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+281,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+282,"br_target", false,-1, 31,0);
    tracep->declBus(c+283,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+564,"pc_wen", false,-1);
    tracep->declBus(c+532,"pc_o", false,-1, 31,0);
    tracep->declBus(c+533,"inst_o", false,-1, 31,0);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBit(c+584,"idu_ready", false,-1);
    tracep->declBus(c+557,"state_debug", false,-1, 2,0);
    tracep->declBit(c+558,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+559,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+77,"state", false,-1, 2,0);
    tracep->declBus(c+596,"IDLE", false,-1, 2,0);
    tracep->declBus(c+597,"FETCH_REQ", false,-1, 2,0);
    tracep->declBus(c+598,"FETCH_WAIT", false,-1, 2,0);
    tracep->declBus(c+599,"FETCH_DONE", false,-1, 2,0);
    tracep->declBus(c+428,"pc", false,-1, 31,0);
    tracep->declBus(c+429,"pc_next", false,-1, 31,0);
    tracep->declBus(c+430,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+600,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+580,"exception", false,-1, 31,0);
    tracep->declBus(c+78,"rdata", false,-1, 31,0);
    tracep->declBit(c+79,"rvalid", false,-1);
    tracep->declBus(c+80,"if_inst_buffer", false,-1, 31,0);
    tracep->declBit(c+81,"arvalid", false,-1);
    tracep->declBit(c+82,"arready", false,-1);
    tracep->declBit(c+83,"rready", false,-1);
    tracep->pushNamePrefix("axi4_ifu ");
    tracep->declBus(c+578,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBit(c+589,"awvalid", false,-1);
    tracep->declBit(c+84,"awready", false,-1);
    tracep->declBus(c+580,"awaddr", false,-1, 31,0);
    tracep->declBit(c+589,"wvalid", false,-1);
    tracep->declBit(c+85,"wready", false,-1);
    tracep->declBus(c+580,"wdata", false,-1, 31,0);
    tracep->declBus(c+601,"wstrb", false,-1, 7,0);
    tracep->declBit(c+86,"bvalid", false,-1);
    tracep->declBit(c+589,"bready", false,-1);
    tracep->declBus(c+87,"bresp", false,-1, 1,0);
    tracep->declBit(c+81,"arvalid", false,-1);
    tracep->declBit(c+82,"arready", false,-1);
    tracep->declBus(c+428,"araddr", false,-1, 31,0);
    tracep->declBit(c+79,"rvalid", false,-1);
    tracep->declBit(c+83,"rready", false,-1);
    tracep->declBus(c+78,"rdata", false,-1, 31,0);
    tracep->declBus(c+88,"rresp", false,-1, 1,0);
    tracep->declBus(c+559,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+89,"sram_data_out", false,-1, 31,0);
    tracep->declBit(c+90,"sram_rd_res_valid", false,-1);
    tracep->declBit(c+91,"sram_wt_res_valid", false,-1);
    tracep->declBus(c+92,"state", false,-1, 1,0);
    tracep->declBus(c+602,"IDLE", false,-1, 1,0);
    tracep->declBus(c+603,"WRITE", false,-1, 1,0);
    tracep->declBus(c+604,"READ", false,-1, 1,0);
    tracep->declBus(c+93,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+605,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+606,"wstrb_reg", false,-1, 7,0);
    tracep->declBit(c+94,"rd_req_valid", false,-1);
    tracep->declBit(c+95,"wt_req_valid", false,-1);
    tracep->pushNamePrefix("sram_inst ");
    tracep->declBus(c+607,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBit(c+94,"rd_req_valid", false,-1);
    tracep->declBus(c+93,"addr", false,-1, 31,0);
    tracep->declBus(c+89,"data_out", false,-1, 31,0);
    tracep->declBit(c+90,"rd_res_valid", false,-1);
    tracep->declBit(c+95,"wt_req_valid", false,-1);
    tracep->declBus(c+93,"waddr", false,-1, 31,0);
    tracep->declBus(c+605,"wdata", false,-1, 31,0);
    tracep->declBus(c+606,"wmask", false,-1, 7,0);
    tracep->declBit(c+91,"wt_res_valid", false,-1);
    tracep->declBus(c+96,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+97,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+98,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+99,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+100,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+101,"wt_req_valid_delayed", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+102+i*1,"addr_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBit(c+112+i*1,"rd_req_valid_pipeline", true,(i+0));
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+122+i*1,"waddr_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+132+i*1,"wdata_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+142+i*1,"wmask_pipeline", true,(i+0), 7,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBit(c+152+i*1,"wt_req_valid_pipeline", true,(i+0));
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+162,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+163,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("mux_pc_sel ");
    tracep->declBus(c+577,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+587,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+429,"out", false,-1, 31,0);
    tracep->declBus(c+278,"key", false,-1, 2,0);
    tracep->declArray(c+431,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+577,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+587,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+579,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+429,"out", false,-1, 31,0);
    tracep->declBus(c+278,"key", false,-1, 2,0);
    tracep->declBus(c+580,"default_out", false,-1, 31,0);
    tracep->declArray(c+431,"lut", false,-1, 174,0);
    tracep->declBus(c+608,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+437+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+447+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+452,"lut_out", false,-1, 31,0);
    tracep->declBit(c+453,"hit", false,-1);
    tracep->declBus(c+609,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+429,"din", false,-1, 31,0);
    tracep->declBus(c+428,"dout", false,-1, 31,0);
    tracep->declBit(c+564,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+288,"pc_i", false,-1, 31,0);
    tracep->declBus(c+289,"inst_i", false,-1, 31,0);
    tracep->declBus(c+290,"result_i", false,-1, 31,0);
    tracep->declBus(c+549,"dmem_addr_i", false,-1, 31,0);
    tracep->declBus(c+291,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+292,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+296,"inst_o", false,-1, 31,0);
    tracep->declBus(c+295,"pc_o", false,-1, 31,0);
    tracep->declBus(c+293,"result_o", false,-1, 31,0);
    tracep->declBus(c+523,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+294,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+554,"mem_access_done", false,-1);
    tracep->declBit(c+548,"mem_active", false,-1);
    tracep->declBus(c+533,"inst_from_IFU", false,-1, 31,0);
    tracep->declBus(c+297,"inst_from_WBU", false,-1, 31,0);
    tracep->declBit(c+556,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+560,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+561,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+164,"state", false,-1, 1,0);
    tracep->declBus(c+165,"dmem_rdata_raw", false,-1, 31,0);
    tracep->declBus(c+454,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+455,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+456,"wmask", false,-1, 7,0);
    tracep->declBus(c+457,"ctl_mem_access", false,-1, 2,0);
    tracep->declBit(c+166,"mem_en", false,-1);
    tracep->declBit(c+167,"mem_wen", false,-1);
    tracep->declBus(c+458,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+454,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+168,"rvalid", false,-1);
    tracep->declBit(c+169,"wt_res_valid", false,-1);
    tracep->declBit(c+170,"arvalid", false,-1);
    tracep->declBit(c+171,"wt_req_valid", false,-1);
    tracep->declBit(c+172,"arready", false,-1);
    tracep->declBit(c+173,"awready", false,-1);
    tracep->declBit(c+174,"rready", false,-1);
    tracep->declBit(c+175,"wready", false,-1);
    tracep->declBit(c+176,"bready", false,-1);
    tracep->declBus(c+459,"funct3", false,-1, 2,0);
    tracep->declBus(c+460,"funct7", false,-1, 6,0);
    tracep->declBus(c+461,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+165,"data_in", false,-1, 31,0);
    tracep->declBus(c+458,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+457,"control", false,-1, 2,0);
    tracep->declBus(c+523,"data_out", false,-1, 31,0);
    tracep->declBus(c+462,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+524,"shifted_data", false,-1, 31,0);
    tracep->declBus(c+525,"zero_ext_byte", false,-1, 31,0);
    tracep->declBus(c+526,"zero_ext_half", false,-1, 31,0);
    tracep->declBus(c+527,"sign_ext_byte", false,-1, 31,0);
    tracep->declBus(c+528,"sign_ext_half", false,-1, 31,0);
    tracep->pushNamePrefix("mem_mux ");
    tracep->declBus(c+577,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+587,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+523,"out", false,-1, 31,0);
    tracep->declBus(c+457,"key", false,-1, 2,0);
    tracep->declArray(c+256,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+577,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+587,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+579,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+523,"out", false,-1, 31,0);
    tracep->declBus(c+457,"key", false,-1, 2,0);
    tracep->declBus(c+580,"default_out", false,-1, 31,0);
    tracep->declArray(c+256,"lut", false,-1, 174,0);
    tracep->declBus(c+608,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+262+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+272+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+529,"lut_out", false,-1, 31,0);
    tracep->declBit(c+463,"hit", false,-1);
    tracep->declBus(c+609,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4_mem ");
    tracep->declBus(c+578,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBit(c+171,"awvalid", false,-1);
    tracep->declBit(c+173,"awready", false,-1);
    tracep->declBus(c+458,"awaddr", false,-1, 31,0);
    tracep->declBit(c+171,"wvalid", false,-1);
    tracep->declBit(c+175,"wready", false,-1);
    tracep->declBus(c+455,"wdata", false,-1, 31,0);
    tracep->declBus(c+456,"wstrb", false,-1, 7,0);
    tracep->declBit(c+169,"bvalid", false,-1);
    tracep->declBit(c+176,"bready", false,-1);
    tracep->declBus(c+177,"bresp", false,-1, 1,0);
    tracep->declBit(c+170,"arvalid", false,-1);
    tracep->declBit(c+172,"arready", false,-1);
    tracep->declBus(c+458,"araddr", false,-1, 31,0);
    tracep->declBit(c+168,"rvalid", false,-1);
    tracep->declBit(c+174,"rready", false,-1);
    tracep->declBus(c+165,"rdata", false,-1, 31,0);
    tracep->declBus(c+178,"rresp", false,-1, 1,0);
    tracep->declBus(c+561,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+179,"sram_data_out", false,-1, 31,0);
    tracep->declBit(c+180,"sram_rd_res_valid", false,-1);
    tracep->declBit(c+181,"sram_wt_res_valid", false,-1);
    tracep->declBus(c+182,"state", false,-1, 1,0);
    tracep->declBus(c+602,"IDLE", false,-1, 1,0);
    tracep->declBus(c+603,"WRITE", false,-1, 1,0);
    tracep->declBus(c+604,"READ", false,-1, 1,0);
    tracep->declBus(c+183,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+184,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+185,"wstrb_reg", false,-1, 7,0);
    tracep->declBit(c+186,"rd_req_valid", false,-1);
    tracep->declBit(c+187,"wt_req_valid", false,-1);
    tracep->pushNamePrefix("sram_inst ");
    tracep->declBus(c+607,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBit(c+186,"rd_req_valid", false,-1);
    tracep->declBus(c+183,"addr", false,-1, 31,0);
    tracep->declBus(c+179,"data_out", false,-1, 31,0);
    tracep->declBit(c+180,"rd_res_valid", false,-1);
    tracep->declBit(c+187,"wt_req_valid", false,-1);
    tracep->declBus(c+183,"waddr", false,-1, 31,0);
    tracep->declBus(c+184,"wdata", false,-1, 31,0);
    tracep->declBus(c+185,"wmask", false,-1, 7,0);
    tracep->declBit(c+181,"wt_res_valid", false,-1);
    tracep->declBus(c+188,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+189,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+190,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+191,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+192,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+193,"wt_req_valid_delayed", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+194+i*1,"addr_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBit(c+204+i*1,"rd_req_valid_pipeline", true,(i+0));
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+214+i*1,"waddr_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+224+i*1,"wdata_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+234+i*1,"wmask_pipeline", true,(i+0), 7,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBit(c+244+i*1,"wt_req_valid_pipeline", true,(i+0));
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+254,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+255,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("dmem_addr_reg_MEM ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+549,"din", false,-1, 31,0);
    tracep->declBus(c+458,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_MEM ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+289,"din", false,-1, 31,0);
    tracep->declBus(c+296,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_acces_ctl_mux ");
    tracep->declBus(c+610,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+607,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+587,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+457,"out", false,-1, 2,0);
    tracep->declBus(c+464,"key", false,-1, 9,0);
    tracep->declArray(c+611,"lut", false,-1, 103,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+610,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+607,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+587,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+579,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+457,"out", false,-1, 2,0);
    tracep->declBus(c+464,"key", false,-1, 9,0);
    tracep->declBus(c+596,"default_out", false,-1, 2,0);
    tracep->declArray(c+611,"lut", false,-1, 103,0);
    tracep->declBus(c+615,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+42+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+50+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+465,"lut_out", false,-1, 2,0);
    tracep->declBit(c+466,"hit", false,-1);
    tracep->declBus(c+616,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_MEM ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+288,"din", false,-1, 31,0);
    tracep->declBus(c+295,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_MEM ");
    tracep->declBus(c+577,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+585,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+292,"din", false,-1, 4,0);
    tracep->declBus(c+294,"dout", false,-1, 4,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_MEM ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+290,"din", false,-1, 31,0);
    tracep->declBus(c+293,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_MEM ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+291,"din", false,-1, 31,0);
    tracep->declBus(c+454,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wmask_gen ");
    tracep->declBus(c+457,"control", false,-1, 2,0);
    tracep->declBus(c+458,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+454,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+455,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+456,"wmask", false,-1, 7,0);
    tracep->declBus(c+462,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+467,"base_mask", false,-1, 7,0);
    tracep->declBus(c+456,"shifted_mask", false,-1, 7,0);
    tracep->pushNamePrefix("mem_mux_write ");
    tracep->declBus(c+587,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+587,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+610,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+467,"out", false,-1, 7,0);
    tracep->declBus(c+457,"key", false,-1, 2,0);
    tracep->declQuad(c+617,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+587,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+587,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+610,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+579,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+467,"out", false,-1, 7,0);
    tracep->declBus(c+457,"key", false,-1, 2,0);
    tracep->declBus(c+601,"default_out", false,-1, 7,0);
    tracep->declQuad(c+617,"lut", false,-1, 32,0);
    tracep->declBus(c+576,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+58+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+61+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+64+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+468,"lut_out", false,-1, 7,0);
    tracep->declBit(c+469,"hit", false,-1);
    tracep->declBus(c+619,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+577,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBus(c+277,"wdata", false,-1, 31,0);
    tracep->declBus(c+300,"waddr", false,-1, 4,0);
    tracep->declBit(c+522,"wen", false,-1);
    tracep->declBus(c+298,"raddr1", false,-1, 4,0);
    tracep->declBus(c+299,"raddr2", false,-1, 4,0);
    tracep->declBus(c+301,"rdata1", false,-1, 31,0);
    tracep->declBus(c+286,"rdata2", false,-1, 31,0);
    tracep->declBus(c+535,"x2_debug", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+470+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+67,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+277,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+300,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+522,"rf_we", false,-1);
    tracep->declBus(c+295,"pc_i", false,-1, 31,0);
    tracep->declBus(c+296,"inst_i", false,-1, 31,0);
    tracep->declBus(c+293,"result_i", false,-1, 31,0);
    tracep->declBus(c+523,"dmem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+294,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+554,"mem_access_done", false,-1);
    tracep->declBit(c+564,"pc_wen", false,-1);
    tracep->declBus(c+533,"inst_from_IFU", false,-1, 31,0);
    tracep->declBit(c+542,"wbu_active", false,-1);
    tracep->declBus(c+297,"inst_o", false,-1, 31,0);
    tracep->declBus(c+544,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+545,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+546,"opcode_debug", false,-1, 6,0);
    tracep->declBus(c+551,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+565,"state", false,-1, 1,0);
    tracep->declBus(c+544,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+502,"pc_o", false,-1, 31,0);
    tracep->declBus(c+503,"result_o", false,-1, 31,0);
    tracep->declBus(c+620,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+504,"dmem_rdata_o", false,-1, 31,0);
    tracep->declBus(c+505,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+506,"funct3", false,-1, 2,0);
    tracep->declBus(c+507,"funct7", false,-1, 6,0);
    tracep->declBus(c+546,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("dmem_rdata_reg_WBU ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+523,"din", false,-1, 31,0);
    tracep->declBus(c+504,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_WBU ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+296,"din", false,-1, 31,0);
    tracep->declBus(c+297,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_WBU ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+295,"din", false,-1, 31,0);
    tracep->declBus(c+502,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_WBU ");
    tracep->declBus(c+577,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+585,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+294,"din", false,-1, 4,0);
    tracep->declBus(c+300,"dout", false,-1, 4,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_WBU ");
    tracep->declBus(c+578,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+583,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+530,"clk", false,-1);
    tracep->declBit(c+531,"rst", false,-1);
    tracep->declBus(c+293,"din", false,-1, 31,0);
    tracep->declBus(c+503,"dout", false,-1, 31,0);
    tracep->declBit(c+584,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_mux ");
    tracep->declBus(c+590,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+592,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+277,"out", false,-1, 31,0);
    tracep->declBus(c+505,"key", false,-1, 1,0);
    tracep->declBus(c+580,"default_out", false,-1, 31,0);
    tracep->declArray(c+566,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+590,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+592,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+578,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+588,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+277,"out", false,-1, 31,0);
    tracep->declBus(c+505,"key", false,-1, 1,0);
    tracep->declBus(c+580,"default_out", false,-1, 31,0);
    tracep->declArray(c+566,"lut", false,-1, 135,0);
    tracep->declBus(c+593,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+508+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+68+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+516+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+520,"lut_out", false,-1, 31,0);
    tracep->declBit(c+521,"hit", false,-1);
    tracep->declBus(c+595,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_init_top(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_init_top\n"); );
    // Body
    Vysyx_24120009_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24120009_core___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24120009_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_register(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_24120009_core___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_24120009_core___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_24120009_core___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_full_sub_0(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_24120009_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120009_core___024root*>(voidSelf);
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_24120009_core___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_full_sub_0(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<6>/*191:0*/ __Vtemp_hdb58eddb__0;
    VlWide<13>/*415:0*/ __Vtemp_hd74bf4d1__0;
    VlWide<3>/*95:0*/ __Vtemp_h3e4b9c5b__0;
    VlWide<5>/*159:0*/ __Vtemp_h4b1a9c47__0;
    VlWide<6>/*191:0*/ __Vtemp_h47858337__0;
    VlWide<5>/*159:0*/ __Vtemp_h650a5f8e__0;
    VlWide<4>/*127:0*/ __Vtemp_ha516852c__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[0]),5);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[1]),5);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[2]),5);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[3]),5);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[4]),5);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[5]),5);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[6]),5);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[7]),5);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[8]),5);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[9]),5);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[10]),5);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+21,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+28,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+30,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+31,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+32,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[4]),3);
    bufp->fullSData(oldp+34,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+35,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+36,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+37,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[3]),13);
    bufp->fullSData(oldp+38,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[4]),13);
    bufp->fullSData(oldp+39,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[5]),13);
    bufp->fullSData(oldp+40,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[6]),13);
    bufp->fullSData(oldp+41,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[7]),13);
    bufp->fullSData(oldp+42,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[0]),10);
    bufp->fullSData(oldp+43,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[1]),10);
    bufp->fullSData(oldp+44,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[2]),10);
    bufp->fullSData(oldp+45,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[3]),10);
    bufp->fullSData(oldp+46,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[4]),10);
    bufp->fullSData(oldp+47,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[5]),10);
    bufp->fullSData(oldp+48,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[6]),10);
    bufp->fullSData(oldp+49,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[7]),10);
    bufp->fullCData(oldp+50,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+51,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+52,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+53,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+54,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+56,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+57,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[7]),3);
    bufp->fullSData(oldp+58,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+59,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+60,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullCData(oldp+61,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+62,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+63,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+65,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[1]),8);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[2]),8);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+68,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[0]),2);
    bufp->fullCData(oldp+69,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[1]),2);
    bufp->fullCData(oldp+70,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[2]),2);
    bufp->fullCData(oldp+71,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[3]),2);
    bufp->fullBit(oldp+72,(vlSelf->ysyx_24120009_core__DOT__inst_valid));
    bufp->fullBit(oldp+73,((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state))));
    bufp->fullBit(oldp+74,((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state))));
    bufp->fullCData(oldp+75,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state),2);
    bufp->fullCData(oldp+76,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state),2);
    bufp->fullCData(oldp+77,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state),3);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rdata),32);
    bufp->fullBit(oldp+79,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rvalid));
    bufp->fullIData(oldp+80,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer),32);
    bufp->fullBit(oldp+81,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__arvalid));
    bufp->fullBit(oldp+82,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__arready));
    bufp->fullBit(oldp+83,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rready));
    bufp->fullBit(oldp+84,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__awready));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wready));
    bufp->fullBit(oldp+86,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__bvalid));
    bufp->fullCData(oldp+87,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__bresp),2);
    bufp->fullCData(oldp+88,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__rresp),2);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_data_out),32);
    bufp->fullBit(oldp+90,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_rd_res_valid));
    bufp->fullBit(oldp+91,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_wt_res_valid));
    bufp->fullCData(oldp+92,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__state),2);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__addr_reg),32);
    bufp->fullBit(oldp+94,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__rd_req_valid));
    bufp->fullBit(oldp+95,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wt_req_valid));
    bufp->fullIData(oldp+96,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline
                             [9U]),32);
    bufp->fullBit(oldp+97,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline
                           [9U]));
    bufp->fullIData(oldp+98,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline
                             [9U]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline
                             [9U]),32);
    bufp->fullCData(oldp+100,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline
                              [9U]),8);
    bufp->fullBit(oldp+101,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline
                            [9U]));
    bufp->fullIData(oldp+102,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[0]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[1]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[2]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[3]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[4]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[5]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[6]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[7]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[8]),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[9]),32);
    bufp->fullBit(oldp+112,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[0]));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[1]));
    bufp->fullBit(oldp+114,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[2]));
    bufp->fullBit(oldp+115,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[3]));
    bufp->fullBit(oldp+116,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[4]));
    bufp->fullBit(oldp+117,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[5]));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[6]));
    bufp->fullBit(oldp+119,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[7]));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[8]));
    bufp->fullBit(oldp+121,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[9]));
    bufp->fullIData(oldp+122,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[0]),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[1]),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[2]),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[3]),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[4]),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[5]),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[6]),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[7]),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[8]),32);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[9]),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[0]),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[1]),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[2]),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[3]),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[4]),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[5]),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[6]),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[7]),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[8]),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[9]),32);
    bufp->fullCData(oldp+142,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[0]),8);
    bufp->fullCData(oldp+143,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[1]),8);
    bufp->fullCData(oldp+144,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[2]),8);
    bufp->fullCData(oldp+145,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[3]),8);
    bufp->fullCData(oldp+146,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[4]),8);
    bufp->fullCData(oldp+147,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[5]),8);
    bufp->fullCData(oldp+148,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[6]),8);
    bufp->fullCData(oldp+149,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[7]),8);
    bufp->fullCData(oldp+150,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[8]),8);
    bufp->fullCData(oldp+151,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[9]),8);
    bufp->fullBit(oldp+152,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[0]));
    bufp->fullBit(oldp+153,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[1]));
    bufp->fullBit(oldp+154,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[2]));
    bufp->fullBit(oldp+155,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[3]));
    bufp->fullBit(oldp+156,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[4]));
    bufp->fullBit(oldp+157,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[5]));
    bufp->fullBit(oldp+158,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[6]));
    bufp->fullBit(oldp+159,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[7]));
    bufp->fullBit(oldp+160,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[8]));
    bufp->fullBit(oldp+161,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[9]));
    bufp->fullIData(oldp+162,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+164,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__state),2);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw),32);
    bufp->fullBit(oldp+166,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en));
    bufp->fullBit(oldp+167,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen));
    bufp->fullBit(oldp+168,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rvalid));
    bufp->fullBit(oldp+169,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wt_res_valid));
    bufp->fullBit(oldp+170,(((~ (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen)) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en))));
    bufp->fullBit(oldp+171,(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen))));
    bufp->fullBit(oldp+172,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__arready));
    bufp->fullBit(oldp+173,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__awready));
    bufp->fullBit(oldp+174,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rready));
    bufp->fullBit(oldp+175,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wready));
    bufp->fullBit(oldp+176,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__bready));
    bufp->fullCData(oldp+177,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__bresp),2);
    bufp->fullCData(oldp+178,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__rresp),2);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_data_out),32);
    bufp->fullBit(oldp+180,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_rd_res_valid));
    bufp->fullBit(oldp+181,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_wt_res_valid));
    bufp->fullCData(oldp+182,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__state),2);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__addr_reg),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wdata_reg),32);
    bufp->fullCData(oldp+185,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wstrb_reg),8);
    bufp->fullBit(oldp+186,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__rd_req_valid));
    bufp->fullBit(oldp+187,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wt_req_valid));
    bufp->fullIData(oldp+188,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline
                              [9U]),32);
    bufp->fullBit(oldp+189,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline
                            [9U]));
    bufp->fullIData(oldp+190,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline
                              [9U]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline
                              [9U]),32);
    bufp->fullCData(oldp+192,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline
                              [9U]),8);
    bufp->fullBit(oldp+193,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline
                            [9U]));
    bufp->fullIData(oldp+194,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[0]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[1]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[2]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[3]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[4]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[5]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[6]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[7]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[8]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[9]),32);
    bufp->fullBit(oldp+204,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[0]));
    bufp->fullBit(oldp+205,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[1]));
    bufp->fullBit(oldp+206,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[2]));
    bufp->fullBit(oldp+207,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[3]));
    bufp->fullBit(oldp+208,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[4]));
    bufp->fullBit(oldp+209,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[5]));
    bufp->fullBit(oldp+210,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[6]));
    bufp->fullBit(oldp+211,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[7]));
    bufp->fullBit(oldp+212,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[8]));
    bufp->fullBit(oldp+213,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[9]));
    bufp->fullIData(oldp+214,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[0]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[1]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[2]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[3]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[4]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[5]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[6]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[7]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[8]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[9]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[0]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[1]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[2]),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[3]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[4]),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[5]),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[6]),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[7]),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[8]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[9]),32);
    bufp->fullCData(oldp+234,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[0]),8);
    bufp->fullCData(oldp+235,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[1]),8);
    bufp->fullCData(oldp+236,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[2]),8);
    bufp->fullCData(oldp+237,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[3]),8);
    bufp->fullCData(oldp+238,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[4]),8);
    bufp->fullCData(oldp+239,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[5]),8);
    bufp->fullCData(oldp+240,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[6]),8);
    bufp->fullCData(oldp+241,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[7]),8);
    bufp->fullCData(oldp+242,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[8]),8);
    bufp->fullCData(oldp+243,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[9]),8);
    bufp->fullBit(oldp+244,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[0]));
    bufp->fullBit(oldp+245,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[1]));
    bufp->fullBit(oldp+246,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[2]));
    bufp->fullBit(oldp+247,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[3]));
    bufp->fullBit(oldp+248,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[4]));
    bufp->fullBit(oldp+249,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[5]));
    bufp->fullBit(oldp+250,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[6]));
    bufp->fullBit(oldp+251,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[7]));
    bufp->fullBit(oldp+252,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[8]));
    bufp->fullBit(oldp+253,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[9]));
    bufp->fullIData(oldp+254,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+255,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk2__DOT__i),32);
    __Vtemp_hdb58eddb__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                                           >> 0xfU)))) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))))));
    __Vtemp_hdb58eddb__0[1U] = ((0xfffffff8U & (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                                >> 7U)))) 
                                                 << 0xbU) 
                                                | (0x7f8U 
                                                   & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                      << 3U)))) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                                               >> 0xfU)))) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))))) 
                                           >> 0x20U)));
    __Vtemp_hdb58eddb__0[2U] = ((vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw 
                                 << 6U) | (7U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                                >> 7U)))) 
                                                 >> 0x15U)));
    __Vtemp_hdb58eddb__0[3U] = (0x80U | ((0x1fffe00U 
                                          & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                             << 9U)) 
                                         | (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw 
                                            >> 0x1aU)));
    __Vtemp_hdb58eddb__0[4U] = (0xa00U | (0xff000U 
                                          & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                             << 0xcU)));
    __Vtemp_hdb58eddb__0[5U] = 0x4000U;
    bufp->fullWData(oldp+256,(__Vtemp_hdb58eddb__0),175);
    bufp->fullQData(oldp+262,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+264,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+266,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+268,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+270,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+272,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyx_24120009_core__DOT__reg_write_data),32);
    bufp->fullCData(oldp+278,(vlSelf->ysyx_24120009_core__DOT__pc_sel),3);
    bufp->fullIData(oldp+279,(vlSelf->ysyx_24120009_core__DOT__Op1),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyx_24120009_core__DOT__Op2),32);
    bufp->fullIData(oldp+281,(vlSelf->ysyx_24120009_core__DOT__jump_reg_target),32);
    bufp->fullIData(oldp+282,(vlSelf->ysyx_24120009_core__DOT__br_target),32);
    bufp->fullIData(oldp+283,(vlSelf->ysyx_24120009_core__DOT__jmp_target),32);
    bufp->fullIData(oldp+284,(vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+285,(vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+286,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU),32);
    bufp->fullCData(oldp+287,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 7U))),5);
    bufp->fullIData(oldp+288,(vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+289,(vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+290,(vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+291,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM),32);
    bufp->fullCData(oldp+292,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM),5);
    bufp->fullIData(oldp+293,(vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU),32);
    bufp->fullCData(oldp+294,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU),5);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+296,(vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM),32);
    bufp->fullCData(oldp+298,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+299,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+300,(vlSelf->ysyx_24120009_core__DOT__waddr),5);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_24120009_core__DOT__rdata1),32);
    bufp->fullCData(oldp+302,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op),5);
    bufp->fullCData(oldp+303,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+304,((vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+305,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)),7);
    bufp->fullIData(oldp+306,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               + vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+307,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               - vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+308,(vlSelf->__VdfgTmp_h9d12977d__0),32);
    bufp->fullIData(oldp+309,(vlSelf->__VdfgTmp_h9d0653ad__0),32);
    bufp->fullIData(oldp+310,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               ^ vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+311,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               | vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+312,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               & vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+313,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+314,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+315,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : (- (vlSelf->ysyx_24120009_core__DOT__Op1 
                                      >> 0x1fU)))),32);
    __Vtemp_hd74bf4d1__0[0U] = (IData)((0xa00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__Op1))));
    __Vtemp_hd74bf4d1__0[1U] = ((((0x1fU >= (0x1fU 
                                             & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, 
                                                    (0x1fU 
                                                     & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   : (- (vlSelf->ysyx_24120009_core__DOT__Op1 
                                         >> 0x1fU))) 
                                 << 5U) | (IData)((
                                                   (0xa00000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__Op1))) 
                                                   >> 0x20U)));
    __Vtemp_hd74bf4d1__0[2U] = (0x120U | ((((0x1fU 
                                             >= (0x1fU 
                                                 & vlSelf->ysyx_24120009_core__DOT__Op2))
                                             ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->ysyx_24120009_core__DOT__Op2))
                                             : 0U) 
                                           << 0xaU) 
                                          | (((0x1fU 
                                               >= (0x1fU 
                                                   & vlSelf->ysyx_24120009_core__DOT__Op2))
                                               ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, 
                                                                (0x1fU 
                                                                 & vlSelf->ysyx_24120009_core__DOT__Op2))
                                               : (- 
                                                  (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                   >> 0x1fU))) 
                                             >> 0x1bU)));
    __Vtemp_hd74bf4d1__0[3U] = (0x2000U | ((((0x1fU 
                                              >= (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              : 0U) 
                                            << 0xfU) 
                                           | (((0x1fU 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                : 0U) 
                                              >> 0x16U)));
    __Vtemp_hd74bf4d1__0[4U] = (0x38000U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                              & vlSelf->ysyx_24120009_core__DOT__Op2) 
                                             << 0x14U) 
                                            | (((0x1fU 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                 ? 
                                                (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                 : 0U) 
                                               >> 0x11U)));
    __Vtemp_hd74bf4d1__0[5U] = (0x600000U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                               | vlSelf->ysyx_24120009_core__DOT__Op2) 
                                              << 0x19U) 
                                             | ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                 & vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                >> 0xcU)));
    __Vtemp_hd74bf4d1__0[6U] = (0xa000000U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                ^ vlSelf->ysyx_24120009_core__DOT__Op2) 
                                               << 0x1eU) 
                                              | ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                  | vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                 >> 7U)));
    __Vtemp_hd74bf4d1__0[7U] = ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                 ^ vlSelf->ysyx_24120009_core__DOT__Op2) 
                                >> 2U);
    __Vtemp_hd74bf4d1__0[8U] = (1U | ((IData)(vlSelf->__VdfgTmp_h9d0653ad__0) 
                                      << 3U));
    __Vtemp_hd74bf4d1__0[9U] = (0x18U | (((IData)(vlSelf->__VdfgTmp_h9d12977d__0) 
                                          << 8U) | 
                                         ((IData)(vlSelf->__VdfgTmp_h9d0653ad__0) 
                                          >> 0x1dU)));
    __Vtemp_hd74bf4d1__0[0xaU] = (0x200U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                              - vlSelf->ysyx_24120009_core__DOT__Op2) 
                                             << 0xdU) 
                                            | ((IData)(vlSelf->__VdfgTmp_h9d12977d__0) 
                                               >> 0x18U)));
    __Vtemp_hd74bf4d1__0[0xbU] = (0x2000U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                               + vlSelf->ysyx_24120009_core__DOT__Op2) 
                                              << 0x12U) 
                                             | ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                 - vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                >> 0x13U)));
    __Vtemp_hd74bf4d1__0[0xcU] = ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                   + vlSelf->ysyx_24120009_core__DOT__Op2) 
                                  >> 0xeU);
    bufp->fullWData(oldp+316,(__Vtemp_hd74bf4d1__0),407);
    bufp->fullQData(oldp+329,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+331,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+333,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+335,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+337,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+339,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+341,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+343,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+345,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8]),37);
    bufp->fullQData(oldp+347,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9]),37);
    bufp->fullQData(oldp+349,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[10]),37);
    bufp->fullIData(oldp+351,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+352,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+353,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+354,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+360,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+363,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+364,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+365,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+366,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
    bufp->fullCData(oldp+367,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel),2);
    bufp->fullCData(oldp+368,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel),2);
    bufp->fullSData(oldp+369,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+370,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+371,(((0x800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+372,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+373,(((0x80000U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+374,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext),32);
    bufp->fullIData(oldp+375,((((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext),32);
    bufp->fullIData(oldp+377,((0xfffff000U & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),32);
    bufp->fullIData(oldp+378,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext),32);
    bufp->fullCData(oldp+379,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+380,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+381,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),7);
    bufp->fullBit(oldp+382,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken));
    bufp->fullIData(oldp+383,((0x28aceU | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq) 
                                            << 0x14U) 
                                           | ((0x10000U 
                                               & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq)) 
                                                  << 0x10U)) 
                                              | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt) 
                                                  << 0xcU) 
                                                 | ((0x100U 
                                                     & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt)) 
                                                        << 8U)) 
                                                    | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu) 
                                                        << 4U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu)))))))))),24);
    bufp->fullCData(oldp+384,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+385,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+386,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+387,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+388,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+389,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullBit(oldp+390,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+391,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+392,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+393,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+394,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+395,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+396,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+397,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit));
    __Vtemp_h3e4b9c5b__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)))));
    __Vtemp_h3e4b9c5b__0[1U] = ((vlSelf->ysyx_24120009_core__DOT__rdata1 
                                 << 2U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)))) 
                                                   >> 0x20U)));
    __Vtemp_h3e4b9c5b__0[2U] = (vlSelf->ysyx_24120009_core__DOT__rdata1 
                                >> 0x1eU);
    bufp->fullWData(oldp+398,(__Vtemp_h3e4b9c5b__0),68);
    bufp->fullQData(oldp+401,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+403,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullIData(oldp+405,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+406,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+407,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+408,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit));
    __Vtemp_h4b1a9c47__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU))));
    __Vtemp_h4b1a9c47__0[1U] = ((0xfffffffcU & (((- (IData)(
                                                            (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                             >> 0x1fU))) 
                                                 << 0xeU) 
                                                | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s) 
                                                   << 2U))) 
                                | (IData)(((0x300000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU))) 
                                           >> 0x20U)));
    __Vtemp_h4b1a9c47__0[2U] = (8U | ((vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
                                       << 4U) | (3U 
                                                 & ((3U 
                                                     & ((- (IData)(
                                                                   (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                                    >> 0x1fU))) 
                                                        >> 0x12U)) 
                                                    | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s) 
                                                       >> 0x1eU)))));
    __Vtemp_h4b1a9c47__0[3U] = (0x10U | ((vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
                                          << 6U) | 
                                         (vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
                                          >> 0x1cU)));
    __Vtemp_h4b1a9c47__0[4U] = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
                                >> 0x1aU);
    bufp->fullWData(oldp+409,(__Vtemp_h4b1a9c47__0),136);
    bufp->fullQData(oldp+414,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+416,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+418,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+420,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+422,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+423,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+424,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+425,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+426,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+427,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+428,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+429,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next),32);
    bufp->fullIData(oldp+430,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)),32);
    __Vtemp_h47858337__0[0U] = 0U;
    __Vtemp_h47858337__0[1U] = (4U | (vlSelf->ysyx_24120009_core__DOT__jmp_target 
                                      << 3U));
    __Vtemp_h47858337__0[2U] = (0x18U | ((vlSelf->ysyx_24120009_core__DOT__br_target 
                                          << 6U) | 
                                         (vlSelf->ysyx_24120009_core__DOT__jmp_target 
                                          >> 0x1dU)));
    __Vtemp_h47858337__0[3U] = (0x80U | ((vlSelf->ysyx_24120009_core__DOT__jump_reg_target 
                                          << 9U) | 
                                         (vlSelf->ysyx_24120009_core__DOT__br_target 
                                          >> 0x1aU)));
    __Vtemp_h47858337__0[4U] = (0x200U | ((((IData)(4U) 
                                            + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc) 
                                           << 0xcU) 
                                          | (vlSelf->ysyx_24120009_core__DOT__jump_reg_target 
                                             >> 0x17U)));
    __Vtemp_h47858337__0[5U] = (((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc) 
                                >> 0x14U);
    bufp->fullWData(oldp+431,(__Vtemp_h47858337__0),175);
    bufp->fullQData(oldp+437,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+439,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+441,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+443,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+445,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+447,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+448,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+449,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+450,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+451,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+452,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+453,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+454,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o),32);
    bufp->fullIData(oldp+455,(((0x1fU >= (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                   << 3U)))
                                ? (vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o 
                                   << (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                << 3U)))
                                : 0U)),32);
    bufp->fullCData(oldp+456,((0xffU & ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask) 
                                        << (3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)))),8);
    bufp->fullCData(oldp+457,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access),3);
    bufp->fullIData(oldp+458,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o),32);
    bufp->fullCData(oldp+459,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+460,((vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+461,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)),7);
    bufp->fullCData(oldp+462,((3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)),2);
    bufp->fullBit(oldp+463,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+464,(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key),10);
    bufp->fullCData(oldp+465,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+466,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+467,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+469,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+470,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+471,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+472,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+473,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+474,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+475,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+476,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+477,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+479,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+480,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+481,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+482,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+483,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+484,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+485,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+486,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+487,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+488,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+489,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+490,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+491,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+493,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+494,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+495,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+496,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+497,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+498,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+499,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+500,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+501,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+502,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o),32);
    bufp->fullIData(oldp+503,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o),32);
    bufp->fullIData(oldp+504,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o),32);
    bufp->fullCData(oldp+505,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel),2);
    bufp->fullCData(oldp+506,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+507,((vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullQData(oldp+508,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+510,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+512,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+514,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+516,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+517,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+518,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+519,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+520,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+521,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit));
    bufp->fullBit(oldp+522,(vlSelf->ysyx_24120009_core__DOT__rf_we));
    bufp->fullIData(oldp+523,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+524,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullIData(oldp+525,((0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+526,((0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+527,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+528,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+529,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+530,(vlSelf->clk));
    bufp->fullBit(oldp+531,(vlSelf->rst));
    bufp->fullIData(oldp+532,(vlSelf->pc_debug),32);
    bufp->fullIData(oldp+533,(vlSelf->inst_debug),32);
    bufp->fullIData(oldp+534,(vlSelf->reg_write_data_debug),32);
    bufp->fullIData(oldp+535,(vlSelf->x2_debug),32);
    bufp->fullCData(oldp+536,(vlSelf->waddr_debug),5);
    bufp->fullBit(oldp+537,(vlSelf->mem_wen_debug));
    bufp->fullBit(oldp+538,(vlSelf->mem_en_debug));
    bufp->fullIData(oldp+539,(vlSelf->Op1_debug),32);
    bufp->fullIData(oldp+540,(vlSelf->Op2_debug),32);
    bufp->fullBit(oldp+541,(vlSelf->rf_we_debug));
    bufp->fullBit(oldp+542,(vlSelf->wbu_active_debug));
    bufp->fullIData(oldp+543,(vlSelf->imem_addr_debug),32);
    bufp->fullIData(oldp+544,(vlSelf->pc_plus4_debug),32);
    bufp->fullCData(oldp+545,(vlSelf->wb_sel_debug),2);
    bufp->fullCData(oldp+546,(vlSelf->opcode_debug),7);
    bufp->fullBit(oldp+547,(vlSelf->pc_wen_debug));
    bufp->fullBit(oldp+548,(vlSelf->mem_active_debug));
    bufp->fullIData(oldp+549,(vlSelf->result_from_EXU_to_MEM_debug),32);
    bufp->fullIData(oldp+550,(vlSelf->result_from_MEM_to_WBU_debug),32);
    bufp->fullIData(oldp+551,(vlSelf->result_from_WB_debug),32);
    bufp->fullCData(oldp+552,(vlSelf->alu_op_debug),5);
    bufp->fullIData(oldp+553,(vlSelf->inst_from_EXU_to_MEM_debug),32);
    bufp->fullBit(oldp+554,(vlSelf->mem_access_done_debug));
    bufp->fullIData(oldp+555,(vlSelf->dmem_rdata_from_MEM_to_WBU_debug),32);
    bufp->fullBit(oldp+556,(vlSelf->wt_res_valid_debug));
    bufp->fullCData(oldp+557,(vlSelf->ifu_state_debug),3);
    bufp->fullBit(oldp+558,(vlSelf->rd_res_valid_debug));
    bufp->fullCData(oldp+559,(vlSelf->axi4_ifu_state_debug),2);
    bufp->fullCData(oldp+560,(vlSelf->mem_ctl_state_debug),2);
    bufp->fullCData(oldp+561,(vlSelf->axi4_mem_state_debug),2);
    bufp->fullCData(oldp+562,(vlSelf->idu_state_debug),2);
    bufp->fullBit(oldp+563,(vlSelf->inst_valid_debug));
    bufp->fullBit(oldp+564,(vlSelf->ysyx_24120009_core__DOT__pc_wen));
    bufp->fullCData(oldp+565,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state),2);
    __Vtemp_h650a5f8e__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o))));
    __Vtemp_h650a5f8e__0[1U] = ((vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o 
                                 << 2U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o))) 
                                                   >> 0x20U)));
    __Vtemp_h650a5f8e__0[2U] = (8U | ((vlSelf->pc_plus4_debug 
                                       << 4U) | (vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o 
                                                 >> 0x1eU)));
    __Vtemp_h650a5f8e__0[3U] = (0x10U | (vlSelf->pc_plus4_debug 
                                         >> 0x1cU));
    __Vtemp_h650a5f8e__0[4U] = 0U;
    bufp->fullWData(oldp+566,(__Vtemp_h650a5f8e__0),136);
    bufp->fullCData(oldp+571,(vlSelf->ysyx_24120009_core__DOT__alu_op),5);
    bufp->fullBit(oldp+572,(vlSelf->ysyx_24120009_core__DOT__mem_en));
    bufp->fullBit(oldp+573,(vlSelf->ysyx_24120009_core__DOT__mem_wen));
    bufp->fullCData(oldp+574,(vlSelf->ysyx_24120009_core__DOT__wb_sel),2);
    bufp->fullIData(oldp+575,(vlSelf->ysyx_24120009_core__DOT__pc_plus4),32);
    bufp->fullIData(oldp+576,(0xbU),32);
    bufp->fullIData(oldp+577,(5U),32);
    bufp->fullIData(oldp+578,(0x20U),32);
    bufp->fullIData(oldp+579,(0U),32);
    bufp->fullIData(oldp+580,(0U),32);
    bufp->fullIData(oldp+581,(0x25U),32);
    bufp->fullIData(oldp+582,(0xbU),32);
    bufp->fullIData(oldp+583,(0x80000000U),32);
    bufp->fullBit(oldp+584,(1U));
    bufp->fullCData(oldp+585,(0U),5);
    bufp->fullIData(oldp+586,(6U),32);
    bufp->fullIData(oldp+587,(3U),32);
    bufp->fullIData(oldp+588,(1U),32);
    bufp->fullBit(oldp+589,(0U));
    bufp->fullIData(oldp+590,(4U),32);
    bufp->fullIData(oldp+591,(6U),32);
    bufp->fullIData(oldp+592,(2U),32);
    bufp->fullIData(oldp+593,(0x22U),32);
    bufp->fullIData(oldp+594,(2U),32);
    bufp->fullIData(oldp+595,(4U),32);
    bufp->fullCData(oldp+596,(0U),3);
    bufp->fullCData(oldp+597,(1U),3);
    bufp->fullCData(oldp+598,(2U),3);
    bufp->fullCData(oldp+599,(3U),3);
    bufp->fullIData(oldp+600,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__imem_addr),32);
    bufp->fullCData(oldp+601,(0U),8);
    bufp->fullCData(oldp+602,(0U),2);
    bufp->fullCData(oldp+603,(1U),2);
    bufp->fullCData(oldp+604,(2U),2);
    bufp->fullIData(oldp+605,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wdata_reg),32);
    bufp->fullCData(oldp+606,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wstrb_reg),8);
    bufp->fullIData(oldp+607,(0xaU),32);
    bufp->fullIData(oldp+608,(0x23U),32);
    bufp->fullIData(oldp+609,(5U),32);
    bufp->fullIData(oldp+610,(8U),32);
    __Vtemp_ha516852c__0[0U] = 0x491808c9U;
    __Vtemp_ha516852c__0[1U] = 0xc9076a3U;
    __Vtemp_ha516852c__0[2U] = 0x903001c8U;
    __Vtemp_ha516852c__0[3U] = 6U;
    bufp->fullWData(oldp+611,(__Vtemp_ha516852c__0),104);
    bufp->fullIData(oldp+615,(0xdU),32);
    bufp->fullIData(oldp+616,(8U),32);
    bufp->fullQData(oldp+617,(0x83c81801ULL),33);
    bufp->fullIData(oldp+619,(3U),32);
    bufp->fullIData(oldp+620,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_addr_o),32);
}
