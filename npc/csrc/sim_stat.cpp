#include "include/sim_stat.h"

// performance counters definition
uint64_t total_cycles = 0;
uint64_t total_inst = 0;
uint64_t perf_ifu_inst_fetch = 0;
uint64_t perf_lsu_data_mem = 0;

uint64_t alu_count = 0;
uint64_t load_count = 0;
uint64_t store_count = 0;
uint64_t branch_count = 0;
uint64_t csr_count = 0;
uint64_t system_count = 0;
uint64_t jump_count = 0;
uint64_t atomic_count = 0;

uint64_t alu_total_cycles = 0;
uint64_t load_total_cycles = 0;
uint64_t store_total_cycles = 0;
uint64_t branch_total_cycles = 0;
uint64_t csr_total_cycles = 0;
uint64_t system_total_cycles = 0;
uint64_t jump_total_cycles = 0;
uint64_t atomic_total_cycles = 0;

uint64_t total_dmem_latency = 0;
uint64_t total_imem_latency = 0;

uint64_t total_miss_penalty = 0;
uint64_t total_miss_time = 0;

uint64_t total_stall_penalty = 0;
uint64_t jump_mispredict_count = 0;
uint64_t id_stall_cycles_due_to_ifetch = 0;

// decode function definition
InstType decode_inst_type(uint32_t inst) {
    uint8_t opcode = inst & 0x7F;
    switch (opcode) {
        case 0x33: return ALU;      // R-type
        case 0x13: return ALU;      // I-type
        case 0x03: return LOAD;     // load
        case 0x23: return STORE;    // store
        case 0x63: return BRANCH;   // branch
        case 0x6F: return JUMP;     // jal
        case 0x67: return JUMP;     // jalr
        case 0x73: {
            uint8_t funct3 = (inst >> 12) & 0x7;
            if (funct3 == 0) return SYSTEM;
            else return CSR;
        }
        case 0x0F: return SYSTEM;   // fence
        case 0x2F: return ATOMIC;   // AMO
        default: return UNKNOWN;
    }
}
