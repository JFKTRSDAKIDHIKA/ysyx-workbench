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
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+407,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+408,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+409,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+410,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+411,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+412,"mem_wen_debug", false,-1);
    tracep->declBit(c+413,"mem_en_debug", false,-1);
    tracep->declBus(c+414,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+415,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+416,"rf_we_debug", false,-1);
    tracep->declBit(c+417,"wbu_active_debug", false,-1);
    tracep->declBus(c+418,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+419,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+420,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+421,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+422,"pc_wen_debug", false,-1);
    tracep->declBit(c+423,"mem_active_debug", false,-1);
    tracep->declBus(c+424,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+425,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+426,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+427,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+428,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+429,"mem_access_done_debug", false,-1);
    tracep->declBus(c+430,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+431,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+432,"ifu_state_debug", false,-1, 2,0);
    tracep->declBit(c+433,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+434,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+435,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+436,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+437,"idu_state_debug", false,-1, 1,0);
    tracep->declBit(c+438,"inst_valid_debug", false,-1);
    tracep->pushNamePrefix("ysyx_24120009_core ");
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+407,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+408,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+409,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+410,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+411,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+412,"mem_wen_debug", false,-1);
    tracep->declBit(c+413,"mem_en_debug", false,-1);
    tracep->declBus(c+414,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+415,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+416,"rf_we_debug", false,-1);
    tracep->declBit(c+417,"wbu_active_debug", false,-1);
    tracep->declBus(c+407,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+419,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+420,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+421,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+422,"pc_wen_debug", false,-1);
    tracep->declBit(c+423,"mem_active_debug", false,-1);
    tracep->declBus(c+424,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+425,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+426,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+427,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+428,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+429,"mem_access_done_debug", false,-1);
    tracep->declBus(c+430,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+431,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+432,"ifu_state_debug", false,-1, 2,0);
    tracep->declBit(c+433,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+434,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+435,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+436,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+437,"idu_state_debug", false,-1, 1,0);
    tracep->declBit(c+438,"inst_valid_debug", false,-1);
    tracep->declBus(c+152,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+446,"alu_op", false,-1, 4,0);
    tracep->declBus(c+153,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+397,"rf_we", false,-1);
    tracep->declBit(c+447,"mem_en", false,-1);
    tracep->declBit(c+448,"mem_wen", false,-1);
    tracep->declBus(c+449,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+154,"Op1", false,-1, 31,0);
    tracep->declBus(c+155,"Op2", false,-1, 31,0);
    tracep->declBus(c+450,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+156,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+157,"br_target", false,-1, 31,0);
    tracep->declBus(c+158,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+439,"pc_wen", false,-1);
    tracep->declBus(c+407,"pc_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+408,"inst_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+159,"pc_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+160,"inst_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+161,"rdata2_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+162,"rd_addr_from_IDU_to_EXU", false,-1, 4,0);
    tracep->declBus(c+163,"pc_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+164,"inst_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+165,"result_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+166,"rdata2_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+167,"rd_addr_from_EXU_to_MEM", false,-1, 4,0);
    tracep->declBus(c+424,"dmem_addr_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+398,"dmem_rdata_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+168,"result_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+169,"rd_addr_from_MEM_to_WBU", false,-1, 4,0);
    tracep->declBus(c+170,"pc_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+171,"inst_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+172,"inst_from_WBU_to_MEM", false,-1, 31,0);
    tracep->declBit(c+429,"mem_access_done", false,-1);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+173,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+174,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+175,"waddr", false,-1, 4,0);
    tracep->declBus(c+176,"rdata1", false,-1, 31,0);
    tracep->declBus(c+161,"rdata2", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+154,"Op1", false,-1, 31,0);
    tracep->declBus(c+155,"Op2", false,-1, 31,0);
    tracep->declBus(c+159,"pc_i", false,-1, 31,0);
    tracep->declBus(c+160,"inst_i", false,-1, 31,0);
    tracep->declBus(c+161,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+162,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBus(c+424,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+164,"inst_o", false,-1, 31,0);
    tracep->declBus(c+163,"pc_o", false,-1, 31,0);
    tracep->declBus(c+165,"result", false,-1, 31,0);
    tracep->declBus(c+166,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+167,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+427,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+428,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+75,"state", false,-1, 1,0);
    tracep->declBus(c+177,"alu_op", false,-1, 4,0);
    tracep->declBus(c+178,"funct3", false,-1, 2,0);
    tracep->declBus(c+179,"funct7", false,-1, 6,0);
    tracep->declBus(c+180,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+154,"A", false,-1, 31,0);
    tracep->declBus(c+155,"B", false,-1, 31,0);
    tracep->declBus(c+177,"ALUFun", false,-1, 4,0);
    tracep->declBus(c+165,"Result", false,-1, 31,0);
    tracep->declBus(c+181,"add_result", false,-1, 31,0);
    tracep->declBus(c+182,"sub_result", false,-1, 31,0);
    tracep->declBus(c+183,"slt_result", false,-1, 31,0);
    tracep->declBus(c+184,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+185,"xor_result", false,-1, 31,0);
    tracep->declBus(c+186,"or_result", false,-1, 31,0);
    tracep->declBus(c+187,"and_result", false,-1, 31,0);
    tracep->declBus(c+188,"sll_result", false,-1, 31,0);
    tracep->declBus(c+189,"srl_result", false,-1, 31,0);
    tracep->declBus(c+190,"sra_result", false,-1, 31,0);
    tracep->declBus(c+414,"op1_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu_mux ");
    tracep->declBus(c+451,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+452,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+165,"out", false,-1, 31,0);
    tracep->declBus(c+177,"key", false,-1, 4,0);
    tracep->declArray(c+191,"lut", false,-1, 406,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+451,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+452,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+454,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+165,"out", false,-1, 31,0);
    tracep->declBus(c+177,"key", false,-1, 4,0);
    tracep->declBus(c+455,"default_out", false,-1, 31,0);
    tracep->declArray(c+191,"lut", false,-1, 406,0);
    tracep->declBus(c+456,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+204+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+226+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+237,"lut_out", false,-1, 31,0);
    tracep->declBit(c+238,"hit", false,-1);
    tracep->declBus(c+457,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inst_reg_EXU ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+160,"din", false,-1, 31,0);
    tracep->declBus(c+164,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_EXU ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+159,"din", false,-1, 31,0);
    tracep->declBus(c+163,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_EXU ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+460,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+162,"din", false,-1, 4,0);
    tracep->declBus(c+167,"dout", false,-1, 4,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_EXU ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+161,"din", false,-1, 31,0);
    tracep->declBus(c+166,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+408,"inst_i", false,-1, 31,0);
    tracep->declBus(c+407,"pc_i", false,-1, 31,0);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBus(c+176,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+161,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+173,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+174,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+162,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+154,"Op1", false,-1, 31,0);
    tracep->declBus(c+155,"Op2", false,-1, 31,0);
    tracep->declBus(c+159,"pc_o", false,-1, 31,0);
    tracep->declBus(c+160,"inst_o", false,-1, 31,0);
    tracep->declBus(c+161,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBus(c+156,"jump_reg_target_o", false,-1, 31,0);
    tracep->declBus(c+157,"br_target_o", false,-1, 31,0);
    tracep->declBus(c+158,"jmp_target_o", false,-1, 31,0);
    tracep->declBus(c+153,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+437,"idu_state_debug", false,-1, 1,0);
    tracep->declBus(c+76,"state", false,-1, 1,0);
    tracep->declBit(c+239,"br_eq", false,-1);
    tracep->declBit(c+240,"br_lt", false,-1);
    tracep->declBit(c+241,"br_ltu", false,-1);
    tracep->declBus(c+242,"Op1Sel", false,-1, 1,0);
    tracep->declBus(c+243,"Op2Sel", false,-1, 1,0);
    tracep->declBus(c+162,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+244,"imm_i", false,-1, 11,0);
    tracep->declBus(c+245,"imm_s", false,-1, 11,0);
    tracep->declBus(c+246,"imm_b", false,-1, 11,0);
    tracep->declBus(c+247,"imm_u", false,-1, 19,0);
    tracep->declBus(c+248,"imm_j", false,-1, 19,0);
    tracep->declBus(c+249,"imm_i_sext", false,-1, 31,0);
    tracep->declBus(c+250,"imm_s_sext", false,-1, 31,0);
    tracep->declBus(c+251,"imm_b_sext", false,-1, 31,0);
    tracep->declBus(c+252,"imm_u_sext", false,-1, 31,0);
    tracep->declBus(c+253,"imm_j_sext", false,-1, 31,0);
    tracep->declBus(c+254,"funct3", false,-1, 2,0);
    tracep->declBus(c+255,"funct7", false,-1, 6,0);
    tracep->declBus(c+256,"opcode", false,-1, 6,0);
    tracep->declBit(c+257,"branch_taken", false,-1);
    tracep->pushNamePrefix("b_taken_mux ");
    tracep->declBus(c+461,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+462,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+257,"out", false,-1, 0,0);
    tracep->declBus(c+254,"key", false,-1, 2,0);
    tracep->declBus(c+258,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+461,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+462,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+454,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+257,"out", false,-1, 0,0);
    tracep->declBus(c+254,"key", false,-1, 2,0);
    tracep->declBus(c+464,"default_out", false,-1, 0,0);
    tracep->declBus(c+258,"lut", false,-1, 23,0);
    tracep->declBus(c+465,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+259+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+265+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+271,"lut_out", false,-1, 0,0);
    tracep->declBit(c+272,"hit", false,-1);
    tracep->declBus(c+466,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_reg_IDU ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+408,"din", false,-1, 31,0);
    tracep->declBus(c+160,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op1_sel_mux ");
    tracep->declBus(c+467,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+467,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+154,"out", false,-1, 31,0);
    tracep->declBus(c+242,"key", false,-1, 1,0);
    tracep->declArray(c+273,"lut", false,-1, 67,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+467,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+467,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+454,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+154,"out", false,-1, 31,0);
    tracep->declBus(c+242,"key", false,-1, 1,0);
    tracep->declBus(c+455,"default_out", false,-1, 31,0);
    tracep->declArray(c+273,"lut", false,-1, 67,0);
    tracep->declBus(c+468,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+276+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+280+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+282,"lut_out", false,-1, 31,0);
    tracep->declBit(c+283,"hit", false,-1);
    tracep->declBus(c+469,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("op2_sel_mux ");
    tracep->declBus(c+465,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+467,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+155,"out", false,-1, 31,0);
    tracep->declBus(c+243,"key", false,-1, 1,0);
    tracep->declArray(c+284,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+465,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+467,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+454,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+155,"out", false,-1, 31,0);
    tracep->declBus(c+243,"key", false,-1, 1,0);
    tracep->declBus(c+455,"default_out", false,-1, 31,0);
    tracep->declArray(c+284,"lut", false,-1, 135,0);
    tracep->declBus(c+468,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+289+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+297+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+301,"lut_out", false,-1, 31,0);
    tracep->declBit(c+302,"hit", false,-1);
    tracep->declBus(c+470,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_IDU ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+407,"din", false,-1, 31,0);
    tracep->declBus(c+159,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+153,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+156,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+157,"br_target", false,-1, 31,0);
    tracep->declBus(c+158,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+439,"pc_wen", false,-1);
    tracep->declBus(c+407,"pc_o", false,-1, 31,0);
    tracep->declBus(c+408,"inst_o", false,-1, 31,0);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBit(c+459,"idu_ready", false,-1);
    tracep->declBus(c+432,"state_debug", false,-1, 2,0);
    tracep->declBit(c+433,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+434,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+77,"state", false,-1, 2,0);
    tracep->declBus(c+471,"IDLE", false,-1, 2,0);
    tracep->declBus(c+472,"FETCH_REQ", false,-1, 2,0);
    tracep->declBus(c+473,"FETCH_WAIT", false,-1, 2,0);
    tracep->declBus(c+474,"FETCH_DONE", false,-1, 2,0);
    tracep->declBus(c+303,"pc", false,-1, 31,0);
    tracep->declBus(c+304,"pc_next", false,-1, 31,0);
    tracep->declBus(c+305,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+475,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+455,"exception", false,-1, 31,0);
    tracep->declBus(c+78,"rdata", false,-1, 31,0);
    tracep->declBit(c+79,"rvalid", false,-1);
    tracep->declBus(c+80,"if_inst_buffer", false,-1, 31,0);
    tracep->declBit(c+81,"arvalid", false,-1);
    tracep->declBit(c+82,"arready", false,-1);
    tracep->declBit(c+83,"rready", false,-1);
    tracep->pushNamePrefix("axi4_ifu ");
    tracep->declBus(c+453,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBit(c+464,"awvalid", false,-1);
    tracep->declBit(c+84,"awready", false,-1);
    tracep->declBus(c+455,"awaddr", false,-1, 31,0);
    tracep->declBit(c+464,"wvalid", false,-1);
    tracep->declBit(c+85,"wready", false,-1);
    tracep->declBus(c+455,"wdata", false,-1, 31,0);
    tracep->declBus(c+476,"wstrb", false,-1, 7,0);
    tracep->declBit(c+86,"bvalid", false,-1);
    tracep->declBit(c+464,"bready", false,-1);
    tracep->declBus(c+87,"bresp", false,-1, 1,0);
    tracep->declBit(c+81,"arvalid", false,-1);
    tracep->declBit(c+82,"arready", false,-1);
    tracep->declBus(c+303,"araddr", false,-1, 31,0);
    tracep->declBit(c+79,"rvalid", false,-1);
    tracep->declBit(c+83,"rready", false,-1);
    tracep->declBus(c+78,"rdata", false,-1, 31,0);
    tracep->declBus(c+88,"rresp", false,-1, 1,0);
    tracep->declBus(c+434,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+89,"sram_data_out", false,-1, 31,0);
    tracep->declBit(c+90,"sram_rd_res_valid", false,-1);
    tracep->declBit(c+91,"sram_wt_res_valid", false,-1);
    tracep->declBus(c+92,"state", false,-1, 1,0);
    tracep->declBus(c+477,"IDLE", false,-1, 1,0);
    tracep->declBus(c+478,"WRITE", false,-1, 1,0);
    tracep->declBus(c+479,"READ", false,-1, 1,0);
    tracep->declBus(c+93,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+480,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+481,"wstrb_reg", false,-1, 7,0);
    tracep->declBit(c+94,"rd_req_valid", false,-1);
    tracep->declBit(c+95,"wt_req_valid", false,-1);
    tracep->pushNamePrefix("sram_inst ");
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBit(c+94,"rd_req_valid", false,-1);
    tracep->declBus(c+93,"addr", false,-1, 31,0);
    tracep->declBus(c+89,"data_out", false,-1, 31,0);
    tracep->declBit(c+90,"rd_res_valid", false,-1);
    tracep->declBit(c+95,"wt_req_valid", false,-1);
    tracep->declBus(c+93,"waddr", false,-1, 31,0);
    tracep->declBus(c+480,"wdata", false,-1, 31,0);
    tracep->declBus(c+481,"wmask", false,-1, 7,0);
    tracep->declBit(c+91,"wt_res_valid", false,-1);
    tracep->declBus(c+96,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+97,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+98,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+99,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+100,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+101,"wt_req_valid_delayed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mux_pc_sel ");
    tracep->declBus(c+452,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+462,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+304,"out", false,-1, 31,0);
    tracep->declBus(c+153,"key", false,-1, 2,0);
    tracep->declArray(c+306,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+452,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+462,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+454,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+304,"out", false,-1, 31,0);
    tracep->declBus(c+153,"key", false,-1, 2,0);
    tracep->declBus(c+455,"default_out", false,-1, 31,0);
    tracep->declArray(c+306,"lut", false,-1, 174,0);
    tracep->declBus(c+482,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+312+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+322+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+327,"lut_out", false,-1, 31,0);
    tracep->declBit(c+328,"hit", false,-1);
    tracep->declBus(c+483,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+304,"din", false,-1, 31,0);
    tracep->declBus(c+303,"dout", false,-1, 31,0);
    tracep->declBit(c+439,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+163,"pc_i", false,-1, 31,0);
    tracep->declBus(c+164,"inst_i", false,-1, 31,0);
    tracep->declBus(c+165,"result_i", false,-1, 31,0);
    tracep->declBus(c+424,"dmem_addr_i", false,-1, 31,0);
    tracep->declBus(c+166,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+167,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+171,"inst_o", false,-1, 31,0);
    tracep->declBus(c+170,"pc_o", false,-1, 31,0);
    tracep->declBus(c+168,"result_o", false,-1, 31,0);
    tracep->declBus(c+398,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+169,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+429,"mem_access_done", false,-1);
    tracep->declBit(c+423,"mem_active", false,-1);
    tracep->declBus(c+408,"inst_from_IFU", false,-1, 31,0);
    tracep->declBus(c+172,"inst_from_WBU", false,-1, 31,0);
    tracep->declBit(c+431,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+435,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+436,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+102,"state", false,-1, 1,0);
    tracep->declBus(c+103,"dmem_rdata_raw", false,-1, 31,0);
    tracep->declBus(c+329,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+330,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+331,"wmask", false,-1, 7,0);
    tracep->declBus(c+332,"ctl_mem_access", false,-1, 2,0);
    tracep->declBit(c+104,"mem_en", false,-1);
    tracep->declBit(c+105,"mem_wen", false,-1);
    tracep->declBus(c+333,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+329,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+106,"rvalid", false,-1);
    tracep->declBit(c+107,"wt_res_valid", false,-1);
    tracep->declBit(c+108,"arvalid", false,-1);
    tracep->declBit(c+109,"wt_req_valid", false,-1);
    tracep->declBit(c+110,"arready", false,-1);
    tracep->declBit(c+111,"rready", false,-1);
    tracep->declBus(c+334,"funct3", false,-1, 2,0);
    tracep->declBus(c+335,"funct7", false,-1, 6,0);
    tracep->declBus(c+336,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+103,"data_in", false,-1, 31,0);
    tracep->declBus(c+333,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+332,"control", false,-1, 2,0);
    tracep->declBus(c+398,"data_out", false,-1, 31,0);
    tracep->declBus(c+337,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+399,"shifted_data", false,-1, 31,0);
    tracep->declBus(c+400,"zero_ext_byte", false,-1, 31,0);
    tracep->declBus(c+401,"zero_ext_half", false,-1, 31,0);
    tracep->declBus(c+402,"sign_ext_byte", false,-1, 31,0);
    tracep->declBus(c+403,"sign_ext_half", false,-1, 31,0);
    tracep->pushNamePrefix("mem_mux ");
    tracep->declBus(c+452,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+462,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+398,"out", false,-1, 31,0);
    tracep->declBus(c+332,"key", false,-1, 2,0);
    tracep->declArray(c+131,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+452,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+462,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+454,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+398,"out", false,-1, 31,0);
    tracep->declBus(c+332,"key", false,-1, 2,0);
    tracep->declBus(c+455,"default_out", false,-1, 31,0);
    tracep->declArray(c+131,"lut", false,-1, 174,0);
    tracep->declBus(c+482,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+137+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+147+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+404,"lut_out", false,-1, 31,0);
    tracep->declBit(c+338,"hit", false,-1);
    tracep->declBus(c+483,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4_mem ");
    tracep->declBus(c+453,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBit(c+109,"awvalid", false,-1);
    tracep->declBit(c+112,"awready", false,-1);
    tracep->declBus(c+333,"awaddr", false,-1, 31,0);
    tracep->declBit(c+109,"wvalid", false,-1);
    tracep->declBit(c+113,"wready", false,-1);
    tracep->declBus(c+330,"wdata", false,-1, 31,0);
    tracep->declBus(c+331,"wstrb", false,-1, 7,0);
    tracep->declBit(c+107,"bvalid", false,-1);
    tracep->declBit(c+459,"bready", false,-1);
    tracep->declBus(c+114,"bresp", false,-1, 1,0);
    tracep->declBit(c+108,"arvalid", false,-1);
    tracep->declBit(c+110,"arready", false,-1);
    tracep->declBus(c+333,"araddr", false,-1, 31,0);
    tracep->declBit(c+106,"rvalid", false,-1);
    tracep->declBit(c+111,"rready", false,-1);
    tracep->declBus(c+103,"rdata", false,-1, 31,0);
    tracep->declBus(c+115,"rresp", false,-1, 1,0);
    tracep->declBus(c+436,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+116,"sram_data_out", false,-1, 31,0);
    tracep->declBit(c+117,"sram_rd_res_valid", false,-1);
    tracep->declBit(c+118,"sram_wt_res_valid", false,-1);
    tracep->declBus(c+119,"state", false,-1, 1,0);
    tracep->declBus(c+477,"IDLE", false,-1, 1,0);
    tracep->declBus(c+478,"WRITE", false,-1, 1,0);
    tracep->declBus(c+479,"READ", false,-1, 1,0);
    tracep->declBus(c+120,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+121,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+122,"wstrb_reg", false,-1, 7,0);
    tracep->declBit(c+123,"rd_req_valid", false,-1);
    tracep->declBit(c+124,"wt_req_valid", false,-1);
    tracep->pushNamePrefix("sram_inst ");
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBit(c+123,"rd_req_valid", false,-1);
    tracep->declBus(c+120,"addr", false,-1, 31,0);
    tracep->declBus(c+116,"data_out", false,-1, 31,0);
    tracep->declBit(c+117,"rd_res_valid", false,-1);
    tracep->declBit(c+124,"wt_req_valid", false,-1);
    tracep->declBus(c+120,"waddr", false,-1, 31,0);
    tracep->declBus(c+121,"wdata", false,-1, 31,0);
    tracep->declBus(c+122,"wmask", false,-1, 7,0);
    tracep->declBit(c+118,"wt_res_valid", false,-1);
    tracep->declBus(c+125,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+126,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+127,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+128,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+129,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+130,"wt_req_valid_delayed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dmem_addr_reg_MEM ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+424,"din", false,-1, 31,0);
    tracep->declBus(c+333,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_MEM ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+164,"din", false,-1, 31,0);
    tracep->declBus(c+171,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_acces_ctl_mux ");
    tracep->declBus(c+484,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+485,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+462,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+332,"out", false,-1, 2,0);
    tracep->declBus(c+339,"key", false,-1, 9,0);
    tracep->declArray(c+486,"lut", false,-1, 103,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+484,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+485,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+462,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+454,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+332,"out", false,-1, 2,0);
    tracep->declBus(c+339,"key", false,-1, 9,0);
    tracep->declBus(c+471,"default_out", false,-1, 2,0);
    tracep->declArray(c+486,"lut", false,-1, 103,0);
    tracep->declBus(c+490,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+42+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+50+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+340,"lut_out", false,-1, 2,0);
    tracep->declBit(c+341,"hit", false,-1);
    tracep->declBus(c+491,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_MEM ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+163,"din", false,-1, 31,0);
    tracep->declBus(c+170,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_MEM ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+460,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+167,"din", false,-1, 4,0);
    tracep->declBus(c+169,"dout", false,-1, 4,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_MEM ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+165,"din", false,-1, 31,0);
    tracep->declBus(c+168,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_MEM ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+166,"din", false,-1, 31,0);
    tracep->declBus(c+329,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wmask_gen ");
    tracep->declBus(c+332,"control", false,-1, 2,0);
    tracep->declBus(c+333,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+329,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+330,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+331,"wmask", false,-1, 7,0);
    tracep->declBus(c+337,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+342,"base_mask", false,-1, 7,0);
    tracep->declBus(c+331,"shifted_mask", false,-1, 7,0);
    tracep->pushNamePrefix("mem_mux_write ");
    tracep->declBus(c+462,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+462,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+484,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"out", false,-1, 7,0);
    tracep->declBus(c+332,"key", false,-1, 2,0);
    tracep->declQuad(c+492,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+462,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+462,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+484,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+454,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+342,"out", false,-1, 7,0);
    tracep->declBus(c+332,"key", false,-1, 2,0);
    tracep->declBus(c+476,"default_out", false,-1, 7,0);
    tracep->declQuad(c+492,"lut", false,-1, 32,0);
    tracep->declBus(c+451,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+58+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+61+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+64+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+343,"lut_out", false,-1, 7,0);
    tracep->declBit(c+344,"hit", false,-1);
    tracep->declBus(c+494,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+452,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBus(c+152,"wdata", false,-1, 31,0);
    tracep->declBus(c+175,"waddr", false,-1, 4,0);
    tracep->declBit(c+397,"wen", false,-1);
    tracep->declBus(c+173,"raddr1", false,-1, 4,0);
    tracep->declBus(c+174,"raddr2", false,-1, 4,0);
    tracep->declBus(c+176,"rdata1", false,-1, 31,0);
    tracep->declBus(c+161,"rdata2", false,-1, 31,0);
    tracep->declBus(c+410,"x2_debug", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+345+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+67,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+152,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+175,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+397,"rf_we", false,-1);
    tracep->declBus(c+170,"pc_i", false,-1, 31,0);
    tracep->declBus(c+171,"inst_i", false,-1, 31,0);
    tracep->declBus(c+168,"result_i", false,-1, 31,0);
    tracep->declBus(c+398,"dmem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+169,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+429,"mem_access_done", false,-1);
    tracep->declBit(c+439,"pc_wen", false,-1);
    tracep->declBus(c+408,"inst_from_IFU", false,-1, 31,0);
    tracep->declBit(c+417,"wbu_active", false,-1);
    tracep->declBus(c+172,"inst_o", false,-1, 31,0);
    tracep->declBus(c+419,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+420,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+421,"opcode_debug", false,-1, 6,0);
    tracep->declBus(c+426,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+440,"state", false,-1, 1,0);
    tracep->declBus(c+419,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+377,"pc_o", false,-1, 31,0);
    tracep->declBus(c+378,"result_o", false,-1, 31,0);
    tracep->declBus(c+495,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+379,"dmem_rdata_o", false,-1, 31,0);
    tracep->declBus(c+380,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+381,"funct3", false,-1, 2,0);
    tracep->declBus(c+382,"funct7", false,-1, 6,0);
    tracep->declBus(c+421,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("dmem_rdata_reg_WBU ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+398,"din", false,-1, 31,0);
    tracep->declBus(c+379,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_WBU ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+171,"din", false,-1, 31,0);
    tracep->declBus(c+172,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_WBU ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+170,"din", false,-1, 31,0);
    tracep->declBus(c+377,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_WBU ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+460,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+169,"din", false,-1, 4,0);
    tracep->declBus(c+175,"dout", false,-1, 4,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_WBU ");
    tracep->declBus(c+453,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+405,"clk", false,-1);
    tracep->declBit(c+406,"rst", false,-1);
    tracep->declBus(c+168,"din", false,-1, 31,0);
    tracep->declBus(c+378,"dout", false,-1, 31,0);
    tracep->declBit(c+459,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_mux ");
    tracep->declBus(c+465,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+467,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+152,"out", false,-1, 31,0);
    tracep->declBus(c+380,"key", false,-1, 1,0);
    tracep->declBus(c+455,"default_out", false,-1, 31,0);
    tracep->declArray(c+441,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+465,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+467,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+453,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+152,"out", false,-1, 31,0);
    tracep->declBus(c+380,"key", false,-1, 1,0);
    tracep->declBus(c+455,"default_out", false,-1, 31,0);
    tracep->declArray(c+441,"lut", false,-1, 135,0);
    tracep->declBus(c+468,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+383+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+68+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+391+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+395,"lut_out", false,-1, 31,0);
    tracep->declBit(c+396,"hit", false,-1);
    tracep->declBus(c+470,"i", false,-1, 31,0);
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
    bufp->fullIData(oldp+96,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__addr_delayed),32);
    bufp->fullBit(oldp+97,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__rd_req_valid_delayed));
    bufp->fullIData(oldp+98,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__waddr_delayed),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__wdata_delayed),32);
    bufp->fullCData(oldp+100,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__wmask_delayed),8);
    bufp->fullBit(oldp+101,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__wt_req_valid_delayed));
    bufp->fullCData(oldp+102,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__state),2);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw),32);
    bufp->fullBit(oldp+104,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en));
    bufp->fullBit(oldp+105,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen));
    bufp->fullBit(oldp+106,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rvalid));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wt_res_valid));
    bufp->fullBit(oldp+108,(((~ (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen)) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en))));
    bufp->fullBit(oldp+109,(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen))));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__arready));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rready));
    bufp->fullBit(oldp+112,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__awready));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wready));
    bufp->fullCData(oldp+114,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__bresp),2);
    bufp->fullCData(oldp+115,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__rresp),2);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_data_out),32);
    bufp->fullBit(oldp+117,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_rd_res_valid));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_wt_res_valid));
    bufp->fullCData(oldp+119,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__state),2);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__addr_reg),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wdata_reg),32);
    bufp->fullCData(oldp+122,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wstrb_reg),8);
    bufp->fullBit(oldp+123,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__rd_req_valid));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wt_req_valid));
    bufp->fullIData(oldp+125,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__addr_delayed),32);
    bufp->fullBit(oldp+126,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__rd_req_valid_delayed));
    bufp->fullIData(oldp+127,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__waddr_delayed),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__wdata_delayed),32);
    bufp->fullCData(oldp+129,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__wmask_delayed),8);
    bufp->fullBit(oldp+130,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__wt_req_valid_delayed));
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
    bufp->fullWData(oldp+131,(__Vtemp_hdb58eddb__0),175);
    bufp->fullQData(oldp+137,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+139,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+141,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+143,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+145,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_24120009_core__DOT__reg_write_data),32);
    bufp->fullCData(oldp+153,(vlSelf->ysyx_24120009_core__DOT__pc_sel),3);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_24120009_core__DOT__Op1),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_24120009_core__DOT__Op2),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_24120009_core__DOT__jump_reg_target),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_24120009_core__DOT__br_target),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_24120009_core__DOT__jmp_target),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU),32);
    bufp->fullCData(oldp+162,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 7U))),5);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM),32);
    bufp->fullCData(oldp+167,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM),5);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU),32);
    bufp->fullCData(oldp+169,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU),5);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM),32);
    bufp->fullCData(oldp+173,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+174,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+175,(vlSelf->ysyx_24120009_core__DOT__waddr),5);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_24120009_core__DOT__rdata1),32);
    bufp->fullCData(oldp+177,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op),5);
    bufp->fullCData(oldp+178,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+179,((vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+180,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)),7);
    bufp->fullIData(oldp+181,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               + vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+182,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               - vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+183,(vlSelf->__VdfgTmp_h9d12977d__0),32);
    bufp->fullIData(oldp+184,(vlSelf->__VdfgTmp_h9d0653ad__0),32);
    bufp->fullIData(oldp+185,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               ^ vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+186,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               | vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+187,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               & vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+188,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+189,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+190,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
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
    bufp->fullWData(oldp+191,(__Vtemp_hd74bf4d1__0),407);
    bufp->fullQData(oldp+204,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+206,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+208,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+210,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+212,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+214,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+216,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+218,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+220,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8]),37);
    bufp->fullQData(oldp+222,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9]),37);
    bufp->fullQData(oldp+224,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[10]),37);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+236,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+238,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+239,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+240,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+241,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
    bufp->fullCData(oldp+242,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel),2);
    bufp->fullCData(oldp+243,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel),2);
    bufp->fullSData(oldp+244,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+245,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+246,(((0x800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+247,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+248,(((0x80000U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+249,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext),32);
    bufp->fullIData(oldp+250,((((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+251,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext),32);
    bufp->fullIData(oldp+252,((0xfffff000U & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),32);
    bufp->fullIData(oldp+253,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext),32);
    bufp->fullCData(oldp+254,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+255,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+256,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),7);
    bufp->fullBit(oldp+257,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken));
    bufp->fullIData(oldp+258,((0x28aceU | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq) 
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
    bufp->fullCData(oldp+259,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+260,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+261,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+262,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+263,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+264,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullBit(oldp+265,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+266,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+267,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+268,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+269,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+270,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+271,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+272,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+273,(__Vtemp_h3e4b9c5b__0),68);
    bufp->fullQData(oldp+276,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+278,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullIData(oldp+280,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+281,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+282,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+283,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+284,(__Vtemp_h4b1a9c47__0),136);
    bufp->fullQData(oldp+289,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+291,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+293,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+295,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+302,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+303,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next),32);
    bufp->fullIData(oldp+305,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)),32);
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
    bufp->fullWData(oldp+306,(__Vtemp_h47858337__0),175);
    bufp->fullQData(oldp+312,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+314,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+316,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+318,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+320,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+322,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+328,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+329,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o),32);
    bufp->fullIData(oldp+330,(((0x1fU >= (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                   << 3U)))
                                ? (vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o 
                                   << (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                << 3U)))
                                : 0U)),32);
    bufp->fullCData(oldp+331,((0xffU & ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask) 
                                        << (3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)))),8);
    bufp->fullCData(oldp+332,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access),3);
    bufp->fullIData(oldp+333,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o),32);
    bufp->fullCData(oldp+334,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+335,((vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+336,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)),7);
    bufp->fullCData(oldp+337,((3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)),2);
    bufp->fullBit(oldp+338,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+339,(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key),10);
    bufp->fullCData(oldp+340,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+341,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+342,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask),8);
    bufp->fullCData(oldp+343,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+344,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+345,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+349,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+350,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+351,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+352,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+353,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+354,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+360,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+363,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+364,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+365,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+370,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+371,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o),32);
    bufp->fullIData(oldp+378,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o),32);
    bufp->fullCData(oldp+380,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel),2);
    bufp->fullCData(oldp+381,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+382,((vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullQData(oldp+383,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+385,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+387,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+389,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+391,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+396,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit));
    bufp->fullBit(oldp+397,(vlSelf->ysyx_24120009_core__DOT__rf_we));
    bufp->fullIData(oldp+398,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+399,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullIData(oldp+400,((0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+401,((0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+402,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+403,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+404,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+405,(vlSelf->clk));
    bufp->fullBit(oldp+406,(vlSelf->rst));
    bufp->fullIData(oldp+407,(vlSelf->pc_debug),32);
    bufp->fullIData(oldp+408,(vlSelf->inst_debug),32);
    bufp->fullIData(oldp+409,(vlSelf->reg_write_data_debug),32);
    bufp->fullIData(oldp+410,(vlSelf->x2_debug),32);
    bufp->fullCData(oldp+411,(vlSelf->waddr_debug),5);
    bufp->fullBit(oldp+412,(vlSelf->mem_wen_debug));
    bufp->fullBit(oldp+413,(vlSelf->mem_en_debug));
    bufp->fullIData(oldp+414,(vlSelf->Op1_debug),32);
    bufp->fullIData(oldp+415,(vlSelf->Op2_debug),32);
    bufp->fullBit(oldp+416,(vlSelf->rf_we_debug));
    bufp->fullBit(oldp+417,(vlSelf->wbu_active_debug));
    bufp->fullIData(oldp+418,(vlSelf->imem_addr_debug),32);
    bufp->fullIData(oldp+419,(vlSelf->pc_plus4_debug),32);
    bufp->fullCData(oldp+420,(vlSelf->wb_sel_debug),2);
    bufp->fullCData(oldp+421,(vlSelf->opcode_debug),7);
    bufp->fullBit(oldp+422,(vlSelf->pc_wen_debug));
    bufp->fullBit(oldp+423,(vlSelf->mem_active_debug));
    bufp->fullIData(oldp+424,(vlSelf->result_from_EXU_to_MEM_debug),32);
    bufp->fullIData(oldp+425,(vlSelf->result_from_MEM_to_WBU_debug),32);
    bufp->fullIData(oldp+426,(vlSelf->result_from_WB_debug),32);
    bufp->fullCData(oldp+427,(vlSelf->alu_op_debug),5);
    bufp->fullIData(oldp+428,(vlSelf->inst_from_EXU_to_MEM_debug),32);
    bufp->fullBit(oldp+429,(vlSelf->mem_access_done_debug));
    bufp->fullIData(oldp+430,(vlSelf->dmem_rdata_from_MEM_to_WBU_debug),32);
    bufp->fullBit(oldp+431,(vlSelf->wt_res_valid_debug));
    bufp->fullCData(oldp+432,(vlSelf->ifu_state_debug),3);
    bufp->fullBit(oldp+433,(vlSelf->rd_res_valid_debug));
    bufp->fullCData(oldp+434,(vlSelf->axi4_ifu_state_debug),2);
    bufp->fullCData(oldp+435,(vlSelf->mem_ctl_state_debug),2);
    bufp->fullCData(oldp+436,(vlSelf->axi4_mem_state_debug),2);
    bufp->fullCData(oldp+437,(vlSelf->idu_state_debug),2);
    bufp->fullBit(oldp+438,(vlSelf->inst_valid_debug));
    bufp->fullBit(oldp+439,(vlSelf->ysyx_24120009_core__DOT__pc_wen));
    bufp->fullCData(oldp+440,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state),2);
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
    bufp->fullWData(oldp+441,(__Vtemp_h650a5f8e__0),136);
    bufp->fullCData(oldp+446,(vlSelf->ysyx_24120009_core__DOT__alu_op),5);
    bufp->fullBit(oldp+447,(vlSelf->ysyx_24120009_core__DOT__mem_en));
    bufp->fullBit(oldp+448,(vlSelf->ysyx_24120009_core__DOT__mem_wen));
    bufp->fullCData(oldp+449,(vlSelf->ysyx_24120009_core__DOT__wb_sel),2);
    bufp->fullIData(oldp+450,(vlSelf->ysyx_24120009_core__DOT__pc_plus4),32);
    bufp->fullIData(oldp+451,(0xbU),32);
    bufp->fullIData(oldp+452,(5U),32);
    bufp->fullIData(oldp+453,(0x20U),32);
    bufp->fullIData(oldp+454,(0U),32);
    bufp->fullIData(oldp+455,(0U),32);
    bufp->fullIData(oldp+456,(0x25U),32);
    bufp->fullIData(oldp+457,(0xbU),32);
    bufp->fullIData(oldp+458,(0x80000000U),32);
    bufp->fullBit(oldp+459,(1U));
    bufp->fullCData(oldp+460,(0U),5);
    bufp->fullIData(oldp+461,(6U),32);
    bufp->fullIData(oldp+462,(3U),32);
    bufp->fullIData(oldp+463,(1U),32);
    bufp->fullBit(oldp+464,(0U));
    bufp->fullIData(oldp+465,(4U),32);
    bufp->fullIData(oldp+466,(6U),32);
    bufp->fullIData(oldp+467,(2U),32);
    bufp->fullIData(oldp+468,(0x22U),32);
    bufp->fullIData(oldp+469,(2U),32);
    bufp->fullIData(oldp+470,(4U),32);
    bufp->fullCData(oldp+471,(0U),3);
    bufp->fullCData(oldp+472,(1U),3);
    bufp->fullCData(oldp+473,(2U),3);
    bufp->fullCData(oldp+474,(3U),3);
    bufp->fullIData(oldp+475,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__imem_addr),32);
    bufp->fullCData(oldp+476,(0U),8);
    bufp->fullCData(oldp+477,(0U),2);
    bufp->fullCData(oldp+478,(1U),2);
    bufp->fullCData(oldp+479,(2U),2);
    bufp->fullIData(oldp+480,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wdata_reg),32);
    bufp->fullCData(oldp+481,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wstrb_reg),8);
    bufp->fullIData(oldp+482,(0x23U),32);
    bufp->fullIData(oldp+483,(5U),32);
    bufp->fullIData(oldp+484,(8U),32);
    bufp->fullIData(oldp+485,(0xaU),32);
    __Vtemp_ha516852c__0[0U] = 0x491808c9U;
    __Vtemp_ha516852c__0[1U] = 0xc9076a3U;
    __Vtemp_ha516852c__0[2U] = 0x903001c8U;
    __Vtemp_ha516852c__0[3U] = 6U;
    bufp->fullWData(oldp+486,(__Vtemp_ha516852c__0),104);
    bufp->fullIData(oldp+490,(0xdU),32);
    bufp->fullIData(oldp+491,(8U),32);
    bufp->fullQData(oldp+492,(0x83c81801ULL),33);
    bufp->fullIData(oldp+494,(3U),32);
    bufp->fullIData(oldp+495,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_addr_o),32);
}
