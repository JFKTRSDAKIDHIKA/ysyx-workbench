// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120009_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120009_core___024root.h"

void Vysyx_24120009_core___024root___eval_act(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_act\n"); );
}

void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_24120009_core___024root___nba_sequent__TOP__0(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__ysyx_24120009_core__DOT__wbu__DOT__wbu_active_reg;
    __Vdly__ysyx_24120009_core__DOT__wbu__DOT__wbu_active_reg = 0;
    // Body
    __Vdly__ysyx_24120009_core__DOT__wbu__DOT__wbu_active_reg 
        = vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_active_reg;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__rd_req_valid_delayed 
        = (1U & (~ (IData)(vlSelf->rst)));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wt_req_valid_delayed 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wt_req_valid));
    if (vlSelf->rst) {
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wmask_delayed = 0U;
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wdata_delayed = 0U;
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__waddr_delayed = 0U;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__waddr_delayed = 0U;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__addr_delayed = 0U;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wmask_delayed = 0U;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wdata_delayed = 0U;
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__addr_delayed = 0U;
        __Vdly__ysyx_24120009_core__DOT__wbu__DOT__wbu_active_reg = 0U;
        vlSelf->wbu_active_debug = 0U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wmask_delayed 
            = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wmask;
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wdata_delayed 
            = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wdata;
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__waddr_delayed 
            = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__waddr;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__waddr_delayed 
            = vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__addr_delayed 
            = vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wmask_delayed 
            = (0xffU & ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask) 
                        << (3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)));
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wdata_delayed 
            = ((0x1fU >= (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                   << 3U))) ? (vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o 
                                               << (0x18U 
                                                   & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                      << 3U)))
                : 0U);
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__addr_delayed 
            = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc;
        if ((vlSelf->inst_debug == vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)) {
            if (((~ (IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_active_reg)) 
                 & (IData)(vlSelf->mem_valid_debug))) {
                vlSelf->wbu_active_debug = 1U;
                __Vdly__ysyx_24120009_core__DOT__wbu__DOT__wbu_active_reg = 1U;
            } else {
                vlSelf->wbu_active_debug = 0U;
            }
        } else {
            __Vdly__ysyx_24120009_core__DOT__wbu__DOT__wbu_active_reg = 0U;
            vlSelf->wbu_active_debug = 0U;
        }
    }
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__rd_req_valid_delayed 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wt_req_valid_delayed 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->mem_active_debug) 
                                       & (0x23U == 
                                          (0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU))));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wbu_active_reg 
        = __Vdly__ysyx_24120009_core__DOT__wbu__DOT__wbu_active_reg;
    if (vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__rd_req_valid_delayed) {
        Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__pmem_read_TOP(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__addr_delayed, vlSelf->__Vfunc_ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__pmem_read__4__Vfuncout);
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw 
            = vlSelf->__Vfunc_ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__pmem_read__4__Vfuncout;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__rd_res_valid = 1U;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__wt_res_valid = 0U;
    } else if (vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wt_req_valid_delayed) {
        Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__pmem_write_TOP(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__waddr_delayed, vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wdata_delayed, (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__LSU__DOT__wmask_delayed));
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw = 0U;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__rd_res_valid = 0U;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__wt_res_valid = 1U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw = 0U;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__rd_res_valid = 0U;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__wt_res_valid = 0U;
    }
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw)));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2U] 
        = vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw;
}

void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__u_RegisterFile__DOT__get_register_values_TOP(VlUnpacked<IData/*31:0*/, 32> rf);
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_24120009_core__ConstPool__TABLE_h4c715f24_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_24120009_core__ConstPool__TABLE_h757d5658_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_24120009_core__ConstPool__TABLE_h68f45f92_0;

VL_INLINE_OPT void Vysyx_24120009_core___024root___nba_sequent__TOP__1(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvdim0__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvval__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvset__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    if (((IData)(vlSelf->ysyx_24120009_core__DOT__rf_we) 
         & (0U != (IData)(vlSelf->ysyx_24120009_core__DOT__waddr)))) {
        __Vdlyvval__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 
            = vlSelf->ysyx_24120009_core__DOT__reg_write_data;
        __Vdlyvset__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0 
            = vlSelf->ysyx_24120009_core__DOT__waddr;
    }
    if (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rd_res_valid) {
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer 
            = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_data_out;
    }
    if (__Vdlyvset__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0) {
        vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[__Vdlyvdim0__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf__v0;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o = 0x80000000U;
        vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o = 0x80000000U;
        vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o = 0x80000000U;
        vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM = 0x80000000U;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o = 0x80000000U;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o = 0x80000000U;
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc = 0x80000000U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o 
            = vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU;
        vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o 
            = vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU;
        vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o 
            = vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU;
        vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
            = vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
            = vlSelf->result_from_EXU_to_MEM_debug;
        vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o 
            = vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM;
        if (vlSelf->pc_wen_debug) {
            vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
                = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next;
        }
    }
    Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__u_RegisterFile__DOT__get_register_values_TOP(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf);
    if (vlSelf->rst) {
        vlSelf->ysyx_24120009_core__DOT__waddr = 0U;
        vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU = 0x80000000U;
        vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU = 0x80000000U;
        vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU = 0x80000000U;
        vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM = 0x80000000U;
        vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU = 0U;
        vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM = 0x80000000U;
        vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM = 0x80000000U;
        vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM = 0U;
        vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU = 0x80000000U;
        vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU = 0x80000000U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__waddr = vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU;
        vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU 
            = vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM;
        vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU 
            = vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM;
        vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
            = vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM;
        vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM 
            = vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU;
        vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU 
            = vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM;
        vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM 
            = vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU;
        vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
            = vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU;
        vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM 
            = (0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                        >> 7U));
        vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU 
            = vlSelf->pc_debug;
        vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
            = vlSelf->inst_debug;
    }
    vlSelf->x2_debug = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [2U];
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o)));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[0U] 
        = vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o;
    vlSelf->result_from_WB_debug = vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o)));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[1U] 
        = vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o;
    vlSelf->pc_plus4_debug = ((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o);
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o);
    vlSelf->opcode_debug = (0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4U] 
        = ((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3U] 
        = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->pc_plus4_debug)));
    vlSelf->__Vtableidx3 = vlSelf->opcode_debug;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel 
        = Vysyx_24120009_core__ConstPool__TABLE_h4c715f24_0
        [vlSelf->__Vtableidx3];
    vlSelf->waddr_debug = vlSelf->ysyx_24120009_core__DOT__waddr;
    vlSelf->result_from_MEM_to_WBU_debug = vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU;
    vlSelf->wb_sel_debug = vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel;
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
                       == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
           == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
              == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
              == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
                          == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel) 
              == vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__reg_write_data 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit)
            ? vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out
            : 0U);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key 
        = ((0x3f8U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                      << 3U)) | (7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                       >> 0xcU)));
    vlSelf->reg_write_data_debug = vlSelf->ysyx_24120009_core__DOT__reg_write_data;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
           == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                       == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access 
        = vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
           == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
           == vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
              == vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                       == vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask 
        = vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out;
    vlSelf->inst_from_EXU_to_MEM_debug = vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op 
        = ((0x40U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
            ? 0U : ((0x20U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                     ? ((0x10U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                         ? ((8U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                             ? 0U : ((4U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                      ? ((2U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                          ? ((1U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                              ? 0xaU
                                              : 0U)
                                          : 0U) : (
                                                   (2U 
                                                    & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 6U
                                                        : 5U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                                          >> 0x19U))
                                                         ? 8U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                                           >> 0x19U))
                                                          ? 9U
                                                          : 0U))
                                                        : 4U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 3U
                                                        : 2U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 7U
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                                          >> 0x19U))
                                                         ? 0U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                                           >> 0x19U))
                                                          ? 1U
                                                          : 0U)))))
                                                     : 0U)
                                                    : 0U)))
                         : 0U) : ((0x10U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                   ? ((8U & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                       ? 0U : ((4U 
                                                & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 6U
                                                        : 5U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                                          >> 0x19U))
                                                         ? 8U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                                           >> 0x19U))
                                                          ? 9U
                                                          : 0U))
                                                        : 4U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 3U
                                                        : 2U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)
                                                        ? 7U
                                                        : 0U)))
                                                     : 0U)
                                                    : 0U)))
                                   : 0U)));
    vlSelf->pc_debug = vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc;
    vlSelf->alu_op_debug = vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
           == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
              == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->imem_addr_debug = vlSelf->pc_debug;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                  >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                     >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                     >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                     >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                     >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                     >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext 
        = (((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                        >> 0x1fU))) << 0xdU) | ((0x1000U 
                                                 & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                            >> 7U))))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext 
        = (((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                        >> 0x1fU))) << 0x15U) | ((0x100000U 
                                                  & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU) 
                                                    | ((0x800U 
                                                        & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                             >> 0x14U))))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
        = (((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0x14U));
    vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                   >> 0x14U))];
    vlSelf->ysyx_24120009_core__DOT__rdata1 = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                   >> 0xfU))];
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0x14U));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                   >> 0x14U))];
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s 
        = ((0xfe0U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                      >> 0x14U)) | (0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                             >> 7U)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0U] 
        = (0xfffff000U & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1U] 
        = vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                   >> 0xfU))];
    vlSelf->__Vtableidx1 = (0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel 
        = Vysyx_24120009_core__ConstPool__TABLE_h757d5658_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel 
        = Vysyx_24120009_core__ConstPool__TABLE_h68f45f92_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_24120009_core__DOT__br_target = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
                                                  + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
           + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext);
    vlSelf->ysyx_24120009_core__DOT__jmp_target = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
                                                   + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
           + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata1));
    vlSelf->ysyx_24120009_core__DOT__jump_reg_target 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           + vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           < vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[3U] 
        = VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT__rdata1, vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[5U] 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           == vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           == vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt 
        = VL_LTS_III(32, vlSelf->ysyx_24120009_core__DOT__rdata1, vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu 
        = (vlSelf->ysyx_24120009_core__DOT__rdata1 
           < vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s)))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
           == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
              == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
              == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
              == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel) 
           == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel) 
              == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel) 
                       == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel) 
                          == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__Op1 = vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__br_target)));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__jmp_target)));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__jump_reg_target)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[4U] 
        = (2U | (1U & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[5U] 
        = vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[4U] 
        = (1U & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[2U] 
        = (0xaU | (1U & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[3U] 
        = (8U | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[2U] 
        = (1U & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[0U] 
        = (0xeU | (1U & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu))));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[1U] 
        = (0xcU | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[0U] 
        = (1U & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu)));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
                       == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
                          == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
                          == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel) 
                          == vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__Op2 = vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out;
    vlSelf->Op1_debug = vlSelf->ysyx_24120009_core__DOT__Op1;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__Op1)));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_24120009_core__DOT__Op1;
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out 
        = (((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                   >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
            [0U]) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                      >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
               [1U]) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                      >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
               [2U]) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                      >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
               [3U]) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                      >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
               [4U]) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                      >> 0xcU)) == vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list
               [5U]) & vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken 
        = vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out;
    vlSelf->Op2_debug = vlSelf->ysyx_24120009_core__DOT__Op2;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x900000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, 
                                                               (0x1fU 
                                                                & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              : (- 
                                                 (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                  >> 0x1fU))))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x800000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              : 0U))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x700000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              : 0U))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x600000000ULL | (QData)((IData)((vlSelf->ysyx_24120009_core__DOT__Op1 
                                             & vlSelf->ysyx_24120009_core__DOT__Op2))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5U] 
        = (0x500000000ULL | (QData)((IData)((vlSelf->ysyx_24120009_core__DOT__Op1 
                                             | vlSelf->ysyx_24120009_core__DOT__Op2))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6U] 
        = (0x400000000ULL | (QData)((IData)((vlSelf->ysyx_24120009_core__DOT__Op1 
                                             ^ vlSelf->ysyx_24120009_core__DOT__Op2))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->ysyx_24120009_core__DOT__Op1 
                                             - vlSelf->ysyx_24120009_core__DOT__Op2))));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0xaU] 
        = (QData)((IData)((vlSelf->ysyx_24120009_core__DOT__Op1 
                           + vlSelf->ysyx_24120009_core__DOT__Op2)));
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
    vlSelf->ysyx_24120009_core__DOT__pc_sel = ((IData)(
                                                       (0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)))
                                                ? 1U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU))
                                                    ? 3U
                                                    : 
                                                   (((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)) 
                                                     & (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken))
                                                     ? 2U
                                                     : 0U)));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h9d12977d__0)));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8U] 
        = vlSelf->__VdfgTmp_h9d12977d__0;
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h9d0653ad__0)));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7U] 
        = vlSelf->__VdfgTmp_h9d0653ad__0;
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
           == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
              == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
              == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
              == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_24120009_core__DOT__pc_sel) 
              == vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list
              [4U]));
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
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                       == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op) 
                          == vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM 
        = vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out;
    vlSelf->result_from_EXU_to_MEM_debug = vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM;
}

VL_INLINE_OPT void Vysyx_24120009_core___024root___nba_sequent__TOP__2(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__rd_req_valid_delayed) {
        Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__pmem_read_TOP(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__addr_delayed, vlSelf->__Vfunc_ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__pmem_read__2__Vfuncout);
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_data_out 
            = vlSelf->__Vfunc_ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__pmem_read__2__Vfuncout;
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rd_res_valid = 1U;
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wt_res_valid = 0U;
    } else if (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wt_req_valid_delayed) {
        Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__pmem_write_TOP(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__waddr_delayed, vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wdata_delayed, (IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wmask_delayed));
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_data_out = 0U;
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rd_res_valid = 0U;
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wt_res_valid = 1U;
    } else {
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_data_out = 0U;
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rd_res_valid = 0U;
        vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_inst__DOT__wt_res_valid = 0U;
    }
    vlSelf->pc_wen_debug = vlSelf->wbu_active_debug;
}

extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_24120009_core__ConstPool__TABLE_h86cd9fc5_0;
void Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__ifu__DOT__simulation_exit_TOP();

VL_INLINE_OPT void Vysyx_24120009_core___024root___nba_comb__TOP__0(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
        = ((0x1fU >= (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                               << 3U))) ? (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_rdata_raw 
                                           >> (0x18U 
                                               & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                  << 3U)))
            : 0U);
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->opcode_debug) 
                             << 1U) | (IData)(vlSelf->wbu_active_debug));
    vlSelf->ysyx_24120009_core__DOT__rf_we = Vysyx_24120009_core__ConstPool__TABLE_h86cd9fc5_0
        [vlSelf->__Vtableidx2];
    vlSelf->inst_debug = ((IData)(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__rd_res_valid)
                           ? vlSelf->ysyx_24120009_core__DOT__ifu__DOT__sram_data_out
                           : vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)))));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x500000000ULL | (QData)((IData)((0xffffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x400000000ULL | (QData)((IData)((0xffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3U] 
        = (0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data);
    vlSelf->rf_we_debug = vlSelf->ysyx_24120009_core__DOT__rf_we;
    if (VL_UNLIKELY((0x100073U == vlSelf->inst_debug))) {
        VL_WRITEF("EBREAK: Simulation exiting...\n");
        Vysyx_24120009_core___024root____Vdpiimwrap_ysyx_24120009_core__DOT__ifu__DOT__simulation_exit_TOP();
    }
    vlSelf->mem_active_debug = ((vlSelf->inst_debug 
                                 == vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU) 
                                & (vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                                   != vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                       == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access) 
                          == vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU 
        = vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en 
        = ((IData)(vlSelf->mem_active_debug) & ((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)) 
                                                | (0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU))));
    vlSelf->dmem_rdata_from_MEM_to_WBU_debug = vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU;
    vlSelf->mem_valid_debug = (1U & ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wt_res_valid) 
                                     | ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en)) 
                                        | (IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rd_res_valid))));
}

void Vysyx_24120009_core___024root___eval_nba(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24120009_core___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24120009_core___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24120009_core___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_24120009_core___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vysyx_24120009_core___024root___eval_triggers__act(Vysyx_24120009_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__act(Vysyx_24120009_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120009_core___024root___dump_triggers__nba(Vysyx_24120009_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24120009_core___024root___eval(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_24120009_core___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_24120009_core___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/cpu/ysyx_24120009_core.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_24120009_core___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24120009_core___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/cpu/ysyx_24120009_core.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_24120009_core___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_24120009_core___024root___eval_debug_assertions(Vysyx_24120009_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
