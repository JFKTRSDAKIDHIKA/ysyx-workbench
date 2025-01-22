// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_24120009_core.h"
#include "Vysyx_24120009_core__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_24120009_core::Vysyx_24120009_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vysyx_24120009_core__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , is_ebreak_debug{vlSymsp->TOP.is_ebreak_debug}
    , imem_addr{vlSymsp->TOP.imem_addr}
    , imem_rdata{vlSymsp->TOP.imem_rdata}
    , pc_debug{vlSymsp->TOP.pc_debug}
    , Op1_debug{vlSymsp->TOP.Op1_debug}
    , Op2_debug{vlSymsp->TOP.Op2_debug}
    , inst_debug{vlSymsp->TOP.inst_debug}
    , reg_write_data_debug{vlSymsp->TOP.reg_write_data_debug}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vysyx_24120009_core::Vysyx_24120009_core(const char* _vcname__)
    : Vysyx_24120009_core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vysyx_24120009_core::~Vysyx_24120009_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vysyx_24120009_core___024root___eval_debug_assertions(Vysyx_24120009_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_24120009_core___024root___eval_static(Vysyx_24120009_core___024root* vlSelf);
void Vysyx_24120009_core___024root___eval_initial(Vysyx_24120009_core___024root* vlSelf);
void Vysyx_24120009_core___024root___eval_settle(Vysyx_24120009_core___024root* vlSelf);
void Vysyx_24120009_core___024root___eval(Vysyx_24120009_core___024root* vlSelf);

void Vysyx_24120009_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_24120009_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_24120009_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vysyx_24120009_core___024root___eval_static(&(vlSymsp->TOP));
        Vysyx_24120009_core___024root___eval_initial(&(vlSymsp->TOP));
        Vysyx_24120009_core___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vysyx_24120009_core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vysyx_24120009_core::eventsPending() { return false; }

uint64_t Vysyx_24120009_core::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vysyx_24120009_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vysyx_24120009_core___024root___eval_final(Vysyx_24120009_core___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120009_core::final() {
    Vysyx_24120009_core___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vysyx_24120009_core::hierName() const { return vlSymsp->name(); }
const char* Vysyx_24120009_core::modelName() const { return "Vysyx_24120009_core"; }
unsigned Vysyx_24120009_core::threads() const { return 1; }
