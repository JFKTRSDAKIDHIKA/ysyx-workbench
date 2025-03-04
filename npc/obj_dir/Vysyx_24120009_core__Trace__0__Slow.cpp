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
    tracep->declBit(c+128,"clock", false,-1);
    tracep->declBit(c+129,"reset", false,-1);
    tracep->declBus(c+130,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+131,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+132,"io_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+133,"io_lsu_state_debug", false,-1, 1,0);
    tracep->declBit(c+134,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+135,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+136,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+137,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBit(c+138,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+139,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+140,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->pushNamePrefix("ysyx_24120009_core ");
    tracep->declBit(c+128,"clock", false,-1);
    tracep->declBit(c+129,"reset", false,-1);
    tracep->declBus(c+130,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+131,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+132,"io_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+133,"io_lsu_state_debug", false,-1, 1,0);
    tracep->declBit(c+134,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+135,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBus(c+136,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+137,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBit(c+138,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+139,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+140,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+128,"clock", false,-1);
    tracep->declBit(c+129,"reset", false,-1);
    tracep->declBit(c+18,"io_ifu_ar_valid", false,-1);
    tracep->declBit(c+2,"io_ifu_ar_ready", false,-1);
    tracep->declBus(c+88,"io_ifu_ar_addr", false,-1, 31,0);
    tracep->declBit(c+13,"io_ifu_r_valid", false,-1);
    tracep->declBit(c+89,"io_ifu_r_ready", false,-1);
    tracep->declBus(c+141,"io_ifu_r_data", false,-1, 31,0);
    tracep->declBit(c+90,"io_lsu_aw_valid", false,-1);
    tracep->declBit(c+3,"io_lsu_aw_ready", false,-1);
    tracep->declBus(c+4,"io_lsu_aw_addr", false,-1, 31,0);
    tracep->declBit(c+90,"io_lsu_w_valid", false,-1);
    tracep->declBit(c+3,"io_lsu_w_ready", false,-1);
    tracep->declBus(c+5,"io_lsu_w_data", false,-1, 31,0);
    tracep->declBus(c+6,"io_lsu_w_strb", false,-1, 3,0);
    tracep->declBit(c+142,"io_lsu_b_valid", false,-1);
    tracep->declBit(c+90,"io_lsu_b_ready", false,-1);
    tracep->declBit(c+91,"io_lsu_ar_valid", false,-1);
    tracep->declBit(c+3,"io_lsu_ar_ready", false,-1);
    tracep->declBus(c+7,"io_lsu_ar_addr", false,-1, 31,0);
    tracep->declBit(c+143,"io_lsu_r_valid", false,-1);
    tracep->declBit(c+91,"io_lsu_r_ready", false,-1);
    tracep->declBus(c+14,"io_lsu_r_data", false,-1, 31,0);
    tracep->declBit(c+92,"io_axi_aw_valid", false,-1);
    tracep->declBit(c+8,"io_axi_aw_ready", false,-1);
    tracep->declBus(c+9,"io_axi_aw_addr", false,-1, 31,0);
    tracep->declBit(c+92,"io_axi_w_valid", false,-1);
    tracep->declBit(c+8,"io_axi_w_ready", false,-1);
    tracep->declBus(c+10,"io_axi_w_data", false,-1, 31,0);
    tracep->declBus(c+11,"io_axi_w_strb", false,-1, 3,0);
    tracep->declBit(c+144,"io_axi_b_valid", false,-1);
    tracep->declBit(c+92,"io_axi_b_ready", false,-1);
    tracep->declBit(c+93,"io_axi_ar_valid", false,-1);
    tracep->declBit(c+8,"io_axi_ar_ready", false,-1);
    tracep->declBus(c+12,"io_axi_ar_addr", false,-1, 31,0);
    tracep->declBit(c+15,"io_axi_r_valid", false,-1);
    tracep->declBit(c+94,"io_axi_r_ready", false,-1);
    tracep->declBus(c+16,"io_axi_r_data", false,-1, 31,0);
    tracep->declBus(c+140,"io_Arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+95,"state", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+19,"isIFUActive", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+128,"clock", false,-1);
    tracep->declBit(c+129,"reset", false,-1);
    tracep->declBit(c+96,"io_in_ready", false,-1);
    tracep->declBit(c+97,"io_in_valid", false,-1);
    tracep->declBus(c+20,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+21,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+22,"io_in_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+23,"io_in_bits_alu_op1", false,-1, 31,0);
    tracep->declBus(c+98,"io_in_bits_alu_op2", false,-1, 31,0);
    tracep->declBus(c+99,"io_in_bits_rs2_data", false,-1, 31,0);
    tracep->declBit(c+100,"io_out_ready", false,-1);
    tracep->declBit(c+101,"io_out_valid", false,-1);
    tracep->declBus(c+24,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+25,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+102,"io_out_bits_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+102,"io_out_bits_result", false,-1, 31,0);
    tracep->declBus(c+103,"io_out_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+26,"io_out_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+27,"state", false,-1, 1,0);
    tracep->declBit(c+96,"io_in_ready_0", false,-1);
    tracep->declBus(c+24,"exu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+25,"exu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+103,"exu_reg_rs2_data", false,-1, 31,0);
    tracep->declBus(c+26,"exu_reg_wb_addr", false,-1, 4,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+23,"io_a", false,-1, 31,0);
    tracep->declBus(c+98,"io_b", false,-1, 31,0);
    tracep->declBus(c+28,"io_aluOp", false,-1, 4,0);
    tracep->declBus(c+102,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+128,"clock", false,-1);
    tracep->declBit(c+129,"reset", false,-1);
    tracep->declBit(c+29,"io_in_ready", false,-1);
    tracep->declBit(c+30,"io_in_valid", false,-1);
    tracep->declBus(c+131,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+130,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+96,"io_out_ready", false,-1);
    tracep->declBit(c+97,"io_out_valid", false,-1);
    tracep->declBus(c+20,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+21,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+22,"io_out_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+23,"io_out_bits_alu_op1", false,-1, 31,0);
    tracep->declBus(c+98,"io_out_bits_alu_op2", false,-1, 31,0);
    tracep->declBus(c+99,"io_out_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+31,"io_jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+32,"io_br_target", false,-1, 31,0);
    tracep->declBus(c+33,"io_jmp_target", false,-1, 31,0);
    tracep->declBus(c+104,"io_pc_sel", false,-1, 2,0);
    tracep->declBus(c+34,"io_rs1_data", false,-1, 31,0);
    tracep->declBus(c+99,"io_rs2_data", false,-1, 31,0);
    tracep->declBus(c+35,"io_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+36,"io_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+20,"idu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+21,"idu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+37,"state", false,-1, 1,0);
    tracep->declBit(c+29,"io_in_ready_0", false,-1);
    tracep->declBit(c+105,"br_eq", false,-1);
    tracep->declBit(c+106,"br_lt", false,-1);
    tracep->declBit(c+107,"br_ltu", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+128,"clock", false,-1);
    tracep->declBit(c+129,"reset", false,-1);
    tracep->declBit(c+29,"io_out_ready", false,-1);
    tracep->declBit(c+30,"io_out_valid", false,-1);
    tracep->declBus(c+131,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+130,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+104,"io_pc_sel", false,-1, 2,0);
    tracep->declBus(c+31,"io_jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+32,"io_br_target", false,-1, 31,0);
    tracep->declBus(c+33,"io_jmp_target", false,-1, 31,0);
    tracep->declBit(c+38,"io_pc_wen", false,-1);
    tracep->declBit(c+18,"io_memory_ar_valid", false,-1);
    tracep->declBit(c+2,"io_memory_ar_ready", false,-1);
    tracep->declBus(c+88,"io_memory_ar_addr", false,-1, 31,0);
    tracep->declBit(c+13,"io_memory_r_valid", false,-1);
    tracep->declBit(c+89,"io_memory_r_ready", false,-1);
    tracep->declBus(c+141,"io_memory_r_data", false,-1, 31,0);
    tracep->declBus(c+130,"io_pc_debug", false,-1, 31,0);
    tracep->declBus(c+131,"io_inst_debug", false,-1, 31,0);
    tracep->declBus(c+132,"io_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+108,"pc", false,-1, 31,0);
    tracep->declBus(c+39,"if_inst_buffer", false,-1, 31,0);
    tracep->declBus(c+40,"state", false,-1, 1,0);
    tracep->declBus(c+131,"io_inst_debug_0", false,-1, 31,0);
    tracep->pushNamePrefix("ebreakHandler ");
    tracep->declBus(c+131,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+128,"clock", false,-1);
    tracep->declBit(c+129,"reset", false,-1);
    tracep->declBit(c+100,"io_in_ready", false,-1);
    tracep->declBit(c+101,"io_in_valid", false,-1);
    tracep->declBus(c+24,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+25,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+102,"io_in_bits_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+102,"io_in_bits_result", false,-1, 31,0);
    tracep->declBus(c+103,"io_in_bits_rs2_data", false,-1, 31,0);
    tracep->declBus(c+26,"io_in_bits_wb_addr", false,-1, 4,0);
    tracep->declBit(c+109,"io_out_ready", false,-1);
    tracep->declBit(c+110,"io_out_valid", false,-1);
    tracep->declBus(c+135,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+41,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+145,"io_out_bits_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+111,"io_out_bits_result", false,-1, 31,0);
    tracep->declBus(c+42,"io_out_bits_wb_addr", false,-1, 4,0);
    tracep->declBit(c+90,"io_memory_aw_valid", false,-1);
    tracep->declBit(c+3,"io_memory_aw_ready", false,-1);
    tracep->declBus(c+4,"io_memory_aw_addr", false,-1, 31,0);
    tracep->declBit(c+90,"io_memory_w_valid", false,-1);
    tracep->declBit(c+3,"io_memory_w_ready", false,-1);
    tracep->declBus(c+5,"io_memory_w_data", false,-1, 31,0);
    tracep->declBus(c+6,"io_memory_w_strb", false,-1, 3,0);
    tracep->declBit(c+142,"io_memory_b_valid", false,-1);
    tracep->declBit(c+90,"io_memory_b_ready", false,-1);
    tracep->declBit(c+91,"io_memory_ar_valid", false,-1);
    tracep->declBit(c+3,"io_memory_ar_ready", false,-1);
    tracep->declBus(c+7,"io_memory_ar_addr", false,-1, 31,0);
    tracep->declBit(c+143,"io_memory_r_valid", false,-1);
    tracep->declBit(c+91,"io_memory_r_ready", false,-1);
    tracep->declBus(c+14,"io_memory_r_data", false,-1, 31,0);
    tracep->declBus(c+133,"io_lsu_state_debug", false,-1, 1,0);
    tracep->declBit(c+134,"io_lsu_is_ld_or_st_debug", false,-1);
    tracep->declBus(c+135,"io_lsu_reg_inst_debug", false,-1, 31,0);
    tracep->declBit(c+112,"isStore", false,-1);
    tracep->declBit(c+113,"isLoad", false,-1);
    tracep->declBus(c+43,"lsu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+41,"lsu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+111,"lsu_reg_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+111,"lsu_reg_result", false,-1, 31,0);
    tracep->declBus(c+114,"lsu_reg_rs2_data", false,-1, 31,0);
    tracep->declBus(c+42,"lsu_reg_wb_addr", false,-1, 4,0);
    tracep->declBus(c+115,"mem_access_control", false,-1, 2,0);
    tracep->declBus(c+116,"state", false,-1, 1,0);
    tracep->declBit(c+100,"io_in_ready_0", false,-1);
    tracep->declBit(c+91,"io_memory_r_ready_0", false,-1);
    tracep->declBit(c+90,"io_memory_b_ready_0", false,-1);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+14,"io_data_in", false,-1, 31,0);
    tracep->declBus(c+111,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+115,"io_control", false,-1, 2,0);
    tracep->declBus(c+145,"io_data_out", false,-1, 31,0);
    tracep->declBus(c+17,"shifted_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("write_mask_gen ");
    tracep->declBus(c+111,"io_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+114,"io_dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+115,"io_control", false,-1, 2,0);
    tracep->declBus(c+117,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+118,"io_dmem_wdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+146,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+147,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+128,"clk", false,-1);
    tracep->declBus(c+137,"rd_data", false,-1, 31,0);
    tracep->declBus(c+44,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+138,"wen", false,-1);
    tracep->declBus(c+35,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+36,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+34,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+99,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+45+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+128,"clock", false,-1);
    tracep->declBit(c+129,"reset", false,-1);
    tracep->declBit(c+128,"io_clk", false,-1);
    tracep->declBit(c+129,"io_rst", false,-1);
    tracep->declBit(c+92,"io_axi_aw_valid", false,-1);
    tracep->declBit(c+8,"io_axi_aw_ready", false,-1);
    tracep->declBus(c+9,"io_axi_aw_addr", false,-1, 31,0);
    tracep->declBit(c+92,"io_axi_w_valid", false,-1);
    tracep->declBit(c+8,"io_axi_w_ready", false,-1);
    tracep->declBus(c+10,"io_axi_w_data", false,-1, 31,0);
    tracep->declBus(c+11,"io_axi_w_strb", false,-1, 3,0);
    tracep->declBit(c+144,"io_axi_b_valid", false,-1);
    tracep->declBit(c+92,"io_axi_b_ready", false,-1);
    tracep->declBit(c+93,"io_axi_ar_valid", false,-1);
    tracep->declBit(c+8,"io_axi_ar_ready", false,-1);
    tracep->declBus(c+12,"io_axi_ar_addr", false,-1, 31,0);
    tracep->declBit(c+15,"io_axi_r_valid", false,-1);
    tracep->declBit(c+94,"io_axi_r_ready", false,-1);
    tracep->declBus(c+16,"io_axi_r_data", false,-1, 31,0);
    tracep->declBus(c+119,"state", false,-1, 1,0);
    tracep->declBus(c+120,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+121,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+122,"wstrb_reg", false,-1, 7,0);
    tracep->declBit(c+123,"rd_req_valid", false,-1);
    tracep->declBit(c+124,"wt_req_valid", false,-1);
    tracep->declBit(c+8,"io_axi_w_ready_0", false,-1);
    tracep->pushNamePrefix("sram ");
    tracep->declBus(c+148,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBus(c+147,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+128,"clk", false,-1);
    tracep->declBit(c+129,"rst", false,-1);
    tracep->declBit(c+123,"rd_req_valid", false,-1);
    tracep->declBus(c+120,"addr", false,-1, 31,0);
    tracep->declBus(c+125,"data_out", false,-1, 31,0);
    tracep->declBit(c+126,"rd_res_valid", false,-1);
    tracep->declBit(c+124,"wt_req_valid", false,-1);
    tracep->declBus(c+120,"waddr", false,-1, 31,0);
    tracep->declBus(c+121,"wdata", false,-1, 31,0);
    tracep->declBus(c+122,"wmask", false,-1, 7,0);
    tracep->declBit(c+127,"wt_res_valid", false,-1);
    tracep->declBus(c+82,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+83,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+84,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+85,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+86,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+87,"wt_req_valid_delayed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+128,"clock", false,-1);
    tracep->declBit(c+129,"reset", false,-1);
    tracep->declBit(c+109,"io_in_ready", false,-1);
    tracep->declBit(c+110,"io_in_valid", false,-1);
    tracep->declBus(c+135,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+41,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+145,"io_in_bits_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+111,"io_in_bits_result", false,-1, 31,0);
    tracep->declBus(c+42,"io_in_bits_wb_addr", false,-1, 4,0);
    tracep->declBus(c+137,"io_wb_data", false,-1, 31,0);
    tracep->declBus(c+44,"io_wb_addr", false,-1, 4,0);
    tracep->declBit(c+138,"io_wb_wen", false,-1);
    tracep->declBit(c+38,"io_pc_wen", false,-1);
    tracep->declBus(c+136,"io_wbu_state_debug", false,-1, 1,0);
    tracep->declBus(c+137,"io_wb_data_debug", false,-1, 31,0);
    tracep->declBit(c+138,"io_wb_wen_debug", false,-1);
    tracep->declBus(c+139,"io_wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+77,"state", false,-1, 1,0);
    tracep->declBit(c+109,"io_in_ready_0", false,-1);
    tracep->declBus(c+78,"wbu_reg_inst", false,-1, 31,0);
    tracep->declBus(c+79,"wbu_reg_pc", false,-1, 31,0);
    tracep->declBus(c+80,"wbu_reg_result", false,-1, 31,0);
    tracep->declBus(c+81,"wbu_reg_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+44,"wbu_reg_wb_addr", false,-1, 4,0);
    tracep->declBus(c+139,"wb_sel", false,-1, 1,0);
    tracep->declBit(c+138,"io_wb_wen_0", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
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
    VlWide<4>/*127:0*/ __Vtemp_hfc7a4a63__0;
    VlWide<8>/*255:0*/ __Vtemp_h26b388b7__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+2,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h4ab110e3__0) 
                           & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0))));
    bufp->fullBit(oldp+3,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready));
    bufp->fullIData(oldp+4,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_3)
                              ? 0U : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
    bufp->fullIData(oldp+5,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_3)
                              ? 0U : (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                      << (0x18U & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                   << 3U))))),32);
    bufp->fullCData(oldp+6,(((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_3)
                              ? 0U : (0xfU & (((0U 
                                                == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                     ? 0xfU
                                                     : 0U))) 
                                              << (3U 
                                                  & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))))),4);
    bufp->fullIData(oldp+7,(((1U & ((~ ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                                        & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__isLoad) 
                                           & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready)))) 
                                    | (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)))
                              ? 0U : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)),32);
    bufp->fullBit(oldp+8,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0));
    bufp->fullIData(oldp+9,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3)
                              ? 0U : ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_3)
                                       ? 0U : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))),32);
    bufp->fullIData(oldp+10,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3)
                               ? 0U : ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_3)
                                        ? 0U : (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
                                                << 
                                                (0x18U 
                                                 & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                    << 3U)))))),32);
    bufp->fullCData(oldp+11,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT___GEN_3)
                               ? 0U : ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_3)
                                        ? 0U : (0xfU 
                                                & (((0U 
                                                     == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                      ? 3U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                       ? 0xfU
                                                       : 0U))) 
                                                   << 
                                                   (3U 
                                                    & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)))))),4);
    __Vtemp_hfc7a4a63__0[0U] = 0U;
    __Vtemp_hfc7a4a63__0[1U] = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_3)
                                 ? vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc
                                 : 0U);
    __Vtemp_hfc7a4a63__0[2U] = (IData)((QData)((IData)(
                                                       ((1U 
                                                         & ((~ 
                                                             ((2U 
                                                               == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                                                              & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__isLoad) 
                                                                 & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready)))) 
                                                            | (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)))
                                                         ? 0U
                                                         : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))));
    __Vtemp_hfc7a4a63__0[3U] = (IData)(((QData)((IData)(
                                                        ((1U 
                                                          & ((~ 
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state)) 
                                                               & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__isLoad) 
                                                                  & (IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready)))) 
                                                             | (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT___GEN_2)))
                                                          ? 0U
                                                          : vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr))) 
                                        >> 0x20U));
    bufp->fullIData(oldp+12,((((0U == (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                                << 5U)))
                                ? 0U : (__Vtemp_hfc7a4a63__0[
                                        (((IData)(0x1fU) 
                                          + (0x7fU 
                                             & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                                << 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                             << 5U))))) 
                              | (__Vtemp_hfc7a4a63__0[
                                 (3U & (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state) 
                                              << 5U))))),32);
    bufp->fullBit(oldp+13,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_ifu_r_valid));
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_r_data),32);
    bufp->fullBit(oldp+15,(vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_valid));
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_data),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullBit(oldp+18,(vlSelf->ysyx_24120009_core__DOT___ifu_io_memory_ar_valid));
    bufp->fullBit(oldp+19,(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT__isIFUActive));
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc),32);
    bufp->fullCData(oldp+22,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_pc),32);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_wb_addr),5);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state),2);
    bufp->fullCData(oldp+28,(vlSelf->ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp),5);
    bufp->fullBit(oldp+29,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_24120009_core__DOT___ifu_io_out_valid));
    bufp->fullIData(oldp+31,((0xfffffffeU & (vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data 
                                             + (((- (IData)(
                                                            (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                   >> 0x14U))))),32);
    bufp->fullIData(oldp+32,((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc 
                              + (((- (IData)((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                       >> 7U))))))),32);
    bufp->fullIData(oldp+33,((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc 
                              + (((- (IData)((vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                                        >> 0x14U))))))),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24120009_core__DOT___regfile_rs1_data),32);
    bufp->fullCData(oldp+35,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+36,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state),2);
    bufp->fullBit(oldp+38,((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state))));
    bufp->fullIData(oldp+39,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer),32);
    bufp->fullCData(oldp+40,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_pc),32);
    bufp->fullCData(oldp+42,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_wb_addr),5);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst),32);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_reg_wb_addr),5);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24120009_core__DOT__regfile__DOT__rf[31]),32);
    bufp->fullCData(oldp+77,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state),2);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_reg_inst),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_reg_pc),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_reg_result),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_reg_dmem_rdata),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__addr_delayed),32);
    bufp->fullBit(oldp+83,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed));
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__waddr_delayed),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wdata_delayed),32);
    bufp->fullCData(oldp+86,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wmask_delayed),8);
    bufp->fullBit(oldp+87,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed));
    bufp->fullIData(oldp+88,(((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT___GEN_3)
                               ? vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc
                               : 0U)),32);
    bufp->fullBit(oldp+89,(vlSelf->ysyx_24120009_core__DOT___ifu_io_memory_r_ready));
    bufp->fullBit(oldp+90,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_memory_b_ready_0));
    bufp->fullBit(oldp+91,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_memory_r_ready_0));
    bufp->fullBit(oldp+92,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_axi_aw_valid));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_24120009_core__DOT___arbiter_io_axi_ar_valid));
    bufp->fullBit(oldp+94,(((0U != (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                            & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state))
                                ? (IData)(vlSelf->ysyx_24120009_core__DOT___ifu_io_memory_r_ready)
                                : (IData)(vlSelf->__VdfgTmp_h5315af70__0)))));
    bufp->fullCData(oldp+95,(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state),2);
    bufp->fullBit(oldp+96,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+97,(vlSelf->ysyx_24120009_core__DOT___idu_io_out_valid));
    bufp->fullIData(oldp+98,(vlSelf->ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_24120009_core__DOT___regfile_rs2_data),32);
    bufp->fullBit(oldp+100,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+101,(vlSelf->ysyx_24120009_core__DOT___exu_io_out_valid));
    bufp->fullIData(oldp+102,(vlSelf->ysyx_24120009_core__DOT__exu__DOT___alu_instance_io_result),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__exu_reg_rs2_data),32);
    bufp->fullCData(oldp+104,(vlSelf->ysyx_24120009_core__DOT___idu_io_pc_sel),3);
    bufp->fullBit(oldp+105,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+106,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
    bufp->fullBit(oldp+109,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__io_in_ready_0));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_24120009_core__DOT___lsu_io_out_valid));
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr),32);
    bufp->fullBit(oldp+112,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__isStore));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__isLoad));
    bufp->fullIData(oldp+114,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data),32);
    bufp->fullCData(oldp+115,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control),3);
    bufp->fullCData(oldp+116,(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__state),2);
    bufp->fullCData(oldp+117,((0xffU & (((0U == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                          ? 1U : ((1U 
                                                   == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                   ? 3U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))
                                                    ? 0xfU
                                                    : 0U))) 
                                        << (3U & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr)))),8);
    bufp->fullIData(oldp+118,((vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data 
                               << (0x18U & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                            << 3U)))),32);
    bufp->fullCData(oldp+119,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state),2);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__addr_reg),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wdata_reg),32);
    bufp->fullCData(oldp+122,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wstrb_reg),8);
    bufp->fullBit(oldp+123,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__rd_req_valid));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_24120009_core__DOT__sram__DOT__wt_req_valid));
    bufp->fullIData(oldp+125,(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_data_out),32);
    bufp->fullBit(oldp+126,(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_rd_res_valid));
    bufp->fullBit(oldp+127,(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid));
    bufp->fullBit(oldp+128,(vlSelf->clock));
    bufp->fullBit(oldp+129,(vlSelf->reset));
    bufp->fullIData(oldp+130,(vlSelf->io_pc_debug),32);
    bufp->fullIData(oldp+131,(vlSelf->io_inst_debug),32);
    bufp->fullCData(oldp+132,(vlSelf->io_ifu_state_debug),2);
    bufp->fullCData(oldp+133,(vlSelf->io_lsu_state_debug),2);
    bufp->fullBit(oldp+134,(vlSelf->io_lsu_is_ld_or_st_debug));
    bufp->fullIData(oldp+135,(vlSelf->io_lsu_reg_inst_debug),32);
    bufp->fullCData(oldp+136,(vlSelf->io_wbu_state_debug),2);
    bufp->fullIData(oldp+137,(vlSelf->io_wb_data_debug),32);
    bufp->fullBit(oldp+138,(vlSelf->io_wb_wen_debug));
    bufp->fullCData(oldp+139,(vlSelf->io_wb_sel_debug),2);
    bufp->fullCData(oldp+140,(vlSelf->io_Arbiter_state_debug),2);
    bufp->fullIData(oldp+141,((((1U != (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)) 
                                | (0U == (IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT__state)))
                                ? 0U : vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_data)),32);
    bufp->fullBit(oldp+142,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                             & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT____VdfgTmp_h93f38017__0)) 
                                & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)) 
                                   & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid))))));
    bufp->fullBit(oldp+143,(((IData)(vlSelf->ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0) 
                             & (IData)(vlSelf->ysyx_24120009_core__DOT___sram_io_axi_r_valid))));
    bufp->fullBit(oldp+144,(((~ (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT____VdfgTmp_h93f38017__0)) 
                             & ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid)))));
    __Vtemp_h26b388b7__0[0U] = (((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data));
    __Vtemp_h26b388b7__0[1U] = (((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data 
                                                   >> 0xfU)))) 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data));
    __Vtemp_h26b388b7__0[2U] = (IData)((QData)((IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_r_data)));
    __Vtemp_h26b388b7__0[3U] = (IData)(((QData)((IData)(vlSelf->ysyx_24120009_core__DOT___arbiter_io_lsu_r_data)) 
                                        >> 0x20U));
    __Vtemp_h26b388b7__0[4U] = (0xffU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data);
    __Vtemp_h26b388b7__0[5U] = (0xffffU & vlSelf->ysyx_24120009_core__DOT__lsu__DOT__alignment_network__DOT__shifted_data);
    __Vtemp_h26b388b7__0[6U] = 0U;
    __Vtemp_h26b388b7__0[7U] = 0U;
    bufp->fullIData(oldp+145,((((0U == (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control) 
                                                 << 5U)))
                                 ? 0U : (__Vtemp_h26b388b7__0[
                                         (((IData)(0x1fU) 
                                           + (0xffU 
                                              & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control) 
                                                 << 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control) 
                                                << 5U))))) 
                               | (__Vtemp_h26b388b7__0[
                                  (7U & (IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control))] 
                                  >> (0x1fU & ((IData)(vlSelf->ysyx_24120009_core__DOT__lsu__DOT__mem_access_control) 
                                               << 5U))))),32);
    bufp->fullIData(oldp+146,(5U),32);
    bufp->fullIData(oldp+147,(0x20U),32);
    bufp->fullIData(oldp+148,(1U),32);
}
