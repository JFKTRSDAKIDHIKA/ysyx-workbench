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
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+388,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+389,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+390,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+391,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+392,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+393,"mem_wen_debug", false,-1);
    tracep->declBit(c+394,"mem_en_debug", false,-1);
    tracep->declBus(c+395,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+396,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+397,"rf_we_debug", false,-1);
    tracep->declBit(c+398,"wbu_active_debug", false,-1);
    tracep->declBus(c+399,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+400,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+401,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+402,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+403,"pc_wen_debug", false,-1);
    tracep->declBit(c+404,"mem_active_debug", false,-1);
    tracep->declBus(c+405,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+406,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+407,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+408,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+409,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+410,"mem_access_done_debug", false,-1);
    tracep->declBus(c+411,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+412,"wt_res_valid_debug", false,-1);
    tracep->pushNamePrefix("ysyx_24120009_core ");
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+388,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+389,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+390,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+391,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+392,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+393,"mem_wen_debug", false,-1);
    tracep->declBit(c+394,"mem_en_debug", false,-1);
    tracep->declBus(c+395,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+396,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+397,"rf_we_debug", false,-1);
    tracep->declBit(c+398,"wbu_active_debug", false,-1);
    tracep->declBus(c+388,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+400,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+401,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+402,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+403,"pc_wen_debug", false,-1);
    tracep->declBit(c+404,"mem_active_debug", false,-1);
    tracep->declBus(c+405,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+406,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+407,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+408,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+409,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+410,"mem_access_done_debug", false,-1);
    tracep->declBus(c+411,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+412,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+109,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+418,"alu_op", false,-1, 4,0);
    tracep->declBus(c+110,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+362,"rf_we", false,-1);
    tracep->declBit(c+419,"mem_en", false,-1);
    tracep->declBit(c+420,"mem_wen", false,-1);
    tracep->declBus(c+421,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+111,"Op1", false,-1, 31,0);
    tracep->declBus(c+374,"Op2", false,-1, 31,0);
    tracep->declBus(c+422,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+112,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+375,"br_target", false,-1, 31,0);
    tracep->declBus(c+376,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+403,"pc_wen", false,-1);
    tracep->declBus(c+388,"pc_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+389,"inst_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+113,"pc_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+114,"inst_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+115,"rdata2_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+116,"rd_addr_from_IDU_to_EXU", false,-1, 4,0);
    tracep->declBus(c+117,"pc_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+118,"inst_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+377,"result_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+119,"rdata2_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+120,"rd_addr_from_EXU_to_MEM", false,-1, 4,0);
    tracep->declBus(c+405,"dmem_addr_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+363,"dmem_rdata_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+121,"result_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+122,"rd_addr_from_MEM_to_WBU", false,-1, 4,0);
    tracep->declBus(c+123,"pc_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+124,"inst_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+125,"inst_from_WBU_to_MEM", false,-1, 31,0);
    tracep->declBit(c+410,"mem_access_done", false,-1);
    tracep->declBus(c+126,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+127,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+128,"waddr", false,-1, 4,0);
    tracep->declBus(c+129,"rdata1", false,-1, 31,0);
    tracep->declBus(c+115,"rdata2", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+111,"Op1", false,-1, 31,0);
    tracep->declBus(c+374,"Op2", false,-1, 31,0);
    tracep->declBus(c+113,"pc_i", false,-1, 31,0);
    tracep->declBus(c+114,"inst_i", false,-1, 31,0);
    tracep->declBus(c+115,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+116,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+405,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+118,"inst_o", false,-1, 31,0);
    tracep->declBus(c+117,"pc_o", false,-1, 31,0);
    tracep->declBus(c+377,"result", false,-1, 31,0);
    tracep->declBus(c+119,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+120,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+408,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+409,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+130,"alu_op", false,-1, 4,0);
    tracep->declBus(c+131,"funct3", false,-1, 2,0);
    tracep->declBus(c+132,"funct7", false,-1, 6,0);
    tracep->declBus(c+133,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+111,"A", false,-1, 31,0);
    tracep->declBus(c+374,"B", false,-1, 31,0);
    tracep->declBus(c+130,"ALUFun", false,-1, 4,0);
    tracep->declBus(c+377,"Result", false,-1, 31,0);
    tracep->declBus(c+251,"add_result", false,-1, 31,0);
    tracep->declBus(c+252,"sub_result", false,-1, 31,0);
    tracep->declBus(c+378,"slt_result", false,-1, 31,0);
    tracep->declBus(c+379,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+253,"xor_result", false,-1, 31,0);
    tracep->declBus(c+254,"or_result", false,-1, 31,0);
    tracep->declBus(c+255,"and_result", false,-1, 31,0);
    tracep->declBus(c+256,"sll_result", false,-1, 31,0);
    tracep->declBus(c+257,"srl_result", false,-1, 31,0);
    tracep->declBus(c+258,"sra_result", false,-1, 31,0);
    tracep->declBus(c+395,"op1_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu_mux ");
    tracep->declBus(c+423,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+424,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+377,"out", false,-1, 31,0);
    tracep->declBus(c+130,"key", false,-1, 4,0);
    tracep->declArray(c+259,"lut", false,-1, 406,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+423,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+424,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+426,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+377,"out", false,-1, 31,0);
    tracep->declBus(c+130,"key", false,-1, 4,0);
    tracep->declBus(c+427,"default_out", false,-1, 31,0);
    tracep->declArray(c+259,"lut", false,-1, 406,0);
    tracep->declBus(c+428,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+272+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+294+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+380,"lut_out", false,-1, 31,0);
    tracep->declBit(c+134,"hit", false,-1);
    tracep->declBus(c+429,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inst_reg_EXU ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+114,"din", false,-1, 31,0);
    tracep->declBus(c+118,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_EXU ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+113,"din", false,-1, 31,0);
    tracep->declBus(c+117,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_EXU ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+116,"din", false,-1, 4,0);
    tracep->declBus(c+120,"dout", false,-1, 4,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_EXU ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+115,"din", false,-1, 31,0);
    tracep->declBus(c+119,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+389,"inst_i", false,-1, 31,0);
    tracep->declBus(c+388,"pc_i", false,-1, 31,0);
    tracep->declBus(c+129,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+115,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+126,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+127,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+116,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+111,"Op1", false,-1, 31,0);
    tracep->declBus(c+374,"Op2", false,-1, 31,0);
    tracep->declBus(c+113,"pc_o", false,-1, 31,0);
    tracep->declBus(c+114,"inst_o", false,-1, 31,0);
    tracep->declBus(c+115,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+112,"jump_reg_target_o", false,-1, 31,0);
    tracep->declBus(c+375,"br_target_o", false,-1, 31,0);
    tracep->declBus(c+376,"jmp_target_o", false,-1, 31,0);
    tracep->declBus(c+110,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+135,"br_eq", false,-1);
    tracep->declBit(c+136,"br_lt", false,-1);
    tracep->declBit(c+137,"br_ltu", false,-1);
    tracep->declBus(c+138,"Op1Sel", false,-1, 1,0);
    tracep->declBus(c+139,"Op2Sel", false,-1, 1,0);
    tracep->declBus(c+116,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+140,"imm_i", false,-1, 11,0);
    tracep->declBus(c+141,"imm_s", false,-1, 11,0);
    tracep->declBus(c+142,"imm_b", false,-1, 11,0);
    tracep->declBus(c+143,"imm_u", false,-1, 19,0);
    tracep->declBus(c+144,"imm_j", false,-1, 19,0);
    tracep->declBus(c+145,"imm_i_sext", false,-1, 31,0);
    tracep->declBus(c+146,"imm_s_sext", false,-1, 31,0);
    tracep->declBus(c+147,"imm_b_sext", false,-1, 31,0);
    tracep->declBus(c+148,"imm_u_sext", false,-1, 31,0);
    tracep->declBus(c+149,"imm_j_sext", false,-1, 31,0);
    tracep->declBus(c+150,"funct3", false,-1, 2,0);
    tracep->declBus(c+151,"funct7", false,-1, 6,0);
    tracep->declBus(c+152,"opcode", false,-1, 6,0);
    tracep->declBit(c+153,"branch_taken", false,-1);
    tracep->pushNamePrefix("b_taken_mux ");
    tracep->declBus(c+433,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+435,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+153,"out", false,-1, 0,0);
    tracep->declBus(c+150,"key", false,-1, 2,0);
    tracep->declBus(c+154,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+433,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+435,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+426,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+153,"out", false,-1, 0,0);
    tracep->declBus(c+150,"key", false,-1, 2,0);
    tracep->declBus(c+436,"default_out", false,-1, 0,0);
    tracep->declBus(c+154,"lut", false,-1, 23,0);
    tracep->declBus(c+437,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+155+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+161+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+167,"lut_out", false,-1, 0,0);
    tracep->declBit(c+168,"hit", false,-1);
    tracep->declBus(c+438,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_reg_IDU ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+389,"din", false,-1, 31,0);
    tracep->declBus(c+114,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op1_sel_mux ");
    tracep->declBus(c+439,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+439,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 31,0);
    tracep->declBus(c+138,"key", false,-1, 1,0);
    tracep->declArray(c+169,"lut", false,-1, 67,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+439,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+439,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+426,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 31,0);
    tracep->declBus(c+138,"key", false,-1, 1,0);
    tracep->declBus(c+427,"default_out", false,-1, 31,0);
    tracep->declArray(c+169,"lut", false,-1, 67,0);
    tracep->declBus(c+440,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+172+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+176+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+178,"lut_out", false,-1, 31,0);
    tracep->declBit(c+179,"hit", false,-1);
    tracep->declBus(c+441,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("op2_sel_mux ");
    tracep->declBus(c+437,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+439,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+374,"out", false,-1, 31,0);
    tracep->declBus(c+139,"key", false,-1, 1,0);
    tracep->declArray(c+305,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+437,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+439,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+426,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+374,"out", false,-1, 31,0);
    tracep->declBus(c+139,"key", false,-1, 1,0);
    tracep->declBus(c+427,"default_out", false,-1, 31,0);
    tracep->declArray(c+305,"lut", false,-1, 135,0);
    tracep->declBus(c+440,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+310+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+318+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+381,"lut_out", false,-1, 31,0);
    tracep->declBit(c+180,"hit", false,-1);
    tracep->declBus(c+442,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_IDU ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+388,"din", false,-1, 31,0);
    tracep->declBus(c+113,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+110,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+112,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+375,"br_target", false,-1, 31,0);
    tracep->declBus(c+376,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+403,"pc_wen", false,-1);
    tracep->declBus(c+388,"pc_o", false,-1, 31,0);
    tracep->declBus(c+389,"inst_o", false,-1, 31,0);
    tracep->declBus(c+382,"pc", false,-1, 31,0);
    tracep->declBus(c+383,"pc_next", false,-1, 31,0);
    tracep->declBus(c+384,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+443,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+389,"inst", false,-1, 31,0);
    tracep->declBus(c+427,"exception", false,-1, 31,0);
    tracep->declBus(c+343,"sram_data_out", false,-1, 31,0);
    tracep->declBit(c+431,"arvalid", false,-1);
    tracep->declBit(c+431,"rready", false,-1);
    tracep->declBit(c+344,"rd_res_valid", false,-1);
    tracep->declBus(c+181,"if_inst_buffer", false,-1, 31,0);
    tracep->pushNamePrefix("axi4_ifu ");
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+444,"awaddr", false,-1, 31,0);
    tracep->declBit(c+445,"awvalid", false,-1);
    tracep->declBit(c+345,"awready", false,-1);
    tracep->declBus(c+446,"wdata", false,-1, 31,0);
    tracep->declBus(c+447,"wstrb", false,-1, 3,0);
    tracep->declBit(c+448,"wvalid", false,-1);
    tracep->declBit(c+346,"wready", false,-1);
    tracep->declBus(c+347,"bresp", false,-1, 1,0);
    tracep->declBit(c+348,"bvalid", false,-1);
    tracep->declBit(c+449,"bready", false,-1);
    tracep->declBus(c+382,"araddr", false,-1, 31,0);
    tracep->declBit(c+431,"arvalid", false,-1);
    tracep->declBit(c+349,"arready", false,-1);
    tracep->declBus(c+343,"rdata", false,-1, 31,0);
    tracep->declBus(c+350,"rresp", false,-1, 1,0);
    tracep->declBit(c+344,"rvalid", false,-1);
    tracep->declBit(c+431,"rready", false,-1);
    tracep->declBit(c+351,"rd_req_valid", false,-1);
    tracep->declBus(c+352,"sram_addr", false,-1, 31,0);
    tracep->declBus(c+353,"sram_data_out", false,-1, 31,0);
    tracep->declBit(c+354,"rd_res_valid", false,-1);
    tracep->declBit(c+355,"wt_req_valid", false,-1);
    tracep->declBus(c+356,"sram_waddr", false,-1, 31,0);
    tracep->declBus(c+357,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+358,"sram_wmask", false,-1, 7,0);
    tracep->declBit(c+359,"wt_res_valid", false,-1);
    tracep->declBus(c+360,"state", false,-1, 1,0);
    tracep->declBus(c+450,"awaddr_buf", false,-1, 31,0);
    tracep->declBus(c+451,"wdata_buf", false,-1, 31,0);
    tracep->declBus(c+452,"wstrb_buf", false,-1, 3,0);
    tracep->declBus(c+361,"araddr_buf", false,-1, 31,0);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBit(c+351,"rd_req_valid", false,-1);
    tracep->declBus(c+352,"addr", false,-1, 31,0);
    tracep->declBus(c+353,"data_out", false,-1, 31,0);
    tracep->declBit(c+354,"rd_res_valid", false,-1);
    tracep->declBit(c+355,"wt_req_valid", false,-1);
    tracep->declBus(c+356,"waddr", false,-1, 31,0);
    tracep->declBus(c+357,"wdata", false,-1, 31,0);
    tracep->declBus(c+358,"wmask", false,-1, 7,0);
    tracep->declBit(c+359,"wt_res_valid", false,-1);
    tracep->declBus(c+72,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+73,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+74,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+75,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+76,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+77,"wt_req_valid_delayed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mux_pc_sel ");
    tracep->declBus(c+424,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+383,"out", false,-1, 31,0);
    tracep->declBus(c+110,"key", false,-1, 2,0);
    tracep->declArray(c+322,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+424,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+426,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+383,"out", false,-1, 31,0);
    tracep->declBus(c+110,"key", false,-1, 2,0);
    tracep->declBus(c+427,"default_out", false,-1, 31,0);
    tracep->declArray(c+322,"lut", false,-1, 174,0);
    tracep->declBus(c+453,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+328+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+338+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+385,"lut_out", false,-1, 31,0);
    tracep->declBit(c+182,"hit", false,-1);
    tracep->declBus(c+454,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+383,"din", false,-1, 31,0);
    tracep->declBus(c+382,"dout", false,-1, 31,0);
    tracep->declBit(c+403,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+117,"pc_i", false,-1, 31,0);
    tracep->declBus(c+118,"inst_i", false,-1, 31,0);
    tracep->declBus(c+377,"result_i", false,-1, 31,0);
    tracep->declBus(c+405,"dmem_addr_i", false,-1, 31,0);
    tracep->declBus(c+119,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+120,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+124,"inst_o", false,-1, 31,0);
    tracep->declBus(c+123,"pc_o", false,-1, 31,0);
    tracep->declBus(c+121,"result_o", false,-1, 31,0);
    tracep->declBus(c+363,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+122,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+410,"mem_access_done", false,-1);
    tracep->declBit(c+404,"mem_active", false,-1);
    tracep->declBus(c+389,"inst_from_IFU", false,-1, 31,0);
    tracep->declBus(c+125,"inst_from_WBU", false,-1, 31,0);
    tracep->declBit(c+412,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+78,"dmem_rdata_raw", false,-1, 31,0);
    tracep->declBus(c+183,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+184,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+185,"wmask", false,-1, 7,0);
    tracep->declBus(c+186,"ctl_mem_access", false,-1, 2,0);
    tracep->declBit(c+364,"mem_en", false,-1);
    tracep->declBit(c+365,"mem_wen", false,-1);
    tracep->declBus(c+187,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+183,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+79,"rd_res_valid", false,-1);
    tracep->declBit(c+80,"wt_res_valid", false,-1);
    tracep->declBit(c+366,"rd_req_valid", false,-1);
    tracep->declBit(c+367,"wt_req_valid", false,-1);
    tracep->declBus(c+188,"funct3", false,-1, 2,0);
    tracep->declBus(c+189,"funct7", false,-1, 6,0);
    tracep->declBus(c+190,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBit(c+366,"rd_req_valid", false,-1);
    tracep->declBus(c+187,"addr", false,-1, 31,0);
    tracep->declBus(c+78,"data_out", false,-1, 31,0);
    tracep->declBit(c+79,"rd_res_valid", false,-1);
    tracep->declBit(c+367,"wt_req_valid", false,-1);
    tracep->declBus(c+187,"waddr", false,-1, 31,0);
    tracep->declBus(c+184,"wdata", false,-1, 31,0);
    tracep->declBus(c+185,"wmask", false,-1, 7,0);
    tracep->declBit(c+80,"wt_res_valid", false,-1);
    tracep->declBus(c+81,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+82,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+83,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+84,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+85,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+86,"wt_req_valid_delayed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+78,"data_in", false,-1, 31,0);
    tracep->declBus(c+187,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+186,"control", false,-1, 2,0);
    tracep->declBus(c+363,"data_out", false,-1, 31,0);
    tracep->declBus(c+191,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+368,"shifted_data", false,-1, 31,0);
    tracep->declBus(c+369,"zero_ext_byte", false,-1, 31,0);
    tracep->declBus(c+370,"zero_ext_half", false,-1, 31,0);
    tracep->declBus(c+371,"sign_ext_byte", false,-1, 31,0);
    tracep->declBus(c+372,"sign_ext_half", false,-1, 31,0);
    tracep->pushNamePrefix("mem_mux ");
    tracep->declBus(c+424,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+363,"out", false,-1, 31,0);
    tracep->declBus(c+186,"key", false,-1, 2,0);
    tracep->declArray(c+88,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+424,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+426,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+363,"out", false,-1, 31,0);
    tracep->declBus(c+186,"key", false,-1, 2,0);
    tracep->declBus(c+427,"default_out", false,-1, 31,0);
    tracep->declArray(c+88,"lut", false,-1, 174,0);
    tracep->declBus(c+453,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+94+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+104+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+373,"lut_out", false,-1, 31,0);
    tracep->declBit(c+192,"hit", false,-1);
    tracep->declBus(c+454,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmem_addr_reg_MEM ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+405,"din", false,-1, 31,0);
    tracep->declBus(c+187,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_MEM ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+118,"din", false,-1, 31,0);
    tracep->declBus(c+124,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_acces_ctl_mux ");
    tracep->declBus(c+455,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+456,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+434,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+186,"out", false,-1, 2,0);
    tracep->declBus(c+193,"key", false,-1, 9,0);
    tracep->declArray(c+457,"lut", false,-1, 103,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+455,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+456,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+434,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+426,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+186,"out", false,-1, 2,0);
    tracep->declBus(c+193,"key", false,-1, 9,0);
    tracep->declBus(c+461,"default_out", false,-1, 2,0);
    tracep->declArray(c+457,"lut", false,-1, 103,0);
    tracep->declBus(c+462,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+42+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+50+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+194,"lut_out", false,-1, 2,0);
    tracep->declBit(c+195,"hit", false,-1);
    tracep->declBus(c+463,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_MEM ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+117,"din", false,-1, 31,0);
    tracep->declBus(c+123,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_MEM ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+120,"din", false,-1, 4,0);
    tracep->declBus(c+122,"dout", false,-1, 4,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_MEM ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+377,"din", false,-1, 31,0);
    tracep->declBus(c+121,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_MEM ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+119,"din", false,-1, 31,0);
    tracep->declBus(c+183,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wmask_gen ");
    tracep->declBus(c+186,"control", false,-1, 2,0);
    tracep->declBus(c+187,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+183,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+184,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+185,"wmask", false,-1, 7,0);
    tracep->declBus(c+191,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+196,"base_mask", false,-1, 7,0);
    tracep->declBus(c+185,"shifted_mask", false,-1, 7,0);
    tracep->pushNamePrefix("mem_mux_write ");
    tracep->declBus(c+434,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+455,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+196,"out", false,-1, 7,0);
    tracep->declBus(c+186,"key", false,-1, 2,0);
    tracep->declQuad(c+464,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+434,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+455,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+426,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+196,"out", false,-1, 7,0);
    tracep->declBus(c+186,"key", false,-1, 2,0);
    tracep->declBus(c+466,"default_out", false,-1, 7,0);
    tracep->declQuad(c+464,"lut", false,-1, 32,0);
    tracep->declBus(c+423,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+58+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+61+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+64+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+197,"lut_out", false,-1, 7,0);
    tracep->declBit(c+198,"hit", false,-1);
    tracep->declBus(c+467,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+424,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBus(c+109,"wdata", false,-1, 31,0);
    tracep->declBus(c+128,"waddr", false,-1, 4,0);
    tracep->declBit(c+362,"wen", false,-1);
    tracep->declBus(c+126,"raddr1", false,-1, 4,0);
    tracep->declBus(c+127,"raddr2", false,-1, 4,0);
    tracep->declBus(c+129,"rdata1", false,-1, 31,0);
    tracep->declBus(c+115,"rdata2", false,-1, 31,0);
    tracep->declBus(c+391,"x2_debug", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+199+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+67,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+109,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+128,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+362,"rf_we", false,-1);
    tracep->declBus(c+123,"pc_i", false,-1, 31,0);
    tracep->declBus(c+124,"inst_i", false,-1, 31,0);
    tracep->declBus(c+121,"result_i", false,-1, 31,0);
    tracep->declBus(c+363,"dmem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+122,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+410,"mem_access_done", false,-1);
    tracep->declBit(c+403,"pc_wen", false,-1);
    tracep->declBus(c+389,"inst_from_IFU", false,-1, 31,0);
    tracep->declBit(c+398,"wbu_active", false,-1);
    tracep->declBus(c+125,"inst_o", false,-1, 31,0);
    tracep->declBus(c+400,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+401,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+402,"opcode_debug", false,-1, 6,0);
    tracep->declBus(c+407,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+400,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+231,"pc_o", false,-1, 31,0);
    tracep->declBus(c+232,"result_o", false,-1, 31,0);
    tracep->declBus(c+468,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+233,"dmem_rdata_o", false,-1, 31,0);
    tracep->declBus(c+234,"wb_sel", false,-1, 1,0);
    tracep->declBit(c+87,"wbu_active_reg", false,-1);
    tracep->declBus(c+235,"funct3", false,-1, 2,0);
    tracep->declBus(c+236,"funct7", false,-1, 6,0);
    tracep->declBus(c+402,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("dmem_rdata_reg_WBU ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+363,"din", false,-1, 31,0);
    tracep->declBus(c+233,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_WBU ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+124,"din", false,-1, 31,0);
    tracep->declBus(c+125,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_WBU ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+123,"din", false,-1, 31,0);
    tracep->declBus(c+231,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_WBU ");
    tracep->declBus(c+424,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+432,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+122,"din", false,-1, 4,0);
    tracep->declBus(c+128,"dout", false,-1, 4,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_WBU ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+386,"clk", false,-1);
    tracep->declBit(c+387,"rst", false,-1);
    tracep->declBus(c+121,"din", false,-1, 31,0);
    tracep->declBus(c+232,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_mux ");
    tracep->declBus(c+437,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+439,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 31,0);
    tracep->declBus(c+234,"key", false,-1, 1,0);
    tracep->declBus(c+427,"default_out", false,-1, 31,0);
    tracep->declArray(c+413,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+437,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+439,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+435,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 31,0);
    tracep->declBus(c+234,"key", false,-1, 1,0);
    tracep->declBus(c+427,"default_out", false,-1, 31,0);
    tracep->declArray(c+413,"lut", false,-1, 135,0);
    tracep->declBus(c+440,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+237+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+68+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+245+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+249,"lut_out", false,-1, 31,0);
    tracep->declBit(c+250,"hit", false,-1);
    tracep->declBus(c+442,"i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp_h3e4b9c5b__0;
    VlWide<13>/*415:0*/ __Vtemp_hd74bf4d1__0;
    VlWide<5>/*159:0*/ __Vtemp_h3032a476__0;
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
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram__DOT__addr_delayed),32);
    bufp->fullBit(oldp+73,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram__DOT__rd_req_valid_delayed));
    bufp->fullIData(oldp+74,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram__DOT__waddr_delayed),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram__DOT__wdata_delayed),32);
    bufp->fullCData(oldp+76,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram__DOT__wmask_delayed),8);
    bufp->fullBit(oldp+77,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram__DOT__wt_req_valid_delayed));
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw),32);
    bufp->fullBit(oldp+79,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rd_res_valid));
    bufp->fullBit(oldp+80,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wt_res_valid));
    bufp->fullIData(oldp+81,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__addr_delayed),32);
    bufp->fullBit(oldp+82,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__rd_req_valid_delayed));
    bufp->fullIData(oldp+83,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__waddr_delayed),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wdata_delayed),32);
    bufp->fullCData(oldp+85,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wmask_delayed),8);
    bufp->fullBit(oldp+86,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wt_req_valid_delayed));
    bufp->fullBit(oldp+87,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_active_reg));
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
    bufp->fullWData(oldp+88,(__Vtemp_hdb58eddb__0),175);
    bufp->fullQData(oldp+94,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+96,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+98,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+100,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+102,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_24120009_core__DOT__reg_write_data),32);
    bufp->fullCData(oldp+110,(vlSelf->ysyx_24120009_core__DOT__pc_sel),3);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24120009_core__DOT__Op1),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_24120009_core__DOT__jump_reg_target),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU),32);
    bufp->fullCData(oldp+116,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 7U))),5);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM),32);
    bufp->fullCData(oldp+120,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM),5);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU),32);
    bufp->fullCData(oldp+122,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU),5);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM),32);
    bufp->fullCData(oldp+126,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+127,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+128,(vlSelf->ysyx_24120009_core__DOT__waddr),5);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_24120009_core__DOT__rdata1),32);
    bufp->fullCData(oldp+130,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op),5);
    bufp->fullCData(oldp+131,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+132,((vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+133,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)),7);
    bufp->fullBit(oldp+134,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+135,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
    bufp->fullCData(oldp+138,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel),2);
    bufp->fullCData(oldp+139,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel),2);
    bufp->fullSData(oldp+140,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+141,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+142,(((0x800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+143,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+144,(((0x80000U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext),32);
    bufp->fullIData(oldp+146,((((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext),32);
    bufp->fullIData(oldp+148,((0xfffff000U & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext),32);
    bufp->fullCData(oldp+150,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+151,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+152,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),7);
    bufp->fullBit(oldp+153,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken));
    bufp->fullIData(oldp+154,((0x28aceU | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq) 
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
    bufp->fullCData(oldp+155,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+156,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+157,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+158,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+159,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+160,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullBit(oldp+161,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+162,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+163,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+164,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+165,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+166,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+167,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+168,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+169,(__Vtemp_h3e4b9c5b__0),68);
    bufp->fullQData(oldp+172,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+174,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+179,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+180,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+181,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer),32);
    bufp->fullBit(oldp+182,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+183,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o),32);
    bufp->fullIData(oldp+184,(((0x1fU >= (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                   << 3U)))
                                ? (vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o 
                                   << (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                << 3U)))
                                : 0U)),32);
    bufp->fullCData(oldp+185,((0xffU & ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask) 
                                        << (3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)))),8);
    bufp->fullCData(oldp+186,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access),3);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o),32);
    bufp->fullCData(oldp+188,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+189,((vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+190,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)),7);
    bufp->fullCData(oldp+191,((3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)),2);
    bufp->fullBit(oldp+192,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+193,(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key),10);
    bufp->fullCData(oldp+194,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+195,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+196,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask),8);
    bufp->fullCData(oldp+197,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+198,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+199,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o),32);
    bufp->fullCData(oldp+234,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel),2);
    bufp->fullCData(oldp+235,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+236,((vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullQData(oldp+237,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+239,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+241,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+243,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+249,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+250,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+251,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               + vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+252,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               - vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+253,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               ^ vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+254,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               | vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+255,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               & vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+256,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+257,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+258,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
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
    bufp->fullWData(oldp+259,(__Vtemp_hd74bf4d1__0),407);
    bufp->fullQData(oldp+272,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+274,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+276,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+278,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+280,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+282,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+284,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+286,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+288,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8]),37);
    bufp->fullQData(oldp+290,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9]),37);
    bufp->fullQData(oldp+292,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[10]),37);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+296,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[10]),32);
    __Vtemp_h3032a476__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU))));
    __Vtemp_h3032a476__0[1U] = ((0xfffffffcU & (((- (IData)(
                                                            (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                             >> 0x1fU))) 
                                                 << 0xeU) 
                                                | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s) 
                                                   << 2U))) 
                                | (IData)(((0x300000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU))) 
                                           >> 0x20U)));
    __Vtemp_h3032a476__0[2U] = (8U | ((vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
                                       << 4U) | (3U 
                                                 & ((3U 
                                                     & ((- (IData)(
                                                                   (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                                    >> 0x1fU))) 
                                                        >> 0x12U)) 
                                                    | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s) 
                                                       >> 0x1eU)))));
    __Vtemp_h3032a476__0[3U] = (0x10U | (((vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
                                           - (IData)(4U)) 
                                          << 6U) | 
                                         (vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
                                          >> 0x1cU)));
    __Vtemp_h3032a476__0[4U] = ((vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
                                 - (IData)(4U)) >> 0x1aU);
    bufp->fullWData(oldp+305,(__Vtemp_h3032a476__0),136);
    bufp->fullQData(oldp+310,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+312,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+314,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+316,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+318,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3]),32);
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
    bufp->fullWData(oldp+322,(__Vtemp_h47858337__0),175);
    bufp->fullQData(oldp+328,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+330,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+332,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+334,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+336,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+338,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_data_out),32);
    bufp->fullBit(oldp+344,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rd_res_valid));
    bufp->fullBit(oldp+345,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__awready));
    bufp->fullBit(oldp+346,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wready));
    bufp->fullCData(oldp+347,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__bresp),2);
    bufp->fullBit(oldp+348,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__bvalid));
    bufp->fullBit(oldp+349,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__arready));
    bufp->fullCData(oldp+350,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__rresp),2);
    bufp->fullBit(oldp+351,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__rd_req_valid));
    bufp->fullIData(oldp+352,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_addr),32);
    bufp->fullIData(oldp+353,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_data_out),32);
    bufp->fullBit(oldp+354,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__rd_res_valid));
    bufp->fullBit(oldp+355,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wt_req_valid));
    bufp->fullIData(oldp+356,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_waddr),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_wdata),32);
    bufp->fullCData(oldp+358,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_wmask),8);
    bufp->fullBit(oldp+359,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wt_res_valid));
    bufp->fullCData(oldp+360,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__state),2);
    bufp->fullIData(oldp+361,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__araddr_buf),32);
    bufp->fullBit(oldp+362,(vlSelf->ysyx_24120009_core__DOT__rf_we));
    bufp->fullIData(oldp+363,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU),32);
    bufp->fullBit(oldp+364,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en));
    bufp->fullBit(oldp+365,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen));
    bufp->fullBit(oldp+366,(((~ (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen)) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en))));
    bufp->fullBit(oldp+367,(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen))));
    bufp->fullIData(oldp+368,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullIData(oldp+369,((0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+370,((0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+371,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+372,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyx_24120009_core__DOT__Op2),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyx_24120009_core__DOT__br_target),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyx_24120009_core__DOT__jmp_target),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+378,(vlSelf->__VdfgTmp_h9d12977d__0),32);
    bufp->fullIData(oldp+379,(vlSelf->__VdfgTmp_h9d0653ad__0),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next),32);
    bufp->fullIData(oldp+384,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+386,(vlSelf->clk));
    bufp->fullBit(oldp+387,(vlSelf->rst));
    bufp->fullIData(oldp+388,(vlSelf->pc_debug),32);
    bufp->fullIData(oldp+389,(vlSelf->inst_debug),32);
    bufp->fullIData(oldp+390,(vlSelf->reg_write_data_debug),32);
    bufp->fullIData(oldp+391,(vlSelf->x2_debug),32);
    bufp->fullCData(oldp+392,(vlSelf->waddr_debug),5);
    bufp->fullBit(oldp+393,(vlSelf->mem_wen_debug));
    bufp->fullBit(oldp+394,(vlSelf->mem_en_debug));
    bufp->fullIData(oldp+395,(vlSelf->Op1_debug),32);
    bufp->fullIData(oldp+396,(vlSelf->Op2_debug),32);
    bufp->fullBit(oldp+397,(vlSelf->rf_we_debug));
    bufp->fullBit(oldp+398,(vlSelf->wbu_active_debug));
    bufp->fullIData(oldp+399,(vlSelf->imem_addr_debug),32);
    bufp->fullIData(oldp+400,(vlSelf->pc_plus4_debug),32);
    bufp->fullCData(oldp+401,(vlSelf->wb_sel_debug),2);
    bufp->fullCData(oldp+402,(vlSelf->opcode_debug),7);
    bufp->fullBit(oldp+403,(vlSelf->pc_wen_debug));
    bufp->fullBit(oldp+404,(vlSelf->mem_active_debug));
    bufp->fullIData(oldp+405,(vlSelf->result_from_EXU_to_MEM_debug),32);
    bufp->fullIData(oldp+406,(vlSelf->result_from_MEM_to_WBU_debug),32);
    bufp->fullIData(oldp+407,(vlSelf->result_from_WB_debug),32);
    bufp->fullCData(oldp+408,(vlSelf->alu_op_debug),5);
    bufp->fullIData(oldp+409,(vlSelf->inst_from_EXU_to_MEM_debug),32);
    bufp->fullBit(oldp+410,(vlSelf->mem_access_done_debug));
    bufp->fullIData(oldp+411,(vlSelf->dmem_rdata_from_MEM_to_WBU_debug),32);
    bufp->fullBit(oldp+412,(vlSelf->wt_res_valid_debug));
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
    bufp->fullWData(oldp+413,(__Vtemp_h650a5f8e__0),136);
    bufp->fullCData(oldp+418,(vlSelf->ysyx_24120009_core__DOT__alu_op),5);
    bufp->fullBit(oldp+419,(vlSelf->ysyx_24120009_core__DOT__mem_en));
    bufp->fullBit(oldp+420,(vlSelf->ysyx_24120009_core__DOT__mem_wen));
    bufp->fullCData(oldp+421,(vlSelf->ysyx_24120009_core__DOT__wb_sel),2);
    bufp->fullIData(oldp+422,(vlSelf->ysyx_24120009_core__DOT__pc_plus4),32);
    bufp->fullIData(oldp+423,(0xbU),32);
    bufp->fullIData(oldp+424,(5U),32);
    bufp->fullIData(oldp+425,(0x20U),32);
    bufp->fullIData(oldp+426,(0U),32);
    bufp->fullIData(oldp+427,(0U),32);
    bufp->fullIData(oldp+428,(0x25U),32);
    bufp->fullIData(oldp+429,(0xbU),32);
    bufp->fullIData(oldp+430,(0x80000000U),32);
    bufp->fullBit(oldp+431,(1U));
    bufp->fullCData(oldp+432,(0U),5);
    bufp->fullIData(oldp+433,(6U),32);
    bufp->fullIData(oldp+434,(3U),32);
    bufp->fullIData(oldp+435,(1U),32);
    bufp->fullBit(oldp+436,(0U));
    bufp->fullIData(oldp+437,(4U),32);
    bufp->fullIData(oldp+438,(6U),32);
    bufp->fullIData(oldp+439,(2U),32);
    bufp->fullIData(oldp+440,(0x22U),32);
    bufp->fullIData(oldp+441,(2U),32);
    bufp->fullIData(oldp+442,(4U),32);
    bufp->fullIData(oldp+443,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__imem_addr),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__awaddr),32);
    bufp->fullBit(oldp+445,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__awvalid));
    bufp->fullIData(oldp+446,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wdata),32);
    bufp->fullCData(oldp+447,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wstrb),4);
    bufp->fullBit(oldp+448,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wvalid));
    bufp->fullBit(oldp+449,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__bready));
    bufp->fullIData(oldp+450,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__awaddr_buf),32);
    bufp->fullIData(oldp+451,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wdata_buf),32);
    bufp->fullCData(oldp+452,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wstrb_buf),4);
    bufp->fullIData(oldp+453,(0x23U),32);
    bufp->fullIData(oldp+454,(5U),32);
    bufp->fullIData(oldp+455,(8U),32);
    bufp->fullIData(oldp+456,(0xaU),32);
    __Vtemp_ha516852c__0[0U] = 0x491808c9U;
    __Vtemp_ha516852c__0[1U] = 0xc9076a3U;
    __Vtemp_ha516852c__0[2U] = 0x903001c8U;
    __Vtemp_ha516852c__0[3U] = 6U;
    bufp->fullWData(oldp+457,(__Vtemp_ha516852c__0),104);
    bufp->fullCData(oldp+461,(0U),3);
    bufp->fullIData(oldp+462,(0xdU),32);
    bufp->fullIData(oldp+463,(8U),32);
    bufp->fullQData(oldp+464,(0x83c81801ULL),33);
    bufp->fullCData(oldp+466,(0U),8);
    bufp->fullIData(oldp+467,(3U),32);
    bufp->fullIData(oldp+468,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_addr_o),32);
}
