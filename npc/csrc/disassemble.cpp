#include "include/disassemble.h"
#include <capstone/capstone.h>

// Disassemble signle instruction
std::string disassemble_instruction(uint32_t inst) {
    csh handle;
    cs_insn *insn;
    size_t count;

    // Initialize Capstone
    if (cs_open(CS_ARCH_RISCV, CS_MODE_RISCV32, &handle) != CS_ERR_OK) {
        return "Failed to initialize Capstone";
    }

    // Disassemble instruction
    count = cs_disasm(handle, reinterpret_cast<uint8_t*>(&inst), sizeof(inst), 0, 0, &insn);
    if (count > 0) {
        std::string result = insn[0].mnemonic;
        result += " ";
        result += insn[0].op_str;
        cs_free(insn, count);
        cs_close(&handle);
        return result;
    } else {
        cs_close(&handle);
        return "Unknown instruction";
    }
}

