// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120009_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120009_core___024root.h"

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_static(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_initial__TOP(Vysyx_24120009_core___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_initial(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_initial\n"); );
    // Body
    Vysyx_24120009_core___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_initial__TOP(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list[0U] = 3U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list[1U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list[2U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list[3U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[3U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[0U] = 0xaU;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[1U] = 9U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[2U] = 8U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[3U] = 7U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[4U] = 6U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[5U] = 5U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[6U] = 4U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[7U] = 3U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[8U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[9U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[0xaU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__key_list[0U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__data_list[1U] = 3U;
    vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__data_list[2U] = 0xfU;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0U] = 0x1cc00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[1U] = 0x19c00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[2U] = 0x8c80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[3U] = 0x8c00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[4U] = 0x8d00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[5U] = 0xdc00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[6U] = 0x5c00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[7U] = 0x1bc00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[8U] = 0x18f80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[9U] = 0x18f00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0xaU] = 0x18e80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0xbU] = 0x18e00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0xcU] = 0x18c80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0xdU] = 0x18c00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0xeU] = 0xe80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0xfU] = 0xc80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x10U] = 0xe00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x11U] = 0xc00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x12U] = 0xd00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x13U] = 0x4ea0U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x14U] = 0x4e80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x15U] = 0x4c80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x16U] = 0x4f80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x17U] = 0x4f00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x18U] = 0x4e00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x19U] = 0x4d80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x1aU] = 0x4d00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x1bU] = 0x4c00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x1cU] = 0xcf80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x1dU] = 0xcf00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x1eU] = 0xcea0U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x1fU] = 0xce80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x20U] = 0xce00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x21U] = 0xcd80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x22U] = 0xcd00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x23U] = 0xcc80U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x24U] = 0xcc20U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[0x25U] = 0xcc00U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[1U] = 0x131U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[2U] = 0x20cU;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[3U] = 0x20cU;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[4U] = 0x20cU;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[5U] = 0xa412U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[6U] = 0x412U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[7U] = 0x71U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[8U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[9U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0xaU] = 2U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0xbU] = 2U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0xcU] = 2U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0xdU] = 2U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0xeU] = 0x11bU;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0xfU] = 0x11bU;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x10U] = 0x11bU;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x11U] = 0x11bU;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x12U] = 0x11bU;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x13U] = 0x9112U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x14U] = 0x8112U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x15U] = 0x7112U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x16U] = 0x6112U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x17U] = 0x5112U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x18U] = 0x4112U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x19U] = 0x3112U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x1aU] = 0x2112U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x1bU] = 0x112U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x1cU] = 0x6312U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x1dU] = 0x5312U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x1eU] = 0x9312U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x1fU] = 0x8312U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x20U] = 0x4312U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x21U] = 0x3312U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x22U] = 0x2312U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x23U] = 0x7312U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x24U] = 0x1312U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[0x25U] = 0x312U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[0U] = 0x119U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[1U] = 0x118U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[2U] = 0x11aU;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[3U] = 0x1dU;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[4U] = 0x19U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[5U] = 0x1cU;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[6U] = 0x18U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[7U] = 0x1aU;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[3U] = 5U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[5U] = 4U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[7U] = 2U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0xaU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0xbU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0xcU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0xdU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0xeU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0xfU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x10U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x11U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x12U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x13U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x14U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x15U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x16U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x17U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x18U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x19U] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x1aU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x1bU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x1cU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x1dU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x1eU] = 0U;
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0x1fU] = 0U;
}

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_final(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_triggers__stl(Vysyx_24120009_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__stl(Vysyx_24120009_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_stl(Vysyx_24120009_core___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_settle(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_24120009_core___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24120009_core___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/cpu/ysyx_24120009_core.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_24120009_core___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__stl(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__u_RegisterFile__DOT__get_register_values_TOP(VlUnpacked<IData/*31:0*/, 32> rf);
void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__simulation_exit_TOP();
void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void Vysyx_24120009_core___024root___stl_sequent__TOP__0(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[1U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [1U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[2U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [2U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[3U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [3U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[4U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [4U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[5U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [5U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[6U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [6U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[7U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [7U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[8U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [8U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[9U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [9U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0xaU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0xaU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0xbU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0xbU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0xcU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0xcU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0xdU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0xdU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0xeU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0xeU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0xfU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0xfU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x10U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x10U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x11U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x11U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x12U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x12U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x13U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x13U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x14U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x14U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x15U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x15U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x16U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x16U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x17U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x17U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x18U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x18U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x19U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x19U];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x1aU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x1aU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x1bU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x1bU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x1cU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x1cU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x1dU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x1dU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x1eU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x1eU];
    vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[0x1fU] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [0x1fU];
    Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__u_RegisterFile__DOT__get_register_values_TOP(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat);
    vlSelf->x2_debug = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [2U];
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4U] 
        = ((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__pc);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__pc);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3U] 
        = vlSelf->ysyx_24120009_core__DOT__pc;
    vlSelf->pc_debug = vlSelf->ysyx_24120009_core__DOT__pc;
    vlSelf->imem_addr_debug = vlSelf->pc_debug;
    Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__pmem_read_TOP(vlSelf->pc_debug, vlSelf->__Vfunc_ysyx_24120009_core__DOT__pmem_read__3__Vfuncout);
    vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
        = vlSelf->__Vfunc_ysyx_24120009_core__DOT__pmem_read__3__Vfuncout;
    vlSelf->inst_debug = vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0;
    vlSelf->is_ebreak_debug = (0x100073U == vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_24120009_core__DOT__pc + ((
                                                   (- (IData)(
                                                              (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                               >> 0x1fU))) 
                                                   << 0x15U) 
                                                  | ((0x100000U 
                                                      & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0) 
                                                        | ((0x800U 
                                                            & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                                 >> 0x14U)))))));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->ysyx_24120009_core__DOT__pc + ((
                                                   (- (IData)(
                                                              (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
                                                      & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                                 >> 7U)))))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
        = (((- (IData)((vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                >> 0x14U));
    vlSelf->ysyx_24120009_core__DOT__rdata1 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                   >> 0xfU))];
    vlSelf->dmem_wdata_debug = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                   >> 0x14U))];
    vlSelf->ysyx_24120009_core__DOT__control__DOT____Vcellinp__mem_acces_ctl_mux__key 
        = ((0x3f8U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                      << 3U)) | (7U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                       >> 0xcU)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                >> 0x14U));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                   >> 0x14U))];
    vlSelf->waddr_debug = (0x1fU & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                    >> 7U));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0U] 
        = (0xfffff000U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                   >> 0xfU))];
    vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_ha098e26d__0 
        = ((0x1fc00U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                        << 0xaU)) | (0x380U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                               >> 5U)));
    vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0 
        = ((0x1fc00U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                        << 0xaU)) | ((0x380U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                >> 5U)) 
                                     | (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                        >> 0x19U)));
    if (VL_UNLIKELY(vlSelf->is_ebreak_debug)) {
        VL_WRITEF("EBREAK: Simulation exiting...\n");
        Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__simulation_exit_TOP();
    }
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext);
    vlSelf->ysyx_24120009_core__DOT__br_eq = (vlSelf->ysyx_24120009_core__DOT__rdata1 
                                              == vlSelf->dmem_wdata_debug);
    vlSelf->ysyx_24120009_core__DOT__br_lt = VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT__rdata1, vlSelf->dmem_wdata_debug);
    vlSelf->ysyx_24120009_core__DOT__br_ltu = (vlSelf->ysyx_24120009_core__DOT__rdata1 
                                               < vlSelf->dmem_wdata_debug);
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                       == vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__control__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__ctl_mem_access 
        = vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                    >> 0x14U)) 
                                                | (IData)(vlSelf->waddr_debug)));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
        = ((0x40U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
            ? ((0x20U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                ? ((0x10U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                    ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0
                    : ((8U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                        ? ((4U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                            ? ((2U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                ? ((1U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                    ? (0x1fc00U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                   << 0xaU))
                                    : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
                                : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
                            : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
                        : ((4U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                            ? ((2U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                ? ((1U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                    ? ((0U == (7U & 
                                               (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                >> 0xcU)))
                                        ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_ha098e26d__0
                                        : (0x6fU | 
                                           ((0x1fc00U 
                                             & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                << 0xaU)) 
                                            | (0x380U 
                                               & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                  >> 5U)))))
                                    : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
                                : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
                            : ((2U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                ? ((1U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                    ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_ha098e26d__0
                                    : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
                                : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0))))
                : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
            : ((0x20U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                ? ((0x10U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                    ? ((8U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                        ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0
                        : ((4U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                            ? ((2U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                ? ((1U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                    ? (0x1fc00U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                   << 0xaU))
                                    : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
                                : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
                            : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0))
                    : ((8U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                        ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0
                        : ((4U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                            ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0
                            : ((2U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                ? ((1U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                    ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_ha098e26d__0
                                    : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
                                : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0))))
                : ((0x10U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                    ? ((8U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                        ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0
                        : ((4U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                            ? ((2U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                ? ((1U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                    ? (0x1fc00U & (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                   << 0xaU))
                                    : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
                                : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
                            : ((2U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                ? ((1U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                    ? ((5U == (7U & 
                                               (vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 
                                                >> 0xcU)))
                                        ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0
                                        : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_ha098e26d__0)
                                    : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
                                : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)))
                    : ((8U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                        ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0
                        : ((4U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                            ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0
                            : ((2U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                ? ((1U & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                    ? vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_ha098e26d__0
                                    : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0)
                                : vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0))))));
    vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__ctl_mem_access) 
                       == vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__wmask = vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                       == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key 
                          == vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
        = vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__pc_sel = (7U & 
                                               ((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0))
                                                 ? 
                                                ((0x4000U 
                                                  & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_24120009_core__DOT__br_ltu)
                                                     ? 0U
                                                     : 2U)
                                                    : 
                                                   ((IData)(vlSelf->ysyx_24120009_core__DOT__br_ltu)
                                                     ? 2U
                                                     : 0U))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_24120009_core__DOT__br_lt)
                                                     ? 0U
                                                     : 2U)
                                                    : 
                                                   ((IData)(vlSelf->ysyx_24120009_core__DOT__br_lt)
                                                     ? 2U
                                                     : 0U)))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                                   ? 0U
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0)
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_24120009_core__DOT__br_eq)
                                                     ? 0U
                                                     : 2U)
                                                    : 
                                                   ((IData)(vlSelf->ysyx_24120009_core__DOT__br_eq)
                                                     ? 2U
                                                     : 0U))))
                                                 : 
                                                (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                                 >> 5U)));
    vlSelf->mem_wen_debug = (1U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                   >> 2U));
    vlSelf->mem_en_debug = (1U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                  >> 3U));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                              >> 8U)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 8U)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 8U)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 8U)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__Op2 = vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                              >> 0xaU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 0xaU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__Op1 = vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
                       == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next 
        = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out;
    vlSelf->Op2_debug = vlSelf->ysyx_24120009_core__DOT__Op2;
    vlSelf->Op1_debug = vlSelf->ysyx_24120009_core__DOT__Op1;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_24120009_core__DOT__Op1;
    if ((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1U] 
            = VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, 
                             (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2));
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2U] 
            = (vlSelf->ysyx_24120009_core__DOT__Op1 
               >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2));
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3U] 
            = (vlSelf->ysyx_24120009_core__DOT__Op1 
               << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2));
    } else {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1U] 
            = (- (vlSelf->ysyx_24120009_core__DOT__Op1 
                  >> 0x1fU));
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3U] = 0U;
    }
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4U] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 & vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5U] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 | vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6U] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 ^ vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9U] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 - vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0xaU] 
        = (vlSelf->ysyx_24120009_core__DOT__Op1 + vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->__VdfgTmp_h9d12977d__0 = VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT__Op1, vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->__VdfgTmp_h9d0653ad__0 = (vlSelf->ysyx_24120009_core__DOT__Op1 
                                      < vlSelf->ysyx_24120009_core__DOT__Op2);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8U] 
        = vlSelf->__VdfgTmp_h9d12977d__0;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7U] 
        = vlSelf->__VdfgTmp_h9d0653ad__0;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                 >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x1fU & (vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals 
                                    >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__result 
        = vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[1U] 
        = vlSelf->ysyx_24120009_core__DOT__exu__DOT__result;
    vlSelf->dmem_addr_debug = ((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__ctl_mem_access))
                                ? (0xfffffffcU & vlSelf->ysyx_24120009_core__DOT__exu__DOT__result)
                                : ((1U == (IData)(vlSelf->ysyx_24120009_core__DOT__ctl_mem_access))
                                    ? (0xfffffffeU 
                                       & vlSelf->ysyx_24120009_core__DOT__exu__DOT__result)
                                    : vlSelf->ysyx_24120009_core__DOT__exu__DOT__result));
    if (vlSelf->mem_en_debug) {
        Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__pmem_read_TOP(vlSelf->dmem_addr_debug, vlSelf->__Vfunc_ysyx_24120009_core__DOT__pmem_read__0__Vfuncout);
        vlSelf->ysyx_24120009_core__DOT__dmem_rdata_raw 
            = vlSelf->__Vfunc_ysyx_24120009_core__DOT__pmem_read__0__Vfuncout;
        if (vlSelf->mem_wen_debug) {
            Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__pmem_write_TOP(vlSelf->dmem_addr_debug, vlSelf->dmem_wdata_debug, (IData)(vlSelf->ysyx_24120009_core__DOT__wmask));
        }
    } else {
        vlSelf->ysyx_24120009_core__DOT__dmem_rdata_raw = 0U;
    }
    vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__data_list[0U] 
        = (0xffffU & vlSelf->ysyx_24120009_core__DOT__dmem_rdata_raw);
    vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_24120009_core__DOT__dmem_rdata_raw);
    vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__ctl_mem_access) 
                       == vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__dmem_rdata = vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[0U] 
        = vlSelf->ysyx_24120009_core__DOT__dmem_rdata;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = ((- (IData)(((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
                       == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
           == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((3U & vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__reg_write_data 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit)
            ? vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out
            : 0U);
    vlSelf->reg_write_data_debug = vlSelf->ysyx_24120009_core__DOT__reg_write_data;
}

VL_ATTR_COLD void Vysyx_24120009_core___024root___eval_stl(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_24120009_core___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__act(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__nba(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24120009_core___024root___ctor_var_reset(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc_debug = VL_RAND_RESET_I(32);
    vlSelf->Op1_debug = VL_RAND_RESET_I(32);
    vlSelf->Op2_debug = VL_RAND_RESET_I(32);
    vlSelf->inst_debug = VL_RAND_RESET_I(32);
    vlSelf->reg_write_data_debug = VL_RAND_RESET_I(32);
    vlSelf->is_ebreak_debug = VL_RAND_RESET_I(1);
    vlSelf->x2_debug = VL_RAND_RESET_I(32);
    vlSelf->waddr_debug = VL_RAND_RESET_I(5);
    vlSelf->imem_addr_debug = VL_RAND_RESET_I(32);
    vlSelf->mem_wen_debug = VL_RAND_RESET_I(1);
    vlSelf->mem_en_debug = VL_RAND_RESET_I(1);
    vlSelf->dmem_addr_debug = VL_RAND_RESET_I(32);
    vlSelf->dmem_wdata_debug = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__reg_write_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__pc_sel = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120009_core__DOT__Op1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__Op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__br_eq = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__br_lt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__br_ltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120009_core__DOT__ctl_mem_access = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120009_core__DOT__rdata1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__dmem_rdata_raw = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120009_core__DOT____VdfgExtracted_hd7155979__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__mem_access_read__DOT__mem_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyx_24120009_core__DOT__mem_access_write__DOT__mem_mux_write__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf_flat[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__control__DOT__inst_key = VL_RAND_RESET_I(17);
    vlSelf->ysyx_24120009_core__DOT__control__DOT__ctl_signals = VL_RAND_RESET_I(17);
    vlSelf->ysyx_24120009_core__DOT__control__DOT____Vcellinp__mem_acces_ctl_mux__key = VL_RAND_RESET_I(10);
    vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_ha098e26d__0 = VL_RAND_RESET_I(17);
    vlSelf->ysyx_24120009_core__DOT__control__DOT____VdfgExtracted_h90d7ab0b__0 = VL_RAND_RESET_I(17);
    for (int __Vi0 = 0; __Vi0 < 38; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 38; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(17);
    }
    vlSelf->ysyx_24120009_core__DOT__control__DOT__funct_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(17);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->ysyx_24120009_core__DOT__control__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__result = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__wb_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h9d12977d__0 = 0;
    vlSelf->__VdfgTmp_h9d0653ad__0 = 0;
    vlSelf->__Vfunc_ysyx_24120009_core__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_24120009_core__DOT__pmem_read__3__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}
