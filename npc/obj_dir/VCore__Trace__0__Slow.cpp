// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCore__Syms.h"


VL_ATTR_COLD void VCore___024root__trace_init_sub__TOP__0(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+131,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"io_pc_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"io_inst_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"io_ifu_state_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,0,"io_lsu_state_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+137,0,"io_lsu_is_ld_or_st_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"io_lsu_reg_inst_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"io_wbu_state_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+140,0,"io_wb_data_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,0,"io_wb_wen_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"io_wb_sel_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("Core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+131,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"io_pc_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"io_inst_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"io_ifu_state_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,0,"io_lsu_state_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+137,0,"io_lsu_is_ld_or_st_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"io_lsu_reg_inst_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"io_wbu_state_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+140,0,"io_wb_data_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,0,"io_wb_wen_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"io_wb_sel_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+131,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"io_ifu_ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_ifu_ar_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"io_ifu_ar_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"io_ifu_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"io_ifu_r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"io_ifu_r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"io_lsu_aw_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_lsu_aw_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"io_lsu_aw_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"io_lsu_w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_lsu_w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"io_lsu_w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"io_lsu_w_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+144,0,"io_lsu_b_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_lsu_b_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"io_lsu_ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_lsu_ar_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"io_lsu_ar_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"io_lsu_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_lsu_r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"io_lsu_r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"io_axi_aw_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_axi_aw_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"io_axi_aw_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"io_axi_w_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_axi_w_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"io_axi_w_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"io_axi_w_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+146,0,"io_axi_b_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"io_axi_b_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"io_axi_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_axi_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"io_axi_ar_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"io_axi_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"io_axi_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"io_axi_r_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17,0,"isIFUActive",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("exu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+131,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"io_in_bits_wb_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"io_in_bits_alu_op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"io_in_bits_alu_op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"io_in_bits_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"io_out_bits_dmem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"io_out_bits_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"io_out_bits_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"io_out_bits_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+102,0,"io_in_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"exu_reg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"exu_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"exu_reg_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"exu_reg_wb_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("alu_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"io_aluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+108,0,"io_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+131,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"io_out_bits_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"io_out_bits_alu_op1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"io_out_bits_alu_op2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"io_out_bits_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"io_jump_reg_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"io_br_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"io_jmp_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"io_pc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"io_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"io_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"io_rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"io_rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"idu_reg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"idu_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+27,0,"io_in_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"br_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"br_lt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"br_ltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ifu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+131,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"io_pc_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,0,"io_jump_reg_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"io_br_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"io_jmp_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"io_pc_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"io_memory_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_memory_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"io_memory_ar_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"io_memory_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"io_memory_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"io_memory_r_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"io_pc_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"io_inst_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"io_ifu_state_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"if_inst_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+134,0,"io_inst_debug_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ebreakHandler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+134,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lsu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+131,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"io_in_bits_dmem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"io_in_bits_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"io_in_bits_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"io_in_bits_wb_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+115,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"io_out_bits_dmem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"io_out_bits_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_out_bits_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,0,"io_memory_aw_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_memory_aw_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"io_memory_aw_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"io_memory_w_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_memory_w_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"io_memory_w_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"io_memory_w_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+144,0,"io_memory_b_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_memory_b_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"io_memory_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_memory_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"io_memory_ar_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"io_memory_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_memory_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"io_memory_r_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"io_lsu_state_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+137,0,"io_lsu_is_ld_or_st_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"io_lsu_reg_inst_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"isStore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"isLoad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"lsu_reg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"lsu_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"lsu_reg_dmem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"lsu_reg_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"lsu_reg_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"lsu_reg_wb_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"mem_access_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+106,0,"io_in_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"io_memory_w_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alignment_network", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"io_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"io_dmem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"io_control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+147,0,"io_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"shifted_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("write_mask_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+117,0,"io_dmem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"io_dmem_wdata_raw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"io_control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+120,0,"io_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+121,0,"io_dmem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+149,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+148,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+46+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+131,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"io_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"io_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"io_axi_aw_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_axi_aw_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"io_axi_aw_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"io_axi_w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_axi_w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"io_axi_w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"io_axi_w_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+146,0,"io_axi_b_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"io_axi_b_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"io_axi_ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_axi_ar_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"io_axi_ar_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"io_axi_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"io_axi_r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"io_axi_r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+123,0,"addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"wdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"wstrb_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+126,0,"rd_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"wt_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_axi_w_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("sram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"DELAY_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"rd_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"rd_res_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"wt_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+130,0,"wt_res_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"addr_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,0,"rd_req_valid_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"waddr_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"wdata_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"wmask_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+88,0,"wt_req_valid_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wbu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+131,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"io_in_bits_dmem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"io_in_bits_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_in_bits_wb_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+140,0,"io_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"io_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+148,0,"io_wb_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"io_pc_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"io_wbu_state_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+140,0,"io_wb_data_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,0,"io_wb_wen_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"io_wb_sel_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+78,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+115,0,"io_in_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"wbu_reg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"wbu_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"wbu_reg_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"wbu_reg_dmem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"wbu_reg_wb_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+142,0,"wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+141,0,"wb_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VCore___024root__trace_init_top(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_init_top\n"); );
    // Body
    VCore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCore___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VCore___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCore___024root__trace_register(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VCore___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VCore___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VCore___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VCore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCore___024root__trace_const_0_sub_0(VCore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCore___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_const_0\n"); );
    // Init
    VCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCore___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCore___024root__trace_const_0_sub_0(VCore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+149,(5U),32);
    bufp->fullIData(oldp+150,(0x20U),32);
    bufp->fullIData(oldp+151,(1U),32);
}

VL_ATTR_COLD void VCore___024root__trace_full_0_sub_0(VCore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCore___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_full_0\n"); );
    // Init
    VCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCore___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCore___024root__trace_full_0_sub_0(VCore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_7;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Core__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+2,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h4b16e7a1__0) 
                           & (IData)(vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0))));
    bufp->fullBit(oldp+3,(vlSelf->Core__DOT__lsu__DOT__io_memory_w_valid_0));
    bufp->fullBit(oldp+4,(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready));
    bufp->fullBit(oldp+5,(vlSelf->Core__DOT___lsu_io_memory_b_ready));
    bufp->fullBit(oldp+6,(((~ (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_3)) 
                           & ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2) 
                              & (IData)(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready)))));
    bufp->fullBit(oldp+7,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                           & (IData)(vlSelf->Core__DOT__lsu__DOT__io_memory_w_valid_0))));
    bufp->fullBit(oldp+8,(vlSelf->Core__DOT__sram__DOT__io_axi_w_ready_0));
    bufp->fullBit(oldp+9,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                           & (IData)(vlSelf->Core__DOT___lsu_io_memory_b_ready))));
    bufp->fullBit(oldp+10,(((0U != (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                            & ((1U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state))
                                ? (IData)(vlSelf->Core__DOT___ifu_io_memory_r_ready)
                                : ((2U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                                   & ((~ (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_3)) 
                                      & ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2) 
                                         & (IData)(vlSelf->Core__DOT___arbiter_io_lsu_aw_ready))))))));
    bufp->fullBit(oldp+11,(vlSelf->Core__DOT___arbiter_io_ifu_r_valid));
    bufp->fullIData(oldp+12,(vlSelf->Core__DOT___arbiter_io_lsu_r_data),32);
    bufp->fullBit(oldp+13,(vlSelf->Core__DOT___sram_io_axi_r_valid));
    bufp->fullIData(oldp+14,(vlSelf->Core__DOT___sram_io_axi_r_data),32);
    bufp->fullIData(oldp+15,(vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullBit(oldp+16,(vlSelf->Core__DOT___ifu_io_memory_ar_valid));
    bufp->fullBit(oldp+17,(vlSelf->Core__DOT__arbiter__DOT__unnamedblk1__DOT__isIFUActive));
    bufp->fullIData(oldp+18,(vlSelf->Core__DOT__idu__DOT__idu_reg_inst),32);
    bufp->fullIData(oldp+19,(vlSelf->Core__DOT__idu__DOT__idu_reg_pc),32);
    bufp->fullCData(oldp+20,((0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+21,(vlSelf->Core__DOT___idu_io_out_bits_alu_op1),32);
    bufp->fullIData(oldp+22,(vlSelf->Core__DOT__exu__DOT__exu_reg_inst),32);
    bufp->fullIData(oldp+23,(vlSelf->Core__DOT__exu__DOT__exu_reg_pc),32);
    bufp->fullCData(oldp+24,(vlSelf->Core__DOT__exu__DOT__exu_reg_wb_addr),5);
    bufp->fullCData(oldp+25,(vlSelf->Core__DOT__exu__DOT__state),2);
    bufp->fullCData(oldp+26,(vlSelf->Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp),5);
    bufp->fullBit(oldp+27,(vlSelf->Core__DOT__idu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+28,(vlSelf->Core__DOT___ifu_io_out_valid));
    bufp->fullIData(oldp+29,((0xfffffffeU & (vlSelf->Core__DOT___regfile_rs1_data 
                                             + (((- (IData)(
                                                            (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                   >> 0x14U))))),32);
    bufp->fullIData(oldp+30,((vlSelf->Core__DOT__idu__DOT__idu_reg_pc 
                              + (((- (IData)((vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                       >> 7U))))))),32);
    bufp->fullIData(oldp+31,((vlSelf->Core__DOT__idu__DOT__idu_reg_pc 
                              + (((- (IData)((vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->Core__DOT__idu__DOT__idu_reg_inst) 
                                               | ((0x800U 
                                                   & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                                        >> 0x14U))))))),32);
    bufp->fullIData(oldp+32,(vlSelf->Core__DOT___regfile_rs1_data),32);
    bufp->fullCData(oldp+33,((0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+34,((0x1fU & (vlSelf->Core__DOT__idu__DOT__idu_reg_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+35,(vlSelf->Core__DOT__idu__DOT__state),2);
    bufp->fullBit(oldp+36,((2U == (IData)(vlSelf->Core__DOT__wbu__DOT__state))));
    bufp->fullIData(oldp+37,(vlSelf->Core__DOT__ifu__DOT__if_inst_buffer),32);
    bufp->fullCData(oldp+38,(vlSelf->Core__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+39,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_pc),32);
    bufp->fullCData(oldp+40,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_wb_addr),5);
    bufp->fullBit(oldp+41,(vlSelf->Core__DOT__lsu__DOT__isStore));
    bufp->fullBit(oldp+42,(vlSelf->Core__DOT__lsu__DOT__isLoad));
    bufp->fullIData(oldp+43,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_inst),32);
    bufp->fullCData(oldp+44,(vlSelf->Core__DOT__lsu__DOT__state),2);
    bufp->fullCData(oldp+45,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_wb_addr),5);
    bufp->fullIData(oldp+46,(vlSelf->Core__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+47,(vlSelf->Core__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+48,(vlSelf->Core__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+49,(vlSelf->Core__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+50,(vlSelf->Core__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+51,(vlSelf->Core__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+52,(vlSelf->Core__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+53,(vlSelf->Core__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+54,(vlSelf->Core__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+55,(vlSelf->Core__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+56,(vlSelf->Core__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+57,(vlSelf->Core__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+58,(vlSelf->Core__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+59,(vlSelf->Core__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+60,(vlSelf->Core__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+61,(vlSelf->Core__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+62,(vlSelf->Core__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+63,(vlSelf->Core__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+64,(vlSelf->Core__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+65,(vlSelf->Core__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+66,(vlSelf->Core__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+67,(vlSelf->Core__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+68,(vlSelf->Core__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+69,(vlSelf->Core__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+70,(vlSelf->Core__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+71,(vlSelf->Core__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+72,(vlSelf->Core__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+73,(vlSelf->Core__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+74,(vlSelf->Core__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+75,(vlSelf->Core__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+76,(vlSelf->Core__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+77,(vlSelf->Core__DOT__regfile__DOT__rf[31]),32);
    bufp->fullCData(oldp+78,(vlSelf->Core__DOT__wbu__DOT__state),2);
    bufp->fullIData(oldp+79,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_inst),32);
    bufp->fullIData(oldp+80,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_pc),32);
    bufp->fullIData(oldp+81,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_result),32);
    bufp->fullIData(oldp+82,(vlSelf->Core__DOT__wbu__DOT__wbu_reg_dmem_rdata),32);
    bufp->fullIData(oldp+83,(vlSelf->Core__DOT__sram__DOT__sram__DOT__addr_delayed),32);
    bufp->fullBit(oldp+84,(vlSelf->Core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed));
    bufp->fullIData(oldp+85,(vlSelf->Core__DOT__sram__DOT__sram__DOT__waddr_delayed),32);
    bufp->fullIData(oldp+86,(vlSelf->Core__DOT__sram__DOT__sram__DOT__wdata_delayed),32);
    bufp->fullCData(oldp+87,(vlSelf->Core__DOT__sram__DOT__sram__DOT__wmask_delayed),8);
    bufp->fullBit(oldp+88,(vlSelf->Core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed));
    bufp->fullIData(oldp+89,(((IData)(vlSelf->Core__DOT__ifu__DOT___GEN_3)
                               ? vlSelf->Core__DOT__ifu__DOT__pc
                               : 0U)),32);
    bufp->fullBit(oldp+90,(vlSelf->Core__DOT___ifu_io_memory_r_ready));
    bufp->fullIData(oldp+91,(((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_4)
                               ? 0U : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
    bufp->fullIData(oldp+92,(((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_4)
                               ? 0U : (vlSelf->Core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                       << (0x18U & 
                                           (vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                            << 3U))))),32);
    bufp->fullCData(oldp+93,(((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_4)
                               ? 0U : (0xfU & (((0U 
                                                 == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                  ? 3U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                   ? 0xfU
                                                   : 0U))) 
                                               << (3U 
                                                   & vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr))))),4);
    bufp->fullBit(oldp+94,(vlSelf->Core__DOT___lsu_io_memory_ar_valid));
    bufp->fullIData(oldp+95,(((1U & ((~ (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2)) 
                                     | (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_3)))
                               ? 0U : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
    bufp->fullIData(oldp+96,(((IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_3)
                               ? 0U : ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_4)
                                        ? 0U : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr))),32);
    bufp->fullIData(oldp+97,(((IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_3)
                               ? 0U : ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_4)
                                        ? 0U : (vlSelf->Core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                                << 
                                                (0x18U 
                                                 & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                    << 3U)))))),32);
    bufp->fullCData(oldp+98,(((IData)(vlSelf->Core__DOT__arbiter__DOT___GEN_3)
                               ? 0U : ((IData)(vlSelf->Core__DOT__lsu__DOT___GEN_4)
                                        ? 0U : (0xfU 
                                                & (((0U 
                                                     == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                      ? 3U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                       ? 0xfU
                                                       : 0U))) 
                                                   << 
                                                   (3U 
                                                    & vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr)))))),4);
    bufp->fullBit(oldp+99,(vlSelf->Core__DOT___arbiter_io_axi_ar_valid));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = ((IData)(vlSelf->Core__DOT__ifu__DOT___GEN_3)
                      ? vlSelf->Core__DOT__ifu__DOT__pc
                      : 0U);
    __Vtemp_2[2U] = (IData)((QData)((IData)(((1U & 
                                              ((~ (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2)) 
                                               | (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_3)))
                                              ? 0U : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr))));
    __Vtemp_2[3U] = (IData)(((QData)((IData)(((1U & 
                                               ((~ (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_2)) 
                                                | (IData)(vlSelf->Core__DOT__lsu__DOT___GEN_3)))
                                               ? 0U
                                               : vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr))) 
                             >> 0x20U));
    bufp->fullIData(oldp+100,((((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U)))
                                 ? 0U : (__Vtemp_2[
                                         (((IData)(0x1fU) 
                                           + (0x7fU 
                                              & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U))))) 
                               | (__Vtemp_2[(3U & (
                                                   VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U) 
                                                   >> 5U))] 
                                  >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->Core__DOT__arbiter__DOT__state), 5U))))),32);
    bufp->fullCData(oldp+101,(vlSelf->Core__DOT__arbiter__DOT__state),2);
    bufp->fullBit(oldp+102,(vlSelf->Core__DOT__exu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+103,(vlSelf->Core__DOT___idu_io_out_valid));
    bufp->fullIData(oldp+104,(vlSelf->Core__DOT___idu_io_out_bits_alu_op2),32);
    bufp->fullIData(oldp+105,(vlSelf->Core__DOT___regfile_rs2_data),32);
    bufp->fullBit(oldp+106,(vlSelf->Core__DOT__lsu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+107,(vlSelf->Core__DOT___exu_io_out_valid));
    bufp->fullIData(oldp+108,(vlSelf->Core__DOT__exu__DOT___alu_instance_io_result),32);
    bufp->fullIData(oldp+109,(vlSelf->Core__DOT__exu__DOT__exu_reg_rs2_data),32);
    bufp->fullCData(oldp+110,(vlSelf->Core__DOT___idu_io_pc_sel),3);
    bufp->fullBit(oldp+111,(vlSelf->Core__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+112,(vlSelf->Core__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+113,(vlSelf->Core__DOT__idu__DOT__br_ltu));
    bufp->fullIData(oldp+114,(vlSelf->Core__DOT__ifu__DOT__pc),32);
    bufp->fullBit(oldp+115,(vlSelf->Core__DOT__wbu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+116,(vlSelf->Core__DOT___lsu_io_out_valid));
    bufp->fullIData(oldp+117,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr),32);
    bufp->fullIData(oldp+118,(vlSelf->Core__DOT__lsu__DOT__lsu_reg_rs2_data),32);
    bufp->fullCData(oldp+119,(vlSelf->Core__DOT__lsu__DOT__mem_access_control),3);
    bufp->fullCData(oldp+120,((0xffU & (((0U == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                          ? 1U : ((1U 
                                                   == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                   ? 3U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control))
                                                    ? 0xfU
                                                    : 0U))) 
                                        << (3U & vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr)))),8);
    bufp->fullIData(oldp+121,((vlSelf->Core__DOT__lsu__DOT__lsu_reg_rs2_data 
                               << (0x18U & (vlSelf->Core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                            << 3U)))),32);
    bufp->fullCData(oldp+122,(vlSelf->Core__DOT__sram__DOT__state),2);
    bufp->fullIData(oldp+123,(vlSelf->Core__DOT__sram__DOT__addr_reg),32);
    bufp->fullIData(oldp+124,(vlSelf->Core__DOT__sram__DOT__wdata_reg),32);
    bufp->fullCData(oldp+125,(vlSelf->Core__DOT__sram__DOT__wstrb_reg),8);
    bufp->fullBit(oldp+126,(vlSelf->Core__DOT__sram__DOT__rd_req_valid));
    bufp->fullBit(oldp+127,(vlSelf->Core__DOT__sram__DOT__wt_req_valid));
    bufp->fullIData(oldp+128,(vlSelf->Core__DOT__sram__DOT___sram_data_out),32);
    bufp->fullBit(oldp+129,(vlSelf->Core__DOT__sram__DOT___sram_rd_res_valid));
    bufp->fullBit(oldp+130,(vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid));
    bufp->fullBit(oldp+131,(vlSelf->clock));
    bufp->fullBit(oldp+132,(vlSelf->reset));
    bufp->fullIData(oldp+133,(vlSelf->io_pc_debug),32);
    bufp->fullIData(oldp+134,(vlSelf->io_inst_debug),32);
    bufp->fullCData(oldp+135,(vlSelf->io_ifu_state_debug),2);
    bufp->fullCData(oldp+136,(vlSelf->io_lsu_state_debug),2);
    bufp->fullBit(oldp+137,(vlSelf->io_lsu_is_ld_or_st_debug));
    bufp->fullIData(oldp+138,(vlSelf->io_lsu_reg_inst_debug),32);
    bufp->fullCData(oldp+139,(vlSelf->io_wbu_state_debug),2);
    bufp->fullIData(oldp+140,(vlSelf->io_wb_data_debug),32);
    bufp->fullBit(oldp+141,(vlSelf->io_wb_wen_debug));
    bufp->fullCData(oldp+142,(vlSelf->io_wb_sel_debug),2);
    bufp->fullIData(oldp+143,((((1U != (IData)(vlSelf->Core__DOT__arbiter__DOT__state)) 
                                | (0U == (IData)(vlSelf->Core__DOT__arbiter__DOT__state)))
                                ? 0U : vlSelf->Core__DOT___sram_io_axi_r_data)),32);
    bufp->fullBit(oldp+144,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                             & ((~ (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0)) 
                                & ((1U == (IData)(vlSelf->Core__DOT__sram__DOT__state)) 
                                   & (IData)(vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid))))));
    bufp->fullBit(oldp+145,(((IData)(vlSelf->Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0) 
                             & (IData)(vlSelf->Core__DOT___sram_io_axi_r_valid))));
    bufp->fullBit(oldp+146,(((~ (IData)(vlSelf->Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0)) 
                             & ((1U == (IData)(vlSelf->Core__DOT__sram__DOT__state)) 
                                & (IData)(vlSelf->Core__DOT__sram__DOT___sram_wt_res_valid)))));
    __Vtemp_7[0U] = (((- (IData)((1U & (vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                        >> 7U)))) << 8U) 
                     | (0xffU & vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data));
    __Vtemp_7[1U] = (((- (IData)((1U & (vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                        >> 0xfU)))) 
                      << 0x10U) | (0xffffU & vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data));
    __Vtemp_7[2U] = (IData)((QData)((IData)(vlSelf->Core__DOT___arbiter_io_lsu_r_data)));
    __Vtemp_7[3U] = (IData)(((QData)((IData)(vlSelf->Core__DOT___arbiter_io_lsu_r_data)) 
                             >> 0x20U));
    __Vtemp_7[4U] = (0xffU & vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data);
    __Vtemp_7[5U] = (0xffffU & vlSelf->Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data);
    __Vtemp_7[6U] = 0U;
    __Vtemp_7[7U] = 0U;
    bufp->fullIData(oldp+147,((((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U)))
                                 ? 0U : (__Vtemp_7[
                                         (((IData)(0x1fU) 
                                           + (0xffU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U))))) 
                               | (__Vtemp_7[(7U & (
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U) 
                                                   >> 5U))] 
                                  >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Core__DOT__lsu__DOT__mem_access_control), 5U))))),32);
    bufp->fullBit(oldp+148,(((IData)(vlSelf->io_wb_wen_debug) 
                             & (1U == (IData)(vlSelf->Core__DOT__wbu__DOT__state)))));
}
