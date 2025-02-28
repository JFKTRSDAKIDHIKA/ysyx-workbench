// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24120009_core.h for the primary calling header

#ifndef VERILATED_VYSYX_24120009_CORE___024ROOT_H_
#define VERILATED_VYSYX_24120009_CORE___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_24120009_core__Syms;

class Vysyx_24120009_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(waddr_debug,4,0);
        VL_OUT8(mem_wen_debug,0,0);
        VL_OUT8(mem_en_debug,0,0);
        VL_OUT8(rf_we_debug,0,0);
        VL_OUT8(wbu_active_debug,0,0);
        VL_OUT8(wb_sel_debug,1,0);
        VL_OUT8(opcode_debug,6,0);
        VL_OUT8(pc_wen_debug,0,0);
        VL_OUT8(mem_active_debug,0,0);
        VL_OUT8(alu_op_debug,4,0);
        VL_OUT8(mem_access_done_debug,0,0);
        VL_OUT8(wt_res_valid_debug,0,0);
        VL_OUT8(ifu_state_debug,2,0);
        VL_OUT8(rd_res_valid_debug,0,0);
        VL_OUT8(axi4_ifu_state_debug,1,0);
        VL_OUT8(mem_ctl_state_debug,1,0);
        VL_OUT8(axi4_mem_state_debug,1,0);
        VL_OUT8(idu_state_debug,1,0);
        VL_OUT8(inst_valid_debug,0,0);
        CData/*4:0*/ ysyx_24120009_core__DOT__alu_op;
        CData/*2:0*/ ysyx_24120009_core__DOT__pc_sel;
        CData/*0:0*/ ysyx_24120009_core__DOT__rf_we;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem_en;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem_wen;
        CData/*1:0*/ ysyx_24120009_core__DOT__wb_sel;
        CData/*0:0*/ ysyx_24120009_core__DOT__pc_wen;
        CData/*4:0*/ ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM;
        CData/*4:0*/ ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU;
        CData/*0:0*/ ysyx_24120009_core__DOT__inst_valid;
        CData/*4:0*/ ysyx_24120009_core__DOT__waddr;
        CData/*2:0*/ ysyx_24120009_core__DOT__ifu__DOT__state;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__rvalid;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__arvalid;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__arready;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__rready;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__awready;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wready;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__bvalid;
        CData/*1:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__bresp;
        CData/*1:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__rresp;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_rd_res_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_wt_res_valid;
        CData/*1:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__state;
        CData/*7:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wstrb_reg;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__rd_req_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wt_req_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT____Vlvbound_hfbeda608__0;
        CData/*7:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT____Vlvbound_h4d56405e__0;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT____Vlvbound_hda6e3d04__0;
        CData/*1:0*/ ysyx_24120009_core__DOT__idu__DOT__state;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT__br_eq;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT__br_lt;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT__br_ltu;
        CData/*1:0*/ ysyx_24120009_core__DOT__idu__DOT__Op1Sel;
        CData/*1:0*/ ysyx_24120009_core__DOT__idu__DOT__Op2Sel;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT__branch_taken;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit;
        CData/*1:0*/ ysyx_24120009_core__DOT__exu__DOT__state;
    };
    struct {
        CData/*4:0*/ ysyx_24120009_core__DOT__exu__DOT__alu_op;
        CData/*0:0*/ ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit;
        CData/*1:0*/ ysyx_24120009_core__DOT__mem__DOT__state;
        CData/*2:0*/ ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__mem_en;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__mem_wen;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__rvalid;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__wt_res_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__arready;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__awready;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__rready;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__wready;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__bready;
        CData/*1:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__bresp;
        CData/*1:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__rresp;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_rd_res_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_wt_res_valid;
        CData/*1:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__state;
        CData/*7:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wstrb_reg;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__rd_req_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wt_req_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT____Vlvbound_hfbeda608__0;
        CData/*7:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT____Vlvbound_h4d56405e__0;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT____Vlvbound_hda6e3d04__0;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit;
        CData/*7:0*/ ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask;
        CData/*7:0*/ ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit;
        CData/*2:0*/ ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit;
        CData/*1:0*/ ysyx_24120009_core__DOT__wbu__DOT__state;
        CData/*1:0*/ ysyx_24120009_core__DOT__wbu__DOT__wb_sel;
        CData/*0:0*/ ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ __VdfgTmp_h9d12977d__0;
        CData/*0:0*/ __VdfgTmp_h9d0653ad__0;
        CData/*6:0*/ __Vtableidx1;
        CData/*7:0*/ __Vtableidx3;
        CData/*6:0*/ __Vtableidx4;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__rst;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ ysyx_24120009_core__DOT__idu__DOT__imm_s;
        SData/*9:0*/ ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key;
        VL_OUT(pc_debug,31,0);
        VL_OUT(inst_debug,31,0);
        VL_OUT(reg_write_data_debug,31,0);
        VL_OUT(x2_debug,31,0);
        VL_OUT(Op1_debug,31,0);
        VL_OUT(Op2_debug,31,0);
        VL_OUT(imem_addr_debug,31,0);
        VL_OUT(pc_plus4_debug,31,0);
        VL_OUT(result_from_EXU_to_MEM_debug,31,0);
        VL_OUT(result_from_MEM_to_WBU_debug,31,0);
        VL_OUT(result_from_WB_debug,31,0);
        VL_OUT(inst_from_EXU_to_MEM_debug,31,0);
        VL_OUT(dmem_rdata_from_MEM_to_WBU_debug,31,0);
        IData/*31:0*/ ysyx_24120009_core__DOT__reg_write_data;
        IData/*31:0*/ ysyx_24120009_core__DOT__Op1;
        IData/*31:0*/ ysyx_24120009_core__DOT__Op2;
        IData/*31:0*/ ysyx_24120009_core__DOT__pc_plus4;
        IData/*31:0*/ ysyx_24120009_core__DOT__jump_reg_target;
        IData/*31:0*/ ysyx_24120009_core__DOT__br_target;
        IData/*31:0*/ ysyx_24120009_core__DOT__jmp_target;
        IData/*31:0*/ ysyx_24120009_core__DOT__pc_from_IDU_to_EXU;
    };
    struct {
        IData/*31:0*/ ysyx_24120009_core__DOT__inst_from_IDU_to_EXU;
        IData/*31:0*/ ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU;
        IData/*31:0*/ ysyx_24120009_core__DOT__pc_from_EXU_to_MEM;
        IData/*31:0*/ ysyx_24120009_core__DOT__inst_from_EXU_to_MEM;
        IData/*31:0*/ ysyx_24120009_core__DOT__result_from_EXU_to_MEM;
        IData/*31:0*/ ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM;
        IData/*31:0*/ ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU;
        IData/*31:0*/ ysyx_24120009_core__DOT__result_from_MEM_to_WBU;
        IData/*31:0*/ ysyx_24120009_core__DOT__pc_from_MEM_to_WBU;
        IData/*31:0*/ ysyx_24120009_core__DOT__inst_from_MEM_to_WBU;
        IData/*31:0*/ ysyx_24120009_core__DOT__inst_from_WBU_to_MEM;
        IData/*31:0*/ ysyx_24120009_core__DOT__rdata1;
        IData/*31:0*/ ysyx_24120009_core__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__pc;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__pc_next;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__imem_addr;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__rdata;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_data_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__addr_reg;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__wdata_reg;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT____Vlvbound_h553cbd01__0;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT____Vlvbound_h17418848__0;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT____Vlvbound_hc1e953d0__0;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT____VdfgExtracted_h0dfe588b__0;
        IData/*31:0*/ ysyx_24120009_core__DOT__idu__DOT__imm_i_sext;
        IData/*31:0*/ ysyx_24120009_core__DOT__idu__DOT__imm_b_sext;
        IData/*31:0*/ ysyx_24120009_core__DOT__idu__DOT__imm_j_sext;
        IData/*31:0*/ ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__rs2_data_o;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_data_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__addr_reg;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__wdata_reg;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT____Vlvbound_h553cbd01__0;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT____Vlvbound_h17418848__0;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT____Vlvbound_hc1e953d0__0;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT____VdfgExtracted_h0dfe588b__0;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__wbu__DOT__pc_o;
        IData/*31:0*/ ysyx_24120009_core__DOT__wbu__DOT__result_o;
        IData/*31:0*/ ysyx_24120009_core__DOT__wbu__DOT__dmem_addr_o;
        IData/*31:0*/ ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o;
        IData/*31:0*/ ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out;
        IData/*31:0*/ __Vfunc_ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__pmem_read__3__Vfuncout;
        IData/*31:0*/ __Vfunc_ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__pmem_read__5__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf;
        VlUnpacked<QData/*34:0*/, 5> ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 20> ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline;
        VlUnpacked<CData/*0:0*/, 20> ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline;
        VlUnpacked<IData/*31:0*/, 20> ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 20> ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline;
        VlUnpacked<CData/*7:0*/, 20> ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline;
        VlUnpacked<CData/*0:0*/, 20> ysyx_24120009_core__DOT__ifu__DOT__axi4_ifu__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline;
        VlUnpacked<QData/*33:0*/, 2> ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 2> ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 6> ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 6> ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*36:0*/, 11> ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 11> ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 11> ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 20> ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__addr_pipeline;
        VlUnpacked<CData/*0:0*/, 20> ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__rd_req_valid_pipeline;
        VlUnpacked<IData/*31:0*/, 20> ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__waddr_pipeline;
        VlUnpacked<IData/*31:0*/, 20> ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wdata_pipeline;
        VlUnpacked<CData/*7:0*/, 20> ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wmask_pipeline;
        VlUnpacked<CData/*0:0*/, 20> ysyx_24120009_core__DOT__mem__DOT__axi4_mem__DOT__sram_inst__DOT__genblk1__DOT__wt_req_valid_pipeline;
        VlUnpacked<QData/*34:0*/, 5> ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*10:0*/, 3> ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 3> ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*12:0*/, 8> ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*9:0*/, 8> ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 8> ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_24120009_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24120009_core___024root(Vysyx_24120009_core__Syms* symsp, const char* v__name);
    ~Vysyx_24120009_core___024root();
    VL_UNCOPYABLE(Vysyx_24120009_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
