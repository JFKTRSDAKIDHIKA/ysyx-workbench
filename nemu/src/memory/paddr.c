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

#include <memory/host.h>
#include <memory/paddr.h>
#include <memory/sram_flash.h>
#include <device/mmio.h>
#include <isa.h>
#include <cpu/cpu.h>
#include <utils.h> 

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
// Add sram and flash to NEMU
static uint8_t sram[CONFIG_SRAM_SIZE_KB * 1024] PG_ALIGN = {};
static uint8_t flash[CONFIG_FLASH_SIZE_KB * 1024] PG_ALIGN = {};
static uint8_t sdram[CONFIG_SDRAM_SIZE_KB * 1024] PG_ALIGN = {};
#endif

// Helper function: Check if access information needs to be recorded
static inline bool need_mtrace(paddr_t addr) {
  #if defined(CONFIG_MTRACE)
    // If the address is out of range, do not record
    if (addr < MTRACE_START || addr >= MTRACE_END) {
      return false;
    }
    // If within range, return true to indicate that it should be recorded
    return true;
  #else
    // If MTRACE is not enabled, return false directly
    return false;
  #endif
  }
  
uint8_t* guest_to_host(paddr_t paddr) { 
  if (IS_SDRAM_ADDR(paddr)) {
    return sdram + paddr - CONFIG_SDRAM_BASE; 
  } else if (IS_SRAM_ADDR(paddr)) {
    return sram + paddr - CONFIG_SRAM_BASE;
  } else if (IS_FLASH_ADDR(paddr)) {
    return flash + paddr - CONFIG_FLASH_BASE;
  } else {
    assert("Invalid memory");
    return NULL; 
  }
}

paddr_t host_to_guest(uint8_t *haddr) { 
  if (IS_SDRAM_ADDR(haddr - sdram + CONFIG_SDRAM_BASE)) {
    return haddr - sdram + CONFIG_SDRAM_BASE; 
  } else if (IS_SRAM_ADDR(haddr - sram + CONFIG_SRAM_BASE)) {
    return haddr - sram + CONFIG_SRAM_BASE;
  } else if (IS_FLASH_ADDR(haddr - flash + CONFIG_FLASH_BASE)) {
    return haddr - flash + CONFIG_FLASH_BASE;
  } else {
    assert("Invalid memory");
    return -1; 
  }
}

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("Address " FMT_PADDR " is out of bound: "
        "Physical Memory [" FMT_PADDR ", " FMT_PADDR "], "
        "SDRAM [" FMT_PADDR ", " FMT_PADDR "], "
        "SRAM [" FMT_PADDR ", " FMT_PADDR "], "
        "FLASH [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
        addr, PMEM_LEFT, PMEM_RIGHT,
        CONFIG_SDRAM_BASE, CONFIG_SDRAM_TOP,
        CONFIG_SRAM_BASE, CONFIG_SRAM_TOP,
        CONFIG_FLASH_BASE, CONFIG_FLASH_TOP,
        cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  memset(sram, 0, CONFIG_SRAM_SIZE_KB * 1024);
  memset(flash, 0, CONFIG_FLASH_SIZE_KB * 1024);
  memset(sdram, 0, CONFIG_SDRAM_SIZE_KB * 1024);
  Log("Memory layout: "
    "Physical Memory [" FMT_PADDR ", " FMT_PADDR "], "
    "SDRAM [" FMT_PADDR ", " FMT_PADDR "], "
    "SRAM [" FMT_PADDR ", " FMT_PADDR "], "
    "FLASH [" FMT_PADDR ", " FMT_PADDR "]",
    PMEM_LEFT, PMEM_RIGHT,
    CONFIG_SDRAM_BASE, CONFIG_SDRAM_TOP,
    CONFIG_SRAM_BASE, CONFIG_SRAM_TOP,
    CONFIG_FLASH_BASE, CONFIG_FLASH_TOP);
}

word_t paddr_read(paddr_t addr, int len) {
  if (IS_SDRAM_ADDR(addr) || IS_SRAM_ADDR(addr) || IS_FLASH_ADDR(addr)) {
    word_t data = pmem_read(addr, len);

#ifdef CONFIG_MTRACE
    if (need_mtrace(addr)) {
      log_write("[MTRACE] Read  %d bytes at paddr 0x%08"PRIx64" (PC=0x%08"PRIx64"): 0x%016"PRIx64,
                len, (uint64_t)addr, (uint64_t)cpu.pc, (uint64_t)data);
    }
#endif

    return data;
  }
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (IS_SDRAM_ADDR(addr) || IS_SRAM_ADDR(addr)) {
    pmem_write(addr, len, data);

#ifdef CONFIG_MTRACE
    if (need_mtrace(addr)) {
      log_write("[MTRACE] Write %d bytes at paddr 0x%08"PRIx64" (PC=0x%08"PRIx64"): 0x%016"PRIx64,
                len, (uint64_t)addr, (uint64_t)cpu.pc, (uint64_t)data);
    }
#endif

    return;
  }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}