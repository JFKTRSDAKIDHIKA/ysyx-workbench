// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYX_24120009_CORE_H_
#define VERILATED_VYSYX_24120009_CORE_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vysyx_24120009_core__Syms;
class Vysyx_24120009_core___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class Vysyx_24120009_core VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vysyx_24120009_core__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_OUT8(&waddr_debug,4,0);
    VL_OUT8(&mem_wen_debug,0,0);
    VL_OUT8(&mem_en_debug,0,0);
    VL_OUT8(&rf_we_debug,0,0);
    VL_OUT8(&wbu_active_debug,0,0);
    VL_OUT8(&wb_sel_debug,1,0);
    VL_OUT8(&opcode_debug,6,0);
    VL_OUT8(&pc_wen_debug,0,0);
    VL_OUT8(&mem_active_debug,0,0);
    VL_OUT8(&alu_op_debug,4,0);
    VL_OUT8(&mem_access_done_debug,0,0);
    VL_OUT8(&wt_res_valid_debug,0,0);
    VL_OUT8(&ifu_state_debug,2,0);
    VL_OUT8(&rd_res_valid_debug,0,0);
    VL_OUT8(&mem_ctl_state_debug,1,0);
    VL_OUT8(&axi4_mem_state_debug,1,0);
    VL_OUT8(&idu_state_debug,1,0);
    VL_OUT8(&inst_valid_debug,0,0);
    VL_OUT8(&arbiter_state_debug,1,0);
    VL_OUT8(&axi4_lite_state_debug,1,0);
    VL_OUT(&pc_debug,31,0);
    VL_OUT(&inst_debug,31,0);
    VL_OUT(&reg_write_data_debug,31,0);
    VL_OUT(&x2_debug,31,0);
    VL_OUT(&Op1_debug,31,0);
    VL_OUT(&Op2_debug,31,0);
    VL_OUT(&imem_addr_debug,31,0);
    VL_OUT(&pc_plus4_debug,31,0);
    VL_OUT(&result_from_EXU_to_MEM_debug,31,0);
    VL_OUT(&result_from_MEM_to_WBU_debug,31,0);
    VL_OUT(&result_from_WB_debug,31,0);
    VL_OUT(&inst_from_EXU_to_MEM_debug,31,0);
    VL_OUT(&dmem_rdata_from_MEM_to_WBU_debug,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vysyx_24120009_core___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vysyx_24120009_core(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vysyx_24120009_core(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vysyx_24120009_core();
  private:
    VL_UNCOPYABLE(Vysyx_24120009_core);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
