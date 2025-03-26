// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root___eval_triggers__stl(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_postponed__TOP(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_postponed__TOP\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vstrobe0)) {
        VL_WRITEF("Write data to mem[%0d][%0#] = %0x%3#\n",
                  32,vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk7__DOT__i,
                  13,vlSelf->ysyxSoCFull__DOT__sdram__DOT__active_row
                  [(3U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk7__DOT__i)],
                  9,vlSelf->ysyxSoCFull__DOT__sdram__DOT__current_col
                  [(3U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk7__DOT__i)],
                  8,(0xffU & (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire)));
        Verilated::runFlushCallbacks();
        vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vstrobe0 = 0U;
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vstrobe1)) {
        VL_WRITEF("Write data to mem[%0d][%0#][%0#] = %0x\n",
                  32,vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk7__DOT__i,
                  13,vlSelf->ysyxSoCFull__DOT__sdram__DOT__active_row
                  [(3U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk7__DOT__i)],
                  9,vlSelf->ysyxSoCFull__DOT__sdram__DOT__current_col
                  [(3U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk7__DOT__i)],
                  8,(0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT___dq_wire) 
                              >> 8U)));
        Verilated::runFlushCallbacks();
        vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vstrobe1 = 0U;
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vstrobe2)) {
        VL_WRITEF("Write data to mem[%0d][%0#][%0#] = %0x\n",
                  32,vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk7__DOT__i,
                  13,vlSelf->ysyxSoCFull__DOT__sdram__DOT__active_row
                  [(3U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk7__DOT__i)],
                  9,vlSelf->ysyxSoCFull__DOT__sdram__DOT__current_col
                  [(3U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk7__DOT__i)],
                  8,(0xffU & (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire)));
        Verilated::runFlushCallbacks();
        vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vstrobe2 = 0U;
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vstrobe3)) {
        VL_WRITEF("Write data to mem[%0d][%0#][%0#] = %0x\n",
                  32,vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk7__DOT__i,
                  13,vlSelf->ysyxSoCFull__DOT__sdram__DOT__active_row
                  [(3U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk7__DOT__i)],
                  9,vlSelf->ysyxSoCFull__DOT__sdram__DOT__current_col
                  [(3U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__unnamedblk7__DOT__i)],
                  8,(0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT___dq_wire) 
                              >> 8U)));
        Verilated::runFlushCallbacks();
        vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vstrobe3 = 0U;
    }
}
