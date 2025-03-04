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
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ ysyx_24120009_core__DOT___sram_io_axi_r_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT___arbiter_io_ifu_r_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT___arbiter_io_lsu_aw_ready;
        CData/*0:0*/ ysyx_24120009_core__DOT___arbiter_io_axi_ar_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT___lsu_io_memory_ar_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT___exu_io_out_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT___idu_io_out_valid;
        CData/*2:0*/ ysyx_24120009_core__DOT___idu_io_pc_sel;
        CData/*0:0*/ ysyx_24120009_core__DOT___ifu_io_out_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT___ifu_io_memory_ar_valid;
        CData/*1:0*/ ysyx_24120009_core__DOT__ifu__DOT__state;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT___GEN_2;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT___GEN_3;
        CData/*7:0*/ ysyx_24120009_core__DOT__ifu__DOT__unnamedblk1__DOT___GEN_4;
        CData/*0:0*/ ysyx_24120009_core__DOT__ifu__DOT____VdfgTmp_h111114cf__0;
        CData/*1:0*/ ysyx_24120009_core__DOT__idu__DOT__state;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT___GEN;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT___GEN_0;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT___GEN_1;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT__io_in_ready_0;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT__br_eq;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT__br_lt;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT__br_ltu;
        CData/*0:0*/ ysyx_24120009_core__DOT__idu__DOT___branch_taken_T_4;
        CData/*1:0*/ ysyx_24120009_core__DOT__exu__DOT__state;
        CData/*0:0*/ ysyx_24120009_core__DOT__exu__DOT___GEN;
        CData/*0:0*/ ysyx_24120009_core__DOT__exu__DOT___GEN_0;
        CData/*0:0*/ ysyx_24120009_core__DOT__exu__DOT___GEN_1;
        CData/*0:0*/ ysyx_24120009_core__DOT__exu__DOT__io_in_ready_0;
        CData/*4:0*/ ysyx_24120009_core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp;
        CData/*1:0*/ ysyx_24120009_core__DOT__lsu__DOT__state;
        CData/*0:0*/ ysyx_24120009_core__DOT__lsu__DOT___GEN;
        CData/*0:0*/ ysyx_24120009_core__DOT__lsu__DOT___GEN_0;
        CData/*0:0*/ ysyx_24120009_core__DOT__lsu__DOT___GEN_1;
        CData/*0:0*/ ysyx_24120009_core__DOT__lsu__DOT___GEN_2;
        CData/*0:0*/ ysyx_24120009_core__DOT__lsu__DOT__io_in_ready_0;
        CData/*0:0*/ ysyx_24120009_core__DOT__lsu__DOT__io_memory_w_valid_0;
        CData/*2:0*/ ysyx_24120009_core__DOT__lsu__DOT____Vcellinp__write_mask_gen__io_control;
        CData/*0:0*/ ysyx_24120009_core__DOT__lsu__DOT____VdfgTmp_h9bd8307f__0;
        CData/*0:0*/ ysyx_24120009_core__DOT__lsu__DOT____VdfgTmp_h4ab110e3__0;
        CData/*1:0*/ ysyx_24120009_core__DOT__wbu__DOT__state;
        CData/*7:0*/ ysyx_24120009_core__DOT__wbu__DOT__unnamedblk1__DOT___GEN;
        CData/*1:0*/ ysyx_24120009_core__DOT__arbiter__DOT__state;
        CData/*0:0*/ ysyx_24120009_core__DOT__arbiter__DOT___GEN_2;
        CData/*0:0*/ ysyx_24120009_core__DOT__arbiter__DOT___GEN_3;
        CData/*0:0*/ ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT__isLSUActive;
        CData/*1:0*/ ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5;
        CData/*7:0*/ ysyx_24120009_core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_6;
        CData/*0:0*/ ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h4ab110e3__0;
        CData/*0:0*/ ysyx_24120009_core__DOT__arbiter__DOT____VdfgTmp_h0d02f799__0;
        CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT___sram_rd_res_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT___sram_wt_res_valid;
        CData/*1:0*/ ysyx_24120009_core__DOT__sram__DOT__state;
        CData/*7:0*/ ysyx_24120009_core__DOT__sram__DOT__wstrb_reg;
        CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT__rd_req_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT__wt_req_valid;
        CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT___GEN;
        CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT___GEN_0;
        CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT__io_axi_w_ready_0;
        CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT___GEN_1;
        CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT___GEN_2;
        CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT___GEN_3;
    };
    struct {
        CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT____VdfgTmp_hb61e3587__0;
        CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed;
        CData/*7:0*/ ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wmask_delayed;
        CData/*0:0*/ ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed;
        CData/*1:0*/ __Vdly__ysyx_24120009_core__DOT__ifu__DOT__state;
        CData/*1:0*/ __Vdly__ysyx_24120009_core__DOT__lsu__DOT__state;
        CData/*1:0*/ __Vdly__ysyx_24120009_core__DOT__arbiter__DOT__state;
        CData/*0:0*/ __Vdly__ysyx_24120009_core__DOT__sram__DOT__wt_req_valid;
        CData/*0:0*/ __Vdly__ysyx_24120009_core__DOT__sram__DOT__rd_req_valid;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __Vtrigrprev__TOP__reset;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ ysyx_24120009_core__DOT__lsu__DOT___mem_access_control_T;
        IData/*31:0*/ ysyx_24120009_core__DOT___regfile_rs1_data;
        IData/*31:0*/ ysyx_24120009_core__DOT___regfile_rs2_data;
        IData/*31:0*/ ysyx_24120009_core__DOT___idu_io_out_bits_alu_op1;
        IData/*31:0*/ ysyx_24120009_core__DOT___idu_io_out_bits_alu_op2;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__pc;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer;
        IData/*31:0*/ ysyx_24120009_core__DOT__idu__DOT__idu_reg_inst;
        IData/*31:0*/ ysyx_24120009_core__DOT__idu__DOT__idu_reg_pc;
        IData/*31:0*/ ysyx_24120009_core__DOT__exu__DOT__exu_reg_inst;
        IData/*31:0*/ ysyx_24120009_core__DOT__exu__DOT__exu_reg_rs2_data;
        IData/*31:0*/ ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_inst;
        IData/*31:0*/ ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_dmem_addr;
        IData/*31:0*/ ysyx_24120009_core__DOT__lsu__DOT__lsu_reg_rs2_data;
        IData/*31:0*/ ysyx_24120009_core__DOT__regfile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ ysyx_24120009_core__DOT__sram__DOT___sram_data_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__sram__DOT__addr_reg;
        IData/*31:0*/ ysyx_24120009_core__DOT__sram__DOT__wdata_reg;
        IData/*31:0*/ ysyx_24120009_core__DOT__sram__DOT__sram__DOT__addr_delayed;
        IData/*31:0*/ ysyx_24120009_core__DOT__sram__DOT__sram__DOT__waddr_delayed;
        IData/*31:0*/ ysyx_24120009_core__DOT__sram__DOT__sram__DOT__wdata_delayed;
        IData/*31:0*/ __Vfunc_ysyx_24120009_core__DOT__sram__DOT__sram__DOT__pmem_read__1__Vfuncout;
        IData/*31:0*/ __Vdly__ysyx_24120009_core__DOT__ifu__DOT__pc;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> ysyx_24120009_core__DOT__regfile__DOT__rf;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
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
