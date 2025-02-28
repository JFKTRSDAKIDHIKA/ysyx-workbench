// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_24120009_core.h"
#include "Vysyx_24120009_core__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_24120009_core::Vysyx_24120009_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vysyx_24120009_core__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , waddr_debug{vlSymsp->TOP.waddr_debug}
    , mem_wen_debug{vlSymsp->TOP.mem_wen_debug}
    , mem_en_debug{vlSymsp->TOP.mem_en_debug}
    , rf_we_debug{vlSymsp->TOP.rf_we_debug}
    , wbu_active_debug{vlSymsp->TOP.wbu_active_debug}
    , wb_sel_debug{vlSymsp->TOP.wb_sel_debug}
    , opcode_debug{vlSymsp->TOP.opcode_debug}
    , pc_wen_debug{vlSymsp->TOP.pc_wen_debug}
    , mem_active_debug{vlSymsp->TOP.mem_active_debug}
    , alu_op_debug{vlSymsp->TOP.alu_op_debug}
    , mem_access_done_debug{vlSymsp->TOP.mem_access_done_debug}
    , wt_res_valid_debug{vlSymsp->TOP.wt_res_valid_debug}
    , ifu_state_debug{vlSymsp->TOP.ifu_state_debug}
    , rd_res_valid_debug{vlSymsp->TOP.rd_res_valid_debug}
    , mem_ctl_state_debug{vlSymsp->TOP.mem_ctl_state_debug}
    , axi4_mem_state_debug{vlSymsp->TOP.axi4_mem_state_debug}
    , idu_state_debug{vlSymsp->TOP.idu_state_debug}
    , inst_valid_debug{vlSymsp->TOP.inst_valid_debug}
    , arbiter_state_debug{vlSymsp->TOP.arbiter_state_debug}
    , axi4_lite_state_debug{vlSymsp->TOP.axi4_lite_state_debug}
    , pc_debug{vlSymsp->TOP.pc_debug}
    , inst_debug{vlSymsp->TOP.inst_debug}
    , reg_write_data_debug{vlSymsp->TOP.reg_write_data_debug}
    , x2_debug{vlSymsp->TOP.x2_debug}
    , Op1_debug{vlSymsp->TOP.Op1_debug}
    , Op2_debug{vlSymsp->TOP.Op2_debug}
    , imem_addr_debug{vlSymsp->TOP.imem_addr_debug}
    , pc_plus4_debug{vlSymsp->TOP.pc_plus4_debug}
    , result_from_EXU_to_MEM_debug{vlSymsp->TOP.result_from_EXU_to_MEM_debug}
    , result_from_MEM_to_WBU_debug{vlSymsp->TOP.result_from_MEM_to_WBU_debug}
    , result_from_WB_debug{vlSymsp->TOP.result_from_WB_debug}
    , inst_from_EXU_to_MEM_debug{vlSymsp->TOP.inst_from_EXU_to_MEM_debug}
    , dmem_rdata_from_MEM_to_WBU_debug{vlSymsp->TOP.dmem_rdata_from_MEM_to_WBU_debug}
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
    vlSymsp->__Vm_activity = true;
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
std::unique_ptr<VerilatedTraceConfig> Vysyx_24120009_core::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vysyx_24120009_core___024root__trace_init_top(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_24120009_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120009_core___024root*>(voidSelf);
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vysyx_24120009_core___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_register(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_24120009_core::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vysyx_24120009_core::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vysyx_24120009_core___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
