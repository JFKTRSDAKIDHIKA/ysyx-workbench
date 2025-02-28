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
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+448,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+449,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+450,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+451,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+452,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+453,"mem_wen_debug", false,-1);
    tracep->declBit(c+454,"mem_en_debug", false,-1);
    tracep->declBus(c+455,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+456,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+457,"rf_we_debug", false,-1);
    tracep->declBit(c+458,"wbu_active_debug", false,-1);
    tracep->declBus(c+459,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+460,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+461,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+462,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+463,"pc_wen_debug", false,-1);
    tracep->declBit(c+464,"mem_active_debug", false,-1);
    tracep->declBus(c+465,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+466,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+467,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+468,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+469,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+470,"mem_access_done_debug", false,-1);
    tracep->declBus(c+471,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+472,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+473,"ifu_state_debug", false,-1, 2,0);
    tracep->declBit(c+474,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+475,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+476,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+477,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+478,"idu_state_debug", false,-1, 1,0);
    tracep->declBit(c+479,"inst_valid_debug", false,-1);
    tracep->pushNamePrefix("ysyx_24120009_core ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+448,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+449,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+450,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+451,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+452,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+453,"mem_wen_debug", false,-1);
    tracep->declBit(c+454,"mem_en_debug", false,-1);
    tracep->declBus(c+455,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+456,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+457,"rf_we_debug", false,-1);
    tracep->declBit(c+458,"wbu_active_debug", false,-1);
    tracep->declBus(c+448,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+460,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+461,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+462,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+463,"pc_wen_debug", false,-1);
    tracep->declBit(c+464,"mem_active_debug", false,-1);
    tracep->declBus(c+465,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+466,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+467,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+468,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+469,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+470,"mem_access_done_debug", false,-1);
    tracep->declBus(c+471,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+472,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+473,"ifu_state_debug", false,-1, 2,0);
    tracep->declBit(c+474,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+475,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+476,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+477,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+478,"idu_state_debug", false,-1, 1,0);
    tracep->declBit(c+479,"inst_valid_debug", false,-1);
    tracep->declBus(c+193,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+487,"alu_op", false,-1, 4,0);
    tracep->declBus(c+194,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+438,"rf_we", false,-1);
    tracep->declBit(c+488,"mem_en", false,-1);
    tracep->declBit(c+489,"mem_wen", false,-1);
    tracep->declBus(c+490,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+195,"Op1", false,-1, 31,0);
    tracep->declBus(c+196,"Op2", false,-1, 31,0);
    tracep->declBus(c+491,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+197,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+198,"br_target", false,-1, 31,0);
    tracep->declBus(c+199,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+480,"pc_wen", false,-1);
    tracep->declBus(c+448,"pc_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+449,"inst_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+200,"pc_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+201,"inst_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+202,"rdata2_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+203,"rd_addr_from_IDU_to_EXU", false,-1, 4,0);
    tracep->declBus(c+204,"pc_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+205,"inst_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+206,"result_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+207,"rdata2_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+208,"rd_addr_from_EXU_to_MEM", false,-1, 4,0);
    tracep->declBus(c+465,"dmem_addr_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+439,"dmem_rdata_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+209,"result_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+210,"rd_addr_from_MEM_to_WBU", false,-1, 4,0);
    tracep->declBus(c+211,"pc_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+212,"inst_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+213,"inst_from_WBU_to_MEM", false,-1, 31,0);
    tracep->declBit(c+470,"mem_access_done", false,-1);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+214,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+215,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+216,"waddr", false,-1, 4,0);
    tracep->declBus(c+217,"rdata1", false,-1, 31,0);
    tracep->declBus(c+202,"rdata2", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+195,"Op1", false,-1, 31,0);
    tracep->declBus(c+196,"Op2", false,-1, 31,0);
    tracep->declBus(c+200,"pc_i", false,-1, 31,0);
    tracep->declBus(c+201,"inst_i", false,-1, 31,0);
    tracep->declBus(c+202,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+203,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBus(c+465,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+205,"inst_o", false,-1, 31,0);
    tracep->declBus(c+204,"pc_o", false,-1, 31,0);
    tracep->declBus(c+206,"result", false,-1, 31,0);
    tracep->declBus(c+207,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+208,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+468,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+469,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+75,"state", false,-1, 1,0);
    tracep->declBus(c+218,"alu_op", false,-1, 4,0);
    tracep->declBus(c+219,"funct3", false,-1, 2,0);
    tracep->declBus(c+220,"funct7", false,-1, 6,0);
    tracep->declBus(c+221,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+195,"A", false,-1, 31,0);
    tracep->declBus(c+196,"B", false,-1, 31,0);
    tracep->declBus(c+218,"ALUFun", false,-1, 4,0);
    tracep->declBus(c+206,"Result", false,-1, 31,0);
    tracep->declBus(c+222,"add_result", false,-1, 31,0);
    tracep->declBus(c+223,"sub_result", false,-1, 31,0);
    tracep->declBus(c+224,"slt_result", false,-1, 31,0);
    tracep->declBus(c+225,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+226,"xor_result", false,-1, 31,0);
    tracep->declBus(c+227,"or_result", false,-1, 31,0);
    tracep->declBus(c+228,"and_result", false,-1, 31,0);
    tracep->declBus(c+229,"sll_result", false,-1, 31,0);
    tracep->declBus(c+230,"srl_result", false,-1, 31,0);
    tracep->declBus(c+231,"sra_result", false,-1, 31,0);
    tracep->declBus(c+455,"op1_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu_mux ");
    tracep->declBus(c+492,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+493,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+206,"out", false,-1, 31,0);
    tracep->declBus(c+218,"key", false,-1, 4,0);
    tracep->declArray(c+232,"lut", false,-1, 406,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+492,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+493,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+495,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+206,"out", false,-1, 31,0);
    tracep->declBus(c+218,"key", false,-1, 4,0);
    tracep->declBus(c+496,"default_out", false,-1, 31,0);
    tracep->declArray(c+232,"lut", false,-1, 406,0);
    tracep->declBus(c+497,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+245+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+267+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+278,"lut_out", false,-1, 31,0);
    tracep->declBit(c+279,"hit", false,-1);
    tracep->declBus(c+498,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inst_reg_EXU ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+201,"din", false,-1, 31,0);
    tracep->declBus(c+205,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_EXU ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+200,"din", false,-1, 31,0);
    tracep->declBus(c+204,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_EXU ");
    tracep->declBus(c+493,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+501,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+203,"din", false,-1, 4,0);
    tracep->declBus(c+208,"dout", false,-1, 4,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_EXU ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+202,"din", false,-1, 31,0);
    tracep->declBus(c+207,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+449,"inst_i", false,-1, 31,0);
    tracep->declBus(c+448,"pc_i", false,-1, 31,0);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBus(c+217,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+202,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+214,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+215,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+203,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+195,"Op1", false,-1, 31,0);
    tracep->declBus(c+196,"Op2", false,-1, 31,0);
    tracep->declBus(c+200,"pc_o", false,-1, 31,0);
    tracep->declBus(c+201,"inst_o", false,-1, 31,0);
    tracep->declBus(c+202,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBus(c+197,"jump_reg_target_o", false,-1, 31,0);
    tracep->declBus(c+198,"br_target_o", false,-1, 31,0);
    tracep->declBus(c+199,"jmp_target_o", false,-1, 31,0);
    tracep->declBus(c+194,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+478,"idu_state_debug", false,-1, 1,0);
    tracep->declBus(c+76,"state", false,-1, 1,0);
    tracep->declBit(c+280,"br_eq", false,-1);
    tracep->declBit(c+281,"br_lt", false,-1);
    tracep->declBit(c+282,"br_ltu", false,-1);
    tracep->declBus(c+283,"Op1Sel", false,-1, 1,0);
    tracep->declBus(c+284,"Op2Sel", false,-1, 1,0);
    tracep->declBus(c+203,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+285,"imm_i", false,-1, 11,0);
    tracep->declBus(c+286,"imm_s", false,-1, 11,0);
    tracep->declBus(c+287,"imm_b", false,-1, 11,0);
    tracep->declBus(c+288,"imm_u", false,-1, 19,0);
    tracep->declBus(c+289,"imm_j", false,-1, 19,0);
    tracep->declBus(c+290,"imm_i_sext", false,-1, 31,0);
    tracep->declBus(c+291,"imm_s_sext", false,-1, 31,0);
    tracep->declBus(c+292,"imm_b_sext", false,-1, 31,0);
    tracep->declBus(c+293,"imm_u_sext", false,-1, 31,0);
    tracep->declBus(c+294,"imm_j_sext", false,-1, 31,0);
    tracep->declBus(c+295,"funct3", false,-1, 2,0);
    tracep->declBus(c+296,"funct7", false,-1, 6,0);
    tracep->declBus(c+297,"opcode", false,-1, 6,0);
    tracep->declBit(c+298,"branch_taken", false,-1);
    tracep->pushNamePrefix("b_taken_mux ");
    tracep->declBus(c+502,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+503,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+504,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+298,"out", false,-1, 0,0);
    tracep->declBus(c+295,"key", false,-1, 2,0);
    tracep->declBus(c+299,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+502,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+503,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+504,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+495,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+298,"out", false,-1, 0,0);
    tracep->declBus(c+295,"key", false,-1, 2,0);
    tracep->declBus(c+505,"default_out", false,-1, 0,0);
    tracep->declBus(c+299,"lut", false,-1, 23,0);
    tracep->declBus(c+506,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+300+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+306+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+312,"lut_out", false,-1, 0,0);
    tracep->declBit(c+313,"hit", false,-1);
    tracep->declBus(c+507,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_reg_IDU ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+449,"din", false,-1, 31,0);
    tracep->declBus(c+201,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op1_sel_mux ");
    tracep->declBus(c+508,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+508,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+195,"out", false,-1, 31,0);
    tracep->declBus(c+283,"key", false,-1, 1,0);
    tracep->declArray(c+314,"lut", false,-1, 67,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+508,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+508,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+495,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+195,"out", false,-1, 31,0);
    tracep->declBus(c+283,"key", false,-1, 1,0);
    tracep->declBus(c+496,"default_out", false,-1, 31,0);
    tracep->declArray(c+314,"lut", false,-1, 67,0);
    tracep->declBus(c+509,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+317+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+321+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+323,"lut_out", false,-1, 31,0);
    tracep->declBit(c+324,"hit", false,-1);
    tracep->declBus(c+510,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("op2_sel_mux ");
    tracep->declBus(c+506,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+508,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+196,"out", false,-1, 31,0);
    tracep->declBus(c+284,"key", false,-1, 1,0);
    tracep->declArray(c+325,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+506,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+508,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+495,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+196,"out", false,-1, 31,0);
    tracep->declBus(c+284,"key", false,-1, 1,0);
    tracep->declBus(c+496,"default_out", false,-1, 31,0);
    tracep->declArray(c+325,"lut", false,-1, 135,0);
    tracep->declBus(c+509,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+330+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+338+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+342,"lut_out", false,-1, 31,0);
    tracep->declBit(c+343,"hit", false,-1);
    tracep->declBus(c+511,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_IDU ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+448,"din", false,-1, 31,0);
    tracep->declBus(c+200,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+194,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+197,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+198,"br_target", false,-1, 31,0);
    tracep->declBus(c+199,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+480,"pc_wen", false,-1);
    tracep->declBus(c+448,"pc_o", false,-1, 31,0);
    tracep->declBus(c+449,"inst_o", false,-1, 31,0);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBit(c+500,"idu_ready", false,-1);
    tracep->declBus(c+473,"state_debug", false,-1, 2,0);
    tracep->declBit(c+474,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+475,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+77,"state", false,-1, 2,0);
    tracep->declBus(c+512,"IDLE", false,-1, 2,0);
    tracep->declBus(c+513,"FETCH_REQ", false,-1, 2,0);
    tracep->declBus(c+514,"FETCH_WAIT", false,-1, 2,0);
    tracep->declBus(c+515,"FETCH_DONE", false,-1, 2,0);
    tracep->declBus(c+344,"pc", false,-1, 31,0);
    tracep->declBus(c+345,"pc_next", false,-1, 31,0);
    tracep->declBus(c+346,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+516,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+496,"exception", false,-1, 31,0);
    tracep->declBus(c+78,"rdata", false,-1, 31,0);
    tracep->declBit(c+79,"rvalid", false,-1);
    tracep->declBus(c+80,"if_inst_buffer", false,-1, 31,0);
    tracep->declBit(c+81,"arvalid", false,-1);
    tracep->declBit(c+82,"arready", false,-1);
    tracep->declBit(c+83,"rready", false,-1);
    tracep->pushNamePrefix("axi4_ifu ");
    tracep->declBus(c+494,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBit(c+505,"awvalid", false,-1);
    tracep->declBit(c+84,"awready", false,-1);
    tracep->declBus(c+496,"awaddr", false,-1, 31,0);
    tracep->declBit(c+505,"wvalid", false,-1);
    tracep->declBit(c+85,"wready", false,-1);
    tracep->declBus(c+496,"wdata", false,-1, 31,0);
    tracep->declBus(c+517,"wstrb", false,-1, 7,0);
    tracep->declBit(c+86,"bvalid", false,-1);
    tracep->declBit(c+505,"bready", false,-1);
    tracep->declBus(c+87,"bresp", false,-1, 1,0);
    tracep->declBit(c+81,"arvalid", false,-1);
    tracep->declBit(c+82,"arready", false,-1);
    tracep->declBus(c+344,"araddr", false,-1, 31,0);
    tracep->declBit(c+79,"rvalid", false,-1);
    tracep->declBit(c+83,"rready", false,-1);
    tracep->declBus(c+78,"rdata", false,-1, 31,0);
    tracep->declBus(c+88,"rresp", false,-1, 1,0);
    tracep->declBus(c+475,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+89,"sram_data_out", false,-1, 31,0);
    tracep->declBit(c+90,"sram_rd_res_valid", false,-1);
    tracep->declBit(c+91,"sram_wt_res_valid", false,-1);
    tracep->declBus(c+92,"state", false,-1, 1,0);
    tracep->declBus(c+518,"IDLE", false,-1, 1,0);
    tracep->declBus(c+519,"WRITE", false,-1, 1,0);
    tracep->declBus(c+520,"READ", false,-1, 1,0);
    tracep->declBus(c+93,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+521,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+522,"wstrb_reg", false,-1, 7,0);
    tracep->declBit(c+94,"rd_req_valid", false,-1);
    tracep->declBit(c+95,"wt_req_valid", false,-1);
    tracep->pushNamePrefix("sram_inst ");
    tracep->declBus(c+503,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBit(c+94,"rd_req_valid", false,-1);
    tracep->declBus(c+93,"addr", false,-1, 31,0);
    tracep->declBus(c+89,"data_out", false,-1, 31,0);
    tracep->declBit(c+90,"rd_res_valid", false,-1);
    tracep->declBit(c+95,"wt_req_valid", false,-1);
    tracep->declBus(c+93,"waddr", false,-1, 31,0);
    tracep->declBus(c+521,"wdata", false,-1, 31,0);
    tracep->declBus(c+522,"wmask", false,-1, 7,0);
    tracep->declBit(c+91,"wt_res_valid", false,-1);
    tracep->declBus(c+96,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+97,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+98,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+99,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+100,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+101,"wt_req_valid_delayed", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+102+i*1,"addr_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+105+i*1,"rd_req_valid_pipeline", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+108+i*1,"waddr_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+111+i*1,"wdata_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+114+i*1,"wmask_pipeline", true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+117+i*1,"wt_req_valid_pipeline", true,(i+0));
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+120,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+121,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("mux_pc_sel ");
    tracep->declBus(c+493,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+503,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+345,"out", false,-1, 31,0);
    tracep->declBus(c+194,"key", false,-1, 2,0);
    tracep->declArray(c+347,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+493,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+503,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+495,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+345,"out", false,-1, 31,0);
    tracep->declBus(c+194,"key", false,-1, 2,0);
    tracep->declBus(c+496,"default_out", false,-1, 31,0);
    tracep->declArray(c+347,"lut", false,-1, 174,0);
    tracep->declBus(c+523,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+353+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+363+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+368,"lut_out", false,-1, 31,0);
    tracep->declBit(c+369,"hit", false,-1);
    tracep->declBus(c+524,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+345,"din", false,-1, 31,0);
    tracep->declBus(c+344,"dout", false,-1, 31,0);
    tracep->declBit(c+480,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+204,"pc_i", false,-1, 31,0);
    tracep->declBus(c+205,"inst_i", false,-1, 31,0);
    tracep->declBus(c+206,"result_i", false,-1, 31,0);
    tracep->declBus(c+465,"dmem_addr_i", false,-1, 31,0);
    tracep->declBus(c+207,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+208,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+212,"inst_o", false,-1, 31,0);
    tracep->declBus(c+211,"pc_o", false,-1, 31,0);
    tracep->declBus(c+209,"result_o", false,-1, 31,0);
    tracep->declBus(c+439,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+210,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+470,"mem_access_done", false,-1);
    tracep->declBit(c+464,"mem_active", false,-1);
    tracep->declBus(c+449,"inst_from_IFU", false,-1, 31,0);
    tracep->declBus(c+213,"inst_from_WBU", false,-1, 31,0);
    tracep->declBit(c+472,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+476,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+477,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+122,"state", false,-1, 1,0);
    tracep->declBus(c+123,"dmem_rdata_raw", false,-1, 31,0);
    tracep->declBus(c+370,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+371,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+372,"wmask", false,-1, 7,0);
    tracep->declBus(c+373,"ctl_mem_access", false,-1, 2,0);
    tracep->declBit(c+124,"mem_en", false,-1);
    tracep->declBit(c+125,"mem_wen", false,-1);
    tracep->declBus(c+374,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+370,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+126,"rvalid", false,-1);
    tracep->declBit(c+127,"wt_res_valid", false,-1);
    tracep->declBit(c+128,"arvalid", false,-1);
    tracep->declBit(c+129,"wt_req_valid", false,-1);
    tracep->declBit(c+130,"arready", false,-1);
    tracep->declBit(c+131,"awready", false,-1);
    tracep->declBit(c+132,"rready", false,-1);
    tracep->declBit(c+133,"wready", false,-1);
    tracep->declBit(c+134,"bready", false,-1);
    tracep->declBus(c+375,"funct3", false,-1, 2,0);
    tracep->declBus(c+376,"funct7", false,-1, 6,0);
    tracep->declBus(c+377,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+123,"data_in", false,-1, 31,0);
    tracep->declBus(c+374,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+373,"control", false,-1, 2,0);
    tracep->declBus(c+439,"data_out", false,-1, 31,0);
    tracep->declBus(c+378,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+440,"shifted_data", false,-1, 31,0);
    tracep->declBus(c+441,"zero_ext_byte", false,-1, 31,0);
    tracep->declBus(c+442,"zero_ext_half", false,-1, 31,0);
    tracep->declBus(c+443,"sign_ext_byte", false,-1, 31,0);
    tracep->declBus(c+444,"sign_ext_half", false,-1, 31,0);
    tracep->pushNamePrefix("mem_mux ");
    tracep->declBus(c+493,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+503,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+439,"out", false,-1, 31,0);
    tracep->declBus(c+373,"key", false,-1, 2,0);
    tracep->declArray(c+172,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+493,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+503,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+495,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+439,"out", false,-1, 31,0);
    tracep->declBus(c+373,"key", false,-1, 2,0);
    tracep->declBus(c+496,"default_out", false,-1, 31,0);
    tracep->declArray(c+172,"lut", false,-1, 174,0);
    tracep->declBus(c+523,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+178+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+188+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+445,"lut_out", false,-1, 31,0);
    tracep->declBit(c+379,"hit", false,-1);
    tracep->declBus(c+524,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4_mem ");
    tracep->declBus(c+494,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBit(c+129,"awvalid", false,-1);
    tracep->declBit(c+131,"awready", false,-1);
    tracep->declBus(c+374,"awaddr", false,-1, 31,0);
    tracep->declBit(c+129,"wvalid", false,-1);
    tracep->declBit(c+133,"wready", false,-1);
    tracep->declBus(c+371,"wdata", false,-1, 31,0);
    tracep->declBus(c+372,"wstrb", false,-1, 7,0);
    tracep->declBit(c+127,"bvalid", false,-1);
    tracep->declBit(c+134,"bready", false,-1);
    tracep->declBus(c+135,"bresp", false,-1, 1,0);
    tracep->declBit(c+128,"arvalid", false,-1);
    tracep->declBit(c+130,"arready", false,-1);
    tracep->declBus(c+374,"araddr", false,-1, 31,0);
    tracep->declBit(c+126,"rvalid", false,-1);
    tracep->declBit(c+132,"rready", false,-1);
    tracep->declBus(c+123,"rdata", false,-1, 31,0);
    tracep->declBus(c+136,"rresp", false,-1, 1,0);
    tracep->declBus(c+477,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+137,"sram_data_out", false,-1, 31,0);
    tracep->declBit(c+138,"sram_rd_res_valid", false,-1);
    tracep->declBit(c+139,"sram_wt_res_valid", false,-1);
    tracep->declBus(c+140,"state", false,-1, 1,0);
    tracep->declBus(c+518,"IDLE", false,-1, 1,0);
    tracep->declBus(c+519,"WRITE", false,-1, 1,0);
    tracep->declBus(c+520,"READ", false,-1, 1,0);
    tracep->declBus(c+141,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+142,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+143,"wstrb_reg", false,-1, 7,0);
    tracep->declBit(c+144,"rd_req_valid", false,-1);
    tracep->declBit(c+145,"wt_req_valid", false,-1);
    tracep->pushNamePrefix("sram_inst ");
    tracep->declBus(c+503,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBit(c+144,"rd_req_valid", false,-1);
    tracep->declBus(c+141,"addr", false,-1, 31,0);
    tracep->declBus(c+137,"data_out", false,-1, 31,0);
    tracep->declBit(c+138,"rd_res_valid", false,-1);
    tracep->declBit(c+145,"wt_req_valid", false,-1);
    tracep->declBus(c+141,"waddr", false,-1, 31,0);
    tracep->declBus(c+142,"wdata", false,-1, 31,0);
    tracep->declBus(c+143,"wmask", false,-1, 7,0);
    tracep->declBit(c+139,"wt_res_valid", false,-1);
    tracep->declBus(c+146,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+147,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+148,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+149,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+150,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+151,"wt_req_valid_delayed", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+152+i*1,"addr_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+155+i*1,"rd_req_valid_pipeline", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+158+i*1,"waddr_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+161+i*1,"wdata_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+164+i*1,"wmask_pipeline", true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+167+i*1,"wt_req_valid_pipeline", true,(i+0));
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+170,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+171,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("dmem_addr_reg_MEM ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+465,"din", false,-1, 31,0);
    tracep->declBus(c+374,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_MEM ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+205,"din", false,-1, 31,0);
    tracep->declBus(c+212,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_acces_ctl_mux ");
    tracep->declBus(c+525,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+526,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+503,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+373,"out", false,-1, 2,0);
    tracep->declBus(c+380,"key", false,-1, 9,0);
    tracep->declArray(c+527,"lut", false,-1, 103,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+525,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+526,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+503,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+495,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+373,"out", false,-1, 2,0);
    tracep->declBus(c+380,"key", false,-1, 9,0);
    tracep->declBus(c+512,"default_out", false,-1, 2,0);
    tracep->declArray(c+527,"lut", false,-1, 103,0);
    tracep->declBus(c+531,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+42+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+50+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+381,"lut_out", false,-1, 2,0);
    tracep->declBit(c+382,"hit", false,-1);
    tracep->declBus(c+532,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_MEM ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+204,"din", false,-1, 31,0);
    tracep->declBus(c+211,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_MEM ");
    tracep->declBus(c+493,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+501,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+208,"din", false,-1, 4,0);
    tracep->declBus(c+210,"dout", false,-1, 4,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_MEM ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+206,"din", false,-1, 31,0);
    tracep->declBus(c+209,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_MEM ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+207,"din", false,-1, 31,0);
    tracep->declBus(c+370,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wmask_gen ");
    tracep->declBus(c+373,"control", false,-1, 2,0);
    tracep->declBus(c+374,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+370,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+371,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+372,"wmask", false,-1, 7,0);
    tracep->declBus(c+378,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+383,"base_mask", false,-1, 7,0);
    tracep->declBus(c+372,"shifted_mask", false,-1, 7,0);
    tracep->pushNamePrefix("mem_mux_write ");
    tracep->declBus(c+503,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+503,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+525,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+383,"out", false,-1, 7,0);
    tracep->declBus(c+373,"key", false,-1, 2,0);
    tracep->declQuad(c+533,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+503,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+503,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+525,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+495,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+383,"out", false,-1, 7,0);
    tracep->declBus(c+373,"key", false,-1, 2,0);
    tracep->declBus(c+517,"default_out", false,-1, 7,0);
    tracep->declQuad(c+533,"lut", false,-1, 32,0);
    tracep->declBus(c+492,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+58+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+61+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+64+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+384,"lut_out", false,-1, 7,0);
    tracep->declBit(c+385,"hit", false,-1);
    tracep->declBus(c+535,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+493,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBus(c+193,"wdata", false,-1, 31,0);
    tracep->declBus(c+216,"waddr", false,-1, 4,0);
    tracep->declBit(c+438,"wen", false,-1);
    tracep->declBus(c+214,"raddr1", false,-1, 4,0);
    tracep->declBus(c+215,"raddr2", false,-1, 4,0);
    tracep->declBus(c+217,"rdata1", false,-1, 31,0);
    tracep->declBus(c+202,"rdata2", false,-1, 31,0);
    tracep->declBus(c+451,"x2_debug", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+386+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+67,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+193,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+216,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+438,"rf_we", false,-1);
    tracep->declBus(c+211,"pc_i", false,-1, 31,0);
    tracep->declBus(c+212,"inst_i", false,-1, 31,0);
    tracep->declBus(c+209,"result_i", false,-1, 31,0);
    tracep->declBus(c+439,"dmem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+210,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+470,"mem_access_done", false,-1);
    tracep->declBit(c+480,"pc_wen", false,-1);
    tracep->declBus(c+449,"inst_from_IFU", false,-1, 31,0);
    tracep->declBit(c+458,"wbu_active", false,-1);
    tracep->declBus(c+213,"inst_o", false,-1, 31,0);
    tracep->declBus(c+460,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+461,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+462,"opcode_debug", false,-1, 6,0);
    tracep->declBus(c+467,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+481,"state", false,-1, 1,0);
    tracep->declBus(c+460,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+418,"pc_o", false,-1, 31,0);
    tracep->declBus(c+419,"result_o", false,-1, 31,0);
    tracep->declBus(c+536,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+420,"dmem_rdata_o", false,-1, 31,0);
    tracep->declBus(c+421,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+422,"funct3", false,-1, 2,0);
    tracep->declBus(c+423,"funct7", false,-1, 6,0);
    tracep->declBus(c+462,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("dmem_rdata_reg_WBU ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+439,"din", false,-1, 31,0);
    tracep->declBus(c+420,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_WBU ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+212,"din", false,-1, 31,0);
    tracep->declBus(c+213,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_WBU ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+211,"din", false,-1, 31,0);
    tracep->declBus(c+418,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_WBU ");
    tracep->declBus(c+493,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+501,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+210,"din", false,-1, 4,0);
    tracep->declBus(c+216,"dout", false,-1, 4,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_WBU ");
    tracep->declBus(c+494,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+499,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+209,"din", false,-1, 31,0);
    tracep->declBus(c+419,"dout", false,-1, 31,0);
    tracep->declBit(c+500,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_mux ");
    tracep->declBus(c+506,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+508,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+193,"out", false,-1, 31,0);
    tracep->declBus(c+421,"key", false,-1, 1,0);
    tracep->declBus(c+496,"default_out", false,-1, 31,0);
    tracep->declArray(c+482,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+506,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+508,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+504,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+193,"out", false,-1, 31,0);
    tracep->declBus(c+421,"key", false,-1, 1,0);
    tracep->declBus(c+496,"default_out", false,-1, 31,0);
    tracep->declArray(c+482,"lut", false,-1, 135,0);
    tracep->declBus(c+509,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+424+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+68+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+432+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+436,"lut_out", false,-1, 31,0);
    tracep->declBit(c+437,"hit", false,-1);
    tracep->declBus(c+511,"i", false,-1, 31,0);
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
                             [2U]),32);
    bufp->fullBit(oldp+97,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline
                           [2U]));
    bufp->fullIData(oldp+98,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline
                             [2U]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline
                             [2U]),32);
    bufp->fullCData(oldp+100,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline
                              [2U]),8);
    bufp->fullBit(oldp+101,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline
                            [2U]));
    bufp->fullIData(oldp+102,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[0]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[1]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[2]),32);
    bufp->fullBit(oldp+105,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[0]));
    bufp->fullBit(oldp+106,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[1]));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[2]));
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[0]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[1]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[2]),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[0]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[1]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[2]),32);
    bufp->fullCData(oldp+114,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[0]),8);
    bufp->fullCData(oldp+115,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[1]),8);
    bufp->fullCData(oldp+116,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[2]),8);
    bufp->fullBit(oldp+117,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[0]));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[1]));
    bufp->fullBit(oldp+119,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[2]));
    bufp->fullIData(oldp+120,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+122,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__state),2);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw),32);
    bufp->fullBit(oldp+124,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en));
    bufp->fullBit(oldp+125,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen));
    bufp->fullBit(oldp+126,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rvalid));
    bufp->fullBit(oldp+127,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wt_res_valid));
    bufp->fullBit(oldp+128,(((~ (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen)) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en))));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen))));
    bufp->fullBit(oldp+130,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__arready));
    bufp->fullBit(oldp+131,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__awready));
    bufp->fullBit(oldp+132,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rready));
    bufp->fullBit(oldp+133,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wready));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__bready));
    bufp->fullCData(oldp+135,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__bresp),2);
    bufp->fullCData(oldp+136,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__rresp),2);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_data_out),32);
    bufp->fullBit(oldp+138,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_rd_res_valid));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_wt_res_valid));
    bufp->fullCData(oldp+140,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__state),2);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__addr_reg),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wdata_reg),32);
    bufp->fullCData(oldp+143,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wstrb_reg),8);
    bufp->fullBit(oldp+144,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__rd_req_valid));
    bufp->fullBit(oldp+145,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wt_req_valid));
    bufp->fullIData(oldp+146,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline
                              [2U]),32);
    bufp->fullBit(oldp+147,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline
                            [2U]));
    bufp->fullIData(oldp+148,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline
                              [2U]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline
                              [2U]),32);
    bufp->fullCData(oldp+150,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline
                              [2U]),8);
    bufp->fullBit(oldp+151,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline
                            [2U]));
    bufp->fullIData(oldp+152,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[0]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[1]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[2]),32);
    bufp->fullBit(oldp+155,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[0]));
    bufp->fullBit(oldp+156,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[1]));
    bufp->fullBit(oldp+157,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[2]));
    bufp->fullIData(oldp+158,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[0]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[1]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[2]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[0]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[1]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[2]),32);
    bufp->fullCData(oldp+164,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[0]),8);
    bufp->fullCData(oldp+165,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[1]),8);
    bufp->fullCData(oldp+166,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[2]),8);
    bufp->fullBit(oldp+167,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[0]));
    bufp->fullBit(oldp+168,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[1]));
    bufp->fullBit(oldp+169,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[2]));
    bufp->fullIData(oldp+170,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk2__DOT__i),32);
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
    bufp->fullWData(oldp+172,(__Vtemp_hdb58eddb__0),175);
    bufp->fullQData(oldp+178,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+180,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+182,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+184,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+186,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_24120009_core__DOT__reg_write_data),32);
    bufp->fullCData(oldp+194,(vlSelf->ysyx_24120009_core__DOT__pc_sel),3);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_24120009_core__DOT__Op1),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_24120009_core__DOT__Op2),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_24120009_core__DOT__jump_reg_target),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_24120009_core__DOT__br_target),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_24120009_core__DOT__jmp_target),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU),32);
    bufp->fullCData(oldp+203,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 7U))),5);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM),32);
    bufp->fullCData(oldp+208,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM),5);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU),32);
    bufp->fullCData(oldp+210,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU),5);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM),32);
    bufp->fullCData(oldp+214,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+215,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+216,(vlSelf->ysyx_24120009_core__DOT__waddr),5);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_24120009_core__DOT__rdata1),32);
    bufp->fullCData(oldp+218,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op),5);
    bufp->fullCData(oldp+219,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+220,((vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+221,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)),7);
    bufp->fullIData(oldp+222,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               + vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+223,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               - vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+224,(vlSelf->__VdfgTmp_h9d12977d__0),32);
    bufp->fullIData(oldp+225,(vlSelf->__VdfgTmp_h9d0653ad__0),32);
    bufp->fullIData(oldp+226,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               ^ vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+227,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               | vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+228,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               & vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+229,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+230,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+231,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
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
    bufp->fullWData(oldp+232,(__Vtemp_hd74bf4d1__0),407);
    bufp->fullQData(oldp+245,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+247,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+249,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+251,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+253,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+255,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+257,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+259,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+261,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8]),37);
    bufp->fullQData(oldp+263,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9]),37);
    bufp->fullQData(oldp+265,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[10]),37);
    bufp->fullIData(oldp+267,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+268,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+269,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+270,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+271,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+279,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+280,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+281,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+282,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
    bufp->fullCData(oldp+283,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel),2);
    bufp->fullCData(oldp+284,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel),2);
    bufp->fullSData(oldp+285,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+286,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+287,(((0x800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+288,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+289,(((0x80000U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+290,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext),32);
    bufp->fullIData(oldp+291,((((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+292,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext),32);
    bufp->fullIData(oldp+293,((0xfffff000U & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext),32);
    bufp->fullCData(oldp+295,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+296,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+297,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),7);
    bufp->fullBit(oldp+298,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken));
    bufp->fullIData(oldp+299,((0x28aceU | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq) 
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
    bufp->fullCData(oldp+300,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+301,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+302,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+303,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+304,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+305,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullBit(oldp+306,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+307,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+308,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+309,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+310,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+311,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+312,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+313,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+314,(__Vtemp_h3e4b9c5b__0),68);
    bufp->fullQData(oldp+317,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+319,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullIData(oldp+321,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+324,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+325,(__Vtemp_h4b1a9c47__0),136);
    bufp->fullQData(oldp+330,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+332,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+334,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+336,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+338,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+343,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+344,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next),32);
    bufp->fullIData(oldp+346,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)),32);
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
    bufp->fullWData(oldp+347,(__Vtemp_h47858337__0),175);
    bufp->fullQData(oldp+353,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+355,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+357,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+359,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+361,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+363,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+364,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+365,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+369,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+370,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o),32);
    bufp->fullIData(oldp+371,(((0x1fU >= (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                   << 3U)))
                                ? (vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o 
                                   << (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                << 3U)))
                                : 0U)),32);
    bufp->fullCData(oldp+372,((0xffU & ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask) 
                                        << (3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)))),8);
    bufp->fullCData(oldp+373,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access),3);
    bufp->fullIData(oldp+374,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o),32);
    bufp->fullCData(oldp+375,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+376,((vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+377,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)),7);
    bufp->fullCData(oldp+378,((3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)),2);
    bufp->fullBit(oldp+379,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+380,(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key),10);
    bufp->fullCData(oldp+381,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+382,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+383,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+385,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+386,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+398,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+399,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+402,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+403,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+404,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+405,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+406,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+407,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+408,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+409,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+410,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+411,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+412,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+413,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+414,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+415,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+416,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+417,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+418,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o),32);
    bufp->fullIData(oldp+419,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o),32);
    bufp->fullIData(oldp+420,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o),32);
    bufp->fullCData(oldp+421,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel),2);
    bufp->fullCData(oldp+422,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+423,((vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullQData(oldp+424,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+426,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+428,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+430,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+432,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+433,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+434,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+435,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+436,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+437,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit));
    bufp->fullBit(oldp+438,(vlSelf->ysyx_24120009_core__DOT__rf_we));
    bufp->fullIData(oldp+439,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+440,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullIData(oldp+441,((0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+442,((0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+443,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+444,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+446,(vlSelf->clk));
    bufp->fullBit(oldp+447,(vlSelf->rst));
    bufp->fullIData(oldp+448,(vlSelf->pc_debug),32);
    bufp->fullIData(oldp+449,(vlSelf->inst_debug),32);
    bufp->fullIData(oldp+450,(vlSelf->reg_write_data_debug),32);
    bufp->fullIData(oldp+451,(vlSelf->x2_debug),32);
    bufp->fullCData(oldp+452,(vlSelf->waddr_debug),5);
    bufp->fullBit(oldp+453,(vlSelf->mem_wen_debug));
    bufp->fullBit(oldp+454,(vlSelf->mem_en_debug));
    bufp->fullIData(oldp+455,(vlSelf->Op1_debug),32);
    bufp->fullIData(oldp+456,(vlSelf->Op2_debug),32);
    bufp->fullBit(oldp+457,(vlSelf->rf_we_debug));
    bufp->fullBit(oldp+458,(vlSelf->wbu_active_debug));
    bufp->fullIData(oldp+459,(vlSelf->imem_addr_debug),32);
    bufp->fullIData(oldp+460,(vlSelf->pc_plus4_debug),32);
    bufp->fullCData(oldp+461,(vlSelf->wb_sel_debug),2);
    bufp->fullCData(oldp+462,(vlSelf->opcode_debug),7);
    bufp->fullBit(oldp+463,(vlSelf->pc_wen_debug));
    bufp->fullBit(oldp+464,(vlSelf->mem_active_debug));
    bufp->fullIData(oldp+465,(vlSelf->result_from_EXU_to_MEM_debug),32);
    bufp->fullIData(oldp+466,(vlSelf->result_from_MEM_to_WBU_debug),32);
    bufp->fullIData(oldp+467,(vlSelf->result_from_WB_debug),32);
    bufp->fullCData(oldp+468,(vlSelf->alu_op_debug),5);
    bufp->fullIData(oldp+469,(vlSelf->inst_from_EXU_to_MEM_debug),32);
    bufp->fullBit(oldp+470,(vlSelf->mem_access_done_debug));
    bufp->fullIData(oldp+471,(vlSelf->dmem_rdata_from_MEM_to_WBU_debug),32);
    bufp->fullBit(oldp+472,(vlSelf->wt_res_valid_debug));
    bufp->fullCData(oldp+473,(vlSelf->ifu_state_debug),3);
    bufp->fullBit(oldp+474,(vlSelf->rd_res_valid_debug));
    bufp->fullCData(oldp+475,(vlSelf->axi4_ifu_state_debug),2);
    bufp->fullCData(oldp+476,(vlSelf->mem_ctl_state_debug),2);
    bufp->fullCData(oldp+477,(vlSelf->axi4_mem_state_debug),2);
    bufp->fullCData(oldp+478,(vlSelf->idu_state_debug),2);
    bufp->fullBit(oldp+479,(vlSelf->inst_valid_debug));
    bufp->fullBit(oldp+480,(vlSelf->ysyx_24120009_core__DOT__pc_wen));
    bufp->fullCData(oldp+481,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state),2);
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
    bufp->fullWData(oldp+482,(__Vtemp_h650a5f8e__0),136);
    bufp->fullCData(oldp+487,(vlSelf->ysyx_24120009_core__DOT__alu_op),5);
    bufp->fullBit(oldp+488,(vlSelf->ysyx_24120009_core__DOT__mem_en));
    bufp->fullBit(oldp+489,(vlSelf->ysyx_24120009_core__DOT__mem_wen));
    bufp->fullCData(oldp+490,(vlSelf->ysyx_24120009_core__DOT__wb_sel),2);
    bufp->fullIData(oldp+491,(vlSelf->ysyx_24120009_core__DOT__pc_plus4),32);
    bufp->fullIData(oldp+492,(0xbU),32);
    bufp->fullIData(oldp+493,(5U),32);
    bufp->fullIData(oldp+494,(0x20U),32);
    bufp->fullIData(oldp+495,(0U),32);
    bufp->fullIData(oldp+496,(0U),32);
    bufp->fullIData(oldp+497,(0x25U),32);
    bufp->fullIData(oldp+498,(0xbU),32);
    bufp->fullIData(oldp+499,(0x80000000U),32);
    bufp->fullBit(oldp+500,(1U));
    bufp->fullCData(oldp+501,(0U),5);
    bufp->fullIData(oldp+502,(6U),32);
    bufp->fullIData(oldp+503,(3U),32);
    bufp->fullIData(oldp+504,(1U),32);
    bufp->fullBit(oldp+505,(0U));
    bufp->fullIData(oldp+506,(4U),32);
    bufp->fullIData(oldp+507,(6U),32);
    bufp->fullIData(oldp+508,(2U),32);
    bufp->fullIData(oldp+509,(0x22U),32);
    bufp->fullIData(oldp+510,(2U),32);
    bufp->fullIData(oldp+511,(4U),32);
    bufp->fullCData(oldp+512,(0U),3);
    bufp->fullCData(oldp+513,(1U),3);
    bufp->fullCData(oldp+514,(2U),3);
    bufp->fullCData(oldp+515,(3U),3);
    bufp->fullIData(oldp+516,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__imem_addr),32);
    bufp->fullCData(oldp+517,(0U),8);
    bufp->fullCData(oldp+518,(0U),2);
    bufp->fullCData(oldp+519,(1U),2);
    bufp->fullCData(oldp+520,(2U),2);
    bufp->fullIData(oldp+521,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wdata_reg),32);
    bufp->fullCData(oldp+522,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wstrb_reg),8);
    bufp->fullIData(oldp+523,(0x23U),32);
    bufp->fullIData(oldp+524,(5U),32);
    bufp->fullIData(oldp+525,(8U),32);
    bufp->fullIData(oldp+526,(0xaU),32);
    __Vtemp_ha516852c__0[0U] = 0x491808c9U;
    __Vtemp_ha516852c__0[1U] = 0xc9076a3U;
    __Vtemp_ha516852c__0[2U] = 0x903001c8U;
    __Vtemp_ha516852c__0[3U] = 6U;
    bufp->fullWData(oldp+527,(__Vtemp_ha516852c__0),104);
    bufp->fullIData(oldp+531,(0xdU),32);
    bufp->fullIData(oldp+532,(8U),32);
    bufp->fullQData(oldp+533,(0x83c81801ULL),33);
    bufp->fullIData(oldp+535,(3U),32);
    bufp->fullIData(oldp+536,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_addr_o),32);
}
