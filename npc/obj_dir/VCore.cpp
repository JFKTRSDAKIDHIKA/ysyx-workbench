// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCore__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCore::VCore(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCore__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_ifu_state_debug{vlSymsp->TOP.io_ifu_state_debug}
    , io_lsu_state_debug{vlSymsp->TOP.io_lsu_state_debug}
    , io_lsu_is_ld_or_st_debug{vlSymsp->TOP.io_lsu_is_ld_or_st_debug}
    , io_wbu_state_debug{vlSymsp->TOP.io_wbu_state_debug}
    , io_wb_wen_debug{vlSymsp->TOP.io_wb_wen_debug}
    , io_wb_sel_debug{vlSymsp->TOP.io_wb_sel_debug}
    , io_Arbiter_state_debug{vlSymsp->TOP.io_Arbiter_state_debug}
    , io_pc_debug{vlSymsp->TOP.io_pc_debug}
    , io_inst_debug{vlSymsp->TOP.io_inst_debug}
    , io_lsu_reg_inst_debug{vlSymsp->TOP.io_lsu_reg_inst_debug}
    , io_dmem_wdata_debug{vlSymsp->TOP.io_dmem_wdata_debug}
    , io_dmem_rdata_debug{vlSymsp->TOP.io_dmem_rdata_debug}
    , io_wb_data_debug{vlSymsp->TOP.io_wb_data_debug}
    , io_wbu_reg_dmem_rdata_debug{vlSymsp->TOP.io_wbu_reg_dmem_rdata_debug}
    , io_aw_addr_debug{vlSymsp->TOP.io_aw_addr_debug}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCore::VCore(const char* _vcname__)
    : VCore(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCore::~VCore() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCore___024root___eval_debug_assertions(VCore___024root* vlSelf);
#endif  // VL_DEBUG
void VCore___024root___eval_static(VCore___024root* vlSelf);
void VCore___024root___eval_initial(VCore___024root* vlSelf);
void VCore___024root___eval_settle(VCore___024root* vlSelf);
void VCore___024root___eval(VCore___024root* vlSelf);

void VCore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCore::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCore___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCore___024root___eval_static(&(vlSymsp->TOP));
        VCore___024root___eval_initial(&(vlSymsp->TOP));
        VCore___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCore___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCore::eventsPending() { return false; }

uint64_t VCore::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCore::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCore___024root___eval_final(VCore___024root* vlSelf);

VL_ATTR_COLD void VCore::final() {
    VCore___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCore::hierName() const { return vlSymsp->name(); }
const char* VCore::modelName() const { return "VCore"; }
unsigned VCore::threads() const { return 1; }
void VCore::prepareClone() const { contextp()->prepareClone(); }
void VCore::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VCore::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCore___024root__trace_decl_types(VerilatedVcd* tracep);

void VCore___024root__trace_init_top(VCore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VCore___024root__trace_decl_types(tracep);
    VCore___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCore___024root__trace_register(VCore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCore::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCore::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCore___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
