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
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+359,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+360,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+361,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+362,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+363,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+364,"mem_wen_debug", false,-1);
    tracep->declBit(c+365,"mem_en_debug", false,-1);
    tracep->declBus(c+366,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+367,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+368,"rf_we_debug", false,-1);
    tracep->declBit(c+369,"wbu_active_debug", false,-1);
    tracep->declBus(c+370,"imem_addr_debug", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24120009_core ");
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+359,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+360,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+361,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+362,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+363,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+364,"mem_wen_debug", false,-1);
    tracep->declBit(c+365,"mem_en_debug", false,-1);
    tracep->declBus(c+366,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+367,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+368,"rf_we_debug", false,-1);
    tracep->declBit(c+369,"wbu_active_debug", false,-1);
    tracep->declBus(c+359,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+72,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+371,"alu_op", false,-1, 4,0);
    tracep->declBus(c+73,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+74,"rf_we", false,-1);
    tracep->declBit(c+372,"mem_en", false,-1);
    tracep->declBit(c+373,"mem_wen", false,-1);
    tracep->declBus(c+374,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+75,"Op1", false,-1, 31,0);
    tracep->declBus(c+76,"Op2", false,-1, 31,0);
    tracep->declBus(c+375,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+77,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+78,"br_target", false,-1, 31,0);
    tracep->declBus(c+79,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+369,"pc_wen", false,-1);
    tracep->declBus(c+359,"pc_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+360,"inst_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+80,"pc_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+81,"inst_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+82,"rdata2_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+83,"rd_addr_from_IDU_to_EXU", false,-1, 4,0);
    tracep->declBus(c+84,"pc_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+85,"inst_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+86,"result_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+87,"rdata2_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+88,"rd_addr_from_EXU_to_MEM", false,-1, 4,0);
    tracep->declBus(c+86,"dmem_addr_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+89,"dmem_rdata_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+90,"result_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+91,"rd_addr_from_MEM_to_WBU", false,-1, 4,0);
    tracep->declBus(c+92,"pc_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+93,"inst_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+94,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+95,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+96,"waddr", false,-1, 4,0);
    tracep->declBus(c+97,"rdata1", false,-1, 31,0);
    tracep->declBus(c+82,"rdata2", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+75,"Op1", false,-1, 31,0);
    tracep->declBus(c+76,"Op2", false,-1, 31,0);
    tracep->declBus(c+80,"pc_i", false,-1, 31,0);
    tracep->declBus(c+81,"inst_i", false,-1, 31,0);
    tracep->declBus(c+82,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+83,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+86,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+85,"inst_o", false,-1, 31,0);
    tracep->declBus(c+84,"pc_o", false,-1, 31,0);
    tracep->declBus(c+86,"result", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+88,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+98,"alu_op", false,-1, 4,0);
    tracep->declBus(c+99,"funct3", false,-1, 2,0);
    tracep->declBus(c+100,"funct7", false,-1, 6,0);
    tracep->declBus(c+101,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+75,"A", false,-1, 31,0);
    tracep->declBus(c+76,"B", false,-1, 31,0);
    tracep->declBus(c+98,"ALUFun", false,-1, 4,0);
    tracep->declBus(c+86,"Result", false,-1, 31,0);
    tracep->declBus(c+102,"add_result", false,-1, 31,0);
    tracep->declBus(c+103,"sub_result", false,-1, 31,0);
    tracep->declBus(c+104,"slt_result", false,-1, 31,0);
    tracep->declBus(c+105,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+106,"xor_result", false,-1, 31,0);
    tracep->declBus(c+107,"or_result", false,-1, 31,0);
    tracep->declBus(c+108,"and_result", false,-1, 31,0);
    tracep->declBus(c+109,"sll_result", false,-1, 31,0);
    tracep->declBus(c+110,"srl_result", false,-1, 31,0);
    tracep->declBus(c+111,"sra_result", false,-1, 31,0);
    tracep->declBus(c+366,"op1_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu_mux ");
    tracep->declBus(c+376,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+377,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+86,"out", false,-1, 31,0);
    tracep->declBus(c+98,"key", false,-1, 4,0);
    tracep->declArray(c+112,"lut", false,-1, 406,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+376,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+377,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+86,"out", false,-1, 31,0);
    tracep->declBus(c+98,"key", false,-1, 4,0);
    tracep->declBus(c+380,"default_out", false,-1, 31,0);
    tracep->declArray(c+112,"lut", false,-1, 406,0);
    tracep->declBus(c+381,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+125+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+147+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+158,"lut_out", false,-1, 31,0);
    tracep->declBit(c+159,"hit", false,-1);
    tracep->declBus(c+382,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inst_reg_EXU ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+81,"din", false,-1, 31,0);
    tracep->declBus(c+85,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_EXU ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+80,"din", false,-1, 31,0);
    tracep->declBus(c+84,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_EXU ");
    tracep->declBus(c+377,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+385,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+83,"din", false,-1, 4,0);
    tracep->declBus(c+88,"dout", false,-1, 4,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_EXU ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+82,"din", false,-1, 31,0);
    tracep->declBus(c+87,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+360,"inst_i", false,-1, 31,0);
    tracep->declBus(c+359,"pc_i", false,-1, 31,0);
    tracep->declBus(c+97,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+82,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+94,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+95,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+83,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+75,"Op1", false,-1, 31,0);
    tracep->declBus(c+76,"Op2", false,-1, 31,0);
    tracep->declBus(c+80,"pc_o", false,-1, 31,0);
    tracep->declBus(c+81,"inst_o", false,-1, 31,0);
    tracep->declBus(c+82,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+77,"jump_reg_target_o", false,-1, 31,0);
    tracep->declBus(c+78,"br_target_o", false,-1, 31,0);
    tracep->declBus(c+79,"jmp_target_o", false,-1, 31,0);
    tracep->declBus(c+73,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+160,"br_eq", false,-1);
    tracep->declBit(c+161,"br_lt", false,-1);
    tracep->declBit(c+162,"br_ltu", false,-1);
    tracep->declBus(c+163,"Op1Sel", false,-1, 1,0);
    tracep->declBus(c+164,"Op2Sel", false,-1, 1,0);
    tracep->declBus(c+83,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+165,"imm_i", false,-1, 11,0);
    tracep->declBus(c+166,"imm_s", false,-1, 11,0);
    tracep->declBus(c+167,"imm_b", false,-1, 11,0);
    tracep->declBus(c+168,"imm_u", false,-1, 19,0);
    tracep->declBus(c+169,"imm_j", false,-1, 19,0);
    tracep->declBus(c+170,"imm_i_sext", false,-1, 31,0);
    tracep->declBus(c+171,"imm_s_sext", false,-1, 31,0);
    tracep->declBus(c+172,"imm_b_sext", false,-1, 31,0);
    tracep->declBus(c+173,"imm_u_sext", false,-1, 31,0);
    tracep->declBus(c+174,"imm_j_sext", false,-1, 31,0);
    tracep->declBus(c+175,"funct3", false,-1, 2,0);
    tracep->declBus(c+176,"funct7", false,-1, 6,0);
    tracep->declBus(c+177,"opcode", false,-1, 6,0);
    tracep->declBit(c+178,"branch_taken", false,-1);
    tracep->pushNamePrefix("b_taken_mux ");
    tracep->declBus(c+386,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+388,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+178,"out", false,-1, 0,0);
    tracep->declBus(c+175,"key", false,-1, 2,0);
    tracep->declBus(c+179,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+386,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+388,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+178,"out", false,-1, 0,0);
    tracep->declBus(c+175,"key", false,-1, 2,0);
    tracep->declBus(c+389,"default_out", false,-1, 0,0);
    tracep->declBus(c+179,"lut", false,-1, 23,0);
    tracep->declBus(c+390,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+180+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+186+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+192,"lut_out", false,-1, 0,0);
    tracep->declBit(c+193,"hit", false,-1);
    tracep->declBus(c+391,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_reg_IDU ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+360,"din", false,-1, 31,0);
    tracep->declBus(c+81,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op1_sel_mux ");
    tracep->declBus(c+392,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+392,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+75,"out", false,-1, 31,0);
    tracep->declBus(c+163,"key", false,-1, 1,0);
    tracep->declArray(c+194,"lut", false,-1, 67,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+392,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+392,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+75,"out", false,-1, 31,0);
    tracep->declBus(c+163,"key", false,-1, 1,0);
    tracep->declBus(c+380,"default_out", false,-1, 31,0);
    tracep->declArray(c+194,"lut", false,-1, 67,0);
    tracep->declBus(c+393,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+197+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+201+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+203,"lut_out", false,-1, 31,0);
    tracep->declBit(c+204,"hit", false,-1);
    tracep->declBus(c+394,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("op2_sel_mux ");
    tracep->declBus(c+390,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+392,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+76,"out", false,-1, 31,0);
    tracep->declBus(c+164,"key", false,-1, 1,0);
    tracep->declArray(c+205,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+390,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+392,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+76,"out", false,-1, 31,0);
    tracep->declBus(c+164,"key", false,-1, 1,0);
    tracep->declBus(c+380,"default_out", false,-1, 31,0);
    tracep->declArray(c+205,"lut", false,-1, 135,0);
    tracep->declBus(c+393,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+210+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+218+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+222,"lut_out", false,-1, 31,0);
    tracep->declBit(c+223,"hit", false,-1);
    tracep->declBus(c+395,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_IDU ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+359,"din", false,-1, 31,0);
    tracep->declBus(c+80,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+73,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+77,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+78,"br_target", false,-1, 31,0);
    tracep->declBus(c+79,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+369,"pc_wen", false,-1);
    tracep->declBus(c+359,"pc_o", false,-1, 31,0);
    tracep->declBus(c+360,"inst_o", false,-1, 31,0);
    tracep->declBus(c+224,"pc", false,-1, 31,0);
    tracep->declBus(c+225,"pc_next", false,-1, 31,0);
    tracep->declBus(c+226,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+396,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+227,"inst", false,-1, 31,0);
    tracep->declBus(c+380,"exception", false,-1, 31,0);
    tracep->pushNamePrefix("mux_pc_sel ");
    tracep->declBus(c+377,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+225,"out", false,-1, 31,0);
    tracep->declBus(c+73,"key", false,-1, 2,0);
    tracep->declArray(c+228,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+377,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+225,"out", false,-1, 31,0);
    tracep->declBus(c+73,"key", false,-1, 2,0);
    tracep->declBus(c+380,"default_out", false,-1, 31,0);
    tracep->declArray(c+228,"lut", false,-1, 174,0);
    tracep->declBus(c+397,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+234+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+244+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+249,"lut_out", false,-1, 31,0);
    tracep->declBit(c+250,"hit", false,-1);
    tracep->declBus(c+398,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+225,"din", false,-1, 31,0);
    tracep->declBus(c+224,"dout", false,-1, 31,0);
    tracep->declBit(c+369,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+84,"pc_i", false,-1, 31,0);
    tracep->declBus(c+85,"inst_i", false,-1, 31,0);
    tracep->declBus(c+86,"result_i", false,-1, 31,0);
    tracep->declBus(c+86,"dmem_addr_i", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+88,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+93,"inst_o", false,-1, 31,0);
    tracep->declBus(c+92,"pc_o", false,-1, 31,0);
    tracep->declBus(c+90,"result_o", false,-1, 31,0);
    tracep->declBus(c+89,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+91,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+251,"dmem_rdata_raw", false,-1, 31,0);
    tracep->declBus(c+252,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+253,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+254,"wmask", false,-1, 7,0);
    tracep->declBus(c+255,"ctl_mem_access", false,-1, 2,0);
    tracep->declBit(c+256,"mem_en", false,-1);
    tracep->declBit(c+257,"mem_wen", false,-1);
    tracep->declBus(c+258,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+252,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+259,"funct3", false,-1, 2,0);
    tracep->declBus(c+260,"funct7", false,-1, 6,0);
    tracep->declBus(c+261,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+251,"data_in", false,-1, 31,0);
    tracep->declBus(c+258,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+255,"control", false,-1, 2,0);
    tracep->declBus(c+89,"data_out", false,-1, 31,0);
    tracep->declBus(c+262,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+263,"shifted_data", false,-1, 31,0);
    tracep->declBus(c+264,"zero_ext_byte", false,-1, 31,0);
    tracep->declBus(c+265,"zero_ext_half", false,-1, 31,0);
    tracep->declBus(c+266,"sign_ext_byte", false,-1, 31,0);
    tracep->declBus(c+267,"sign_ext_half", false,-1, 31,0);
    tracep->pushNamePrefix("mem_mux ");
    tracep->declBus(c+377,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+89,"out", false,-1, 31,0);
    tracep->declBus(c+255,"key", false,-1, 2,0);
    tracep->declArray(c+268,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+377,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+89,"out", false,-1, 31,0);
    tracep->declBus(c+255,"key", false,-1, 2,0);
    tracep->declBus(c+380,"default_out", false,-1, 31,0);
    tracep->declArray(c+268,"lut", false,-1, 174,0);
    tracep->declBus(c+397,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+274+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+284+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+289,"lut_out", false,-1, 31,0);
    tracep->declBit(c+290,"hit", false,-1);
    tracep->declBus(c+398,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmem_addr_reg_MEM ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+86,"din", false,-1, 31,0);
    tracep->declBus(c+258,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_MEM ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+85,"din", false,-1, 31,0);
    tracep->declBus(c+93,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_acces_ctl_mux ");
    tracep->declBus(c+399,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+400,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+387,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+255,"out", false,-1, 2,0);
    tracep->declBus(c+291,"key", false,-1, 9,0);
    tracep->declArray(c+401,"lut", false,-1, 103,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+399,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+400,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+387,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+255,"out", false,-1, 2,0);
    tracep->declBus(c+291,"key", false,-1, 9,0);
    tracep->declBus(c+405,"default_out", false,-1, 2,0);
    tracep->declArray(c+401,"lut", false,-1, 103,0);
    tracep->declBus(c+406,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+42+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+50+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+292,"lut_out", false,-1, 2,0);
    tracep->declBit(c+293,"hit", false,-1);
    tracep->declBus(c+407,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_MEM ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+84,"din", false,-1, 31,0);
    tracep->declBus(c+92,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_MEM ");
    tracep->declBus(c+377,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+385,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+88,"din", false,-1, 4,0);
    tracep->declBus(c+91,"dout", false,-1, 4,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_MEM ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+86,"din", false,-1, 31,0);
    tracep->declBus(c+90,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_MEM ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+87,"din", false,-1, 31,0);
    tracep->declBus(c+252,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wmask_gen ");
    tracep->declBus(c+255,"control", false,-1, 2,0);
    tracep->declBus(c+258,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+252,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+253,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+254,"wmask", false,-1, 7,0);
    tracep->declBus(c+262,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+294,"base_mask", false,-1, 7,0);
    tracep->declBus(c+254,"shifted_mask", false,-1, 7,0);
    tracep->pushNamePrefix("mem_mux_write ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+399,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+294,"out", false,-1, 7,0);
    tracep->declBus(c+255,"key", false,-1, 2,0);
    tracep->declQuad(c+408,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+399,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+294,"out", false,-1, 7,0);
    tracep->declBus(c+255,"key", false,-1, 2,0);
    tracep->declBus(c+410,"default_out", false,-1, 7,0);
    tracep->declQuad(c+408,"lut", false,-1, 32,0);
    tracep->declBus(c+376,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+58+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+61+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+64+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+295,"lut_out", false,-1, 7,0);
    tracep->declBit(c+296,"hit", false,-1);
    tracep->declBus(c+411,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+377,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBus(c+72,"wdata", false,-1, 31,0);
    tracep->declBus(c+96,"waddr", false,-1, 4,0);
    tracep->declBit(c+74,"wen", false,-1);
    tracep->declBus(c+94,"raddr1", false,-1, 4,0);
    tracep->declBus(c+95,"raddr2", false,-1, 4,0);
    tracep->declBus(c+97,"rdata1", false,-1, 31,0);
    tracep->declBus(c+82,"rdata2", false,-1, 31,0);
    tracep->declBus(c+362,"x2_debug", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+297+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+67,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+72,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+96,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+74,"rf_we", false,-1);
    tracep->declBus(c+92,"pc_i", false,-1, 31,0);
    tracep->declBus(c+93,"inst_i", false,-1, 31,0);
    tracep->declBus(c+90,"result_i", false,-1, 31,0);
    tracep->declBus(c+89,"dmem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+91,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+369,"pc_wen", false,-1);
    tracep->declBus(c+360,"inst_from_IFU", false,-1, 31,0);
    tracep->declBit(c+369,"wbu_active", false,-1);
    tracep->declBus(c+329,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+330,"inst_o", false,-1, 31,0);
    tracep->declBus(c+331,"pc_o", false,-1, 31,0);
    tracep->declBus(c+332,"result_o", false,-1, 31,0);
    tracep->declBus(c+412,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+333,"dmem_rdata_o", false,-1, 31,0);
    tracep->declBus(c+334,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+335,"funct3", false,-1, 2,0);
    tracep->declBus(c+336,"funct7", false,-1, 6,0);
    tracep->declBus(c+337,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("dmem_rdata_reg_WBU ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+89,"din", false,-1, 31,0);
    tracep->declBus(c+333,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_WBU ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+93,"din", false,-1, 31,0);
    tracep->declBus(c+330,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_WBU ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+92,"din", false,-1, 31,0);
    tracep->declBus(c+331,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_WBU ");
    tracep->declBus(c+377,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+385,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+91,"din", false,-1, 4,0);
    tracep->declBus(c+96,"dout", false,-1, 4,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_WBU ");
    tracep->declBus(c+378,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+383,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+357,"clk", false,-1);
    tracep->declBit(c+358,"rst", false,-1);
    tracep->declBus(c+90,"din", false,-1, 31,0);
    tracep->declBus(c+332,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_mux ");
    tracep->declBus(c+390,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+392,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+72,"out", false,-1, 31,0);
    tracep->declBus(c+334,"key", false,-1, 1,0);
    tracep->declBus(c+380,"default_out", false,-1, 31,0);
    tracep->declArray(c+338,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+390,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+392,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+388,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+72,"out", false,-1, 31,0);
    tracep->declBus(c+334,"key", false,-1, 1,0);
    tracep->declBus(c+380,"default_out", false,-1, 31,0);
    tracep->declArray(c+338,"lut", false,-1, 135,0);
    tracep->declBus(c+393,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+343+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+68+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+351+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+355,"lut_out", false,-1, 31,0);
    tracep->declBit(c+356,"hit", false,-1);
    tracep->declBus(c+395,"i", false,-1, 31,0);
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
    VlWide<13>/*415:0*/ __Vtemp_hd74bf4d1__0;
    VlWide<3>/*95:0*/ __Vtemp_h3e4b9c5b__0;
    VlWide<5>/*159:0*/ __Vtemp_h4b1a9c47__0;
    VlWide<6>/*191:0*/ __Vtemp_h47858337__0;
    VlWide<6>/*191:0*/ __Vtemp_hdb58eddb__0;
    VlWide<5>/*159:0*/ __Vtemp_hf32e5341__0;
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
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24120009_core__DOT__reg_write_data),32);
    bufp->fullCData(oldp+73,(vlSelf->ysyx_24120009_core__DOT__pc_sel),3);
    bufp->fullBit(oldp+74,(vlSelf->ysyx_24120009_core__DOT__rf_we));
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24120009_core__DOT__Op1),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24120009_core__DOT__Op2),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_24120009_core__DOT__jump_reg_target),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24120009_core__DOT__br_target),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24120009_core__DOT__jmp_target),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU),32);
    bufp->fullCData(oldp+83,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                       >> 7U))),5);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM),32);
    bufp->fullCData(oldp+88,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM),5);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU),32);
    bufp->fullCData(oldp+91,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU),5);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU),32);
    bufp->fullCData(oldp+94,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+95,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+96,(vlSelf->ysyx_24120009_core__DOT__waddr),5);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_24120009_core__DOT__rdata1),32);
    bufp->fullCData(oldp+98,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op),5);
    bufp->fullCData(oldp+99,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+100,((vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+101,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)),7);
    bufp->fullIData(oldp+102,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               + vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+103,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               - vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+104,(vlSelf->__VdfgTmp_h9d12977d__0),32);
    bufp->fullIData(oldp+105,(vlSelf->__VdfgTmp_h9d0653ad__0),32);
    bufp->fullIData(oldp+106,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               ^ vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+107,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               | vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+108,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               & vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+109,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+110,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+111,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
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
    bufp->fullWData(oldp+112,(__Vtemp_hd74bf4d1__0),407);
    bufp->fullQData(oldp+125,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+127,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+129,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+131,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+133,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+135,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+137,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+139,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+141,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8]),37);
    bufp->fullQData(oldp+143,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9]),37);
    bufp->fullQData(oldp+145,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[10]),37);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+159,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+160,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+161,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+162,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
    bufp->fullCData(oldp+163,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel),2);
    bufp->fullCData(oldp+164,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel),2);
    bufp->fullSData(oldp+165,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+166,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+167,(((0x800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+168,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+169,(((0x80000U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext),32);
    bufp->fullIData(oldp+171,((((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext),32);
    bufp->fullIData(oldp+173,((0xfffff000U & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext),32);
    bufp->fullCData(oldp+175,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+176,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+177,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),7);
    bufp->fullBit(oldp+178,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken));
    bufp->fullIData(oldp+179,((0x28aceU | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq) 
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
    bufp->fullCData(oldp+180,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+181,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+182,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+183,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+184,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+185,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullBit(oldp+186,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+187,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+188,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+189,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+190,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+191,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+192,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+193,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+194,(__Vtemp_h3e4b9c5b__0),68);
    bufp->fullQData(oldp+197,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+199,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+204,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+205,(__Vtemp_h4b1a9c47__0),136);
    bufp->fullQData(oldp+210,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+212,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+214,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+216,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+223,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+224,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next),32);
    bufp->fullIData(oldp+226,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__inst),32);
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
    bufp->fullWData(oldp+228,(__Vtemp_h47858337__0),175);
    bufp->fullQData(oldp+234,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+236,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+238,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+240,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+242,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+249,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+250,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+251,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw),32);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o),32);
    bufp->fullIData(oldp+253,(((0x1fU >= (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                   << 3U)))
                                ? (vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o 
                                   << (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                << 3U)))
                                : 0U)),32);
    bufp->fullCData(oldp+254,((0xffU & ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask) 
                                        << (3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)))),8);
    bufp->fullCData(oldp+255,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access),3);
    bufp->fullBit(oldp+256,(((3U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)) 
                             | (0x23U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)))));
    bufp->fullBit(oldp+257,((0x23U == (0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU))));
    bufp->fullIData(oldp+258,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o),32);
    bufp->fullCData(oldp+259,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+260,((vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+261,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)),7);
    bufp->fullCData(oldp+262,((3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)),2);
    bufp->fullIData(oldp+263,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullIData(oldp+264,((0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+265,((0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+266,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+267,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
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
    bufp->fullWData(oldp+268,(__Vtemp_hdb58eddb__0),175);
    bufp->fullQData(oldp+274,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+276,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+278,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+280,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+282,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+284,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+285,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+286,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+287,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+288,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+289,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+290,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+291,(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key),10);
    bufp->fullCData(oldp+292,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+293,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+294,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask),8);
    bufp->fullCData(oldp+295,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+296,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+297,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+329,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o)),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__inst_o),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o),32);
    bufp->fullCData(oldp+334,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel),2);
    bufp->fullCData(oldp+335,((7U & (vlSelf->ysyx_24120009_core__DOT__wbu__DOT__inst_o 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+336,((vlSelf->ysyx_24120009_core__DOT__wbu__DOT__inst_o 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+337,((0x7fU & vlSelf->ysyx_24120009_core__DOT__wbu__DOT__inst_o)),7);
    __Vtemp_hf32e5341__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o))));
    __Vtemp_hf32e5341__0[1U] = ((vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o 
                                 << 2U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o))) 
                                                   >> 0x20U)));
    __Vtemp_hf32e5341__0[2U] = (8U | ((((IData)(4U) 
                                        + vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o) 
                                       << 4U) | (vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o 
                                                 >> 0x1eU)));
    __Vtemp_hf32e5341__0[3U] = (0x10U | (((IData)(4U) 
                                          + vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o) 
                                         >> 0x1cU));
    __Vtemp_hf32e5341__0[4U] = 0U;
    bufp->fullWData(oldp+338,(__Vtemp_hf32e5341__0),136);
    bufp->fullQData(oldp+343,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+345,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+347,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+349,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+351,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+352,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+353,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+354,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+356,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit));
    bufp->fullBit(oldp+357,(vlSelf->clk));
    bufp->fullBit(oldp+358,(vlSelf->rst));
    bufp->fullIData(oldp+359,(vlSelf->pc_debug),32);
    bufp->fullIData(oldp+360,(vlSelf->inst_debug),32);
    bufp->fullIData(oldp+361,(vlSelf->reg_write_data_debug),32);
    bufp->fullIData(oldp+362,(vlSelf->x2_debug),32);
    bufp->fullCData(oldp+363,(vlSelf->waddr_debug),5);
    bufp->fullBit(oldp+364,(vlSelf->mem_wen_debug));
    bufp->fullBit(oldp+365,(vlSelf->mem_en_debug));
    bufp->fullIData(oldp+366,(vlSelf->Op1_debug),32);
    bufp->fullIData(oldp+367,(vlSelf->Op2_debug),32);
    bufp->fullBit(oldp+368,(vlSelf->rf_we_debug));
    bufp->fullBit(oldp+369,(vlSelf->wbu_active_debug));
    bufp->fullIData(oldp+370,(vlSelf->imem_addr_debug),32);
    bufp->fullCData(oldp+371,(vlSelf->ysyx_24120009_core__DOT__alu_op),5);
    bufp->fullBit(oldp+372,(vlSelf->ysyx_24120009_core__DOT__mem_en));
    bufp->fullBit(oldp+373,(vlSelf->ysyx_24120009_core__DOT__mem_wen));
    bufp->fullCData(oldp+374,(vlSelf->ysyx_24120009_core__DOT__wb_sel),2);
    bufp->fullIData(oldp+375,(vlSelf->ysyx_24120009_core__DOT__pc_plus4),32);
    bufp->fullIData(oldp+376,(0xbU),32);
    bufp->fullIData(oldp+377,(5U),32);
    bufp->fullIData(oldp+378,(0x20U),32);
    bufp->fullIData(oldp+379,(0U),32);
    bufp->fullIData(oldp+380,(0U),32);
    bufp->fullIData(oldp+381,(0x25U),32);
    bufp->fullIData(oldp+382,(0xbU),32);
    bufp->fullIData(oldp+383,(0x80000000U),32);
    bufp->fullBit(oldp+384,(1U));
    bufp->fullCData(oldp+385,(0U),5);
    bufp->fullIData(oldp+386,(6U),32);
    bufp->fullIData(oldp+387,(3U),32);
    bufp->fullIData(oldp+388,(1U),32);
    bufp->fullBit(oldp+389,(0U));
    bufp->fullIData(oldp+390,(4U),32);
    bufp->fullIData(oldp+391,(6U),32);
    bufp->fullIData(oldp+392,(2U),32);
    bufp->fullIData(oldp+393,(0x22U),32);
    bufp->fullIData(oldp+394,(2U),32);
    bufp->fullIData(oldp+395,(4U),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__imem_addr),32);
    bufp->fullIData(oldp+397,(0x23U),32);
    bufp->fullIData(oldp+398,(5U),32);
    bufp->fullIData(oldp+399,(8U),32);
    bufp->fullIData(oldp+400,(0xaU),32);
    __Vtemp_ha516852c__0[0U] = 0x491808c9U;
    __Vtemp_ha516852c__0[1U] = 0xc9076a3U;
    __Vtemp_ha516852c__0[2U] = 0x903001c8U;
    __Vtemp_ha516852c__0[3U] = 6U;
    bufp->fullWData(oldp+401,(__Vtemp_ha516852c__0),104);
    bufp->fullCData(oldp+405,(0U),3);
    bufp->fullIData(oldp+406,(0xdU),32);
    bufp->fullIData(oldp+407,(8U),32);
    bufp->fullQData(oldp+408,(0x83c81801ULL),33);
    bufp->fullCData(oldp+410,(0U),8);
    bufp->fullIData(oldp+411,(3U),32);
    bufp->fullIData(oldp+412,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_addr_o),32);
}
