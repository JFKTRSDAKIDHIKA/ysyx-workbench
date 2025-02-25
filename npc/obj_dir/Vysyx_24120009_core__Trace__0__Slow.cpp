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
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+369,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+370,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+371,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+372,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+373,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+374,"mem_wen_debug", false,-1);
    tracep->declBit(c+375,"mem_en_debug", false,-1);
    tracep->declBus(c+376,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+377,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+378,"rf_we_debug", false,-1);
    tracep->declBit(c+379,"wbu_active_debug", false,-1);
    tracep->declBus(c+380,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+381,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+382,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+383,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+384,"pc_wen_debug", false,-1);
    tracep->declBit(c+385,"mem_active_debug", false,-1);
    tracep->declBus(c+386,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+387,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+388,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+389,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+390,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24120009_core ");
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+369,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+370,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+371,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+372,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+373,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+374,"mem_wen_debug", false,-1);
    tracep->declBit(c+375,"mem_en_debug", false,-1);
    tracep->declBus(c+376,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+377,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+378,"rf_we_debug", false,-1);
    tracep->declBit(c+379,"wbu_active_debug", false,-1);
    tracep->declBus(c+369,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+381,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+382,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+383,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+384,"pc_wen_debug", false,-1);
    tracep->declBit(c+385,"mem_active_debug", false,-1);
    tracep->declBus(c+386,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+387,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+388,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+389,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+390,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+110,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+398,"alu_op", false,-1, 4,0);
    tracep->declBus(c+111,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+359,"rf_we", false,-1);
    tracep->declBit(c+399,"mem_en", false,-1);
    tracep->declBit(c+400,"mem_wen", false,-1);
    tracep->declBus(c+401,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+112,"Op1", false,-1, 31,0);
    tracep->declBus(c+113,"Op2", false,-1, 31,0);
    tracep->declBus(c+402,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+114,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+115,"br_target", false,-1, 31,0);
    tracep->declBus(c+116,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+384,"pc_wen", false,-1);
    tracep->declBus(c+369,"pc_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+370,"inst_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+117,"pc_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+118,"inst_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+119,"rdata2_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+120,"rd_addr_from_IDU_to_EXU", false,-1, 4,0);
    tracep->declBus(c+121,"pc_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+122,"inst_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+123,"result_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+124,"rdata2_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+125,"rd_addr_from_EXU_to_MEM", false,-1, 4,0);
    tracep->declBus(c+386,"dmem_addr_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+360,"dmem_rdata_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+126,"result_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+127,"rd_addr_from_MEM_to_WBU", false,-1, 4,0);
    tracep->declBus(c+128,"pc_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+129,"inst_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+130,"inst_from_WBU_to_MEM", false,-1, 31,0);
    tracep->declBit(c+72,"mem_valid", false,-1);
    tracep->declBus(c+131,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+132,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+133,"waddr", false,-1, 4,0);
    tracep->declBus(c+134,"rdata1", false,-1, 31,0);
    tracep->declBus(c+119,"rdata2", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+112,"Op1", false,-1, 31,0);
    tracep->declBus(c+113,"Op2", false,-1, 31,0);
    tracep->declBus(c+117,"pc_i", false,-1, 31,0);
    tracep->declBus(c+118,"inst_i", false,-1, 31,0);
    tracep->declBus(c+119,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+120,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+386,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+122,"inst_o", false,-1, 31,0);
    tracep->declBus(c+121,"pc_o", false,-1, 31,0);
    tracep->declBus(c+123,"result", false,-1, 31,0);
    tracep->declBus(c+124,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+125,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+389,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+390,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+135,"alu_op", false,-1, 4,0);
    tracep->declBus(c+136,"funct3", false,-1, 2,0);
    tracep->declBus(c+137,"funct7", false,-1, 6,0);
    tracep->declBus(c+138,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+112,"A", false,-1, 31,0);
    tracep->declBus(c+113,"B", false,-1, 31,0);
    tracep->declBus(c+135,"ALUFun", false,-1, 4,0);
    tracep->declBus(c+123,"Result", false,-1, 31,0);
    tracep->declBus(c+139,"add_result", false,-1, 31,0);
    tracep->declBus(c+140,"sub_result", false,-1, 31,0);
    tracep->declBus(c+141,"slt_result", false,-1, 31,0);
    tracep->declBus(c+142,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+143,"xor_result", false,-1, 31,0);
    tracep->declBus(c+144,"or_result", false,-1, 31,0);
    tracep->declBus(c+145,"and_result", false,-1, 31,0);
    tracep->declBus(c+146,"sll_result", false,-1, 31,0);
    tracep->declBus(c+147,"srl_result", false,-1, 31,0);
    tracep->declBus(c+148,"sra_result", false,-1, 31,0);
    tracep->declBus(c+376,"op1_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu_mux ");
    tracep->declBus(c+403,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+404,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+123,"out", false,-1, 31,0);
    tracep->declBus(c+135,"key", false,-1, 4,0);
    tracep->declArray(c+149,"lut", false,-1, 406,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+403,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+404,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+406,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+123,"out", false,-1, 31,0);
    tracep->declBus(c+135,"key", false,-1, 4,0);
    tracep->declBus(c+407,"default_out", false,-1, 31,0);
    tracep->declArray(c+149,"lut", false,-1, 406,0);
    tracep->declBus(c+408,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+162+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+184+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+195,"lut_out", false,-1, 31,0);
    tracep->declBit(c+196,"hit", false,-1);
    tracep->declBus(c+409,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inst_reg_EXU ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+118,"din", false,-1, 31,0);
    tracep->declBus(c+122,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_EXU ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+117,"din", false,-1, 31,0);
    tracep->declBus(c+121,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_EXU ");
    tracep->declBus(c+404,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+412,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+120,"din", false,-1, 4,0);
    tracep->declBus(c+125,"dout", false,-1, 4,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_EXU ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+119,"din", false,-1, 31,0);
    tracep->declBus(c+124,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+370,"inst_i", false,-1, 31,0);
    tracep->declBus(c+369,"pc_i", false,-1, 31,0);
    tracep->declBus(c+134,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+119,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+131,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+132,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+120,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+112,"Op1", false,-1, 31,0);
    tracep->declBus(c+113,"Op2", false,-1, 31,0);
    tracep->declBus(c+117,"pc_o", false,-1, 31,0);
    tracep->declBus(c+118,"inst_o", false,-1, 31,0);
    tracep->declBus(c+119,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+114,"jump_reg_target_o", false,-1, 31,0);
    tracep->declBus(c+115,"br_target_o", false,-1, 31,0);
    tracep->declBus(c+116,"jmp_target_o", false,-1, 31,0);
    tracep->declBus(c+111,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+197,"br_eq", false,-1);
    tracep->declBit(c+198,"br_lt", false,-1);
    tracep->declBit(c+199,"br_ltu", false,-1);
    tracep->declBus(c+200,"Op1Sel", false,-1, 1,0);
    tracep->declBus(c+201,"Op2Sel", false,-1, 1,0);
    tracep->declBus(c+120,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+202,"imm_i", false,-1, 11,0);
    tracep->declBus(c+203,"imm_s", false,-1, 11,0);
    tracep->declBus(c+204,"imm_b", false,-1, 11,0);
    tracep->declBus(c+205,"imm_u", false,-1, 19,0);
    tracep->declBus(c+206,"imm_j", false,-1, 19,0);
    tracep->declBus(c+207,"imm_i_sext", false,-1, 31,0);
    tracep->declBus(c+208,"imm_s_sext", false,-1, 31,0);
    tracep->declBus(c+209,"imm_b_sext", false,-1, 31,0);
    tracep->declBus(c+210,"imm_u_sext", false,-1, 31,0);
    tracep->declBus(c+211,"imm_j_sext", false,-1, 31,0);
    tracep->declBus(c+212,"funct3", false,-1, 2,0);
    tracep->declBus(c+213,"funct7", false,-1, 6,0);
    tracep->declBus(c+214,"opcode", false,-1, 6,0);
    tracep->declBit(c+215,"branch_taken", false,-1);
    tracep->pushNamePrefix("b_taken_mux ");
    tracep->declBus(c+413,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+414,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+415,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+215,"out", false,-1, 0,0);
    tracep->declBus(c+212,"key", false,-1, 2,0);
    tracep->declBus(c+216,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+413,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+414,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+415,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+406,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+215,"out", false,-1, 0,0);
    tracep->declBus(c+212,"key", false,-1, 2,0);
    tracep->declBus(c+416,"default_out", false,-1, 0,0);
    tracep->declBus(c+216,"lut", false,-1, 23,0);
    tracep->declBus(c+417,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+217+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+223+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+229,"lut_out", false,-1, 0,0);
    tracep->declBit(c+230,"hit", false,-1);
    tracep->declBus(c+418,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_reg_IDU ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+370,"din", false,-1, 31,0);
    tracep->declBus(c+118,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op1_sel_mux ");
    tracep->declBus(c+419,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+419,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 31,0);
    tracep->declBus(c+200,"key", false,-1, 1,0);
    tracep->declArray(c+231,"lut", false,-1, 67,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+419,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+419,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+406,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 31,0);
    tracep->declBus(c+200,"key", false,-1, 1,0);
    tracep->declBus(c+407,"default_out", false,-1, 31,0);
    tracep->declArray(c+231,"lut", false,-1, 67,0);
    tracep->declBus(c+420,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+234+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+238+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+240,"lut_out", false,-1, 31,0);
    tracep->declBit(c+241,"hit", false,-1);
    tracep->declBus(c+421,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("op2_sel_mux ");
    tracep->declBus(c+417,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+419,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+113,"out", false,-1, 31,0);
    tracep->declBus(c+201,"key", false,-1, 1,0);
    tracep->declArray(c+242,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+417,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+419,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+406,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+113,"out", false,-1, 31,0);
    tracep->declBus(c+201,"key", false,-1, 1,0);
    tracep->declBus(c+407,"default_out", false,-1, 31,0);
    tracep->declArray(c+242,"lut", false,-1, 135,0);
    tracep->declBus(c+420,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+247+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+255+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+259,"lut_out", false,-1, 31,0);
    tracep->declBit(c+260,"hit", false,-1);
    tracep->declBus(c+422,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_IDU ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+369,"din", false,-1, 31,0);
    tracep->declBus(c+117,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+111,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+114,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+115,"br_target", false,-1, 31,0);
    tracep->declBus(c+116,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+384,"pc_wen", false,-1);
    tracep->declBus(c+369,"pc_o", false,-1, 31,0);
    tracep->declBus(c+370,"inst_o", false,-1, 31,0);
    tracep->declBus(c+261,"pc", false,-1, 31,0);
    tracep->declBus(c+262,"pc_next", false,-1, 31,0);
    tracep->declBus(c+263,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+423,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+370,"inst", false,-1, 31,0);
    tracep->declBus(c+407,"exception", false,-1, 31,0);
    tracep->declBus(c+356,"sram_data_out", false,-1, 31,0);
    tracep->declBit(c+411,"sram_rd_req", false,-1);
    tracep->declBit(c+357,"rd_res_valid", false,-1);
    tracep->declBus(c+264,"if_inst_buffer", false,-1, 31,0);
    tracep->pushNamePrefix("mux_pc_sel ");
    tracep->declBus(c+404,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+414,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+262,"out", false,-1, 31,0);
    tracep->declBus(c+111,"key", false,-1, 2,0);
    tracep->declArray(c+265,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+404,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+414,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+406,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+262,"out", false,-1, 31,0);
    tracep->declBus(c+111,"key", false,-1, 2,0);
    tracep->declBus(c+407,"default_out", false,-1, 31,0);
    tracep->declArray(c+265,"lut", false,-1, 174,0);
    tracep->declBus(c+424,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+271+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+281+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+286,"lut_out", false,-1, 31,0);
    tracep->declBit(c+287,"hit", false,-1);
    tracep->declBus(c+425,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+262,"din", false,-1, 31,0);
    tracep->declBus(c+261,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram_inst ");
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBit(c+411,"rd_req_valid", false,-1);
    tracep->declBus(c+261,"addr", false,-1, 31,0);
    tracep->declBus(c+356,"data_out", false,-1, 31,0);
    tracep->declBit(c+357,"rd_res_valid", false,-1);
    tracep->declBit(c+426,"wt_req_valid", false,-1);
    tracep->declBus(c+427,"waddr", false,-1, 31,0);
    tracep->declBus(c+428,"wdata", false,-1, 31,0);
    tracep->declBus(c+429,"wmask", false,-1, 7,0);
    tracep->declBit(c+358,"wt_res_valid", false,-1);
    tracep->declBus(c+73,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+74,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+75,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+76,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+77,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+78,"wt_req_valid_delayed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+121,"pc_i", false,-1, 31,0);
    tracep->declBus(c+122,"inst_i", false,-1, 31,0);
    tracep->declBus(c+123,"result_i", false,-1, 31,0);
    tracep->declBus(c+386,"dmem_addr_i", false,-1, 31,0);
    tracep->declBus(c+124,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+125,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+129,"inst_o", false,-1, 31,0);
    tracep->declBus(c+128,"pc_o", false,-1, 31,0);
    tracep->declBus(c+126,"result_o", false,-1, 31,0);
    tracep->declBus(c+360,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+72,"mem_valid", false,-1);
    tracep->declBit(c+385,"mem_active", false,-1);
    tracep->declBus(c+370,"inst_from_IFU", false,-1, 31,0);
    tracep->declBus(c+130,"inst_from_WBU", false,-1, 31,0);
    tracep->declBus(c+79,"dmem_rdata_raw", false,-1, 31,0);
    tracep->declBus(c+288,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+289,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+290,"wmask", false,-1, 7,0);
    tracep->declBus(c+291,"ctl_mem_access", false,-1, 2,0);
    tracep->declBit(c+391,"mem_en", false,-1);
    tracep->declBit(c+392,"mem_wen", false,-1);
    tracep->declBus(c+292,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+288,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+80,"rd_res_valid", false,-1);
    tracep->declBit(c+81,"wt_res_valid", false,-1);
    tracep->declBus(c+293,"funct3", false,-1, 2,0);
    tracep->declBus(c+294,"funct7", false,-1, 6,0);
    tracep->declBus(c+295,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBit(c+391,"rd_req_valid", false,-1);
    tracep->declBus(c+292,"addr", false,-1, 31,0);
    tracep->declBus(c+79,"data_out", false,-1, 31,0);
    tracep->declBit(c+80,"rd_res_valid", false,-1);
    tracep->declBit(c+392,"wt_req_valid", false,-1);
    tracep->declBus(c+292,"waddr", false,-1, 31,0);
    tracep->declBus(c+289,"wdata", false,-1, 31,0);
    tracep->declBus(c+290,"wmask", false,-1, 7,0);
    tracep->declBit(c+81,"wt_res_valid", false,-1);
    tracep->declBus(c+82,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+83,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+84,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+85,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+86,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+87,"wt_req_valid_delayed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+79,"data_in", false,-1, 31,0);
    tracep->declBus(c+292,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+291,"control", false,-1, 2,0);
    tracep->declBus(c+360,"data_out", false,-1, 31,0);
    tracep->declBus(c+296,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+361,"shifted_data", false,-1, 31,0);
    tracep->declBus(c+362,"zero_ext_byte", false,-1, 31,0);
    tracep->declBus(c+363,"zero_ext_half", false,-1, 31,0);
    tracep->declBus(c+364,"sign_ext_byte", false,-1, 31,0);
    tracep->declBus(c+365,"sign_ext_half", false,-1, 31,0);
    tracep->pushNamePrefix("mem_mux ");
    tracep->declBus(c+404,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+414,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+360,"out", false,-1, 31,0);
    tracep->declBus(c+291,"key", false,-1, 2,0);
    tracep->declArray(c+89,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+404,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+414,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+406,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+360,"out", false,-1, 31,0);
    tracep->declBus(c+291,"key", false,-1, 2,0);
    tracep->declBus(c+407,"default_out", false,-1, 31,0);
    tracep->declArray(c+89,"lut", false,-1, 174,0);
    tracep->declBus(c+424,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+95+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+105+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+366,"lut_out", false,-1, 31,0);
    tracep->declBit(c+297,"hit", false,-1);
    tracep->declBus(c+425,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmem_addr_reg_MEM ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+386,"din", false,-1, 31,0);
    tracep->declBus(c+292,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_MEM ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+122,"din", false,-1, 31,0);
    tracep->declBus(c+129,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_acces_ctl_mux ");
    tracep->declBus(c+430,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+431,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+291,"out", false,-1, 2,0);
    tracep->declBus(c+298,"key", false,-1, 9,0);
    tracep->declArray(c+432,"lut", false,-1, 103,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+430,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+431,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+406,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+291,"out", false,-1, 2,0);
    tracep->declBus(c+298,"key", false,-1, 9,0);
    tracep->declBus(c+436,"default_out", false,-1, 2,0);
    tracep->declArray(c+432,"lut", false,-1, 103,0);
    tracep->declBus(c+437,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+42+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+50+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+299,"lut_out", false,-1, 2,0);
    tracep->declBit(c+300,"hit", false,-1);
    tracep->declBus(c+438,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_MEM ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+121,"din", false,-1, 31,0);
    tracep->declBus(c+128,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_MEM ");
    tracep->declBus(c+404,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+412,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+125,"din", false,-1, 4,0);
    tracep->declBus(c+127,"dout", false,-1, 4,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_MEM ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+123,"din", false,-1, 31,0);
    tracep->declBus(c+126,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_MEM ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+124,"din", false,-1, 31,0);
    tracep->declBus(c+288,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wmask_gen ");
    tracep->declBus(c+291,"control", false,-1, 2,0);
    tracep->declBus(c+292,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+288,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+289,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+290,"wmask", false,-1, 7,0);
    tracep->declBus(c+296,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+301,"base_mask", false,-1, 7,0);
    tracep->declBus(c+290,"shifted_mask", false,-1, 7,0);
    tracep->pushNamePrefix("mem_mux_write ");
    tracep->declBus(c+414,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+414,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+430,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"out", false,-1, 7,0);
    tracep->declBus(c+291,"key", false,-1, 2,0);
    tracep->declQuad(c+439,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+414,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+414,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+430,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+406,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+301,"out", false,-1, 7,0);
    tracep->declBus(c+291,"key", false,-1, 2,0);
    tracep->declBus(c+441,"default_out", false,-1, 7,0);
    tracep->declQuad(c+439,"lut", false,-1, 32,0);
    tracep->declBus(c+403,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+58+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+61+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+64+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+302,"lut_out", false,-1, 7,0);
    tracep->declBit(c+303,"hit", false,-1);
    tracep->declBus(c+442,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+404,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBus(c+110,"wdata", false,-1, 31,0);
    tracep->declBus(c+133,"waddr", false,-1, 4,0);
    tracep->declBit(c+359,"wen", false,-1);
    tracep->declBus(c+131,"raddr1", false,-1, 4,0);
    tracep->declBus(c+132,"raddr2", false,-1, 4,0);
    tracep->declBus(c+134,"rdata1", false,-1, 31,0);
    tracep->declBus(c+119,"rdata2", false,-1, 31,0);
    tracep->declBus(c+372,"x2_debug", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+304+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+67,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+110,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+133,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+359,"rf_we", false,-1);
    tracep->declBus(c+128,"pc_i", false,-1, 31,0);
    tracep->declBus(c+129,"inst_i", false,-1, 31,0);
    tracep->declBus(c+126,"result_i", false,-1, 31,0);
    tracep->declBus(c+360,"dmem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+127,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+72,"mem_valid", false,-1);
    tracep->declBit(c+384,"pc_wen", false,-1);
    tracep->declBus(c+370,"inst_from_IFU", false,-1, 31,0);
    tracep->declBit(c+379,"wbu_active", false,-1);
    tracep->declBus(c+130,"inst_o", false,-1, 31,0);
    tracep->declBus(c+381,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+382,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+383,"opcode_debug", false,-1, 6,0);
    tracep->declBus(c+388,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+381,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+336,"pc_o", false,-1, 31,0);
    tracep->declBus(c+337,"result_o", false,-1, 31,0);
    tracep->declBus(c+443,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+338,"dmem_rdata_o", false,-1, 31,0);
    tracep->declBus(c+339,"wb_sel", false,-1, 1,0);
    tracep->declBit(c+88,"wbu_active_reg", false,-1);
    tracep->declBus(c+340,"funct3", false,-1, 2,0);
    tracep->declBus(c+341,"funct7", false,-1, 6,0);
    tracep->declBus(c+383,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("dmem_rdata_reg_WBU ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+360,"din", false,-1, 31,0);
    tracep->declBus(c+338,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_WBU ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+129,"din", false,-1, 31,0);
    tracep->declBus(c+130,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_WBU ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+128,"din", false,-1, 31,0);
    tracep->declBus(c+336,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_WBU ");
    tracep->declBus(c+404,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+412,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 4,0);
    tracep->declBus(c+133,"dout", false,-1, 4,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_WBU ");
    tracep->declBus(c+405,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+367,"clk", false,-1);
    tracep->declBit(c+368,"rst", false,-1);
    tracep->declBus(c+126,"din", false,-1, 31,0);
    tracep->declBus(c+337,"dout", false,-1, 31,0);
    tracep->declBit(c+411,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_mux ");
    tracep->declBus(c+417,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+419,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 31,0);
    tracep->declBus(c+339,"key", false,-1, 1,0);
    tracep->declBus(c+407,"default_out", false,-1, 31,0);
    tracep->declArray(c+393,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+417,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+419,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+415,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 31,0);
    tracep->declBus(c+339,"key", false,-1, 1,0);
    tracep->declBus(c+407,"default_out", false,-1, 31,0);
    tracep->declArray(c+393,"lut", false,-1, 135,0);
    tracep->declBus(c+420,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+342+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+68+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+350+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+354,"lut_out", false,-1, 31,0);
    tracep->declBit(c+355,"hit", false,-1);
    tracep->declBus(c+422,"i", false,-1, 31,0);
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
    bufp->fullBit(oldp+72,(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rd_res_valid) 
                            | (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wt_res_valid))));
    bufp->fullIData(oldp+73,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__addr_delayed),32);
    bufp->fullBit(oldp+74,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__rd_req_valid_delayed));
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__waddr_delayed),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wdata_delayed),32);
    bufp->fullCData(oldp+77,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wmask_delayed),8);
    bufp->fullBit(oldp+78,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wt_req_valid_delayed));
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw),32);
    bufp->fullBit(oldp+80,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rd_res_valid));
    bufp->fullBit(oldp+81,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wt_res_valid));
    bufp->fullIData(oldp+82,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__addr_delayed),32);
    bufp->fullBit(oldp+83,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__rd_req_valid_delayed));
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__waddr_delayed),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wdata_delayed),32);
    bufp->fullCData(oldp+86,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wmask_delayed),8);
    bufp->fullBit(oldp+87,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wt_req_valid_delayed));
    bufp->fullBit(oldp+88,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_active_reg));
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
    bufp->fullWData(oldp+89,(__Vtemp_hdb58eddb__0),175);
    bufp->fullQData(oldp+95,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+97,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+99,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+101,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+103,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_24120009_core__DOT__reg_write_data),32);
    bufp->fullCData(oldp+111,(vlSelf->ysyx_24120009_core__DOT__pc_sel),3);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_24120009_core__DOT__Op1),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_24120009_core__DOT__Op2),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_24120009_core__DOT__jump_reg_target),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24120009_core__DOT__br_target),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_24120009_core__DOT__jmp_target),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU),32);
    bufp->fullCData(oldp+120,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 7U))),5);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM),32);
    bufp->fullCData(oldp+125,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM),5);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU),32);
    bufp->fullCData(oldp+127,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU),5);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM),32);
    bufp->fullCData(oldp+131,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+132,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+133,(vlSelf->ysyx_24120009_core__DOT__waddr),5);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_24120009_core__DOT__rdata1),32);
    bufp->fullCData(oldp+135,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op),5);
    bufp->fullCData(oldp+136,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+137,((vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+138,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)),7);
    bufp->fullIData(oldp+139,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               + vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+140,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               - vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+141,(vlSelf->__VdfgTmp_h9d12977d__0),32);
    bufp->fullIData(oldp+142,(vlSelf->__VdfgTmp_h9d0653ad__0),32);
    bufp->fullIData(oldp+143,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               ^ vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+144,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               | vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+145,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               & vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+146,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+147,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+148,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
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
    bufp->fullWData(oldp+149,(__Vtemp_hd74bf4d1__0),407);
    bufp->fullQData(oldp+162,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+164,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+166,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+168,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+170,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+172,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+174,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+176,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+178,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8]),37);
    bufp->fullQData(oldp+180,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9]),37);
    bufp->fullQData(oldp+182,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[10]),37);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+196,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+197,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+198,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+199,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
    bufp->fullCData(oldp+200,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel),2);
    bufp->fullCData(oldp+201,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel),2);
    bufp->fullSData(oldp+202,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+203,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+204,(((0x800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+205,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+206,(((0x80000U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext),32);
    bufp->fullIData(oldp+208,((((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext),32);
    bufp->fullIData(oldp+210,((0xfffff000U & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext),32);
    bufp->fullCData(oldp+212,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+213,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+214,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),7);
    bufp->fullBit(oldp+215,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken));
    bufp->fullIData(oldp+216,((0x28aceU | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq) 
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
    bufp->fullCData(oldp+217,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+218,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+219,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+220,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+221,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+222,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullBit(oldp+223,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+224,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+225,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+226,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+227,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+228,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+229,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+230,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+231,(__Vtemp_h3e4b9c5b__0),68);
    bufp->fullQData(oldp+234,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+236,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+241,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+242,(__Vtemp_h4b1a9c47__0),136);
    bufp->fullQData(oldp+247,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+249,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+251,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+253,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+255,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+257,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+258,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+259,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+260,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+261,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+262,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next),32);
    bufp->fullIData(oldp+263,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)),32);
    bufp->fullIData(oldp+264,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer),32);
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
    bufp->fullWData(oldp+265,(__Vtemp_h47858337__0),175);
    bufp->fullQData(oldp+271,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+273,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+275,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+277,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+279,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+281,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+282,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+283,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+284,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+285,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+286,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+287,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+288,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o),32);
    bufp->fullIData(oldp+289,(((0x1fU >= (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                   << 3U)))
                                ? (vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o 
                                   << (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                << 3U)))
                                : 0U)),32);
    bufp->fullCData(oldp+290,((0xffU & ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask) 
                                        << (3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)))),8);
    bufp->fullCData(oldp+291,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access),3);
    bufp->fullIData(oldp+292,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o),32);
    bufp->fullCData(oldp+293,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+294,((vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+295,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)),7);
    bufp->fullCData(oldp+296,((3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)),2);
    bufp->fullBit(oldp+297,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+298,(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key),10);
    bufp->fullCData(oldp+299,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+300,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+301,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask),8);
    bufp->fullCData(oldp+302,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+303,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+304,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o),32);
    bufp->fullCData(oldp+339,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel),2);
    bufp->fullCData(oldp+340,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+341,((vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullQData(oldp+342,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+344,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+346,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+348,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+350,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+351,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+352,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+353,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+354,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+355,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+356,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_data_out),32);
    bufp->fullBit(oldp+357,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rd_res_valid));
    bufp->fullBit(oldp+358,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wt_res_valid));
    bufp->fullBit(oldp+359,(vlSelf->ysyx_24120009_core__DOT__rf_we));
    bufp->fullIData(oldp+360,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullIData(oldp+362,((0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+363,((0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+364,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+365,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+367,(vlSelf->clk));
    bufp->fullBit(oldp+368,(vlSelf->rst));
    bufp->fullIData(oldp+369,(vlSelf->pc_debug),32);
    bufp->fullIData(oldp+370,(vlSelf->inst_debug),32);
    bufp->fullIData(oldp+371,(vlSelf->reg_write_data_debug),32);
    bufp->fullIData(oldp+372,(vlSelf->x2_debug),32);
    bufp->fullCData(oldp+373,(vlSelf->waddr_debug),5);
    bufp->fullBit(oldp+374,(vlSelf->mem_wen_debug));
    bufp->fullBit(oldp+375,(vlSelf->mem_en_debug));
    bufp->fullIData(oldp+376,(vlSelf->Op1_debug),32);
    bufp->fullIData(oldp+377,(vlSelf->Op2_debug),32);
    bufp->fullBit(oldp+378,(vlSelf->rf_we_debug));
    bufp->fullBit(oldp+379,(vlSelf->wbu_active_debug));
    bufp->fullIData(oldp+380,(vlSelf->imem_addr_debug),32);
    bufp->fullIData(oldp+381,(vlSelf->pc_plus4_debug),32);
    bufp->fullCData(oldp+382,(vlSelf->wb_sel_debug),2);
    bufp->fullCData(oldp+383,(vlSelf->opcode_debug),7);
    bufp->fullBit(oldp+384,(vlSelf->pc_wen_debug));
    bufp->fullBit(oldp+385,(vlSelf->mem_active_debug));
    bufp->fullIData(oldp+386,(vlSelf->result_from_EXU_to_MEM_debug),32);
    bufp->fullIData(oldp+387,(vlSelf->result_from_MEM_to_WBU_debug),32);
    bufp->fullIData(oldp+388,(vlSelf->result_from_WB_debug),32);
    bufp->fullCData(oldp+389,(vlSelf->alu_op_debug),5);
    bufp->fullIData(oldp+390,(vlSelf->inst_from_EXU_to_MEM_debug),32);
    bufp->fullBit(oldp+391,(((IData)(vlSelf->mem_active_debug) 
                             & ((3U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)) 
                                | (0x23U == (0x7fU 
                                             & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU))))));
    bufp->fullBit(oldp+392,(((IData)(vlSelf->mem_active_debug) 
                             & (0x23U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)))));
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
    bufp->fullWData(oldp+393,(__Vtemp_h650a5f8e__0),136);
    bufp->fullCData(oldp+398,(vlSelf->ysyx_24120009_core__DOT__alu_op),5);
    bufp->fullBit(oldp+399,(vlSelf->ysyx_24120009_core__DOT__mem_en));
    bufp->fullBit(oldp+400,(vlSelf->ysyx_24120009_core__DOT__mem_wen));
    bufp->fullCData(oldp+401,(vlSelf->ysyx_24120009_core__DOT__wb_sel),2);
    bufp->fullIData(oldp+402,(vlSelf->ysyx_24120009_core__DOT__pc_plus4),32);
    bufp->fullIData(oldp+403,(0xbU),32);
    bufp->fullIData(oldp+404,(5U),32);
    bufp->fullIData(oldp+405,(0x20U),32);
    bufp->fullIData(oldp+406,(0U),32);
    bufp->fullIData(oldp+407,(0U),32);
    bufp->fullIData(oldp+408,(0x25U),32);
    bufp->fullIData(oldp+409,(0xbU),32);
    bufp->fullIData(oldp+410,(0x80000000U),32);
    bufp->fullBit(oldp+411,(1U));
    bufp->fullCData(oldp+412,(0U),5);
    bufp->fullIData(oldp+413,(6U),32);
    bufp->fullIData(oldp+414,(3U),32);
    bufp->fullIData(oldp+415,(1U),32);
    bufp->fullBit(oldp+416,(0U));
    bufp->fullIData(oldp+417,(4U),32);
    bufp->fullIData(oldp+418,(6U),32);
    bufp->fullIData(oldp+419,(2U),32);
    bufp->fullIData(oldp+420,(0x22U),32);
    bufp->fullIData(oldp+421,(2U),32);
    bufp->fullIData(oldp+422,(4U),32);
    bufp->fullIData(oldp+423,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__imem_addr),32);
    bufp->fullIData(oldp+424,(0x23U),32);
    bufp->fullIData(oldp+425,(5U),32);
    bufp->fullBit(oldp+426,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wt_req_valid));
    bufp->fullIData(oldp+427,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__waddr),32);
    bufp->fullIData(oldp+428,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wdata),32);
    bufp->fullCData(oldp+429,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wmask),8);
    bufp->fullIData(oldp+430,(8U),32);
    bufp->fullIData(oldp+431,(0xaU),32);
    __Vtemp_ha516852c__0[0U] = 0x491808c9U;
    __Vtemp_ha516852c__0[1U] = 0xc9076a3U;
    __Vtemp_ha516852c__0[2U] = 0x903001c8U;
    __Vtemp_ha516852c__0[3U] = 6U;
    bufp->fullWData(oldp+432,(__Vtemp_ha516852c__0),104);
    bufp->fullCData(oldp+436,(0U),3);
    bufp->fullIData(oldp+437,(0xdU),32);
    bufp->fullIData(oldp+438,(8U),32);
    bufp->fullQData(oldp+439,(0x83c81801ULL),33);
    bufp->fullCData(oldp+441,(0U),8);
    bufp->fullIData(oldp+442,(3U),32);
    bufp->fullIData(oldp+443,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_addr_o),32);
}
