#ifndef SIM_STAT_H
#define SIM_STAT_H

#include <cstdint>

// instruction types
enum InstType {
    ALU, LOAD, STORE, BRANCH, JUMP, CSR, SYSTEM, ATOMIC, UNKNOWN
};

// decode function
InstType decode_inst_type(uint32_t inst);

// performance counters
extern uint64_t total_cycles;
extern uint64_t total_inst;
extern uint64_t perf_ifu_inst_fetch;
extern uint64_t perf_lsu_data_mem;

extern uint64_t alu_count;
extern uint64_t load_count;
extern uint64_t store_count;
extern uint64_t branch_count;
extern uint64_t csr_count;
extern uint64_t system_count;
extern uint64_t jump_count;
extern uint64_t atomic_count;
extern uint64_t alu_total_cycles;
extern uint64_t load_total_cycles;
extern uint64_t store_total_cycles;
extern uint64_t branch_total_cycles;
extern uint64_t csr_total_cycles;
extern uint64_t system_total_cycles;
extern uint64_t jump_total_cycles;
extern uint64_t atomic_total_cycles;
extern uint64_t total_dmem_latency;  
extern uint64_t total_imem_latency;  
extern uint64_t total_miss_penalty;
extern uint64_t total_miss_time;
extern uint64_t total_stall_penalty;
extern uint64_t jump_mispredict_count;
extern uint64_t id_stall_cycles_due_to_ifetch;

#endif // SIM_STAT_H
