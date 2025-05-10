#include "VysyxSoCFull.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "include/difftest.h"
#include "include/registers.h"
#include "include/program_loader.h"
#include "include/memory.h"
#include "include/disassemble.h"
#include "include/device.h"
#include "include/config.h"
#include "include/dpi_interface.h"
#include "include/simulation.h"
#include "include/itrace.h"
#include "include/mtrace.h"
#include "include/sim_stat.h"
#include <iostream>
#include <svdpi.h>
#include <iomanip> 
#include <cassert>    
#include <sstream>
#include <readline/readline.h>
#include <readline/history.h>
#include <filesystem>  
#include <fstream>

// Define macros
#define NEED_CHECK(top) ((top->io_wbu_state_debug == 2) && (top->io_wbu_reg_inst_debug != 0x4033) && (top->io_wbu_reg_pc_debug != 0x0))
#define IN_SDRAM(pc) ((pc) >= 0xa0000000 && (pc) <= 0xbfffffff)

// Declare global variables
VysyxSoCFull* top;      // Top module (global)
static bool step_mode;  // Step mode flag (global)
static riscv32_CPU_state ref;
static uint64_t instr_exec_cycles;
static uint64_t ref_pc_prev = 0x30000000;
std::vector<std::string> commit_log_buffer;
static int MAX_COMMIT_LOGS = 10;

// function prototypes declaration
void print_perf_report(double seconds, double cycles_per_second);
void print_config();
void finalize_and_log(const std::string& commit_log_path = "./sim_output/commit_log.txt");

#ifdef TRACE
InstructionTrace itrace;
MemoryTrace mtrace;
#endif

#ifdef ENABLE_WAVEFORM
static int time_i = 0;
VerilatedVcdC* tfp;
#endif

#ifdef DIFFTEST
int check_dut_and_ref(VysyxSoCFull* top, paddr_t start_addr, size_t size) {
  // ----------- 检查寄存器 -----------
  for (int i = 0; i < 32; i++) {
    if (rf_values[i] != ref.gpr[i]) {
      std::cerr << RED << BOLD;
      std::cerr << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
      std::cerr << "┃                 ❌ REGISTER MISMATCH DETECTED         ┃\n";
      std::cerr << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" << RESET;

      std::cerr << "  ➤ Mismatch at register " << YELLOW << regs[i] << RESET << "\n";
      std::cerr << "     DUT: 0x" << std::hex << rf_values[i]
                << "    REF: 0x" << ref.gpr[i] << "\n\n";

      std::cerr << "  ➤ Program Counter:\n";
      std::cerr << "     DUT: 0x" << std::hex << top->io_wbu_reg_pc_debug 
                << "    REF: 0x" << ref_pc_prev << "\n\n";

      std::cerr << "  ➤ DUT Registers:\n";
      for (int j = 0; j < 32; j++) {
        std::cerr << "     " << regs[j] << ": 0x" << std::hex << rf_values[j] << "\n";
      }
      std::cerr << "\n  ➤ REF Registers:\n";
      for (int j = 0; j < 32; j++) {
        std::cerr << "     " << regs[j] << ": 0x" << std::hex << ref.gpr[j] << "\n";
      }

      std::cerr << RED << BOLD << "\n[!] Simulation Aborted due to register mismatch.\n" << RESET;
      return -1;
    }
  }

  // ----------- 检查 PC -----------
  if (top->io_wbu_reg_pc_debug != ref_pc_prev) {
    std::cerr << RED << BOLD;
    std::cerr << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
    std::cerr << "┃                    ❌ PC MISMATCH DETECTED            ┃\n";
    std::cerr << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" << RESET;

    std::cerr << "  ➤ PC mismatch:\n";
    std::cerr << "     DUT: 0x" << std::hex << top->io_wbu_reg_pc_debug 
              << "    REF: 0x" << ref.pc << "\n\n";

    std::cerr << "  ➤ DUT Registers:\n";
    for (int j = 0; j < 32; j++) {
      std::cerr << "     " << regs[j] << ": 0x" << std::hex << rf_values[j] << "\n";
    }
    std::cerr << "\n  ➤ REF Registers:\n";
    for (int j = 0; j < 32; j++) {
      std::cerr << "     " << regs[j] << ": 0x" << std::hex << ref.gpr[j] << "\n";
    }

    std::cerr << RED << BOLD << "\n[!] Simulation Aborted due to PC mismatch.\n" << RESET;
    return -1;
  }

  ref_pc_prev = ref.pc;
  return 0;
}
#endif

void tick(void) {
    if (IN_SDRAM(top->io_wbu_reg_pc_debug)) total_cycles++;
    top->clock = 0;
    top->eval();
#ifdef ENABLE_WAVEFORM
    tfp->dump(time_i);
    time_i++;
#endif
  // Performance counter
  // ICache performance counter
  if (static_cast<int>(top->io_ifu_state_debug) == 4)
    perf_ifu_inst_fetch++;
  if (static_cast<int>(top->io_ifu_state_debug) >= 1 && static_cast<int>(top->io_ifu_state_debug) <= 3)
    total_imem_latency++;
  if ((static_cast<int>(top->io_lsu_state_debug) == 2) && (static_cast<int>(top->io_lsu_is_ld_or_st_debug)  == 1))
    perf_lsu_data_mem++;
  if (static_cast<int>(top->io_lsu_state_debug) == 3)
    total_dmem_latency++;
  if (static_cast<int>(top->io_icache_state_debug) != 0 && static_cast<int>(top->io_icache_state_debug) != 5)
    total_miss_penalty++;
  // Pipeline performance counter
  if (static_cast<int>(top->io_idu_state_debug) == 2)
    total_stall_penalty++;
  if (static_cast<int>(top->io_idu_state_debug) == 0)
    id_stall_cycles_due_to_ifetch++;
  jump_mispredict_count = top->io_perf_jump_mispredict_count;
  total_miss_time = top->io_icache_miss_count;
  
  // Increment the cycle counter for the current instruction
  instr_exec_cycles++;

  // If a new instruction is being issued (IFU state debug signal is 1),
  // reset the instruction execution cycle counter
  if (static_cast<int>(top->io_ifu_state_debug) == 1)
      instr_exec_cycles = 0;

  if ((top->io_wbu_state_debug == 2) && (top->io_wbu_reg_inst_debug != 0x4033) && (top->io_wbu_reg_pc_debug != 0x0)) {
    // Dynamic instruction count
    if (IN_SDRAM(top->io_wbu_reg_pc_debug))  total_inst++;

    // Performance counter
    uint32_t inst = top->io_inst_debug;
    switch (decode_inst_type(inst)) {
        case ALU:
            alu_count++;
            alu_total_cycles += instr_exec_cycles;
            break;
        case LOAD:
            load_count++;
            load_total_cycles += instr_exec_cycles;
            break;
        case STORE:
            store_count++;
            store_total_cycles += instr_exec_cycles;
            break;
        case BRANCH:
            branch_count++;
            branch_total_cycles += instr_exec_cycles;
            break;
        case CSR:
            csr_count++;
            csr_total_cycles += instr_exec_cycles;
            break;
        case SYSTEM:
            system_count++;
            system_total_cycles += instr_exec_cycles;
            break;
        case JUMP:
            jump_count++;
            jump_total_cycles += instr_exec_cycles;
            break;
        case ATOMIC:
            atomic_count++;
            atomic_total_cycles += instr_exec_cycles;
            break;
        default:
            break;
    }


#ifdef TRACE
    // instruction trace
    itrace.addEntry(top->io_pc_debug, top->io_inst_debug);

    // Memory trace
    std::string inst_str = disassemble_instruction(top->io_lsu_reg_inst_debug);
    std::istringstream iss(inst_str);
    std::string mnemonic;
    iss >> mnemonic;  

    static const std::set<std::string> load_instructions = {
        "lb", "lh", "lw", "lbu", "lhu"
    };
    static const std::set<std::string> store_instructions = {
        "sb", "sh", "sw"
    };

    uint32_t addr = top->io_lsu_reg_dmem_addr_debug;

    if (load_instructions.count(mnemonic)) {
        mtrace.addEntry(addr, top->io_dmem_rdata_debug, true, false);
    } else if (store_instructions.count(mnemonic)) {
        mtrace.addEntry(addr, top->io_dmem_wdata_debug, false, true);
    }
#endif

  // print cpu execution information
#ifndef SILENT_MODE
    if (commit_log_buffer.size() < MAX_COMMIT_LOGS) {
        std::ostringstream oss;
        oss << "=============================================\n";
        oss << "[COMMIT INFO]\n";
        oss << "Instruction    : " << std::uppercase << std::hex << std::setw(8) << std::setfill('0') << disassemble_instruction(top->io_wbu_reg_inst_debug) << "\n";
        oss << "PC             : 0x" << std::uppercase << std::hex << std::setw(8) << std::setfill('0') << top->io_wbu_reg_pc_debug << "\n";
        oss << "WB Data        : 0x" << std::uppercase << std::hex << std::setw(8) << std::setfill('0') << top->io_wb_data_debug << "\n";
        oss << "DMem RData     : 0x" << std::uppercase << std::hex << std::setw(8) << std::setfill('0') << top->io_wbu_reg_dmem_rdata_debug << "\n";
        oss << "WB Write Enable: 0x" << std::uppercase << std::hex << static_cast<int>(top->io_wb_wen_debug) << "\n";
        oss << "=============================================\n\n";
        commit_log_buffer.push_back(oss.str());
    }
#endif
}

    top->clock = 1;
    top->eval();
    Verilated::timeInc(1);
}


void reset(VysyxSoCFull* top, int cycles) {
    top->reset = 1;
    for (int i = 0; i < cycles; ++i) {
        tick();  // forbidden single-step mode
    }
    top->reset = 0;
}

/* We use the 'readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
    static char *line_read = NULL;
  
    if (line_read) {
      free(line_read);
      line_read = NULL;
    }
  
    line_read = readline("(npc) ");
  
    if (line_read && *line_read) {
      add_history(line_read);
    }
  
    return line_read;
}

static int need_check = 0;
static int execute_single_step() {
  tick();
#ifdef DIFFTEST
  if (need_check) {
    need_check = NEED_CHECK(top);
    ref_difftest_exec(1);
    ref_difftest_regcpy(&ref, DIFFTEST_TO_REF);
    return check_dut_and_ref(top, 0, 0);
  } else {
    need_check = NEED_CHECK(top);
    return 0;
  }
#else 
  return 0;
#endif
}

static int cmd_c(char *args) {
  while(!Verilated::gotFinish()) {
    int ret = execute_single_step();
    if (ret < 0) return -1;
  }
  return 0;
}

static int cmd_q(char *args) {
  return -1;
}

static int cmd_si(char* args);

static int cmd_x(char* args);

static int cmd_info(char* args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NPC", cmd_q },
  { "si", "Single-step execute N instructions and then pause. If N is not provided, default to 1", cmd_si },
  { "info", "Print registers", cmd_info},
  { "x", "Use the expression as the starting memory address, and output N consecutive 4-byte blocks in hexadecimal", cmd_x}
};

#define NR_CMD 5

static int cmd_si(char* args) {
  char *arg = strtok(NULL, "");

  if (arg == NULL) {
      // 单步执行
      int ret = execute_single_step();
      if (ret < 0) return -1;
  } else {
      // 多步执行
      int steps = atoi(arg);
      for (int i = 0; i < steps; i++) {
          int ret = execute_single_step();
          if (ret < 0) return -1;
      }
  }

  return 0;
}

static int cmd_info(char* args){
  char *arg = strtok(NULL, "");

  if (arg == NULL){
    printf("Note: Currently only the 'info r' command is available, which prints register contents\n");
  } else if (strcmp(arg, "r") == 0) {
    print_register_values();
  } else {
    printf("Unknown arg '%s'\n", arg);
  }
  return 0;
}

static int cmd_x(char* args){
  int arg0;
  char arg1[100]; 

  if (args == NULL){
    printf("Lack args\n");
    return 0;
  }
    
  if (sscanf(args, "%d %[^\n]", &arg0, arg1) != 2) {
    printf("Invalid args\n");
    return 0;
  }
  
  int len = 4 * arg0;

  printf("Memory dump skipped (SDRAM access is non-trivial)\n");
  return 0;
}

int sdb_mainloop() {
  for (char *str; (str = rl_gets()) != NULL && !Verilated::gotFinish(); ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
    * which may need further parsing
    */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return -1; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
  return 0;
}
  
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    top = new VysyxSoCFull;

    std::string dirname = "sim_output";
    std::filesystem::create_directory(dirname); 

#ifdef ENABLE_WAVEFORM
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    top ->trace(tfp, 3);
    tfp->open("waveform.vcd");
#endif

    // Default to single step mode (if no argument is provided)
    step_mode = true;
    if (argc > 2) {
        std::string mode = argv[2];
        if (mode == "step") {
            step_mode = true; // Single-step mode
        } else if (mode == "run") {
            step_mode = false; // Run mode (continuous execution)
        } else {
            std::cerr << "Invalid step_mode argument. Use 'step' or 'run'." << std::endl;
            return -1; // Exit with error code
        }
    }

    // Load program
    load_program(argv[1]);

    // Initialize SDRAM chips
    SDRAM::init(0);
    SDRAM::init(1);
    SDRAM::init(2);
    SDRAM::init(3);

#ifdef DIFFTEST
    // Initialize difftest
    auto so_path = std::filesystem::canonical(std::filesystem::current_path() / "../nemu/build/riscv32-nemu-interpreter-so");
    init_difftest(so_path.c_str(), 0);
#endif

    // Reset
    reset(top, 10); // Reset for 10 cycles

    auto start_time = std::chrono::high_resolution_clock::now();
    
    if (step_mode) {
      if (sdb_mainloop() < 0) {
        finalize_and_log();
        return -1;
      }
    } else {
      if (cmd_c(NULL) < 0) {
        finalize_and_log();
        return -1;
      }
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end_time - start_time;
    double seconds = elapsed.count();
    double cycles_per_second = total_cycles / seconds;

    // Print performance report
    print_perf_report(seconds, cycles_per_second);


#ifdef ENABLE_WAVEFORM
    tfp->close();
    delete tfp;
#endif

    delete top;
    return 0;
}


void print_perf_report(double seconds, double cycles_per_second) {
  using std::cout;
  using std::endl;
  using std::left;
  using std::right;
  using std::setw;
  using std::fixed;
  using std::setprecision;

  const int label_width = 30;
  const int value_width = 20;

  auto percent = [](uint64_t count) {
    return (total_inst == 0) ? 0.0 : 100.0 * static_cast<double>(count) / total_inst;
  };

  auto avg_cycles = [](uint64_t total_cycles, uint64_t count) {
    return (count == 0) ? 0.0 : static_cast<double>(total_cycles) / count;
  };

  double avg_lsu_latency = 0.0;
  if (perf_lsu_data_mem > 0)
      avg_lsu_latency = static_cast<double>(total_dmem_latency) / perf_lsu_data_mem;
  double avg_ifu_latency = 0.0;
  if (perf_ifu_inst_fetch > 0)
      avg_ifu_latency = static_cast<double>(total_imem_latency) / perf_ifu_inst_fetch;
  double avg_miss_penalty = 0.0;
  if (perf_ifu_inst_fetch > 0)
      avg_miss_penalty = static_cast<double>(total_miss_penalty) / total_miss_time;
  if (id_stall_cycles_due_to_ifetch > total_inst)
      id_stall_cycles_due_to_ifetch = id_stall_cycles_due_to_ifetch - total_inst;
  double cpi_orig = (total_inst == 0) ? 0.0 : static_cast<double>(total_cycles) / total_inst;
  double cpi_no_stall = (total_inst == 0) ? 0.0 : static_cast<double>(total_cycles - total_stall_penalty) / total_inst;
  double cpi_no_jmp_mispredict = (total_inst == 0) ? 0.0 : static_cast<double>(total_cycles - jump_mispredict_count) / total_inst;
  double cpi_perfect = (total_inst == 0) ? 0.0 : static_cast<double>(total_cycles - total_stall_penalty - jump_mispredict_count) / total_inst;   

  std::string filename = "./sim_output/stats.txt";
  std::ofstream fout(filename);

  if (!fout) {
      std::cerr << "Failed to open file: " << filename << "\n";
      exit(1);
  }

  std::cout << COLOR_GREEN << "[INFO] " << COLOR_RESET 
          << "Generating performance report to: " 
          << COLOR_CYAN << "./sim_output/stats.txt" << COLOR_RESET << std::endl;

  fout << "\n";
  fout << "┌────────────────────────────────────────────────────────────┐\n";
  fout << "│                Performance Statistics v1.0                  │\n";
  fout << "├────────────────────────────────────────────────────────────┤\n";

  fout << "║ " << left << setw(label_width) << "LSU Data Accesses"
       << " : " << right << setw(value_width) << perf_lsu_data_mem << " ║\n";

  fout << "║ " << left << setw(label_width) << "LSU Avg Data Mem Latency"
       << " : " << right << setw(value_width) << fixed << setprecision(2) << avg_lsu_latency << " ║\n";
  
  fout << "║ " << left << setw(label_width) << "IFU Instructions Fetched"
       << " : " << right << setw(value_width) << perf_ifu_inst_fetch << " ║\n";

  fout << "║ " << left << setw(label_width) << "IFU Avg Instruction Mem Latency"
       << " : " << right << setw(value_width) << fixed << setprecision(2) << avg_ifu_latency << " ║\n";

  fout << "║ " << left << setw(label_width) << "ICache Total Miss Count"
       << " : " << right << setw(value_width) << fixed << setprecision(2) << total_miss_time << " ║\n";

  fout << "║ " << left << setw(label_width) << "ICache Average Miss Penalty"
       << " : " << right << setw(value_width) << fixed << setprecision(2) << avg_miss_penalty << " ║\n";
      
  fout << "║ " << left << setw(label_width) << "ICache Total Miss Penalty"
       << " : " << right << setw(value_width) << fixed << setprecision(2) << total_miss_penalty << " ║\n";

  fout << "║ " << left << setw(label_width) << "Total stall penalty (Cycles)"
       << " : " << right << setw(value_width) << total_stall_penalty << " ║\n";
  
  fout << "║ " << left << setw(label_width) << "Jump Mispredict Count"
       << " : " << right << setw(value_width) << jump_mispredict_count << " ║\n";

  fout << "║ " << left << setw(label_width) << "ID Stall Cycles Due to IFetch"
       << " : " << right << setw(value_width) << id_stall_cycles_due_to_ifetch << " ║\n";

  fout << "║ " << left << setw(label_width) << "CPI w/o Stall Penalty"
       << " : " << right << setw(value_width) << fixed << setprecision(3) << cpi_no_stall << " ║\n";
  
  fout << "║ " << left << setw(label_width) << "CPI w/o Jump Mispredict"
       << " : " << right << setw(value_width) << fixed << setprecision(3) << cpi_no_jmp_mispredict << " ║\n";
  
  fout << "║ " << left << setw(label_width) << "CPI w/o Stall + Jump MP"
       << " : " << right << setw(value_width) << fixed << setprecision(3) << cpi_perfect << " ║\n";

  fout << "║ " << left << setw(label_width) << "Stall Penalty CPI Reduction"
       << " : " << right << setw(value_width)
       << fixed << setprecision(2) << ((cpi_orig == 0) ? 0.0 : (1.0 - cpi_no_stall / cpi_orig) * 100) << "% ║\n";

  fout << "║ " << left << setw(label_width) << "Jump MP CPI Reduction"
       << " : " << right << setw(value_width)
       << fixed << setprecision(2) << ((cpi_orig == 0) ? 0.0 : (1.0 - cpi_no_jmp_mispredict / cpi_orig) * 100) << "% ║\n";
  
  fout << "│                   System Performance                       │\n";

  fout << "║ " << left << setw(label_width) << "Total Time (s)"
       << " : " << right << setw(value_width) << fixed << setprecision(3) << seconds << " ║\n";

  fout << "║ " << left << setw(label_width) << "Total Cycles"
       << " : " << right << setw(value_width) << total_cycles << " ║\n";

  fout << "║ " << left << setw(label_width) << "Total Instructions"
       << " : " << right << setw(value_width) << total_inst << " ║\n";

  fout << "║ " << left << setw(label_width) << "IPC (Instructions/Cycle)"
       << " : " << right << setw(value_width) << fixed << setprecision(3)
       << ((total_cycles == 0) ? 0.0 : static_cast<double>(total_inst) / total_cycles) << " ║\n";

  fout << "║ " << left << setw(label_width) << "CPI (Cycles/Instruction)"
       << " : " << right << setw(value_width)
       << ((total_inst == 0) ? 0.0 : static_cast<double>(total_cycles) / total_inst) << " ║\n";

  fout << "║ " << left << setw(label_width) << "Sim Speed (Cycles/sec)"
       << " : " << right << setw(value_width) << static_cast<uint64_t>(cycles_per_second) << " ║\n";

  fout << "├────────────────────────────────────────────────────────────┤\n";
  fout << "│                Instruction Analysis                        │\n";
  fout << "├────────────────────────────────────────────────────────────┤\n";

  auto print_inst_line = [&](const std::string& name, uint64_t count, uint64_t total_cycles) {
    fout << "║ " << left << setw(label_width) << name
         << " : " << right << setw(6) << count
         << " (" << fixed << setprecision(2) << setw(5) << percent(count) << "%)"
         << " | avg: " << fixed << setprecision(2) << setw(6) << avg_cycles(total_cycles, count)
         << " cycles ║\n";
  };

  print_inst_line("ALU Instructions", alu_count, alu_total_cycles);
  print_inst_line("Load Instructions", load_count, load_total_cycles);
  print_inst_line("Store Instructions", store_count, store_total_cycles);
  print_inst_line("Branch Instructions", branch_count, branch_total_cycles);
  print_inst_line("CSR Instructions", csr_count, csr_total_cycles);
  print_inst_line("System Instructions", system_count, system_total_cycles);
  print_inst_line("Jump Instructions", jump_count, jump_total_cycles);
  print_inst_line("Atomic Instructions", atomic_count, atomic_total_cycles);

  fout << "└────────────────────────────────────────────────────────────┘\n";
  fout << "\n";

  std::cout << COLOR_GREEN << "[INFO] " << COLOR_RESET 
          << "Performance report generated successfully!" << std::endl;

}


void finalize_and_log(const std::string& commit_log_path) {
#ifdef TRACE
    itrace.printTrace();
    mtrace.printTrace();
#endif

#ifndef SILENT_MODE
    std::ofstream commit_log_file(commit_log_path);
    if (commit_log_file.is_open()) {
        for (const auto& entry : commit_log_buffer) {
            commit_log_file << entry;
        }
        commit_log_file.close();
        std::cout << COLOR_GREEN << "[LOG] " << COLOR_RESET
                  << "Commit info saved to " << COLOR_CYAN << commit_log_path << COLOR_RESET << std::endl;
    } else {
        std::cerr << COLOR_RED << "[ERROR] " << COLOR_RESET
                  << "Unable to open " << COLOR_CYAN << commit_log_path << COLOR_RESET << " for writing!" << std::endl;
    }
#endif
}