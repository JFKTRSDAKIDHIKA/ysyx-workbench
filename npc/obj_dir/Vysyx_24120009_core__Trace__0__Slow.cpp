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
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+652,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+653,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+654,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+655,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+656,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+657,"mem_wen_debug", false,-1);
    tracep->declBit(c+658,"mem_en_debug", false,-1);
    tracep->declBus(c+659,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+660,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+661,"rf_we_debug", false,-1);
    tracep->declBit(c+662,"wbu_active_debug", false,-1);
    tracep->declBus(c+663,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+664,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+665,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+666,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+667,"pc_wen_debug", false,-1);
    tracep->declBit(c+668,"mem_active_debug", false,-1);
    tracep->declBus(c+669,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+670,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+671,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+672,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+673,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+674,"mem_access_done_debug", false,-1);
    tracep->declBus(c+675,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+676,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+677,"ifu_state_debug", false,-1, 2,0);
    tracep->declBit(c+678,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+679,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+680,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+681,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+682,"idu_state_debug", false,-1, 1,0);
    tracep->declBit(c+683,"inst_valid_debug", false,-1);
    tracep->pushNamePrefix("ysyx_24120009_core ");
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+652,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+653,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+654,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+655,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+656,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+657,"mem_wen_debug", false,-1);
    tracep->declBit(c+658,"mem_en_debug", false,-1);
    tracep->declBus(c+659,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+660,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+661,"rf_we_debug", false,-1);
    tracep->declBit(c+662,"wbu_active_debug", false,-1);
    tracep->declBus(c+652,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+664,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+665,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+666,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+667,"pc_wen_debug", false,-1);
    tracep->declBit(c+668,"mem_active_debug", false,-1);
    tracep->declBus(c+669,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+670,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+671,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+672,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+673,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+674,"mem_access_done_debug", false,-1);
    tracep->declBus(c+675,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+676,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+677,"ifu_state_debug", false,-1, 2,0);
    tracep->declBit(c+678,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+679,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+680,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+681,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+682,"idu_state_debug", false,-1, 1,0);
    tracep->declBit(c+683,"inst_valid_debug", false,-1);
    tracep->declBus(c+397,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+691,"alu_op", false,-1, 4,0);
    tracep->declBus(c+398,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+642,"rf_we", false,-1);
    tracep->declBit(c+692,"mem_en", false,-1);
    tracep->declBit(c+693,"mem_wen", false,-1);
    tracep->declBus(c+694,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+399,"Op1", false,-1, 31,0);
    tracep->declBus(c+400,"Op2", false,-1, 31,0);
    tracep->declBus(c+695,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+401,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+402,"br_target", false,-1, 31,0);
    tracep->declBus(c+403,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+684,"pc_wen", false,-1);
    tracep->declBus(c+652,"pc_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+653,"inst_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+404,"pc_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+405,"inst_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+406,"rdata2_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+407,"rd_addr_from_IDU_to_EXU", false,-1, 4,0);
    tracep->declBus(c+408,"pc_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+409,"inst_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+410,"result_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+411,"rdata2_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+412,"rd_addr_from_EXU_to_MEM", false,-1, 4,0);
    tracep->declBus(c+669,"dmem_addr_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+643,"dmem_rdata_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+413,"result_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+414,"rd_addr_from_MEM_to_WBU", false,-1, 4,0);
    tracep->declBus(c+415,"pc_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+416,"inst_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+417,"inst_from_WBU_to_MEM", false,-1, 31,0);
    tracep->declBit(c+674,"mem_access_done", false,-1);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+418,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+419,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+420,"waddr", false,-1, 4,0);
    tracep->declBus(c+421,"rdata1", false,-1, 31,0);
    tracep->declBus(c+406,"rdata2", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+399,"Op1", false,-1, 31,0);
    tracep->declBus(c+400,"Op2", false,-1, 31,0);
    tracep->declBus(c+404,"pc_i", false,-1, 31,0);
    tracep->declBus(c+405,"inst_i", false,-1, 31,0);
    tracep->declBus(c+406,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+407,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBus(c+669,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+409,"inst_o", false,-1, 31,0);
    tracep->declBus(c+408,"pc_o", false,-1, 31,0);
    tracep->declBus(c+410,"result", false,-1, 31,0);
    tracep->declBus(c+411,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+412,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+672,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+673,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+75,"state", false,-1, 1,0);
    tracep->declBus(c+422,"alu_op", false,-1, 4,0);
    tracep->declBus(c+423,"funct3", false,-1, 2,0);
    tracep->declBus(c+424,"funct7", false,-1, 6,0);
    tracep->declBus(c+425,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+399,"A", false,-1, 31,0);
    tracep->declBus(c+400,"B", false,-1, 31,0);
    tracep->declBus(c+422,"ALUFun", false,-1, 4,0);
    tracep->declBus(c+410,"Result", false,-1, 31,0);
    tracep->declBus(c+426,"add_result", false,-1, 31,0);
    tracep->declBus(c+427,"sub_result", false,-1, 31,0);
    tracep->declBus(c+428,"slt_result", false,-1, 31,0);
    tracep->declBus(c+429,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+430,"xor_result", false,-1, 31,0);
    tracep->declBus(c+431,"or_result", false,-1, 31,0);
    tracep->declBus(c+432,"and_result", false,-1, 31,0);
    tracep->declBus(c+433,"sll_result", false,-1, 31,0);
    tracep->declBus(c+434,"srl_result", false,-1, 31,0);
    tracep->declBus(c+435,"sra_result", false,-1, 31,0);
    tracep->declBus(c+659,"op1_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu_mux ");
    tracep->declBus(c+696,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+697,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+410,"out", false,-1, 31,0);
    tracep->declBus(c+422,"key", false,-1, 4,0);
    tracep->declArray(c+436,"lut", false,-1, 406,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+696,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+697,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+410,"out", false,-1, 31,0);
    tracep->declBus(c+422,"key", false,-1, 4,0);
    tracep->declBus(c+700,"default_out", false,-1, 31,0);
    tracep->declArray(c+436,"lut", false,-1, 406,0);
    tracep->declBus(c+701,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+449+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+471+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+482,"lut_out", false,-1, 31,0);
    tracep->declBit(c+483,"hit", false,-1);
    tracep->declBus(c+702,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inst_reg_EXU ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+405,"din", false,-1, 31,0);
    tracep->declBus(c+409,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_EXU ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+404,"din", false,-1, 31,0);
    tracep->declBus(c+408,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_EXU ");
    tracep->declBus(c+697,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+705,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+407,"din", false,-1, 4,0);
    tracep->declBus(c+412,"dout", false,-1, 4,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_EXU ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+406,"din", false,-1, 31,0);
    tracep->declBus(c+411,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+653,"inst_i", false,-1, 31,0);
    tracep->declBus(c+652,"pc_i", false,-1, 31,0);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBus(c+421,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+406,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+418,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+419,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+407,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+399,"Op1", false,-1, 31,0);
    tracep->declBus(c+400,"Op2", false,-1, 31,0);
    tracep->declBus(c+404,"pc_o", false,-1, 31,0);
    tracep->declBus(c+405,"inst_o", false,-1, 31,0);
    tracep->declBus(c+406,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBus(c+401,"jump_reg_target_o", false,-1, 31,0);
    tracep->declBus(c+402,"br_target_o", false,-1, 31,0);
    tracep->declBus(c+403,"jmp_target_o", false,-1, 31,0);
    tracep->declBus(c+398,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+682,"idu_state_debug", false,-1, 1,0);
    tracep->declBus(c+76,"state", false,-1, 1,0);
    tracep->declBit(c+484,"br_eq", false,-1);
    tracep->declBit(c+485,"br_lt", false,-1);
    tracep->declBit(c+486,"br_ltu", false,-1);
    tracep->declBus(c+487,"Op1Sel", false,-1, 1,0);
    tracep->declBus(c+488,"Op2Sel", false,-1, 1,0);
    tracep->declBus(c+407,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+489,"imm_i", false,-1, 11,0);
    tracep->declBus(c+490,"imm_s", false,-1, 11,0);
    tracep->declBus(c+491,"imm_b", false,-1, 11,0);
    tracep->declBus(c+492,"imm_u", false,-1, 19,0);
    tracep->declBus(c+493,"imm_j", false,-1, 19,0);
    tracep->declBus(c+494,"imm_i_sext", false,-1, 31,0);
    tracep->declBus(c+495,"imm_s_sext", false,-1, 31,0);
    tracep->declBus(c+496,"imm_b_sext", false,-1, 31,0);
    tracep->declBus(c+497,"imm_u_sext", false,-1, 31,0);
    tracep->declBus(c+498,"imm_j_sext", false,-1, 31,0);
    tracep->declBus(c+499,"funct3", false,-1, 2,0);
    tracep->declBus(c+500,"funct7", false,-1, 6,0);
    tracep->declBus(c+501,"opcode", false,-1, 6,0);
    tracep->declBit(c+502,"branch_taken", false,-1);
    tracep->pushNamePrefix("b_taken_mux ");
    tracep->declBus(c+706,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+707,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+708,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+502,"out", false,-1, 0,0);
    tracep->declBus(c+499,"key", false,-1, 2,0);
    tracep->declBus(c+503,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+706,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+707,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+708,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+502,"out", false,-1, 0,0);
    tracep->declBus(c+499,"key", false,-1, 2,0);
    tracep->declBus(c+709,"default_out", false,-1, 0,0);
    tracep->declBus(c+503,"lut", false,-1, 23,0);
    tracep->declBus(c+710,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+504+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+510+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+516,"lut_out", false,-1, 0,0);
    tracep->declBit(c+517,"hit", false,-1);
    tracep->declBus(c+711,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_reg_IDU ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+653,"din", false,-1, 31,0);
    tracep->declBus(c+405,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op1_sel_mux ");
    tracep->declBus(c+712,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+712,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+399,"out", false,-1, 31,0);
    tracep->declBus(c+487,"key", false,-1, 1,0);
    tracep->declArray(c+518,"lut", false,-1, 67,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+712,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+712,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+399,"out", false,-1, 31,0);
    tracep->declBus(c+487,"key", false,-1, 1,0);
    tracep->declBus(c+700,"default_out", false,-1, 31,0);
    tracep->declArray(c+518,"lut", false,-1, 67,0);
    tracep->declBus(c+713,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+521+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+525+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+527,"lut_out", false,-1, 31,0);
    tracep->declBit(c+528,"hit", false,-1);
    tracep->declBus(c+714,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("op2_sel_mux ");
    tracep->declBus(c+710,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+712,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+400,"out", false,-1, 31,0);
    tracep->declBus(c+488,"key", false,-1, 1,0);
    tracep->declArray(c+529,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+710,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+712,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+400,"out", false,-1, 31,0);
    tracep->declBus(c+488,"key", false,-1, 1,0);
    tracep->declBus(c+700,"default_out", false,-1, 31,0);
    tracep->declArray(c+529,"lut", false,-1, 135,0);
    tracep->declBus(c+713,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+534+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+542+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+546,"lut_out", false,-1, 31,0);
    tracep->declBit(c+547,"hit", false,-1);
    tracep->declBus(c+715,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_IDU ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+652,"din", false,-1, 31,0);
    tracep->declBus(c+404,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+398,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+401,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+402,"br_target", false,-1, 31,0);
    tracep->declBus(c+403,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+684,"pc_wen", false,-1);
    tracep->declBus(c+652,"pc_o", false,-1, 31,0);
    tracep->declBus(c+653,"inst_o", false,-1, 31,0);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBit(c+704,"idu_ready", false,-1);
    tracep->declBus(c+677,"state_debug", false,-1, 2,0);
    tracep->declBit(c+678,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+679,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+77,"state", false,-1, 2,0);
    tracep->declBus(c+716,"IDLE", false,-1, 2,0);
    tracep->declBus(c+717,"FETCH_REQ", false,-1, 2,0);
    tracep->declBus(c+718,"FETCH_WAIT", false,-1, 2,0);
    tracep->declBus(c+719,"FETCH_DONE", false,-1, 2,0);
    tracep->declBus(c+548,"pc", false,-1, 31,0);
    tracep->declBus(c+549,"pc_next", false,-1, 31,0);
    tracep->declBus(c+550,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+720,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+700,"exception", false,-1, 31,0);
    tracep->declBus(c+78,"rdata", false,-1, 31,0);
    tracep->declBit(c+79,"rvalid", false,-1);
    tracep->declBus(c+80,"if_inst_buffer", false,-1, 31,0);
    tracep->declBit(c+81,"arvalid", false,-1);
    tracep->declBit(c+82,"arready", false,-1);
    tracep->declBit(c+83,"rready", false,-1);
    tracep->pushNamePrefix("axi4_ifu ");
    tracep->declBus(c+698,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBit(c+709,"awvalid", false,-1);
    tracep->declBit(c+84,"awready", false,-1);
    tracep->declBus(c+700,"awaddr", false,-1, 31,0);
    tracep->declBit(c+709,"wvalid", false,-1);
    tracep->declBit(c+85,"wready", false,-1);
    tracep->declBus(c+700,"wdata", false,-1, 31,0);
    tracep->declBus(c+721,"wstrb", false,-1, 7,0);
    tracep->declBit(c+86,"bvalid", false,-1);
    tracep->declBit(c+709,"bready", false,-1);
    tracep->declBus(c+87,"bresp", false,-1, 1,0);
    tracep->declBit(c+81,"arvalid", false,-1);
    tracep->declBit(c+82,"arready", false,-1);
    tracep->declBus(c+548,"araddr", false,-1, 31,0);
    tracep->declBit(c+79,"rvalid", false,-1);
    tracep->declBit(c+83,"rready", false,-1);
    tracep->declBus(c+78,"rdata", false,-1, 31,0);
    tracep->declBus(c+88,"rresp", false,-1, 1,0);
    tracep->declBus(c+679,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+89,"sram_data_out", false,-1, 31,0);
    tracep->declBit(c+90,"sram_rd_res_valid", false,-1);
    tracep->declBit(c+91,"sram_wt_res_valid", false,-1);
    tracep->declBus(c+92,"state", false,-1, 1,0);
    tracep->declBus(c+722,"IDLE", false,-1, 1,0);
    tracep->declBus(c+723,"WRITE", false,-1, 1,0);
    tracep->declBus(c+724,"READ", false,-1, 1,0);
    tracep->declBus(c+93,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+725,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+726,"wstrb_reg", false,-1, 7,0);
    tracep->declBit(c+94,"rd_req_valid", false,-1);
    tracep->declBit(c+95,"wt_req_valid", false,-1);
    tracep->pushNamePrefix("sram_inst ");
    tracep->declBus(c+727,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBit(c+94,"rd_req_valid", false,-1);
    tracep->declBus(c+93,"addr", false,-1, 31,0);
    tracep->declBus(c+89,"data_out", false,-1, 31,0);
    tracep->declBit(c+90,"rd_res_valid", false,-1);
    tracep->declBit(c+95,"wt_req_valid", false,-1);
    tracep->declBus(c+93,"waddr", false,-1, 31,0);
    tracep->declBus(c+725,"wdata", false,-1, 31,0);
    tracep->declBus(c+726,"wmask", false,-1, 7,0);
    tracep->declBit(c+91,"wt_res_valid", false,-1);
    tracep->declBus(c+96,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+97,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+98,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+99,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+100,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+101,"wt_req_valid_delayed", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 20; ++i) {
        tracep->declBus(c+102+i*1,"addr_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 20; ++i) {
        tracep->declBit(c+122+i*1,"rd_req_valid_pipeline", true,(i+0));
    }
    for (int i = 0; i < 20; ++i) {
        tracep->declBus(c+142+i*1,"waddr_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 20; ++i) {
        tracep->declBus(c+162+i*1,"wdata_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 20; ++i) {
        tracep->declBus(c+182+i*1,"wmask_pipeline", true,(i+0), 7,0);
    }
    for (int i = 0; i < 20; ++i) {
        tracep->declBit(c+202+i*1,"wt_req_valid_pipeline", true,(i+0));
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+222,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+223,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("mux_pc_sel ");
    tracep->declBus(c+697,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+707,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+549,"out", false,-1, 31,0);
    tracep->declBus(c+398,"key", false,-1, 2,0);
    tracep->declArray(c+551,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+697,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+707,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+549,"out", false,-1, 31,0);
    tracep->declBus(c+398,"key", false,-1, 2,0);
    tracep->declBus(c+700,"default_out", false,-1, 31,0);
    tracep->declArray(c+551,"lut", false,-1, 174,0);
    tracep->declBus(c+728,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+557+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+567+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+572,"lut_out", false,-1, 31,0);
    tracep->declBit(c+573,"hit", false,-1);
    tracep->declBus(c+729,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+549,"din", false,-1, 31,0);
    tracep->declBus(c+548,"dout", false,-1, 31,0);
    tracep->declBit(c+684,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+408,"pc_i", false,-1, 31,0);
    tracep->declBus(c+409,"inst_i", false,-1, 31,0);
    tracep->declBus(c+410,"result_i", false,-1, 31,0);
    tracep->declBus(c+669,"dmem_addr_i", false,-1, 31,0);
    tracep->declBus(c+411,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+412,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+416,"inst_o", false,-1, 31,0);
    tracep->declBus(c+415,"pc_o", false,-1, 31,0);
    tracep->declBus(c+413,"result_o", false,-1, 31,0);
    tracep->declBus(c+643,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+414,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+674,"mem_access_done", false,-1);
    tracep->declBit(c+668,"mem_active", false,-1);
    tracep->declBus(c+653,"inst_from_IFU", false,-1, 31,0);
    tracep->declBus(c+417,"inst_from_WBU", false,-1, 31,0);
    tracep->declBit(c+676,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+680,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+681,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+224,"state", false,-1, 1,0);
    tracep->declBus(c+225,"dmem_rdata_raw", false,-1, 31,0);
    tracep->declBus(c+574,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+575,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+576,"wmask", false,-1, 7,0);
    tracep->declBus(c+577,"ctl_mem_access", false,-1, 2,0);
    tracep->declBit(c+226,"mem_en", false,-1);
    tracep->declBit(c+227,"mem_wen", false,-1);
    tracep->declBus(c+578,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+574,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+228,"rvalid", false,-1);
    tracep->declBit(c+229,"wt_res_valid", false,-1);
    tracep->declBit(c+230,"arvalid", false,-1);
    tracep->declBit(c+231,"wt_req_valid", false,-1);
    tracep->declBit(c+232,"arready", false,-1);
    tracep->declBit(c+233,"awready", false,-1);
    tracep->declBit(c+234,"rready", false,-1);
    tracep->declBit(c+235,"wready", false,-1);
    tracep->declBit(c+236,"bready", false,-1);
    tracep->declBus(c+579,"funct3", false,-1, 2,0);
    tracep->declBus(c+580,"funct7", false,-1, 6,0);
    tracep->declBus(c+581,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+225,"data_in", false,-1, 31,0);
    tracep->declBus(c+578,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+577,"control", false,-1, 2,0);
    tracep->declBus(c+643,"data_out", false,-1, 31,0);
    tracep->declBus(c+582,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+644,"shifted_data", false,-1, 31,0);
    tracep->declBus(c+645,"zero_ext_byte", false,-1, 31,0);
    tracep->declBus(c+646,"zero_ext_half", false,-1, 31,0);
    tracep->declBus(c+647,"sign_ext_byte", false,-1, 31,0);
    tracep->declBus(c+648,"sign_ext_half", false,-1, 31,0);
    tracep->pushNamePrefix("mem_mux ");
    tracep->declBus(c+697,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+707,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+643,"out", false,-1, 31,0);
    tracep->declBus(c+577,"key", false,-1, 2,0);
    tracep->declArray(c+376,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+697,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+707,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+643,"out", false,-1, 31,0);
    tracep->declBus(c+577,"key", false,-1, 2,0);
    tracep->declBus(c+700,"default_out", false,-1, 31,0);
    tracep->declArray(c+376,"lut", false,-1, 174,0);
    tracep->declBus(c+728,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+382+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+392+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+649,"lut_out", false,-1, 31,0);
    tracep->declBit(c+583,"hit", false,-1);
    tracep->declBus(c+729,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4_mem ");
    tracep->declBus(c+698,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBit(c+231,"awvalid", false,-1);
    tracep->declBit(c+233,"awready", false,-1);
    tracep->declBus(c+578,"awaddr", false,-1, 31,0);
    tracep->declBit(c+231,"wvalid", false,-1);
    tracep->declBit(c+235,"wready", false,-1);
    tracep->declBus(c+575,"wdata", false,-1, 31,0);
    tracep->declBus(c+576,"wstrb", false,-1, 7,0);
    tracep->declBit(c+229,"bvalid", false,-1);
    tracep->declBit(c+236,"bready", false,-1);
    tracep->declBus(c+237,"bresp", false,-1, 1,0);
    tracep->declBit(c+230,"arvalid", false,-1);
    tracep->declBit(c+232,"arready", false,-1);
    tracep->declBus(c+578,"araddr", false,-1, 31,0);
    tracep->declBit(c+228,"rvalid", false,-1);
    tracep->declBit(c+234,"rready", false,-1);
    tracep->declBus(c+225,"rdata", false,-1, 31,0);
    tracep->declBus(c+238,"rresp", false,-1, 1,0);
    tracep->declBus(c+681,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+239,"sram_data_out", false,-1, 31,0);
    tracep->declBit(c+240,"sram_rd_res_valid", false,-1);
    tracep->declBit(c+241,"sram_wt_res_valid", false,-1);
    tracep->declBus(c+242,"state", false,-1, 1,0);
    tracep->declBus(c+722,"IDLE", false,-1, 1,0);
    tracep->declBus(c+723,"WRITE", false,-1, 1,0);
    tracep->declBus(c+724,"READ", false,-1, 1,0);
    tracep->declBus(c+243,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+244,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+245,"wstrb_reg", false,-1, 7,0);
    tracep->declBit(c+246,"rd_req_valid", false,-1);
    tracep->declBit(c+247,"wt_req_valid", false,-1);
    tracep->pushNamePrefix("sram_inst ");
    tracep->declBus(c+727,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBit(c+246,"rd_req_valid", false,-1);
    tracep->declBus(c+243,"addr", false,-1, 31,0);
    tracep->declBus(c+239,"data_out", false,-1, 31,0);
    tracep->declBit(c+240,"rd_res_valid", false,-1);
    tracep->declBit(c+247,"wt_req_valid", false,-1);
    tracep->declBus(c+243,"waddr", false,-1, 31,0);
    tracep->declBus(c+244,"wdata", false,-1, 31,0);
    tracep->declBus(c+245,"wmask", false,-1, 7,0);
    tracep->declBit(c+241,"wt_res_valid", false,-1);
    tracep->declBus(c+248,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+249,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+250,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+251,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+252,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+253,"wt_req_valid_delayed", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 20; ++i) {
        tracep->declBus(c+254+i*1,"addr_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 20; ++i) {
        tracep->declBit(c+274+i*1,"rd_req_valid_pipeline", true,(i+0));
    }
    for (int i = 0; i < 20; ++i) {
        tracep->declBus(c+294+i*1,"waddr_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 20; ++i) {
        tracep->declBus(c+314+i*1,"wdata_pipeline", true,(i+0), 31,0);
    }
    for (int i = 0; i < 20; ++i) {
        tracep->declBus(c+334+i*1,"wmask_pipeline", true,(i+0), 7,0);
    }
    for (int i = 0; i < 20; ++i) {
        tracep->declBit(c+354+i*1,"wt_req_valid_pipeline", true,(i+0));
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+374,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+375,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("dmem_addr_reg_MEM ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+669,"din", false,-1, 31,0);
    tracep->declBus(c+578,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_MEM ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+409,"din", false,-1, 31,0);
    tracep->declBus(c+416,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_acces_ctl_mux ");
    tracep->declBus(c+730,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+731,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+707,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+577,"out", false,-1, 2,0);
    tracep->declBus(c+584,"key", false,-1, 9,0);
    tracep->declArray(c+732,"lut", false,-1, 103,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+730,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+731,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+707,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+577,"out", false,-1, 2,0);
    tracep->declBus(c+584,"key", false,-1, 9,0);
    tracep->declBus(c+716,"default_out", false,-1, 2,0);
    tracep->declArray(c+732,"lut", false,-1, 103,0);
    tracep->declBus(c+736,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+42+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+50+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+585,"lut_out", false,-1, 2,0);
    tracep->declBit(c+586,"hit", false,-1);
    tracep->declBus(c+737,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_MEM ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+408,"din", false,-1, 31,0);
    tracep->declBus(c+415,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_MEM ");
    tracep->declBus(c+697,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+705,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+412,"din", false,-1, 4,0);
    tracep->declBus(c+414,"dout", false,-1, 4,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_MEM ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+410,"din", false,-1, 31,0);
    tracep->declBus(c+413,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_MEM ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+411,"din", false,-1, 31,0);
    tracep->declBus(c+574,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wmask_gen ");
    tracep->declBus(c+577,"control", false,-1, 2,0);
    tracep->declBus(c+578,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+574,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+575,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+576,"wmask", false,-1, 7,0);
    tracep->declBus(c+582,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+587,"base_mask", false,-1, 7,0);
    tracep->declBus(c+576,"shifted_mask", false,-1, 7,0);
    tracep->pushNamePrefix("mem_mux_write ");
    tracep->declBus(c+707,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+707,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+730,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+587,"out", false,-1, 7,0);
    tracep->declBus(c+577,"key", false,-1, 2,0);
    tracep->declQuad(c+738,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+707,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+707,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+730,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+587,"out", false,-1, 7,0);
    tracep->declBus(c+577,"key", false,-1, 2,0);
    tracep->declBus(c+721,"default_out", false,-1, 7,0);
    tracep->declQuad(c+738,"lut", false,-1, 32,0);
    tracep->declBus(c+696,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+58+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+61+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+64+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+588,"lut_out", false,-1, 7,0);
    tracep->declBit(c+589,"hit", false,-1);
    tracep->declBus(c+740,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+697,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBus(c+397,"wdata", false,-1, 31,0);
    tracep->declBus(c+420,"waddr", false,-1, 4,0);
    tracep->declBit(c+642,"wen", false,-1);
    tracep->declBus(c+418,"raddr1", false,-1, 4,0);
    tracep->declBus(c+419,"raddr2", false,-1, 4,0);
    tracep->declBus(c+421,"rdata1", false,-1, 31,0);
    tracep->declBus(c+406,"rdata2", false,-1, 31,0);
    tracep->declBus(c+655,"x2_debug", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+590+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+67,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+397,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+420,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+642,"rf_we", false,-1);
    tracep->declBus(c+415,"pc_i", false,-1, 31,0);
    tracep->declBus(c+416,"inst_i", false,-1, 31,0);
    tracep->declBus(c+413,"result_i", false,-1, 31,0);
    tracep->declBus(c+643,"dmem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+414,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+674,"mem_access_done", false,-1);
    tracep->declBit(c+684,"pc_wen", false,-1);
    tracep->declBus(c+653,"inst_from_IFU", false,-1, 31,0);
    tracep->declBit(c+662,"wbu_active", false,-1);
    tracep->declBus(c+417,"inst_o", false,-1, 31,0);
    tracep->declBus(c+664,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+665,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+666,"opcode_debug", false,-1, 6,0);
    tracep->declBus(c+671,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+685,"state", false,-1, 1,0);
    tracep->declBus(c+664,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+622,"pc_o", false,-1, 31,0);
    tracep->declBus(c+623,"result_o", false,-1, 31,0);
    tracep->declBus(c+741,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+624,"dmem_rdata_o", false,-1, 31,0);
    tracep->declBus(c+625,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+626,"funct3", false,-1, 2,0);
    tracep->declBus(c+627,"funct7", false,-1, 6,0);
    tracep->declBus(c+666,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("dmem_rdata_reg_WBU ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+643,"din", false,-1, 31,0);
    tracep->declBus(c+624,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_WBU ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+416,"din", false,-1, 31,0);
    tracep->declBus(c+417,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_WBU ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+415,"din", false,-1, 31,0);
    tracep->declBus(c+622,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_WBU ");
    tracep->declBus(c+697,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+705,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+414,"din", false,-1, 4,0);
    tracep->declBus(c+420,"dout", false,-1, 4,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_WBU ");
    tracep->declBus(c+698,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+703,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+650,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+413,"din", false,-1, 31,0);
    tracep->declBus(c+623,"dout", false,-1, 31,0);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_mux ");
    tracep->declBus(c+710,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+712,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+397,"out", false,-1, 31,0);
    tracep->declBus(c+625,"key", false,-1, 1,0);
    tracep->declBus(c+700,"default_out", false,-1, 31,0);
    tracep->declArray(c+686,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+710,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+712,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+708,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+397,"out", false,-1, 31,0);
    tracep->declBus(c+625,"key", false,-1, 1,0);
    tracep->declBus(c+700,"default_out", false,-1, 31,0);
    tracep->declArray(c+686,"lut", false,-1, 135,0);
    tracep->declBus(c+713,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+628+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+68+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+636+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+640,"lut_out", false,-1, 31,0);
    tracep->declBit(c+641,"hit", false,-1);
    tracep->declBus(c+715,"i", false,-1, 31,0);
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
                             [0x13U]),32);
    bufp->fullBit(oldp+97,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline
                           [0x13U]));
    bufp->fullIData(oldp+98,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline
                             [0x13U]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline
                             [0x13U]),32);
    bufp->fullCData(oldp+100,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline
                              [0x13U]),8);
    bufp->fullBit(oldp+101,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline
                            [0x13U]));
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
    bufp->fullIData(oldp+112,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[10]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[11]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[12]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[13]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[14]),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[15]),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[16]),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[17]),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[18]),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[19]),32);
    bufp->fullBit(oldp+122,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[0]));
    bufp->fullBit(oldp+123,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[1]));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[2]));
    bufp->fullBit(oldp+125,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[3]));
    bufp->fullBit(oldp+126,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[4]));
    bufp->fullBit(oldp+127,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[5]));
    bufp->fullBit(oldp+128,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[6]));
    bufp->fullBit(oldp+129,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[7]));
    bufp->fullBit(oldp+130,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[8]));
    bufp->fullBit(oldp+131,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[9]));
    bufp->fullBit(oldp+132,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[10]));
    bufp->fullBit(oldp+133,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[11]));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[12]));
    bufp->fullBit(oldp+135,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[13]));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[14]));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[15]));
    bufp->fullBit(oldp+138,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[16]));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[17]));
    bufp->fullBit(oldp+140,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[18]));
    bufp->fullBit(oldp+141,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[19]));
    bufp->fullIData(oldp+142,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[0]),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[1]),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[2]),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[3]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[4]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[5]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[6]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[7]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[8]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[9]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[10]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[11]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[12]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[13]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[14]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[15]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[16]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[17]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[18]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[19]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[0]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[1]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[2]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[3]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[4]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[5]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[6]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[7]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[8]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[9]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[10]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[11]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[12]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[13]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[14]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[15]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[16]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[17]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[18]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[19]),32);
    bufp->fullCData(oldp+182,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[0]),8);
    bufp->fullCData(oldp+183,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[1]),8);
    bufp->fullCData(oldp+184,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[2]),8);
    bufp->fullCData(oldp+185,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[3]),8);
    bufp->fullCData(oldp+186,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[4]),8);
    bufp->fullCData(oldp+187,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[5]),8);
    bufp->fullCData(oldp+188,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[6]),8);
    bufp->fullCData(oldp+189,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[7]),8);
    bufp->fullCData(oldp+190,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[8]),8);
    bufp->fullCData(oldp+191,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[9]),8);
    bufp->fullCData(oldp+192,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[10]),8);
    bufp->fullCData(oldp+193,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[11]),8);
    bufp->fullCData(oldp+194,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[12]),8);
    bufp->fullCData(oldp+195,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[13]),8);
    bufp->fullCData(oldp+196,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[14]),8);
    bufp->fullCData(oldp+197,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[15]),8);
    bufp->fullCData(oldp+198,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[16]),8);
    bufp->fullCData(oldp+199,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[17]),8);
    bufp->fullCData(oldp+200,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[18]),8);
    bufp->fullCData(oldp+201,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[19]),8);
    bufp->fullBit(oldp+202,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[0]));
    bufp->fullBit(oldp+203,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[1]));
    bufp->fullBit(oldp+204,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[2]));
    bufp->fullBit(oldp+205,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[3]));
    bufp->fullBit(oldp+206,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[4]));
    bufp->fullBit(oldp+207,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[5]));
    bufp->fullBit(oldp+208,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[6]));
    bufp->fullBit(oldp+209,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[7]));
    bufp->fullBit(oldp+210,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[8]));
    bufp->fullBit(oldp+211,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[9]));
    bufp->fullBit(oldp+212,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[10]));
    bufp->fullBit(oldp+213,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[11]));
    bufp->fullBit(oldp+214,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[12]));
    bufp->fullBit(oldp+215,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[13]));
    bufp->fullBit(oldp+216,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[14]));
    bufp->fullBit(oldp+217,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[15]));
    bufp->fullBit(oldp+218,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[16]));
    bufp->fullBit(oldp+219,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[17]));
    bufp->fullBit(oldp+220,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[18]));
    bufp->fullBit(oldp+221,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[19]));
    bufp->fullIData(oldp+222,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+224,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__state),2);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw),32);
    bufp->fullBit(oldp+226,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en));
    bufp->fullBit(oldp+227,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen));
    bufp->fullBit(oldp+228,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rvalid));
    bufp->fullBit(oldp+229,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wt_res_valid));
    bufp->fullBit(oldp+230,(((~ (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen)) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en))));
    bufp->fullBit(oldp+231,(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen))));
    bufp->fullBit(oldp+232,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__arready));
    bufp->fullBit(oldp+233,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__awready));
    bufp->fullBit(oldp+234,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rready));
    bufp->fullBit(oldp+235,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wready));
    bufp->fullBit(oldp+236,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__bready));
    bufp->fullCData(oldp+237,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__bresp),2);
    bufp->fullCData(oldp+238,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__rresp),2);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_data_out),32);
    bufp->fullBit(oldp+240,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_rd_res_valid));
    bufp->fullBit(oldp+241,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_wt_res_valid));
    bufp->fullCData(oldp+242,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__state),2);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__addr_reg),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wdata_reg),32);
    bufp->fullCData(oldp+245,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wstrb_reg),8);
    bufp->fullBit(oldp+246,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__rd_req_valid));
    bufp->fullBit(oldp+247,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wt_req_valid));
    bufp->fullIData(oldp+248,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline
                              [0x13U]),32);
    bufp->fullBit(oldp+249,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline
                            [0x13U]));
    bufp->fullIData(oldp+250,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline
                              [0x13U]),32);
    bufp->fullIData(oldp+251,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline
                              [0x13U]),32);
    bufp->fullCData(oldp+252,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline
                              [0x13U]),8);
    bufp->fullBit(oldp+253,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline
                            [0x13U]));
    bufp->fullIData(oldp+254,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[0]),32);
    bufp->fullIData(oldp+255,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[1]),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[2]),32);
    bufp->fullIData(oldp+257,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[3]),32);
    bufp->fullIData(oldp+258,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[4]),32);
    bufp->fullIData(oldp+259,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[5]),32);
    bufp->fullIData(oldp+260,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[6]),32);
    bufp->fullIData(oldp+261,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[7]),32);
    bufp->fullIData(oldp+262,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[8]),32);
    bufp->fullIData(oldp+263,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[9]),32);
    bufp->fullIData(oldp+264,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[10]),32);
    bufp->fullIData(oldp+265,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[11]),32);
    bufp->fullIData(oldp+266,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[12]),32);
    bufp->fullIData(oldp+267,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[13]),32);
    bufp->fullIData(oldp+268,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[14]),32);
    bufp->fullIData(oldp+269,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[15]),32);
    bufp->fullIData(oldp+270,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[16]),32);
    bufp->fullIData(oldp+271,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[17]),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[18]),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline[19]),32);
    bufp->fullBit(oldp+274,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[0]));
    bufp->fullBit(oldp+275,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[1]));
    bufp->fullBit(oldp+276,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[2]));
    bufp->fullBit(oldp+277,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[3]));
    bufp->fullBit(oldp+278,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[4]));
    bufp->fullBit(oldp+279,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[5]));
    bufp->fullBit(oldp+280,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[6]));
    bufp->fullBit(oldp+281,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[7]));
    bufp->fullBit(oldp+282,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[8]));
    bufp->fullBit(oldp+283,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[9]));
    bufp->fullBit(oldp+284,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[10]));
    bufp->fullBit(oldp+285,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[11]));
    bufp->fullBit(oldp+286,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[12]));
    bufp->fullBit(oldp+287,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[13]));
    bufp->fullBit(oldp+288,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[14]));
    bufp->fullBit(oldp+289,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[15]));
    bufp->fullBit(oldp+290,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[16]));
    bufp->fullBit(oldp+291,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[17]));
    bufp->fullBit(oldp+292,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[18]));
    bufp->fullBit(oldp+293,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline[19]));
    bufp->fullIData(oldp+294,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[0]),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[1]),32);
    bufp->fullIData(oldp+296,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[2]),32);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[3]),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[4]),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[5]),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[6]),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[7]),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[8]),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[9]),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[10]),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[11]),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[12]),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[13]),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[14]),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[15]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[16]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[17]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[18]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline[19]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[0]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[1]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[2]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[3]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[4]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[5]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[6]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[7]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[8]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[9]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[10]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[11]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[12]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[13]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[14]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[15]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[16]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[17]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[18]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline[19]),32);
    bufp->fullCData(oldp+334,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[0]),8);
    bufp->fullCData(oldp+335,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[1]),8);
    bufp->fullCData(oldp+336,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[2]),8);
    bufp->fullCData(oldp+337,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[3]),8);
    bufp->fullCData(oldp+338,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[4]),8);
    bufp->fullCData(oldp+339,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[5]),8);
    bufp->fullCData(oldp+340,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[6]),8);
    bufp->fullCData(oldp+341,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[7]),8);
    bufp->fullCData(oldp+342,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[8]),8);
    bufp->fullCData(oldp+343,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[9]),8);
    bufp->fullCData(oldp+344,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[10]),8);
    bufp->fullCData(oldp+345,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[11]),8);
    bufp->fullCData(oldp+346,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[12]),8);
    bufp->fullCData(oldp+347,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[13]),8);
    bufp->fullCData(oldp+348,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[14]),8);
    bufp->fullCData(oldp+349,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[15]),8);
    bufp->fullCData(oldp+350,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[16]),8);
    bufp->fullCData(oldp+351,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[17]),8);
    bufp->fullCData(oldp+352,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[18]),8);
    bufp->fullCData(oldp+353,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline[19]),8);
    bufp->fullBit(oldp+354,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[0]));
    bufp->fullBit(oldp+355,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[1]));
    bufp->fullBit(oldp+356,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[2]));
    bufp->fullBit(oldp+357,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[3]));
    bufp->fullBit(oldp+358,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[4]));
    bufp->fullBit(oldp+359,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[5]));
    bufp->fullBit(oldp+360,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[6]));
    bufp->fullBit(oldp+361,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[7]));
    bufp->fullBit(oldp+362,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[8]));
    bufp->fullBit(oldp+363,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[9]));
    bufp->fullBit(oldp+364,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[10]));
    bufp->fullBit(oldp+365,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[11]));
    bufp->fullBit(oldp+366,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[12]));
    bufp->fullBit(oldp+367,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[13]));
    bufp->fullBit(oldp+368,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[14]));
    bufp->fullBit(oldp+369,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[15]));
    bufp->fullBit(oldp+370,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[16]));
    bufp->fullBit(oldp+371,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[17]));
    bufp->fullBit(oldp+372,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[18]));
    bufp->fullBit(oldp+373,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline[19]));
    bufp->fullIData(oldp+374,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk2__DOT__i),32);
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
    bufp->fullWData(oldp+376,(__Vtemp_hdb58eddb__0),175);
    bufp->fullQData(oldp+382,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+384,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+386,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+388,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+390,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+392,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyx_24120009_core__DOT__reg_write_data),32);
    bufp->fullCData(oldp+398,(vlSelf->ysyx_24120009_core__DOT__pc_sel),3);
    bufp->fullIData(oldp+399,(vlSelf->ysyx_24120009_core__DOT__Op1),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyx_24120009_core__DOT__Op2),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyx_24120009_core__DOT__jump_reg_target),32);
    bufp->fullIData(oldp+402,(vlSelf->ysyx_24120009_core__DOT__br_target),32);
    bufp->fullIData(oldp+403,(vlSelf->ysyx_24120009_core__DOT__jmp_target),32);
    bufp->fullIData(oldp+404,(vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+405,(vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+406,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU),32);
    bufp->fullCData(oldp+407,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 7U))),5);
    bufp->fullIData(oldp+408,(vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+409,(vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+410,(vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+411,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM),32);
    bufp->fullCData(oldp+412,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM),5);
    bufp->fullIData(oldp+413,(vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU),32);
    bufp->fullCData(oldp+414,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU),5);
    bufp->fullIData(oldp+415,(vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+416,(vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+417,(vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM),32);
    bufp->fullCData(oldp+418,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+419,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+420,(vlSelf->ysyx_24120009_core__DOT__waddr),5);
    bufp->fullIData(oldp+421,(vlSelf->ysyx_24120009_core__DOT__rdata1),32);
    bufp->fullCData(oldp+422,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op),5);
    bufp->fullCData(oldp+423,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+424,((vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+425,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)),7);
    bufp->fullIData(oldp+426,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               + vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+427,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               - vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+428,(vlSelf->__VdfgTmp_h9d12977d__0),32);
    bufp->fullIData(oldp+429,(vlSelf->__VdfgTmp_h9d0653ad__0),32);
    bufp->fullIData(oldp+430,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               ^ vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+431,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               | vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+432,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               & vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+433,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+434,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+435,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
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
    bufp->fullWData(oldp+436,(__Vtemp_hd74bf4d1__0),407);
    bufp->fullQData(oldp+449,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+451,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+453,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+455,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+457,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+459,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+461,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+463,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+465,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8]),37);
    bufp->fullQData(oldp+467,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9]),37);
    bufp->fullQData(oldp+469,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[10]),37);
    bufp->fullIData(oldp+471,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+472,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+473,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+474,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+475,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+476,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+477,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+479,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+480,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+481,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+482,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+483,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+484,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+485,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+486,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
    bufp->fullCData(oldp+487,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel),2);
    bufp->fullCData(oldp+488,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel),2);
    bufp->fullSData(oldp+489,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+490,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+491,(((0x800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+492,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+493,(((0x80000U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+494,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext),32);
    bufp->fullIData(oldp+495,((((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+496,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext),32);
    bufp->fullIData(oldp+497,((0xfffff000U & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),32);
    bufp->fullIData(oldp+498,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext),32);
    bufp->fullCData(oldp+499,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+500,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+501,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),7);
    bufp->fullBit(oldp+502,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken));
    bufp->fullIData(oldp+503,((0x28aceU | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq) 
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
    bufp->fullCData(oldp+504,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+505,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+506,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+507,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+508,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+509,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullBit(oldp+510,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+511,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+512,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+513,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+514,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+515,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+516,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+517,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+518,(__Vtemp_h3e4b9c5b__0),68);
    bufp->fullQData(oldp+521,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+523,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullIData(oldp+525,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+526,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+527,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+528,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+529,(__Vtemp_h4b1a9c47__0),136);
    bufp->fullQData(oldp+534,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+536,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+538,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+540,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+542,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+543,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+544,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+545,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+546,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+547,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+548,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+549,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next),32);
    bufp->fullIData(oldp+550,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)),32);
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
    bufp->fullWData(oldp+551,(__Vtemp_h47858337__0),175);
    bufp->fullQData(oldp+557,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+559,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+561,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+563,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+565,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+567,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+568,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+569,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+570,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+571,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+572,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+573,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+574,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o),32);
    bufp->fullIData(oldp+575,(((0x1fU >= (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                   << 3U)))
                                ? (vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o 
                                   << (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                << 3U)))
                                : 0U)),32);
    bufp->fullCData(oldp+576,((0xffU & ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask) 
                                        << (3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)))),8);
    bufp->fullCData(oldp+577,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access),3);
    bufp->fullIData(oldp+578,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o),32);
    bufp->fullCData(oldp+579,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+580,((vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+581,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)),7);
    bufp->fullCData(oldp+582,((3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)),2);
    bufp->fullBit(oldp+583,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+584,(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key),10);
    bufp->fullCData(oldp+585,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+586,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+587,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask),8);
    bufp->fullCData(oldp+588,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+589,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+590,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+591,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+592,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+593,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+594,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+595,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+596,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+597,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+598,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+599,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+600,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+601,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+602,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+603,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+604,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+605,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+606,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+607,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+609,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+610,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+611,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+612,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+613,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+614,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+615,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+616,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+617,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+618,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+619,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+620,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+621,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+622,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o),32);
    bufp->fullIData(oldp+623,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o),32);
    bufp->fullIData(oldp+624,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o),32);
    bufp->fullCData(oldp+625,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel),2);
    bufp->fullCData(oldp+626,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+627,((vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullQData(oldp+628,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+630,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+632,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+634,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+636,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+637,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+638,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+639,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+640,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+641,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit));
    bufp->fullBit(oldp+642,(vlSelf->ysyx_24120009_core__DOT__rf_we));
    bufp->fullIData(oldp+643,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+644,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullIData(oldp+645,((0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+646,((0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+647,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+648,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+649,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+650,(vlSelf->clk));
    bufp->fullBit(oldp+651,(vlSelf->rst));
    bufp->fullIData(oldp+652,(vlSelf->pc_debug),32);
    bufp->fullIData(oldp+653,(vlSelf->inst_debug),32);
    bufp->fullIData(oldp+654,(vlSelf->reg_write_data_debug),32);
    bufp->fullIData(oldp+655,(vlSelf->x2_debug),32);
    bufp->fullCData(oldp+656,(vlSelf->waddr_debug),5);
    bufp->fullBit(oldp+657,(vlSelf->mem_wen_debug));
    bufp->fullBit(oldp+658,(vlSelf->mem_en_debug));
    bufp->fullIData(oldp+659,(vlSelf->Op1_debug),32);
    bufp->fullIData(oldp+660,(vlSelf->Op2_debug),32);
    bufp->fullBit(oldp+661,(vlSelf->rf_we_debug));
    bufp->fullBit(oldp+662,(vlSelf->wbu_active_debug));
    bufp->fullIData(oldp+663,(vlSelf->imem_addr_debug),32);
    bufp->fullIData(oldp+664,(vlSelf->pc_plus4_debug),32);
    bufp->fullCData(oldp+665,(vlSelf->wb_sel_debug),2);
    bufp->fullCData(oldp+666,(vlSelf->opcode_debug),7);
    bufp->fullBit(oldp+667,(vlSelf->pc_wen_debug));
    bufp->fullBit(oldp+668,(vlSelf->mem_active_debug));
    bufp->fullIData(oldp+669,(vlSelf->result_from_EXU_to_MEM_debug),32);
    bufp->fullIData(oldp+670,(vlSelf->result_from_MEM_to_WBU_debug),32);
    bufp->fullIData(oldp+671,(vlSelf->result_from_WB_debug),32);
    bufp->fullCData(oldp+672,(vlSelf->alu_op_debug),5);
    bufp->fullIData(oldp+673,(vlSelf->inst_from_EXU_to_MEM_debug),32);
    bufp->fullBit(oldp+674,(vlSelf->mem_access_done_debug));
    bufp->fullIData(oldp+675,(vlSelf->dmem_rdata_from_MEM_to_WBU_debug),32);
    bufp->fullBit(oldp+676,(vlSelf->wt_res_valid_debug));
    bufp->fullCData(oldp+677,(vlSelf->ifu_state_debug),3);
    bufp->fullBit(oldp+678,(vlSelf->rd_res_valid_debug));
    bufp->fullCData(oldp+679,(vlSelf->axi4_ifu_state_debug),2);
    bufp->fullCData(oldp+680,(vlSelf->mem_ctl_state_debug),2);
    bufp->fullCData(oldp+681,(vlSelf->axi4_mem_state_debug),2);
    bufp->fullCData(oldp+682,(vlSelf->idu_state_debug),2);
    bufp->fullBit(oldp+683,(vlSelf->inst_valid_debug));
    bufp->fullBit(oldp+684,(vlSelf->ysyx_24120009_core__DOT__pc_wen));
    bufp->fullCData(oldp+685,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state),2);
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
    bufp->fullWData(oldp+686,(__Vtemp_h650a5f8e__0),136);
    bufp->fullCData(oldp+691,(vlSelf->ysyx_24120009_core__DOT__alu_op),5);
    bufp->fullBit(oldp+692,(vlSelf->ysyx_24120009_core__DOT__mem_en));
    bufp->fullBit(oldp+693,(vlSelf->ysyx_24120009_core__DOT__mem_wen));
    bufp->fullCData(oldp+694,(vlSelf->ysyx_24120009_core__DOT__wb_sel),2);
    bufp->fullIData(oldp+695,(vlSelf->ysyx_24120009_core__DOT__pc_plus4),32);
    bufp->fullIData(oldp+696,(0xbU),32);
    bufp->fullIData(oldp+697,(5U),32);
    bufp->fullIData(oldp+698,(0x20U),32);
    bufp->fullIData(oldp+699,(0U),32);
    bufp->fullIData(oldp+700,(0U),32);
    bufp->fullIData(oldp+701,(0x25U),32);
    bufp->fullIData(oldp+702,(0xbU),32);
    bufp->fullIData(oldp+703,(0x80000000U),32);
    bufp->fullBit(oldp+704,(1U));
    bufp->fullCData(oldp+705,(0U),5);
    bufp->fullIData(oldp+706,(6U),32);
    bufp->fullIData(oldp+707,(3U),32);
    bufp->fullIData(oldp+708,(1U),32);
    bufp->fullBit(oldp+709,(0U));
    bufp->fullIData(oldp+710,(4U),32);
    bufp->fullIData(oldp+711,(6U),32);
    bufp->fullIData(oldp+712,(2U),32);
    bufp->fullIData(oldp+713,(0x22U),32);
    bufp->fullIData(oldp+714,(2U),32);
    bufp->fullIData(oldp+715,(4U),32);
    bufp->fullCData(oldp+716,(0U),3);
    bufp->fullCData(oldp+717,(1U),3);
    bufp->fullCData(oldp+718,(2U),3);
    bufp->fullCData(oldp+719,(3U),3);
    bufp->fullIData(oldp+720,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__imem_addr),32);
    bufp->fullCData(oldp+721,(0U),8);
    bufp->fullCData(oldp+722,(0U),2);
    bufp->fullCData(oldp+723,(1U),2);
    bufp->fullCData(oldp+724,(2U),2);
    bufp->fullIData(oldp+725,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wdata_reg),32);
    bufp->fullCData(oldp+726,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wstrb_reg),8);
    bufp->fullIData(oldp+727,(0x14U),32);
    bufp->fullIData(oldp+728,(0x23U),32);
    bufp->fullIData(oldp+729,(5U),32);
    bufp->fullIData(oldp+730,(8U),32);
    bufp->fullIData(oldp+731,(0xaU),32);
    __Vtemp_ha516852c__0[0U] = 0x491808c9U;
    __Vtemp_ha516852c__0[1U] = 0xc9076a3U;
    __Vtemp_ha516852c__0[2U] = 0x903001c8U;
    __Vtemp_ha516852c__0[3U] = 6U;
    bufp->fullWData(oldp+732,(__Vtemp_ha516852c__0),104);
    bufp->fullIData(oldp+736,(0xdU),32);
    bufp->fullIData(oldp+737,(8U),32);
    bufp->fullQData(oldp+738,(0x83c81801ULL),33);
    bufp->fullIData(oldp+740,(3U),32);
    bufp->fullIData(oldp+741,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_addr_o),32);
}
