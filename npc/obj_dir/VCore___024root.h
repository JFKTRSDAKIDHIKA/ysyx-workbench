// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated.h"


class VCore__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCore___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_ifu_state_debug,1,0);
        VL_OUT8(io_lsu_state_debug,1,0);
        VL_OUT8(io_lsu_is_ld_or_st_debug,0,0);
        VL_OUT8(io_wbu_state_debug,1,0);
        VL_OUT8(io_wb_wen_debug,0,0);
        VL_OUT8(io_wb_sel_debug,1,0);
        VL_OUT8(io_Arbiter_state_debug,1,0);
        CData/*0:0*/ Core__DOT___sram_io_axi_r_valid;
        CData/*0:0*/ Core__DOT___arbiter_io_ifu_r_valid;
        CData/*0:0*/ Core__DOT___arbiter_io_lsu_aw_ready;
        CData/*0:0*/ Core__DOT___arbiter_io_axi_ar_valid;
        CData/*0:0*/ Core__DOT___lsu_io_out_valid;
        CData/*0:0*/ Core__DOT___lsu_io_memory_b_ready;
        CData/*0:0*/ Core__DOT___lsu_io_memory_ar_valid;
        CData/*0:0*/ Core__DOT___exu_io_out_valid;
        CData/*0:0*/ Core__DOT___idu_io_out_valid;
        CData/*2:0*/ Core__DOT___idu_io_pc_sel;
        CData/*0:0*/ Core__DOT___ifu_io_out_valid;
        CData/*0:0*/ Core__DOT___ifu_io_memory_ar_valid;
        CData/*0:0*/ Core__DOT___ifu_io_memory_r_ready;
        CData/*1:0*/ Core__DOT__ifu__DOT__state;
        CData/*0:0*/ Core__DOT__ifu__DOT___GEN_2;
        CData/*0:0*/ Core__DOT__ifu__DOT___GEN_3;
        CData/*7:0*/ Core__DOT__ifu__DOT__unnamedblk1__DOT___GEN_4;
        CData/*0:0*/ Core__DOT__ifu__DOT____VdfgTmp_h111114cf__0;
        CData/*1:0*/ Core__DOT__idu__DOT__state;
        CData/*0:0*/ Core__DOT__idu__DOT___GEN;
        CData/*0:0*/ Core__DOT__idu__DOT___GEN_0;
        CData/*0:0*/ Core__DOT__idu__DOT___GEN_1;
        CData/*0:0*/ Core__DOT__idu__DOT__io_in_ready_0;
        CData/*0:0*/ Core__DOT__idu__DOT__br_eq;
        CData/*0:0*/ Core__DOT__idu__DOT__br_lt;
        CData/*0:0*/ Core__DOT__idu__DOT__br_ltu;
        CData/*0:0*/ Core__DOT__idu__DOT___branch_taken_T_4;
        CData/*1:0*/ Core__DOT__exu__DOT__state;
        CData/*0:0*/ Core__DOT__exu__DOT___GEN;
        CData/*0:0*/ Core__DOT__exu__DOT___GEN_0;
        CData/*0:0*/ Core__DOT__exu__DOT___GEN_1;
        CData/*0:0*/ Core__DOT__exu__DOT__io_in_ready_0;
        CData/*4:0*/ Core__DOT__exu__DOT__exu_reg_wb_addr;
        CData/*4:0*/ Core__DOT__exu__DOT____Vcellinp__alu_instance__io_aluOp;
        CData/*0:0*/ Core__DOT__lsu__DOT__isStore;
        CData/*0:0*/ Core__DOT__lsu__DOT__isLoad;
        CData/*4:0*/ Core__DOT__lsu__DOT__lsu_reg_wb_addr;
        CData/*2:0*/ Core__DOT__lsu__DOT__mem_access_control;
        CData/*1:0*/ Core__DOT__lsu__DOT__state;
        CData/*0:0*/ Core__DOT__lsu__DOT___GEN_1;
        CData/*0:0*/ Core__DOT__lsu__DOT___GEN_2;
        CData/*0:0*/ Core__DOT__lsu__DOT__io_in_ready_0;
        CData/*0:0*/ Core__DOT__lsu__DOT___GEN_4;
        CData/*0:0*/ Core__DOT__lsu__DOT__io_memory_w_valid_0;
        CData/*7:0*/ Core__DOT__lsu__DOT__unnamedblk1__DOT___GEN_5;
        CData/*0:0*/ Core__DOT__lsu__DOT____VdfgTmp_h4b16e7a1__0;
        CData/*0:0*/ Core__DOT__lsu__DOT____VdfgTmp_h0d5fed69__0;
        CData/*1:0*/ Core__DOT__wbu__DOT__state;
        CData/*0:0*/ Core__DOT__wbu__DOT__io_in_ready_0;
        CData/*4:0*/ Core__DOT__wbu__DOT__wbu_reg_wb_addr;
        CData/*7:0*/ Core__DOT__wbu__DOT__unnamedblk1__DOT___GEN_0;
        CData/*0:0*/ Core__DOT__wbu__DOT____VdfgTmp_he33a7f1b__0;
        CData/*0:0*/ Core__DOT__wbu__DOT____VdfgTmp_h00d1e98b__0;
        CData/*1:0*/ Core__DOT__arbiter__DOT__state;
        CData/*0:0*/ Core__DOT__arbiter__DOT___GEN_2;
    };
    struct {
        CData/*0:0*/ Core__DOT__arbiter__DOT___GEN_3;
        CData/*0:0*/ Core__DOT__arbiter__DOT__unnamedblk1__DOT__isIFUActive;
        CData/*1:0*/ Core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_5;
        CData/*7:0*/ Core__DOT__arbiter__DOT__unnamedblk1__DOT___GEN_6;
        CData/*0:0*/ Core__DOT__arbiter__DOT____VdfgTmp_h4b16e7a1__0;
        CData/*0:0*/ Core__DOT__arbiter__DOT____VdfgTmp_h0d5fed69__0;
        CData/*0:0*/ Core__DOT__sram__DOT___sram_rd_res_valid;
        CData/*0:0*/ Core__DOT__sram__DOT___sram_wt_res_valid;
        CData/*1:0*/ Core__DOT__sram__DOT__state;
        CData/*7:0*/ Core__DOT__sram__DOT__wstrb_reg;
        CData/*0:0*/ Core__DOT__sram__DOT__rd_req_valid;
        CData/*0:0*/ Core__DOT__sram__DOT__wt_req_valid;
        CData/*0:0*/ Core__DOT__sram__DOT___GEN;
        CData/*0:0*/ Core__DOT__sram__DOT___GEN_0;
        CData/*0:0*/ Core__DOT__sram__DOT___GEN_1;
        CData/*0:0*/ Core__DOT__sram__DOT__io_axi_w_ready_0;
        CData/*0:0*/ Core__DOT__sram__DOT___GEN_2;
        CData/*0:0*/ Core__DOT__sram__DOT____VdfgTmp_h93f383d4__0;
        CData/*0:0*/ Core__DOT__sram__DOT____VdfgTmp_hb61e3587__0;
        CData/*0:0*/ Core__DOT__sram__DOT__sram__DOT__rd_req_valid_delayed;
        CData/*7:0*/ Core__DOT__sram__DOT__sram__DOT__wmask_delayed;
        CData/*0:0*/ Core__DOT__sram__DOT__sram__DOT__wt_req_valid_delayed;
        CData/*1:0*/ __Vdly__Core__DOT__lsu__DOT__state;
        CData/*1:0*/ __Vdly__Core__DOT__arbiter__DOT__state;
        CData/*0:0*/ __Vdly__Core__DOT__sram__DOT__rd_req_valid;
        CData/*0:0*/ __Vdly__Core__DOT__sram__DOT__wt_req_valid;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ Core__DOT__lsu__DOT___mem_access_control_T;
        VL_OUT(io_pc_debug,31,0);
        VL_OUT(io_inst_debug,31,0);
        VL_OUT(io_lsu_reg_inst_debug,31,0);
        VL_OUT(io_dmem_wdata_debug,31,0);
        VL_OUT(io_dmem_rdata_debug,31,0);
        VL_OUT(io_wb_data_debug,31,0);
        VL_OUT(io_wbu_reg_dmem_rdata_debug,31,0);
        IData/*31:0*/ Core__DOT___sram_io_axi_r_data;
        IData/*31:0*/ Core__DOT___arbiter_io_lsu_r_data;
        IData/*31:0*/ Core__DOT___regfile_rs1_data;
        IData/*31:0*/ Core__DOT___regfile_rs2_data;
        IData/*31:0*/ Core__DOT___idu_io_out_bits_alu_op1;
        IData/*31:0*/ Core__DOT___idu_io_out_bits_alu_op2;
        IData/*31:0*/ Core__DOT__ifu__DOT__pc;
        IData/*31:0*/ Core__DOT__ifu__DOT__if_inst_buffer;
        IData/*31:0*/ Core__DOT__idu__DOT__idu_reg_inst;
        IData/*31:0*/ Core__DOT__idu__DOT__idu_reg_pc;
        IData/*31:0*/ Core__DOT__exu__DOT___alu_instance_io_result;
        IData/*31:0*/ Core__DOT__exu__DOT__exu_reg_inst;
        IData/*31:0*/ Core__DOT__exu__DOT__exu_reg_pc;
        IData/*31:0*/ Core__DOT__exu__DOT__exu_reg_rs2_data;
        IData/*31:0*/ Core__DOT__lsu__DOT__lsu_reg_inst;
        IData/*31:0*/ Core__DOT__lsu__DOT__lsu_reg_pc;
        IData/*31:0*/ Core__DOT__lsu__DOT__lsu_reg_dmem_addr;
        IData/*31:0*/ Core__DOT__lsu__DOT__lsu_reg_rs2_data;
        IData/*31:0*/ Core__DOT__lsu__DOT__dmem_rdata_delay;
        IData/*31:0*/ Core__DOT__lsu__DOT__alignment_network__DOT__shifted_data;
        IData/*31:0*/ Core__DOT__wbu__DOT__wbu_reg_inst;
        IData/*31:0*/ Core__DOT__wbu__DOT__wbu_reg_pc;
        IData/*31:0*/ Core__DOT__wbu__DOT__wbu_reg_result;
        IData/*31:0*/ Core__DOT__wbu__DOT__wbu_reg_dmem_rdata;
        IData/*31:0*/ Core__DOT__regfile__DOT__unnamedblk1__DOT__i;
    };
    struct {
        IData/*31:0*/ Core__DOT__sram__DOT___sram_data_out;
        IData/*31:0*/ Core__DOT__sram__DOT__addr_reg;
        IData/*31:0*/ Core__DOT__sram__DOT__wdata_reg;
        IData/*31:0*/ Core__DOT__sram__DOT__sram__DOT__addr_delayed;
        IData/*31:0*/ Core__DOT__sram__DOT__sram__DOT__waddr_delayed;
        IData/*31:0*/ Core__DOT__sram__DOT__sram__DOT__wdata_delayed;
        IData/*31:0*/ __Vfunc_Core__DOT__sram__DOT__sram__DOT__pmem_read__2__Vfuncout;
        IData/*31:0*/ __Vdly__Core__DOT__ifu__DOT__pc;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> Core__DOT__regfile__DOT__rf;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCore__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCore___024root(VCore__Syms* symsp, const char* v__name);
    ~VCore___024root();
    VL_UNCOPYABLE(VCore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
