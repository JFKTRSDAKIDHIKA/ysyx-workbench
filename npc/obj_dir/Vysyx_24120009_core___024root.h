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
        VL_OUT8(is_ebreak_debug,0,0);
        VL_OUT8(waddr_debug,4,0);
        VL_OUT8(mem_wen_debug,0,0);
        VL_OUT8(mem_en_debug,0,0);
        CData/*2:0*/ ysyx_24120009_core__DOT__pc_sel;
        CData/*0:0*/ ysyx_24120009_core__DOT__br_eq;
        CData/*0:0*/ ysyx_24120009_core__DOT__br_lt;
        CData/*0:0*/ ysyx_24120009_core__DOT__br_ltu;
        CData/*2:0*/ ysyx_24120009_core__DOT__ctl_mem_access;
        CData/*2:0*/ ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ __VdfgTmp_h9d12977d__0;
        CData/*0:0*/ __VdfgTmp_h9d0653ad__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ ysyx_24120009_core__DOT__control__DOT____Vcellinp__mem_acces_ctl_mux__key;
        VL_OUT(pc_debug,31,0);
        VL_OUT(Op1_debug,31,0);
        VL_OUT(Op2_debug,31,0);
        VL_OUT(inst_debug,31,0);
        VL_OUT(reg_write_data_debug,31,0);
        VL_OUT(x2_debug,31,0);
        VL_OUT(imem_addr_debug,31,0);
        VL_OUT(dmem_addr_debug,31,0);
        VL_OUT(dmem_wdata_debug,31,0);
        IData/*31:0*/ ysyx_24120009_core__DOT__pc;
        IData/*31:0*/ ysyx_24120009_core__DOT__reg_write_data;
        IData/*31:0*/ ysyx_24120009_core__DOT__Op1;
        IData/*31:0*/ ysyx_24120009_core__DOT__Op2;
        IData/*31:0*/ ysyx_24120009_core__DOT__rdata1;
        IData/*31:0*/ ysyx_24120009_core__DOT__rdata2;
        IData/*31:0*/ ysyx_24120009_core__DOT__dmem_rdata_raw;
        IData/*31:0*/ ysyx_24120009_core__DOT__dmem_rdata;
        IData/*31:0*/ ysyx_24120009_core__DOT__dmem_wdata;
        IData/*31:0*/ ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem_access_0__DOT__mem_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__mem_access_1__DOT__mem_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__pc_next;
        IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__idu__DOT__imm_i_sext;
        IData/*31:0*/ ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out;
        IData/*16:0*/ ysyx_24120009_core__DOT__control__DOT__inst_key;
        IData/*16:0*/ ysyx_24120009_core__DOT__control__DOT__ctl_signals;
        IData/*16:0*/ ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_ha098e26d__0;
        IData/*16:0*/ ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0;
        IData/*16:0*/ ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__exu__DOT__result;
        IData/*31:0*/ ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out;
        IData/*31:0*/ __Vfunc_ysyx_24120009_core__DOT__pmem_read__0__Vfuncout;
        IData/*31:0*/ __Vfunc_ysyx_24120009_core__DOT__pmem_read__3__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*2:0*/, 5> ysyx_24120009_core__DOT__mem_access_0__DOT__mem_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> ysyx_24120009_core__DOT__mem_access_0__DOT__mem_mux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 5> ysyx_24120009_core__DOT__mem_access_1__DOT__mem_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> ysyx_24120009_core__DOT__mem_access_1__DOT__mem_mux__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf;
        VlUnpacked<IData/*31:0*/, 32> ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat;
        VlUnpacked<CData/*2:0*/, 5> ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list;
    };
    struct {
        VlUnpacked<CData/*1:0*/, 2> ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*1:0*/, 4> ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*16:0*/, 37> ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*16:0*/, 37> ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 8> ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 8> ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 10> ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 10> ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*1:0*/, 4> ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
