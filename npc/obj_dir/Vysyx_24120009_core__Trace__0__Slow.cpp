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
    tracep->declBit(c+306,"clk", false,-1);
    tracep->declBit(c+307,"rst", false,-1);
    tracep->declBus(c+308,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+309,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+310,"Op2_debug", false,-1, 31,0);
    tracep->declBus(c+311,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+312,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBit(c+313,"is_ebreak_debug", false,-1);
    tracep->declBus(c+314,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+315,"waddr_debug", false,-1, 4,0);
    tracep->declBus(c+316,"imem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+317,"mem_wen_debug", false,-1);
    tracep->declBit(c+318,"mem_en_debug", false,-1);
    tracep->declBus(c+319,"dmem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+320,"dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+321,"wmask_debug", false,-1, 7,0);
    tracep->pushNamePrefix("ysyx_24120009_core ");
    tracep->declBit(c+306,"clk", false,-1);
    tracep->declBit(c+307,"rst", false,-1);
    tracep->declBus(c+308,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+309,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+310,"Op2_debug", false,-1, 31,0);
    tracep->declBus(c+311,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+312,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBit(c+313,"is_ebreak_debug", false,-1);
    tracep->declBus(c+314,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+315,"waddr_debug", false,-1, 4,0);
    tracep->declBus(c+308,"imem_addr_debug", false,-1, 31,0);
    tracep->declBit(c+317,"mem_wen_debug", false,-1);
    tracep->declBit(c+318,"mem_en_debug", false,-1);
    tracep->declBus(c+319,"dmem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+320,"dmem_wdata_debug", false,-1, 31,0);
    tracep->declBus(c+321,"wmask_debug", false,-1, 7,0);
    tracep->declBus(c+66,"pc", false,-1, 31,0);
    tracep->declBus(c+311,"inst", false,-1, 31,0);
    tracep->declBus(c+67,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+68,"alu_op", false,-1, 4,0);
    tracep->declBus(c+69,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+70,"op2_sel", false,-1, 1,0);
    tracep->declBus(c+71,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+72,"rf_we", false,-1);
    tracep->declBit(c+318,"mem_en", false,-1);
    tracep->declBit(c+317,"mem_wen", false,-1);
    tracep->declBus(c+73,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+74,"Op1", false,-1, 31,0);
    tracep->declBus(c+75,"Op2", false,-1, 31,0);
    tracep->declBus(c+76,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+77,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+78,"br_target", false,-1, 31,0);
    tracep->declBus(c+79,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+80,"br_eq", false,-1);
    tracep->declBit(c+81,"br_lt", false,-1);
    tracep->declBit(c+82,"br_ltu", false,-1);
    tracep->declBus(c+83,"ctl_mem_access", false,-1, 2,0);
    tracep->declBus(c+84,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+85,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+315,"waddr", false,-1, 4,0);
    tracep->declBus(c+86,"rdata1", false,-1, 31,0);
    tracep->declBus(c+87,"rdata2", false,-1, 31,0);
    tracep->declBus(c+308,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+311,"imem_rdata", false,-1, 31,0);
    tracep->declBus(c+88,"dmem_rdata_raw", false,-1, 31,0);
    tracep->declBus(c+89,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+319,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+320,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+87,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+321,"wmask", false,-1, 7,0);
    tracep->declBit(c+313,"is_ebreak", false,-1);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+88,"data_in", false,-1, 31,0);
    tracep->declBus(c+319,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+83,"control", false,-1, 2,0);
    tracep->declBus(c+89,"data_out", false,-1, 31,0);
    tracep->declBus(c+90,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+91,"shifted_data", false,-1, 31,0);
    tracep->declBus(c+92,"zero_ext_byte", false,-1, 31,0);
    tracep->declBus(c+93,"zero_ext_half", false,-1, 31,0);
    tracep->declBus(c+94,"sign_ext_byte", false,-1, 31,0);
    tracep->declBus(c+95,"sign_ext_half", false,-1, 31,0);
    tracep->pushNamePrefix("mem_mux ");
    tracep->declBus(c+322,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+323,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+324,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+89,"out", false,-1, 31,0);
    tracep->declBus(c+83,"key", false,-1, 2,0);
    tracep->declArray(c+96,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+322,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+323,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+324,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+325,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+89,"out", false,-1, 31,0);
    tracep->declBus(c+83,"key", false,-1, 2,0);
    tracep->declBus(c+326,"default_out", false,-1, 31,0);
    tracep->declArray(c+96,"lut", false,-1, 174,0);
    tracep->declBus(c+327,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+102+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+112+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+117,"lut_out", false,-1, 31,0);
    tracep->declBit(c+118,"hit", false,-1);
    tracep->declBus(c+328,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+311,"inst", false,-1, 31,0);
    tracep->declBit(c+80,"br_eq", false,-1);
    tracep->declBit(c+81,"br_lt", false,-1);
    tracep->declBit(c+82,"br_ltu", false,-1);
    tracep->declBus(c+68,"alu_op", false,-1, 4,0);
    tracep->declBus(c+69,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+70,"op2_sel", false,-1, 1,0);
    tracep->declBus(c+71,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+72,"rf_we", false,-1);
    tracep->declBit(c+318,"mem_en", false,-1);
    tracep->declBit(c+317,"mem_wen", false,-1);
    tracep->declBus(c+73,"wb_sel", false,-1, 1,0);
    tracep->declBit(c+313,"is_ebreak", false,-1);
    tracep->declBus(c+83,"ctl_mem_access", false,-1, 2,0);
    tracep->declBus(c+329,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+329,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+330,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+119,"opcode", false,-1, 6,0);
    tracep->declBus(c+120,"funct3", false,-1, 2,0);
    tracep->declBus(c+121,"funct7", false,-1, 6,0);
    tracep->declBus(c+122,"inst_key", false,-1, 16,0);
    tracep->declBus(c+123,"ctl_signals", false,-1, 16,0);
    tracep->declBit(c+313,"is_ebreak_internal", false,-1);
    tracep->pushNamePrefix("funct_mux ");
    tracep->declBus(c+330,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+329,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+329,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+123,"out", false,-1, 16,0);
    tracep->declBus(c+122,"key", false,-1, 16,0);
    tracep->declArray(c+331,"lut", false,-1, 1291,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+330,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+329,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+329,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+325,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+123,"out", false,-1, 16,0);
    tracep->declBus(c+122,"key", false,-1, 16,0);
    tracep->declBus(c+372,"default_out", false,-1, 16,0);
    tracep->declArray(c+331,"lut", false,-1, 1291,0);
    tracep->declBus(c+373,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+124,"lut_out", false,-1, 16,0);
    tracep->declBit(c+125,"hit", false,-1);
    tracep->declBus(c+374,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem_acces_ctl_mux ");
    tracep->declBus(c+375,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+376,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+323,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+83,"out", false,-1, 2,0);
    tracep->declBus(c+126,"key", false,-1, 9,0);
    tracep->declArray(c+377,"lut", false,-1, 103,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+375,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+376,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+323,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+325,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+83,"out", false,-1, 2,0);
    tracep->declBus(c+126,"key", false,-1, 9,0);
    tracep->declBus(c+381,"default_out", false,-1, 2,0);
    tracep->declArray(c+377,"lut", false,-1, 103,0);
    tracep->declBus(c+382,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+6+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+14+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+22+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+127,"lut_out", false,-1, 2,0);
    tracep->declBit(c+128,"hit", false,-1);
    tracep->declBus(c+383,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+306,"clk", false,-1);
    tracep->declBit(c+307,"rst", false,-1);
    tracep->declBus(c+74,"Op1", false,-1, 31,0);
    tracep->declBus(c+75,"Op2", false,-1, 31,0);
    tracep->declBus(c+68,"alu_op", false,-1, 4,0);
    tracep->declBus(c+73,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+76,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+89,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+319,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+67,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+129,"result", false,-1, 31,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+74,"A", false,-1, 31,0);
    tracep->declBus(c+75,"B", false,-1, 31,0);
    tracep->declBus(c+68,"ALUFun", false,-1, 4,0);
    tracep->declBus(c+129,"Result", false,-1, 31,0);
    tracep->declBus(c+130,"add_result", false,-1, 31,0);
    tracep->declBus(c+131,"sub_result", false,-1, 31,0);
    tracep->declBus(c+132,"slt_result", false,-1, 31,0);
    tracep->declBus(c+133,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+134,"xor_result", false,-1, 31,0);
    tracep->declBus(c+135,"or_result", false,-1, 31,0);
    tracep->declBus(c+136,"and_result", false,-1, 31,0);
    tracep->declBus(c+137,"sll_result", false,-1, 31,0);
    tracep->declBus(c+138,"srl_result", false,-1, 31,0);
    tracep->declBus(c+139,"sra_result", false,-1, 31,0);
    tracep->declBus(c+309,"op1_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu_mux ");
    tracep->declBus(c+384,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+322,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+324,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+129,"out", false,-1, 31,0);
    tracep->declBus(c+68,"key", false,-1, 4,0);
    tracep->declArray(c+140,"lut", false,-1, 406,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+384,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+322,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+324,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+325,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+129,"out", false,-1, 31,0);
    tracep->declBus(c+68,"key", false,-1, 4,0);
    tracep->declBus(c+326,"default_out", false,-1, 31,0);
    tracep->declArray(c+140,"lut", false,-1, 406,0);
    tracep->declBus(c+385,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+153+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+30+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+175+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+186,"lut_out", false,-1, 31,0);
    tracep->declBit(c+187,"hit", false,-1);
    tracep->declBus(c+386,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wb_mux ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+388,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+324,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+67,"out", false,-1, 31,0);
    tracep->declBus(c+73,"key", false,-1, 1,0);
    tracep->declBus(c+326,"default_out", false,-1, 31,0);
    tracep->declArray(c+188,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+388,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+324,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+389,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+67,"out", false,-1, 31,0);
    tracep->declBus(c+73,"key", false,-1, 1,0);
    tracep->declBus(c+326,"default_out", false,-1, 31,0);
    tracep->declArray(c+188,"lut", false,-1, 135,0);
    tracep->declBus(c+373,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+193+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+41+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+201+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+205,"lut_out", false,-1, 31,0);
    tracep->declBit(c+206,"hit", false,-1);
    tracep->declBus(c+390,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+311,"inst_i", false,-1, 31,0);
    tracep->declBus(c+86,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+84,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+85,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+315,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+74,"Op1", false,-1, 31,0);
    tracep->declBus(c+75,"Op2", false,-1, 31,0);
    tracep->declBus(c+69,"Op1Sel", false,-1, 1,0);
    tracep->declBus(c+70,"Op2Sel", false,-1, 1,0);
    tracep->declBus(c+66,"pc_i", false,-1, 31,0);
    tracep->declBus(c+77,"jump_reg_target_o", false,-1, 31,0);
    tracep->declBus(c+78,"br_target_o", false,-1, 31,0);
    tracep->declBus(c+79,"jmp_target_o", false,-1, 31,0);
    tracep->declBit(c+80,"br_eq", false,-1);
    tracep->declBit(c+81,"br_lt", false,-1);
    tracep->declBit(c+82,"br_ltu", false,-1);
    tracep->declBus(c+315,"wb_addr", false,-1, 4,0);
    tracep->declBus(c+207,"imm_i", false,-1, 11,0);
    tracep->declBus(c+208,"imm_s", false,-1, 11,0);
    tracep->declBus(c+209,"imm_b", false,-1, 11,0);
    tracep->declBus(c+210,"imm_u", false,-1, 19,0);
    tracep->declBus(c+211,"imm_j", false,-1, 19,0);
    tracep->declBus(c+84,"imm_z", false,-1, 4,0);
    tracep->declBus(c+212,"imm_i_sext", false,-1, 31,0);
    tracep->declBus(c+213,"imm_s_sext", false,-1, 31,0);
    tracep->declBus(c+214,"imm_b_sext", false,-1, 31,0);
    tracep->declBus(c+215,"imm_u_sext", false,-1, 31,0);
    tracep->declBus(c+216,"imm_j_sext", false,-1, 31,0);
    tracep->pushNamePrefix("op1_sel_mux ");
    tracep->declBus(c+388,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+388,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+324,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+74,"out", false,-1, 31,0);
    tracep->declBus(c+69,"key", false,-1, 1,0);
    tracep->declArray(c+217,"lut", false,-1, 67,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+388,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+388,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+324,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+325,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+74,"out", false,-1, 31,0);
    tracep->declBus(c+69,"key", false,-1, 1,0);
    tracep->declBus(c+326,"default_out", false,-1, 31,0);
    tracep->declArray(c+217,"lut", false,-1, 67,0);
    tracep->declBus(c+373,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+220+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+45+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+224+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+226,"lut_out", false,-1, 31,0);
    tracep->declBit(c+227,"hit", false,-1);
    tracep->declBus(c+391,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("op2_sel_mux ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+388,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+324,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+75,"out", false,-1, 31,0);
    tracep->declBus(c+70,"key", false,-1, 1,0);
    tracep->declArray(c+228,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+388,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+324,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+325,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+75,"out", false,-1, 31,0);
    tracep->declBus(c+70,"key", false,-1, 1,0);
    tracep->declBus(c+326,"default_out", false,-1, 31,0);
    tracep->declArray(c+228,"lut", false,-1, 135,0);
    tracep->declBus(c+373,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+233+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+47+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+241+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+245,"lut_out", false,-1, 31,0);
    tracep->declBit(c+246,"hit", false,-1);
    tracep->declBus(c+390,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+306,"clk", false,-1);
    tracep->declBit(c+307,"rst", false,-1);
    tracep->declBus(c+311,"inst_i", false,-1, 31,0);
    tracep->declBus(c+71,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+77,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+78,"br_target", false,-1, 31,0);
    tracep->declBus(c+79,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+392,"pc_wen", false,-1);
    tracep->declBus(c+66,"pc_o", false,-1, 31,0);
    tracep->declBus(c+311,"inst_o", false,-1, 31,0);
    tracep->declBus(c+76,"pc_plus4_o", false,-1, 31,0);
    tracep->declBus(c+247,"pc_next", false,-1, 31,0);
    tracep->declBus(c+76,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+326,"exception", false,-1, 31,0);
    tracep->pushNamePrefix("mux_pc_sel ");
    tracep->declBus(c+322,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+323,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+324,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+247,"out", false,-1, 31,0);
    tracep->declBus(c+71,"key", false,-1, 2,0);
    tracep->declArray(c+248,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+322,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+323,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+324,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+325,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+247,"out", false,-1, 31,0);
    tracep->declBus(c+71,"key", false,-1, 2,0);
    tracep->declBus(c+326,"default_out", false,-1, 31,0);
    tracep->declArray(c+248,"lut", false,-1, 174,0);
    tracep->declBus(c+327,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+254+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+51+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+264+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+269,"lut_out", false,-1, 31,0);
    tracep->declBit(c+270,"hit", false,-1);
    tracep->declBus(c+328,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+324,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+393,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+306,"clk", false,-1);
    tracep->declBit(c+307,"rst", false,-1);
    tracep->declBus(c+247,"din", false,-1, 31,0);
    tracep->declBus(c+66,"dout", false,-1, 31,0);
    tracep->declBit(c+392,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+322,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+324,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+306,"clk", false,-1);
    tracep->declBus(c+67,"wdata", false,-1, 31,0);
    tracep->declBus(c+315,"waddr", false,-1, 4,0);
    tracep->declBit(c+72,"wen", false,-1);
    tracep->declBus(c+84,"raddr1", false,-1, 4,0);
    tracep->declBus(c+85,"raddr2", false,-1, 4,0);
    tracep->declBus(c+86,"rdata1", false,-1, 31,0);
    tracep->declBus(c+87,"rdata2", false,-1, 31,0);
    tracep->declBus(c+314,"x2_debug", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+271+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+56,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wmask_gen ");
    tracep->declBus(c+83,"control", false,-1, 2,0);
    tracep->declBus(c+319,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+87,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+320,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+321,"wmask", false,-1, 7,0);
    tracep->declBus(c+90,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+303,"base_mask", false,-1, 7,0);
    tracep->declBus(c+321,"shifted_mask", false,-1, 7,0);
    tracep->pushNamePrefix("mem_mux_write ");
    tracep->declBus(c+323,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+323,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+375,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+303,"out", false,-1, 7,0);
    tracep->declBus(c+83,"key", false,-1, 2,0);
    tracep->declQuad(c+394,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+323,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+323,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+375,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+325,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+303,"out", false,-1, 7,0);
    tracep->declBus(c+83,"key", false,-1, 2,0);
    tracep->declBus(c+396,"default_out", false,-1, 7,0);
    tracep->declQuad(c+394,"lut", false,-1, 32,0);
    tracep->declBus(c+384,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+57+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+60+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+63+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+304,"lut_out", false,-1, 7,0);
    tracep->declBit(c+305,"hit", false,-1);
    tracep->declBus(c+397,"i", false,-1, 31,0);
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

extern const VlWide<41>/*1311:0*/ Vysyx_24120009_core__ConstPool__CONST_h64dded27_0;

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_full_sub_0(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<6>/*191:0*/ __Vtemp_hfb869668__0;
    VlWide<13>/*415:0*/ __Vtemp_hd74bf4d1__0;
    VlWide<5>/*159:0*/ __Vtemp_h992c0b13__0;
    VlWide<3>/*95:0*/ __Vtemp_h6ce46ea2__0;
    VlWide<5>/*159:0*/ __Vtemp_h40015b3a__0;
    VlWide<6>/*191:0*/ __Vtemp_hf96e2bca__0;
    VlWide<4>/*127:0*/ __Vtemp_ha516852c__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[4]),3);
    bufp->fullSData(oldp+6,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+7,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+8,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+9,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[3]),13);
    bufp->fullSData(oldp+10,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[4]),13);
    bufp->fullSData(oldp+11,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[5]),13);
    bufp->fullSData(oldp+12,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[6]),13);
    bufp->fullSData(oldp+13,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[7]),13);
    bufp->fullSData(oldp+14,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[0]),10);
    bufp->fullSData(oldp+15,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[1]),10);
    bufp->fullSData(oldp+16,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[2]),10);
    bufp->fullSData(oldp+17,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[3]),10);
    bufp->fullSData(oldp+18,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[4]),10);
    bufp->fullSData(oldp+19,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[5]),10);
    bufp->fullSData(oldp+20,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[6]),10);
    bufp->fullSData(oldp+21,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[7]),10);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+28,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[7]),3);
    bufp->fullCData(oldp+30,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[0]),5);
    bufp->fullCData(oldp+31,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[1]),5);
    bufp->fullCData(oldp+32,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[2]),5);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[3]),5);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[4]),5);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[5]),5);
    bufp->fullCData(oldp+36,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[6]),5);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[7]),5);
    bufp->fullCData(oldp+38,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[8]),5);
    bufp->fullCData(oldp+39,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[9]),5);
    bufp->fullCData(oldp+40,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[10]),5);
    bufp->fullCData(oldp+41,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list[0]),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list[1]),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list[2]),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list[3]),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+48,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+49,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+50,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+51,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+52,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+53,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+54,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[4]),3);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+57,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+58,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+59,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullCData(oldp+60,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+61,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+62,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+63,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[1]),8);
    bufp->fullCData(oldp+65,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[2]),8);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24120009_core__DOT__pc),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24120009_core__DOT__reg_write_data),32);
    bufp->fullCData(oldp+68,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                       >> 0xcU))),5);
    bufp->fullCData(oldp+69,((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xaU))),2);
    bufp->fullCData(oldp+70,((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 8U))),2);
    bufp->fullCData(oldp+71,(vlSelf->ysyx_24120009_core__DOT__pc_sel),3);
    bufp->fullBit(oldp+72,((1U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                  >> 4U))));
    bufp->fullCData(oldp+73,((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals)),2);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_24120009_core__DOT__Op1),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24120009_core__DOT__Op2),32);
    bufp->fullIData(oldp+76,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__pc)),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_24120009_core__DOT__jump_reg_target),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24120009_core__DOT__br_target),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24120009_core__DOT__jmp_target),32);
    bufp->fullBit(oldp+80,(vlSelf->ysyx_24120009_core__DOT__br_eq));
    bufp->fullBit(oldp+81,(vlSelf->ysyx_24120009_core__DOT__br_lt));
    bufp->fullBit(oldp+82,(vlSelf->ysyx_24120009_core__DOT__br_ltu));
    bufp->fullCData(oldp+83,(vlSelf->ysyx_24120009_core__DOT__ctl_mem_access),3);
    bufp->fullCData(oldp+84,((0x1fU & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+85,((0x1fU & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24120009_core__DOT__rdata1),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24120009_core__DOT__rdata2),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata_raw),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata),32);
    bufp->fullCData(oldp+90,((3U & vlSelf->ysyx_24120009_core__DOT__exu__DOT__result)),2);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullIData(oldp+92,((0xffU & vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+93,((0xffffU & vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+94,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                 >> 7U)))) 
                               << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+95,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                 >> 0xfU)))) 
                               << 0x10U) | (0xffffU 
                                            & vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data))),32);
    __Vtemp_hfb869668__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                                           >> 0xfU)))) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data))))));
    __Vtemp_hfb869668__0[1U] = ((0xfffffff8U & (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                                >> 7U)))) 
                                                 << 0xbU) 
                                                | (0x7f8U 
                                                   & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                      << 3U)))) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                                               >> 0xfU)))) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data))))) 
                                           >> 0x20U)));
    __Vtemp_hfb869668__0[2U] = ((vlSelf->ysyx_24120009_core__DOT__dmem_rdata_raw 
                                 << 6U) | (7U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                                                >> 7U)))) 
                                                 >> 0x15U)));
    __Vtemp_hfb869668__0[3U] = (0x80U | ((0x1fffe00U 
                                          & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                             << 9U)) 
                                         | (vlSelf->ysyx_24120009_core__DOT__dmem_rdata_raw 
                                            >> 0x1aU)));
    __Vtemp_hfb869668__0[4U] = (0xa00U | (0xff000U 
                                          & (vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__shifted_data 
                                             << 0xcU)));
    __Vtemp_hfb869668__0[5U] = 0x4000U;
    bufp->fullWData(oldp+96,(__Vtemp_hfb869668__0),175);
    bufp->fullQData(oldp+102,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+104,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+106,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+108,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+110,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+118,(vlSelf->ysyx_24120009_core__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+119,((0x7fU & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)),7);
    bufp->fullCData(oldp+120,((7U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+121,((vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key),17);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals),17);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out),17);
    bufp->fullBit(oldp+125,(vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+126,(vlSelf->ysyx_24120009_core__DOT__control__DOT____Vcellinp__mem_acces_ctl_mux__key),10);
    bufp->fullCData(oldp+127,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+128,(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+129,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__result),32);
    bufp->fullIData(oldp+130,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               + vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+131,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               - vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+132,(vlSelf->__VdfgTmp_h9d12977d__0),32);
    bufp->fullIData(oldp+133,(vlSelf->__VdfgTmp_h9d0653ad__0),32);
    bufp->fullIData(oldp+134,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               ^ vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+135,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               | vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+136,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               & vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+137,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+138,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+139,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
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
    bufp->fullWData(oldp+140,(__Vtemp_hd74bf4d1__0),407);
    bufp->fullQData(oldp+153,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+155,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+157,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+159,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+161,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+163,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+165,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+167,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+169,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8]),37);
    bufp->fullQData(oldp+171,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9]),37);
    bufp->fullQData(oldp+173,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[10]),37);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+187,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit));
    __Vtemp_h992c0b13__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__dmem_rdata))));
    __Vtemp_h992c0b13__0[1U] = ((vlSelf->ysyx_24120009_core__DOT__exu__DOT__result 
                                 << 2U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__dmem_rdata))) 
                                                   >> 0x20U)));
    __Vtemp_h992c0b13__0[2U] = (8U | ((((IData)(4U) 
                                        + vlSelf->ysyx_24120009_core__DOT__pc) 
                                       << 4U) | (vlSelf->ysyx_24120009_core__DOT__exu__DOT__result 
                                                 >> 0x1eU)));
    __Vtemp_h992c0b13__0[3U] = (0x10U | (((IData)(4U) 
                                          + vlSelf->ysyx_24120009_core__DOT__pc) 
                                         >> 0x1cU));
    __Vtemp_h992c0b13__0[4U] = 0U;
    bufp->fullWData(oldp+188,(__Vtemp_h992c0b13__0),136);
    bufp->fullQData(oldp+193,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+195,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+197,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+199,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+206,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit));
    bufp->fullSData(oldp+207,((vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+208,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+209,(((0x800U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+210,((vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+211,(((0x80000U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext),32);
    bufp->fullIData(oldp+213,((((- (IData)((vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext),32);
    bufp->fullIData(oldp+215,((0xfffff000U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext),32);
    __Vtemp_h6ce46ea2__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)))));
    __Vtemp_h6ce46ea2__0[1U] = ((vlSelf->ysyx_24120009_core__DOT__rdata1 
                                 << 2U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)))) 
                                                   >> 0x20U)));
    __Vtemp_h6ce46ea2__0[2U] = (vlSelf->ysyx_24120009_core__DOT__rdata1 
                                >> 0x1eU);
    bufp->fullWData(oldp+217,(__Vtemp_h6ce46ea2__0),68);
    bufp->fullQData(oldp+220,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+222,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+227,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit));
    __Vtemp_h40015b3a__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2))));
    __Vtemp_h40015b3a__0[1U] = ((0xfffffffcU & (((- (IData)(
                                                            (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                             >> 0x1fU))) 
                                                 << 0xeU) 
                                                | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s) 
                                                   << 2U))) 
                                | (IData)(((0x300000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2))) 
                                           >> 0x20U)));
    __Vtemp_h40015b3a__0[2U] = (8U | ((vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
                                       << 4U) | (3U 
                                                 & ((3U 
                                                     & ((- (IData)(
                                                                   (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                                    >> 0x1fU))) 
                                                        >> 0x12U)) 
                                                    | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s) 
                                                       >> 0x1eU)))));
    __Vtemp_h40015b3a__0[3U] = (0x10U | ((vlSelf->ysyx_24120009_core__DOT__pc 
                                          << 6U) | 
                                         (vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
                                          >> 0x1cU)));
    __Vtemp_h40015b3a__0[4U] = (vlSelf->ysyx_24120009_core__DOT__pc 
                                >> 0x1aU);
    bufp->fullWData(oldp+228,(__Vtemp_h40015b3a__0),136);
    bufp->fullQData(oldp+233,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+235,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+237,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+239,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+246,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+247,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next),32);
    __Vtemp_hf96e2bca__0[0U] = 0U;
    __Vtemp_hf96e2bca__0[1U] = (4U | (vlSelf->ysyx_24120009_core__DOT__jmp_target 
                                      << 3U));
    __Vtemp_hf96e2bca__0[2U] = (0x18U | ((vlSelf->ysyx_24120009_core__DOT__br_target 
                                          << 6U) | 
                                         (vlSelf->ysyx_24120009_core__DOT__jmp_target 
                                          >> 0x1dU)));
    __Vtemp_hf96e2bca__0[3U] = (0x80U | ((vlSelf->ysyx_24120009_core__DOT__jump_reg_target 
                                          << 9U) | 
                                         (vlSelf->ysyx_24120009_core__DOT__br_target 
                                          >> 0x1aU)));
    __Vtemp_hf96e2bca__0[4U] = (0x200U | ((((IData)(4U) 
                                            + vlSelf->ysyx_24120009_core__DOT__pc) 
                                           << 0xcU) 
                                          | (vlSelf->ysyx_24120009_core__DOT__jump_reg_target 
                                             >> 0x17U)));
    __Vtemp_hf96e2bca__0[5U] = (((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__pc) 
                                >> 0x14U);
    bufp->fullWData(oldp+248,(__Vtemp_hf96e2bca__0),175);
    bufp->fullQData(oldp+254,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+256,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+258,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+260,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+262,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+264,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+265,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+266,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+267,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+268,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+269,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+270,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+271,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+279,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+281,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+282,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+283,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+284,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+285,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+286,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+287,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+288,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+289,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+290,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+291,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+292,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+293,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+296,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullCData(oldp+303,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__base_mask),8);
    bufp->fullCData(oldp+304,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+305,(vlSelf->ysyx_24120009_core__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+306,(vlSelf->clk));
    bufp->fullBit(oldp+307,(vlSelf->rst));
    bufp->fullIData(oldp+308,(vlSelf->pc_debug),32);
    bufp->fullIData(oldp+309,(vlSelf->Op1_debug),32);
    bufp->fullIData(oldp+310,(vlSelf->Op2_debug),32);
    bufp->fullIData(oldp+311,(vlSelf->inst_debug),32);
    bufp->fullIData(oldp+312,(vlSelf->reg_write_data_debug),32);
    bufp->fullBit(oldp+313,(vlSelf->is_ebreak_debug));
    bufp->fullIData(oldp+314,(vlSelf->x2_debug),32);
    bufp->fullCData(oldp+315,(vlSelf->waddr_debug),5);
    bufp->fullIData(oldp+316,(vlSelf->imem_addr_debug),32);
    bufp->fullBit(oldp+317,(vlSelf->mem_wen_debug));
    bufp->fullBit(oldp+318,(vlSelf->mem_en_debug));
    bufp->fullIData(oldp+319,(vlSelf->dmem_addr_debug),32);
    bufp->fullIData(oldp+320,(vlSelf->dmem_wdata_debug),32);
    bufp->fullCData(oldp+321,(vlSelf->wmask_debug),8);
    bufp->fullIData(oldp+322,(5U),32);
    bufp->fullIData(oldp+323,(3U),32);
    bufp->fullIData(oldp+324,(0x20U),32);
    bufp->fullIData(oldp+325,(0U),32);
    bufp->fullIData(oldp+326,(0U),32);
    bufp->fullIData(oldp+327,(0x23U),32);
    bufp->fullIData(oldp+328,(5U),32);
    bufp->fullIData(oldp+329,(0x11U),32);
    bufp->fullIData(oldp+330,(0x26U),32);
    bufp->fullWData(oldp+331,(Vysyx_24120009_core__ConstPool__CONST_h64dded27_0),1292);
    bufp->fullIData(oldp+372,(0U),17);
    bufp->fullIData(oldp+373,(0x22U),32);
    bufp->fullIData(oldp+374,(0x26U),32);
    bufp->fullIData(oldp+375,(8U),32);
    bufp->fullIData(oldp+376,(0xaU),32);
    __Vtemp_ha516852c__0[0U] = 0x491808c9U;
    __Vtemp_ha516852c__0[1U] = 0xc9076a3U;
    __Vtemp_ha516852c__0[2U] = 0x903001c8U;
    __Vtemp_ha516852c__0[3U] = 6U;
    bufp->fullWData(oldp+377,(__Vtemp_ha516852c__0),104);
    bufp->fullCData(oldp+381,(0U),3);
    bufp->fullIData(oldp+382,(0xdU),32);
    bufp->fullIData(oldp+383,(8U),32);
    bufp->fullIData(oldp+384,(0xbU),32);
    bufp->fullIData(oldp+385,(0x25U),32);
    bufp->fullIData(oldp+386,(0xbU),32);
    bufp->fullIData(oldp+387,(4U),32);
    bufp->fullIData(oldp+388,(2U),32);
    bufp->fullIData(oldp+389,(1U),32);
    bufp->fullIData(oldp+390,(4U),32);
    bufp->fullIData(oldp+391,(2U),32);
    bufp->fullBit(oldp+392,(1U));
    bufp->fullIData(oldp+393,(0x80000000U),32);
    bufp->fullQData(oldp+394,(0x83c81801ULL),33);
    bufp->fullCData(oldp+396,(0U),8);
    bufp->fullIData(oldp+397,(3U),32);
}
