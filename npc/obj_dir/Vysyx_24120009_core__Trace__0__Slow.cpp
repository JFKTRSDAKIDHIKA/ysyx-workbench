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
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+375,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+376,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+377,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+378,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+379,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+380,"mem_wen_debug", false,-1);
    tracep->declBit(c+381,"mem_en_debug", false,-1);
    tracep->declBus(c+382,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+383,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+384,"rf_we_debug", false,-1);
    tracep->declBit(c+385,"wbu_active_debug", false,-1);
    tracep->declBus(c+386,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+387,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+388,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+389,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+390,"pc_wen_debug", false,-1);
    tracep->declBit(c+391,"mem_active_debug", false,-1);
    tracep->declBus(c+392,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+393,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+394,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+395,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+396,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+397,"mem_access_done_debug", false,-1);
    tracep->declBus(c+398,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+399,"wt_res_valid_debug", false,-1);
    tracep->pushNamePrefix("ysyx_24120009_core ");
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+375,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+376,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+377,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+378,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+379,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+380,"mem_wen_debug", false,-1);
    tracep->declBit(c+381,"mem_en_debug", false,-1);
    tracep->declBus(c+382,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+383,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+384,"rf_we_debug", false,-1);
    tracep->declBit(c+385,"wbu_active_debug", false,-1);
    tracep->declBus(c+375,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+387,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+388,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+389,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+390,"pc_wen_debug", false,-1);
    tracep->declBit(c+391,"mem_active_debug", false,-1);
    tracep->declBus(c+392,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+393,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+394,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+395,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+396,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+397,"mem_access_done_debug", false,-1);
    tracep->declBus(c+398,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+399,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+116,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+405,"alu_op", false,-1, 4,0);
    tracep->declBus(c+117,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+361,"rf_we", false,-1);
    tracep->declBit(c+406,"mem_en", false,-1);
    tracep->declBit(c+407,"mem_wen", false,-1);
    tracep->declBus(c+408,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+118,"Op1", false,-1, 31,0);
    tracep->declBus(c+119,"Op2", false,-1, 31,0);
    tracep->declBus(c+409,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+120,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+121,"br_target", false,-1, 31,0);
    tracep->declBus(c+122,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+390,"pc_wen", false,-1);
    tracep->declBus(c+375,"pc_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+376,"inst_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+123,"pc_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+124,"inst_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+125,"rdata2_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+126,"rd_addr_from_IDU_to_EXU", false,-1, 4,0);
    tracep->declBus(c+127,"pc_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+128,"inst_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+129,"result_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+130,"rdata2_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+131,"rd_addr_from_EXU_to_MEM", false,-1, 4,0);
    tracep->declBus(c+392,"dmem_addr_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+362,"dmem_rdata_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+132,"result_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+133,"rd_addr_from_MEM_to_WBU", false,-1, 4,0);
    tracep->declBus(c+134,"pc_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+135,"inst_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+136,"inst_from_WBU_to_MEM", false,-1, 31,0);
    tracep->declBit(c+397,"mem_access_done", false,-1);
    tracep->declBus(c+137,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+138,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+139,"waddr", false,-1, 4,0);
    tracep->declBus(c+140,"rdata1", false,-1, 31,0);
    tracep->declBus(c+125,"rdata2", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+118,"Op1", false,-1, 31,0);
    tracep->declBus(c+119,"Op2", false,-1, 31,0);
    tracep->declBus(c+123,"pc_i", false,-1, 31,0);
    tracep->declBus(c+124,"inst_i", false,-1, 31,0);
    tracep->declBus(c+125,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+126,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+392,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+128,"inst_o", false,-1, 31,0);
    tracep->declBus(c+127,"pc_o", false,-1, 31,0);
    tracep->declBus(c+129,"result", false,-1, 31,0);
    tracep->declBus(c+130,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+131,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+395,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+396,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+141,"alu_op", false,-1, 4,0);
    tracep->declBus(c+142,"funct3", false,-1, 2,0);
    tracep->declBus(c+143,"funct7", false,-1, 6,0);
    tracep->declBus(c+144,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+118,"A", false,-1, 31,0);
    tracep->declBus(c+119,"B", false,-1, 31,0);
    tracep->declBus(c+141,"ALUFun", false,-1, 4,0);
    tracep->declBus(c+129,"Result", false,-1, 31,0);
    tracep->declBus(c+145,"add_result", false,-1, 31,0);
    tracep->declBus(c+146,"sub_result", false,-1, 31,0);
    tracep->declBus(c+147,"slt_result", false,-1, 31,0);
    tracep->declBus(c+148,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+149,"xor_result", false,-1, 31,0);
    tracep->declBus(c+150,"or_result", false,-1, 31,0);
    tracep->declBus(c+151,"and_result", false,-1, 31,0);
    tracep->declBus(c+152,"sll_result", false,-1, 31,0);
    tracep->declBus(c+153,"srl_result", false,-1, 31,0);
    tracep->declBus(c+154,"sra_result", false,-1, 31,0);
    tracep->declBus(c+382,"op1_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu_mux ");
    tracep->declBus(c+410,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+411,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+129,"out", false,-1, 31,0);
    tracep->declBus(c+141,"key", false,-1, 4,0);
    tracep->declArray(c+155,"lut", false,-1, 406,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+410,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+411,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+129,"out", false,-1, 31,0);
    tracep->declBus(c+141,"key", false,-1, 4,0);
    tracep->declBus(c+414,"default_out", false,-1, 31,0);
    tracep->declArray(c+155,"lut", false,-1, 406,0);
    tracep->declBus(c+415,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+168+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+190+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+201,"lut_out", false,-1, 31,0);
    tracep->declBit(c+202,"hit", false,-1);
    tracep->declBus(c+416,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inst_reg_EXU ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+124,"din", false,-1, 31,0);
    tracep->declBus(c+128,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_EXU ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+123,"din", false,-1, 31,0);
    tracep->declBus(c+127,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_EXU ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+419,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+126,"din", false,-1, 4,0);
    tracep->declBus(c+131,"dout", false,-1, 4,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_EXU ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+125,"din", false,-1, 31,0);
    tracep->declBus(c+130,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+376,"inst_i", false,-1, 31,0);
    tracep->declBus(c+375,"pc_i", false,-1, 31,0);
    tracep->declBus(c+140,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+125,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+137,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+138,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+126,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+118,"Op1", false,-1, 31,0);
    tracep->declBus(c+119,"Op2", false,-1, 31,0);
    tracep->declBus(c+123,"pc_o", false,-1, 31,0);
    tracep->declBus(c+124,"inst_o", false,-1, 31,0);
    tracep->declBus(c+125,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+120,"jump_reg_target_o", false,-1, 31,0);
    tracep->declBus(c+121,"br_target_o", false,-1, 31,0);
    tracep->declBus(c+122,"jmp_target_o", false,-1, 31,0);
    tracep->declBus(c+117,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+203,"br_eq", false,-1);
    tracep->declBit(c+204,"br_lt", false,-1);
    tracep->declBit(c+205,"br_ltu", false,-1);
    tracep->declBus(c+206,"Op1Sel", false,-1, 1,0);
    tracep->declBus(c+207,"Op2Sel", false,-1, 1,0);
    tracep->declBus(c+126,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+208,"imm_i", false,-1, 11,0);
    tracep->declBus(c+209,"imm_s", false,-1, 11,0);
    tracep->declBus(c+210,"imm_b", false,-1, 11,0);
    tracep->declBus(c+211,"imm_u", false,-1, 19,0);
    tracep->declBus(c+212,"imm_j", false,-1, 19,0);
    tracep->declBus(c+213,"imm_i_sext", false,-1, 31,0);
    tracep->declBus(c+214,"imm_s_sext", false,-1, 31,0);
    tracep->declBus(c+215,"imm_b_sext", false,-1, 31,0);
    tracep->declBus(c+216,"imm_u_sext", false,-1, 31,0);
    tracep->declBus(c+217,"imm_j_sext", false,-1, 31,0);
    tracep->declBus(c+218,"funct3", false,-1, 2,0);
    tracep->declBus(c+219,"funct7", false,-1, 6,0);
    tracep->declBus(c+220,"opcode", false,-1, 6,0);
    tracep->declBit(c+221,"branch_taken", false,-1);
    tracep->pushNamePrefix("b_taken_mux ");
    tracep->declBus(c+420,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+421,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+422,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+221,"out", false,-1, 0,0);
    tracep->declBus(c+218,"key", false,-1, 2,0);
    tracep->declBus(c+222,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+420,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+421,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+422,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+221,"out", false,-1, 0,0);
    tracep->declBus(c+218,"key", false,-1, 2,0);
    tracep->declBus(c+423,"default_out", false,-1, 0,0);
    tracep->declBus(c+222,"lut", false,-1, 23,0);
    tracep->declBus(c+424,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+223+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+229+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+235,"lut_out", false,-1, 0,0);
    tracep->declBit(c+236,"hit", false,-1);
    tracep->declBus(c+425,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_reg_IDU ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+376,"din", false,-1, 31,0);
    tracep->declBus(c+124,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op1_sel_mux ");
    tracep->declBus(c+426,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+426,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+118,"out", false,-1, 31,0);
    tracep->declBus(c+206,"key", false,-1, 1,0);
    tracep->declArray(c+237,"lut", false,-1, 67,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+426,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+426,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+118,"out", false,-1, 31,0);
    tracep->declBus(c+206,"key", false,-1, 1,0);
    tracep->declBus(c+414,"default_out", false,-1, 31,0);
    tracep->declArray(c+237,"lut", false,-1, 67,0);
    tracep->declBus(c+427,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+240+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+244+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+246,"lut_out", false,-1, 31,0);
    tracep->declBit(c+247,"hit", false,-1);
    tracep->declBus(c+428,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("op2_sel_mux ");
    tracep->declBus(c+424,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+426,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"out", false,-1, 31,0);
    tracep->declBus(c+207,"key", false,-1, 1,0);
    tracep->declArray(c+248,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+424,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+426,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+119,"out", false,-1, 31,0);
    tracep->declBus(c+207,"key", false,-1, 1,0);
    tracep->declBus(c+414,"default_out", false,-1, 31,0);
    tracep->declArray(c+248,"lut", false,-1, 135,0);
    tracep->declBus(c+427,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+253+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+261+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+265,"lut_out", false,-1, 31,0);
    tracep->declBit(c+266,"hit", false,-1);
    tracep->declBus(c+429,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_IDU ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+375,"din", false,-1, 31,0);
    tracep->declBus(c+123,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+117,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+120,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+121,"br_target", false,-1, 31,0);
    tracep->declBus(c+122,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+390,"pc_wen", false,-1);
    tracep->declBus(c+375,"pc_o", false,-1, 31,0);
    tracep->declBus(c+376,"inst_o", false,-1, 31,0);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBit(c+418,"idu_ready", false,-1);
    tracep->declBus(c+267,"pc", false,-1, 31,0);
    tracep->declBus(c+268,"pc_next", false,-1, 31,0);
    tracep->declBus(c+269,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+430,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+414,"exception", false,-1, 31,0);
    tracep->declBus(c+73,"state", false,-1, 2,0);
    tracep->declBus(c+431,"IDLE", false,-1, 2,0);
    tracep->declBus(c+432,"FETCH_REQ", false,-1, 2,0);
    tracep->declBus(c+433,"FETCH_WAIT", false,-1, 2,0);
    tracep->declBus(c+434,"FETCH_DONE", false,-1, 2,0);
    tracep->declBus(c+74,"sram_data_out", false,-1, 31,0);
    tracep->declBit(c+75,"rd_res_valid", false,-1);
    tracep->declBus(c+76,"if_inst_buffer", false,-1, 31,0);
    tracep->declBit(c+77,"sram_rd_req", false,-1);
    tracep->pushNamePrefix("mux_pc_sel ");
    tracep->declBus(c+411,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+421,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+268,"out", false,-1, 31,0);
    tracep->declBus(c+117,"key", false,-1, 2,0);
    tracep->declArray(c+270,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+411,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+421,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+268,"out", false,-1, 31,0);
    tracep->declBus(c+117,"key", false,-1, 2,0);
    tracep->declBus(c+414,"default_out", false,-1, 31,0);
    tracep->declArray(c+270,"lut", false,-1, 174,0);
    tracep->declBus(c+435,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+276+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+286+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+291,"lut_out", false,-1, 31,0);
    tracep->declBit(c+292,"hit", false,-1);
    tracep->declBus(c+436,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+268,"din", false,-1, 31,0);
    tracep->declBus(c+267,"dout", false,-1, 31,0);
    tracep->declBit(c+390,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram_inst ");
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBit(c+77,"rd_req_valid", false,-1);
    tracep->declBus(c+267,"addr", false,-1, 31,0);
    tracep->declBus(c+74,"data_out", false,-1, 31,0);
    tracep->declBit(c+75,"rd_res_valid", false,-1);
    tracep->declBit(c+437,"wt_req_valid", false,-1);
    tracep->declBus(c+438,"waddr", false,-1, 31,0);
    tracep->declBus(c+439,"wdata", false,-1, 31,0);
    tracep->declBus(c+440,"wmask", false,-1, 7,0);
    tracep->declBit(c+78,"wt_res_valid", false,-1);
    tracep->declBus(c+79,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+80,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+81,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+82,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+83,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+84,"wt_req_valid_delayed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+127,"pc_i", false,-1, 31,0);
    tracep->declBus(c+128,"inst_i", false,-1, 31,0);
    tracep->declBus(c+129,"result_i", false,-1, 31,0);
    tracep->declBus(c+392,"dmem_addr_i", false,-1, 31,0);
    tracep->declBus(c+130,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+131,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+135,"inst_o", false,-1, 31,0);
    tracep->declBus(c+134,"pc_o", false,-1, 31,0);
    tracep->declBus(c+132,"result_o", false,-1, 31,0);
    tracep->declBus(c+362,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+133,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+397,"mem_access_done", false,-1);
    tracep->declBit(c+391,"mem_active", false,-1);
    tracep->declBus(c+376,"inst_from_IFU", false,-1, 31,0);
    tracep->declBus(c+136,"inst_from_WBU", false,-1, 31,0);
    tracep->declBit(c+399,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+85,"dmem_rdata_raw", false,-1, 31,0);
    tracep->declBus(c+293,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+294,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+295,"wmask", false,-1, 7,0);
    tracep->declBus(c+296,"ctl_mem_access", false,-1, 2,0);
    tracep->declBit(c+363,"mem_en", false,-1);
    tracep->declBit(c+364,"mem_wen", false,-1);
    tracep->declBus(c+297,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+293,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+86,"rd_res_valid", false,-1);
    tracep->declBit(c+87,"wt_res_valid", false,-1);
    tracep->declBit(c+365,"rd_req_valid", false,-1);
    tracep->declBit(c+366,"wt_req_valid", false,-1);
    tracep->declBus(c+298,"funct3", false,-1, 2,0);
    tracep->declBus(c+299,"funct7", false,-1, 6,0);
    tracep->declBus(c+300,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBit(c+365,"rd_req_valid", false,-1);
    tracep->declBus(c+297,"addr", false,-1, 31,0);
    tracep->declBus(c+85,"data_out", false,-1, 31,0);
    tracep->declBit(c+86,"rd_res_valid", false,-1);
    tracep->declBit(c+366,"wt_req_valid", false,-1);
    tracep->declBus(c+297,"waddr", false,-1, 31,0);
    tracep->declBus(c+294,"wdata", false,-1, 31,0);
    tracep->declBus(c+295,"wmask", false,-1, 7,0);
    tracep->declBit(c+87,"wt_res_valid", false,-1);
    tracep->declBus(c+88,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+89,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+90,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+91,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+92,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+93,"wt_req_valid_delayed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+85,"data_in", false,-1, 31,0);
    tracep->declBus(c+297,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+296,"control", false,-1, 2,0);
    tracep->declBus(c+362,"data_out", false,-1, 31,0);
    tracep->declBus(c+301,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+367,"shifted_data", false,-1, 31,0);
    tracep->declBus(c+368,"zero_ext_byte", false,-1, 31,0);
    tracep->declBus(c+369,"zero_ext_half", false,-1, 31,0);
    tracep->declBus(c+370,"sign_ext_byte", false,-1, 31,0);
    tracep->declBus(c+371,"sign_ext_half", false,-1, 31,0);
    tracep->pushNamePrefix("mem_mux ");
    tracep->declBus(c+411,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+421,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+362,"out", false,-1, 31,0);
    tracep->declBus(c+296,"key", false,-1, 2,0);
    tracep->declArray(c+95,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+411,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+421,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+362,"out", false,-1, 31,0);
    tracep->declBus(c+296,"key", false,-1, 2,0);
    tracep->declBus(c+414,"default_out", false,-1, 31,0);
    tracep->declArray(c+95,"lut", false,-1, 174,0);
    tracep->declBus(c+435,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+101+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+111+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+372,"lut_out", false,-1, 31,0);
    tracep->declBit(c+302,"hit", false,-1);
    tracep->declBus(c+436,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmem_addr_reg_MEM ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+392,"din", false,-1, 31,0);
    tracep->declBus(c+297,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_MEM ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+128,"din", false,-1, 31,0);
    tracep->declBus(c+135,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_acces_ctl_mux ");
    tracep->declBus(c+441,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+442,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+421,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+296,"out", false,-1, 2,0);
    tracep->declBus(c+303,"key", false,-1, 9,0);
    tracep->declArray(c+443,"lut", false,-1, 103,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+441,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+442,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+421,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+296,"out", false,-1, 2,0);
    tracep->declBus(c+303,"key", false,-1, 9,0);
    tracep->declBus(c+431,"default_out", false,-1, 2,0);
    tracep->declArray(c+443,"lut", false,-1, 103,0);
    tracep->declBus(c+447,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+42+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+50+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+304,"lut_out", false,-1, 2,0);
    tracep->declBit(c+305,"hit", false,-1);
    tracep->declBus(c+448,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_MEM ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+134,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_MEM ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+419,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+131,"din", false,-1, 4,0);
    tracep->declBus(c+133,"dout", false,-1, 4,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_MEM ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+129,"din", false,-1, 31,0);
    tracep->declBus(c+132,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_MEM ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+130,"din", false,-1, 31,0);
    tracep->declBus(c+293,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wmask_gen ");
    tracep->declBus(c+296,"control", false,-1, 2,0);
    tracep->declBus(c+297,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+293,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+294,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+295,"wmask", false,-1, 7,0);
    tracep->declBus(c+301,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+306,"base_mask", false,-1, 7,0);
    tracep->declBus(c+295,"shifted_mask", false,-1, 7,0);
    tracep->pushNamePrefix("mem_mux_write ");
    tracep->declBus(c+421,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+421,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+441,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+306,"out", false,-1, 7,0);
    tracep->declBus(c+296,"key", false,-1, 2,0);
    tracep->declQuad(c+449,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+421,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+421,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+441,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+306,"out", false,-1, 7,0);
    tracep->declBus(c+296,"key", false,-1, 2,0);
    tracep->declBus(c+451,"default_out", false,-1, 7,0);
    tracep->declQuad(c+449,"lut", false,-1, 32,0);
    tracep->declBus(c+410,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+58+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+61+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+64+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+307,"lut_out", false,-1, 7,0);
    tracep->declBit(c+308,"hit", false,-1);
    tracep->declBus(c+452,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+411,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBus(c+116,"wdata", false,-1, 31,0);
    tracep->declBus(c+139,"waddr", false,-1, 4,0);
    tracep->declBit(c+361,"wen", false,-1);
    tracep->declBus(c+137,"raddr1", false,-1, 4,0);
    tracep->declBus(c+138,"raddr2", false,-1, 4,0);
    tracep->declBus(c+140,"rdata1", false,-1, 31,0);
    tracep->declBus(c+125,"rdata2", false,-1, 31,0);
    tracep->declBus(c+378,"x2_debug", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+309+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+67,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+116,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+139,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+361,"rf_we", false,-1);
    tracep->declBus(c+134,"pc_i", false,-1, 31,0);
    tracep->declBus(c+135,"inst_i", false,-1, 31,0);
    tracep->declBus(c+132,"result_i", false,-1, 31,0);
    tracep->declBus(c+362,"dmem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+133,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+397,"mem_access_done", false,-1);
    tracep->declBit(c+390,"pc_wen", false,-1);
    tracep->declBus(c+376,"inst_from_IFU", false,-1, 31,0);
    tracep->declBit(c+385,"wbu_active", false,-1);
    tracep->declBus(c+136,"inst_o", false,-1, 31,0);
    tracep->declBus(c+387,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+388,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+389,"opcode_debug", false,-1, 6,0);
    tracep->declBus(c+394,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+387,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+341,"pc_o", false,-1, 31,0);
    tracep->declBus(c+342,"result_o", false,-1, 31,0);
    tracep->declBus(c+453,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+343,"dmem_rdata_o", false,-1, 31,0);
    tracep->declBus(c+344,"wb_sel", false,-1, 1,0);
    tracep->declBit(c+94,"wbu_active_reg", false,-1);
    tracep->declBus(c+345,"funct3", false,-1, 2,0);
    tracep->declBus(c+346,"funct7", false,-1, 6,0);
    tracep->declBus(c+389,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("dmem_rdata_reg_WBU ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+362,"din", false,-1, 31,0);
    tracep->declBus(c+343,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_WBU ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+135,"din", false,-1, 31,0);
    tracep->declBus(c+136,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_WBU ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+134,"din", false,-1, 31,0);
    tracep->declBus(c+341,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_WBU ");
    tracep->declBus(c+411,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+419,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+133,"din", false,-1, 4,0);
    tracep->declBus(c+139,"dout", false,-1, 4,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_WBU ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+373,"clk", false,-1);
    tracep->declBit(c+374,"rst", false,-1);
    tracep->declBus(c+132,"din", false,-1, 31,0);
    tracep->declBus(c+342,"dout", false,-1, 31,0);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_mux ");
    tracep->declBus(c+424,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+426,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+116,"out", false,-1, 31,0);
    tracep->declBus(c+344,"key", false,-1, 1,0);
    tracep->declBus(c+414,"default_out", false,-1, 31,0);
    tracep->declArray(c+400,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+424,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+426,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+422,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+116,"out", false,-1, 31,0);
    tracep->declBus(c+344,"key", false,-1, 1,0);
    tracep->declBus(c+414,"default_out", false,-1, 31,0);
    tracep->declArray(c+400,"lut", false,-1, 135,0);
    tracep->declBus(c+427,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+347+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+68+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+355+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+359,"lut_out", false,-1, 31,0);
    tracep->declBit(c+360,"hit", false,-1);
    tracep->declBus(c+429,"i", false,-1, 31,0);
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
    bufp->fullBit(oldp+72,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__inst_valid));
    bufp->fullCData(oldp+73,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state),3);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_data_out),32);
    bufp->fullBit(oldp+75,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rd_res_valid));
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer),32);
    bufp->fullBit(oldp+77,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_rd_req));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wt_res_valid));
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__addr_delayed),32);
    bufp->fullBit(oldp+80,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__rd_req_valid_delayed));
    bufp->fullIData(oldp+81,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__waddr_delayed),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wdata_delayed),32);
    bufp->fullCData(oldp+83,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wmask_delayed),8);
    bufp->fullBit(oldp+84,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wt_req_valid_delayed));
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw),32);
    bufp->fullBit(oldp+86,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rd_res_valid));
    bufp->fullBit(oldp+87,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wt_res_valid));
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__addr_delayed),32);
    bufp->fullBit(oldp+89,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__rd_req_valid_delayed));
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__waddr_delayed),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wdata_delayed),32);
    bufp->fullCData(oldp+92,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wmask_delayed),8);
    bufp->fullBit(oldp+93,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wt_req_valid_delayed));
    bufp->fullBit(oldp+94,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_active_reg));
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
    bufp->fullWData(oldp+95,(__Vtemp_hdb58eddb__0),175);
    bufp->fullQData(oldp+101,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+103,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+105,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+107,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+109,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_24120009_core__DOT__reg_write_data),32);
    bufp->fullCData(oldp+117,(vlSelf->ysyx_24120009_core__DOT__pc_sel),3);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_24120009_core__DOT__Op1),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_24120009_core__DOT__Op2),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_24120009_core__DOT__jump_reg_target),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_24120009_core__DOT__br_target),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_24120009_core__DOT__jmp_target),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU),32);
    bufp->fullCData(oldp+126,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 7U))),5);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM),32);
    bufp->fullCData(oldp+131,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM),5);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU),32);
    bufp->fullCData(oldp+133,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU),5);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM),32);
    bufp->fullCData(oldp+137,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+138,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+139,(vlSelf->ysyx_24120009_core__DOT__waddr),5);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_24120009_core__DOT__rdata1),32);
    bufp->fullCData(oldp+141,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op),5);
    bufp->fullCData(oldp+142,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+143,((vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+144,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)),7);
    bufp->fullIData(oldp+145,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               + vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+146,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               - vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+147,(vlSelf->__VdfgTmp_h9d12977d__0),32);
    bufp->fullIData(oldp+148,(vlSelf->__VdfgTmp_h9d0653ad__0),32);
    bufp->fullIData(oldp+149,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               ^ vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+150,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               | vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+151,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               & vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+152,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+153,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+154,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
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
    bufp->fullWData(oldp+155,(__Vtemp_hd74bf4d1__0),407);
    bufp->fullQData(oldp+168,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+170,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+172,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+174,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+176,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+178,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+180,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+182,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+184,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8]),37);
    bufp->fullQData(oldp+186,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9]),37);
    bufp->fullQData(oldp+188,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[10]),37);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+202,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+203,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+204,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+205,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
    bufp->fullCData(oldp+206,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel),2);
    bufp->fullCData(oldp+207,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel),2);
    bufp->fullSData(oldp+208,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+209,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+210,(((0x800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+211,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+212,(((0x80000U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext),32);
    bufp->fullIData(oldp+214,((((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext),32);
    bufp->fullIData(oldp+216,((0xfffff000U & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext),32);
    bufp->fullCData(oldp+218,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+219,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+220,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),7);
    bufp->fullBit(oldp+221,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken));
    bufp->fullIData(oldp+222,((0x28aceU | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq) 
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
    bufp->fullCData(oldp+223,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+224,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+225,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+226,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+227,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+228,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullBit(oldp+229,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+230,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+231,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+232,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+233,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+234,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+235,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+236,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+237,(__Vtemp_h3e4b9c5b__0),68);
    bufp->fullQData(oldp+240,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+242,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+247,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+248,(__Vtemp_h4b1a9c47__0),136);
    bufp->fullQData(oldp+253,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+255,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+257,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+259,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+261,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+262,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+263,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+264,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+265,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+266,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+267,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+268,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next),32);
    bufp->fullIData(oldp+269,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)),32);
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
    bufp->fullWData(oldp+270,(__Vtemp_h47858337__0),175);
    bufp->fullQData(oldp+276,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+278,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+280,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+282,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+284,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+286,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+287,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+288,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+289,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+290,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+291,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+292,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+293,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o),32);
    bufp->fullIData(oldp+294,(((0x1fU >= (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                   << 3U)))
                                ? (vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o 
                                   << (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                << 3U)))
                                : 0U)),32);
    bufp->fullCData(oldp+295,((0xffU & ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask) 
                                        << (3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)))),8);
    bufp->fullCData(oldp+296,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access),3);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o),32);
    bufp->fullCData(oldp+298,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+299,((vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+300,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)),7);
    bufp->fullCData(oldp+301,((3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)),2);
    bufp->fullBit(oldp+302,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+303,(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key),10);
    bufp->fullCData(oldp+304,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+305,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+306,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask),8);
    bufp->fullCData(oldp+307,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+308,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+309,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o),32);
    bufp->fullCData(oldp+344,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel),2);
    bufp->fullCData(oldp+345,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+346,((vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullQData(oldp+347,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+349,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+351,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+353,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+355,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+360,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit));
    bufp->fullBit(oldp+361,(vlSelf->ysyx_24120009_core__DOT__rf_we));
    bufp->fullIData(oldp+362,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU),32);
    bufp->fullBit(oldp+363,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en));
    bufp->fullBit(oldp+364,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen));
    bufp->fullBit(oldp+365,(((~ (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen)) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en))));
    bufp->fullBit(oldp+366,(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen))));
    bufp->fullIData(oldp+367,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullIData(oldp+368,((0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+369,((0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+370,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+371,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+373,(vlSelf->clk));
    bufp->fullBit(oldp+374,(vlSelf->rst));
    bufp->fullIData(oldp+375,(vlSelf->pc_debug),32);
    bufp->fullIData(oldp+376,(vlSelf->inst_debug),32);
    bufp->fullIData(oldp+377,(vlSelf->reg_write_data_debug),32);
    bufp->fullIData(oldp+378,(vlSelf->x2_debug),32);
    bufp->fullCData(oldp+379,(vlSelf->waddr_debug),5);
    bufp->fullBit(oldp+380,(vlSelf->mem_wen_debug));
    bufp->fullBit(oldp+381,(vlSelf->mem_en_debug));
    bufp->fullIData(oldp+382,(vlSelf->Op1_debug),32);
    bufp->fullIData(oldp+383,(vlSelf->Op2_debug),32);
    bufp->fullBit(oldp+384,(vlSelf->rf_we_debug));
    bufp->fullBit(oldp+385,(vlSelf->wbu_active_debug));
    bufp->fullIData(oldp+386,(vlSelf->imem_addr_debug),32);
    bufp->fullIData(oldp+387,(vlSelf->pc_plus4_debug),32);
    bufp->fullCData(oldp+388,(vlSelf->wb_sel_debug),2);
    bufp->fullCData(oldp+389,(vlSelf->opcode_debug),7);
    bufp->fullBit(oldp+390,(vlSelf->pc_wen_debug));
    bufp->fullBit(oldp+391,(vlSelf->mem_active_debug));
    bufp->fullIData(oldp+392,(vlSelf->result_from_EXU_to_MEM_debug),32);
    bufp->fullIData(oldp+393,(vlSelf->result_from_MEM_to_WBU_debug),32);
    bufp->fullIData(oldp+394,(vlSelf->result_from_WB_debug),32);
    bufp->fullCData(oldp+395,(vlSelf->alu_op_debug),5);
    bufp->fullIData(oldp+396,(vlSelf->inst_from_EXU_to_MEM_debug),32);
    bufp->fullBit(oldp+397,(vlSelf->mem_access_done_debug));
    bufp->fullIData(oldp+398,(vlSelf->dmem_rdata_from_MEM_to_WBU_debug),32);
    bufp->fullBit(oldp+399,(vlSelf->wt_res_valid_debug));
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
    bufp->fullWData(oldp+400,(__Vtemp_h650a5f8e__0),136);
    bufp->fullCData(oldp+405,(vlSelf->ysyx_24120009_core__DOT__alu_op),5);
    bufp->fullBit(oldp+406,(vlSelf->ysyx_24120009_core__DOT__mem_en));
    bufp->fullBit(oldp+407,(vlSelf->ysyx_24120009_core__DOT__mem_wen));
    bufp->fullCData(oldp+408,(vlSelf->ysyx_24120009_core__DOT__wb_sel),2);
    bufp->fullIData(oldp+409,(vlSelf->ysyx_24120009_core__DOT__pc_plus4),32);
    bufp->fullIData(oldp+410,(0xbU),32);
    bufp->fullIData(oldp+411,(5U),32);
    bufp->fullIData(oldp+412,(0x20U),32);
    bufp->fullIData(oldp+413,(0U),32);
    bufp->fullIData(oldp+414,(0U),32);
    bufp->fullIData(oldp+415,(0x25U),32);
    bufp->fullIData(oldp+416,(0xbU),32);
    bufp->fullIData(oldp+417,(0x80000000U),32);
    bufp->fullBit(oldp+418,(1U));
    bufp->fullCData(oldp+419,(0U),5);
    bufp->fullIData(oldp+420,(6U),32);
    bufp->fullIData(oldp+421,(3U),32);
    bufp->fullIData(oldp+422,(1U),32);
    bufp->fullBit(oldp+423,(0U));
    bufp->fullIData(oldp+424,(4U),32);
    bufp->fullIData(oldp+425,(6U),32);
    bufp->fullIData(oldp+426,(2U),32);
    bufp->fullIData(oldp+427,(0x22U),32);
    bufp->fullIData(oldp+428,(2U),32);
    bufp->fullIData(oldp+429,(4U),32);
    bufp->fullIData(oldp+430,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__imem_addr),32);
    bufp->fullCData(oldp+431,(0U),3);
    bufp->fullCData(oldp+432,(1U),3);
    bufp->fullCData(oldp+433,(2U),3);
    bufp->fullCData(oldp+434,(3U),3);
    bufp->fullIData(oldp+435,(0x23U),32);
    bufp->fullIData(oldp+436,(5U),32);
    bufp->fullBit(oldp+437,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wt_req_valid));
    bufp->fullIData(oldp+438,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__waddr),32);
    bufp->fullIData(oldp+439,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wdata),32);
    bufp->fullCData(oldp+440,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wmask),8);
    bufp->fullIData(oldp+441,(8U),32);
    bufp->fullIData(oldp+442,(0xaU),32);
    __Vtemp_ha516852c__0[0U] = 0x491808c9U;
    __Vtemp_ha516852c__0[1U] = 0xc9076a3U;
    __Vtemp_ha516852c__0[2U] = 0x903001c8U;
    __Vtemp_ha516852c__0[3U] = 6U;
    bufp->fullWData(oldp+443,(__Vtemp_ha516852c__0),104);
    bufp->fullIData(oldp+447,(0xdU),32);
    bufp->fullIData(oldp+448,(8U),32);
    bufp->fullQData(oldp+449,(0x83c81801ULL),33);
    bufp->fullCData(oldp+451,(0U),8);
    bufp->fullIData(oldp+452,(3U),32);
    bufp->fullIData(oldp+453,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_addr_o),32);
}
