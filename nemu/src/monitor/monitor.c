/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include <elf.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb(); // 初始化一个简单的调试器（Simple Debugger）。
void init_disasm();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;


#ifdef CONFIG_FTRACE
#define MAX_FUNC 1000  
typedef struct {
  uint32_t start;  
  uint32_t size;   
  char *name;      
} FuncSymbol;
static char *elf_file = NULL;
static FuncSymbol func_table[MAX_FUNC];
static int nr_func = 0;  

// helper function to find function name by address
const char* find_func(uint32_t addr) {
  for(int i = 0; i < nr_func; i++) {
    uint32_t start = func_table[i].start;
    uint32_t end   = start + func_table[i].size;
    if (addr >= start && addr < end) {
      return func_table[i].name;
    }
  }
  return "???";
}

// Read the symbol table and string table from the ELF file for later use.
static void parse_elf_symbols(const char *elf_file) {
  FILE *fp = fopen(elf_file, "rb");
  if (!fp) {
    printf("Cannot open ELF file: %s\n", elf_file);
    return;
  }

  // Read ELF Header
  Elf32_Ehdr ehdr;
  if (fread(&ehdr, sizeof(Elf32_Ehdr), 1, fp) != 1) {
    fprintf(stderr, "Error reading ELF header\n");
    fclose(fp);
    return;
  }

  // check magic
  if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
    printf("Not a valid ELF file: %s\n", elf_file);
    fclose(fp);
    return;
  }

  // 根据 ELF Header 找到 Section Header Table 的起始位置
  // e_shoff 是 Section Header Table 的文件偏移
  // e_shnum 是 Section Header 数目
  // e_shstrndx 是 Section Header 字符串表所在的下标
  Elf32_Shdr *sh_table = (Elf32_Shdr *)malloc(ehdr.e_shnum * sizeof(Elf32_Shdr));
  fseek(fp, ehdr.e_shoff, SEEK_SET);
  if (fread(sh_table, sizeof(Elf32_Shdr), ehdr.e_shnum, fp) != ehdr.e_shnum) {
    fprintf(stderr, "Error reading section header table\n");
    free(sh_table);
    fclose(fp);
    return;
  }

  int symtab_idx = -1, strtab_idx = -1;
  for(int i = 0; i < ehdr.e_shnum; i++) {
    if(sh_table[i].sh_type == SHT_SYMTAB) {
      symtab_idx = i;
      // printf("Found .symtab at index %d\n", i);
    }
    else if(sh_table[i].sh_type == SHT_STRTAB && i != ehdr.e_shstrndx) {
      strtab_idx = i;
      // printf("Found .strtab at index %d\n", i);
    }
  }

  if(symtab_idx == -1 || strtab_idx == -1) {
    printf("No .symtab or .strtab found in ELF. ftrace will be disabled.\n");
    free(sh_table);
    fclose(fp);
    return;
  }

  Elf32_Shdr symtab_hdr = sh_table[symtab_idx];
  Elf32_Shdr strtab_hdr = sh_table[strtab_idx];

  // Read Symbol Table
  Elf32_Sym *symtab = (Elf32_Sym *)malloc(symtab_hdr.sh_size);
  fseek(fp, symtab_hdr.sh_offset, SEEK_SET);
  if (fread(symtab, symtab_hdr.sh_size, 1, fp) != 1) {
    fprintf(stderr, "Error reading symbol table\n");
    free(sh_table);
    free(symtab);
    fclose(fp);
    return;
  }

  // Read String Table
  char *strtab = (char *)malloc(strtab_hdr.sh_size);
  fseek(fp, strtab_hdr.sh_offset, SEEK_SET);
  if (fread(strtab, strtab_hdr.sh_size, 1, fp) != 1) {
    fprintf(stderr, "Error reading string table\n");
    free(sh_table);
    free(symtab);
    free(strtab);
    fclose(fp);
    return;
  }

  // Iterate through symbol table to find functions
  int symbol_count = symtab_hdr.sh_size / sizeof(Elf32_Sym);
  for(int i = 0; i < symbol_count; i++) {
    if (ELF32_ST_TYPE(symtab[i].st_info) == STT_FUNC) {
      char *func_name = &strtab[symtab[i].st_name];
      uint32_t func_addr = symtab[i].st_value;
      uint32_t func_size = symtab[i].st_size;
      // printf("Found function: %s at 0x%08x, size = %d\n", func_name, func_addr, func_size);
      if(nr_func < MAX_FUNC && func_size > 0) {
        func_table[nr_func].start = func_addr;
        func_table[nr_func].size  = func_size;
        func_table[nr_func].name  = strdup(func_name); 
        nr_func++;
      }
    }
  }

  printf("Found %d functions in ELF.\n", nr_func);

  free(symtab);
  free(strtab);
  free(sh_table);
  fclose(fp);
}

// The ELF file and the BIN file are in the same directory, but only the file extensions differ. 
// This function changes the extension from .bin to .elf.
static void set_elf_file_from_img_file() {
    // Check if img_file ends with ".bin"
    if (img_file != NULL && strlen(img_file) > 4 && strcmp(img_file + strlen(img_file) - 4, ".bin") == 0) {
        // Allocate memory for elf_file, the length of img_file minus 4 plus 4 for ".elf" and the null terminator
        elf_file = (char *)malloc(strlen(img_file) - 3 + 4);
        if (elf_file != NULL) {
            // Copy img_file content up to the part before ".bin"
            strncpy(elf_file, img_file, strlen(img_file) - 4);
            // Append ".elf" to elf_file
            strcpy(elf_file + strlen(img_file) - 4, ".elf");
        }
    } else {
        printf("Error: img_file does not have the expected '.bin' extension.\n");
    }
}
#endif

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  //assert(ret == 1);
  printf("%d", ret);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

#ifdef CONFIG_FTRACE
  // The ELF file and the BIN file are in the same directory, but only the file extensions differ. 
  // This function changes the extension from .bin to .elf.
  set_elf_file_from_img_file();
  // Read the symbol table and string table from the ELF file for later use.
  if (elf_file != NULL) {
    parse_elf_symbols(elf_file);
  }
#endif

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm());

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
