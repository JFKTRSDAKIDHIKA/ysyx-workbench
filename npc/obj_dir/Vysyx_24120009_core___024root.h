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
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(is_ebreak_debug,0,0);
    CData/*0:0*/ ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit;
    CData/*0:0*/ __VdfgTmp_h9d12977d__0;
    CData/*0:0*/ __VdfgTmp_h9d0653ad__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_OUT(imem_addr,31,0);
    VL_IN(imem_rdata,31,0);
    VL_OUT(pc_debug,31,0);
    VL_OUT(Op1_debug,31,0);
    VL_OUT(Op2_debug,31,0);
    VL_OUT(inst_debug,31,0);
    VL_OUT(reg_write_data_debug,31,0);
    VL_OUT(x2_debug,31,0);
    IData/*31:0*/ ysyx_24120009_core__DOT__pc;
    IData/*31:0*/ ysyx_24120009_core__DOT__reg_write_data;
    IData/*31:0*/ ysyx_24120009_core__DOT__Op1;
    IData/*31:0*/ ysyx_24120009_core__DOT__Op2;
    IData/*31:0*/ ysyx_24120009_core__DOT__rdata1;
    IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__pc_next;
    IData/*31:0*/ ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out;
    IData/*31:0*/ ysyx_24120009_core__DOT__idu__DOT__imm_i_sext;
    IData/*31:0*/ ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out;
    IData/*31:0*/ ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out;
    IData/*16:0*/ ysyx_24120009_core__DOT__control__DOT__inst_key;
    IData/*16:0*/ ysyx_24120009_core__DOT__control__DOT__ctl_signals;
    IData/*16:0*/ ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out;
    IData/*31:0*/ ysyx_24120009_core__DOT__exu__DOT__result;
    IData/*31:0*/ ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out;
    IData/*31:0*/ ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf;
    VlUnpacked<CData/*2:0*/, 5> ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 5> ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*1:0*/, 2> ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*1:0*/, 4> ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 4> ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*16:0*/, 26> ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*16:0*/, 26> ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*4:0*/, 10> ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 10> ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*1:0*/, 4> ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 4> ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
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
