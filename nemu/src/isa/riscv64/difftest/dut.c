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
#include <cpu/difftest.h>
#include "../local-include/reg.h"
#include <stdio.h>

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  // Compare the registers one by one
  for (int i = 0; i < 32; ++i) {
    if (cpu.gpr[i] != ref_r->gpr[i]) {
      // If any register value is different, print the mismatch
      printf("Register mismatch at x%d: DUT=%d REF=%d\n", i, cpu.gpr[i], ref_r->gpr[i]);
      return false;
    }
  }

  // Compare the program counter (pc)
  if (cpu.pc != ref_r->pc) {
    printf("PC mismatch: DUT=%d REF=%d\n", cpu.pc, ref_r->pc);
    return false;
  }

  // If all checks pass, the registers are consistent
  return true;
}


void isa_difftest_attach() {
}
