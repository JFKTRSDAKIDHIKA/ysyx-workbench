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

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include <cpu/ftrace.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_B, TYPE_R,
  TYPE_N, // none
};

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 20) | (BITS(i, 19, 12) << 12) | (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1); } while(0)
#define immB() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 12) | (BITS(i, 7, 7) << 11) | (BITS(i, 30, 25) << 5) | (BITS(i, 11, 8) << 1); } while(0)

static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
  s->rs1 = rs1;  // 将它们写入 s->rs1, s->rs2
  s->rs2 = rs2;
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J: src1R();          immJ(); break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_R: src1R(); src2R();         break;
    case TYPE_N: break;
    default: panic("unsupported type = %d", type);
  }
}

static int decode_exec(Decode *s) {
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  int rd = 0; \
  word_t src1 = 0, src2 = 0, imm = 0; \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(rd) = imm);

  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(rd) = src1 + src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(rd) = src1 - src2);
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(rd) = src1 << (src2 & 0x1f));
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(rd) = ((int32_t)src1 < (int32_t)src2) ? 1 : 0);
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(rd) = ((uint32_t)src1 < (uint32_t)src2) ? 1 : 0);
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(rd) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(rd) = (uint32_t)src1 >> (src2 & 0x1f));
  // WARNING: Ensure correct sign extension for 'srai' (Arithmetic Right Shift) operation.
  // This implementation uses (int32_t) to enforce sign extension during right shift.
  // Without sign extension, negative values will be incorrectly shifted, resulting in erroneous behavior.
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(rd) = (int32_t)src1 >> (src2 & 0x1f));
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(rd) = src1 | src2);
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(rd) = src1 & src2);
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(rd) = (uint32_t)src1 % (uint32_t)src2);
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(rd) = src1 % src2);
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(rd) = (uint32_t)src1 / (uint32_t)src2);
  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(rd) = src1 / src2);
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(rd) = (int32_t)src1 * (int32_t)src2);
  // WARNING: Correct sign extension is critical for 'mulh' (High 32 Bits of Signed Multiplication).
  // This implementation ensures proper sign extension by first casting src1 and src2 to int32_t
  // (to interpret them as signed 32-bit integers), then to int64_t (to perform 64-bit signed multiplication).
  // The result is right-shifted by 32 to extract the high 32 bits.
  //
  // Key Points:
  // 1. Without explicit casting to int32_t, uint32_t values may not be sign-extended correctly,
  //    leading to incorrect results when multiplying negative values.
  // 2. Ensure the simulator treats src1 and src2 as signed integers during multiplication.
  // 3. Verify the behavior with both positive and negative operands to confirm correct sign handling.
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R, R(rd) = ((int64_t)(int32_t)src1 * (int64_t)(int32_t)src2) >> 32);
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , R, R(rd) = ((uint64_t)(uint32_t)src1 * (uint64_t)(uint32_t)src2) >> 32);
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(rd) = Mr(src1 + imm, 4));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1));
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(rd) = SEXT(Mr(src1 + imm, 1), 8));
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(rd) = SEXT(Mr(src1 + imm, 2), 16));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(rd) = Mr(src1 + imm, 2));

  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr, I, 
    log_write("jump @ pc = 0x%08x : jalr to 0x%08x (src1=0x%08x, imm=%d)\n", s->pc, src1 + imm, src1, imm);
    /* 函数返回判断：
       RISC-V 中常用 ret 的机器码是 jalr x0, x1, 0 
       即 rd=0, rs1=1, imm=0
    */
  #ifdef CONFIG_FTRACE
    if (rd == 0 && s->rs1 == 1 && imm == 0) {
      ftrace_ret(s->pc);
    }
    else if (rd == 1) {
      ftrace_call(s->pc, src1 + imm);
    }
  #endif
    R(rd) = s->pc + 4;
    s->dnpc = src1 + imm;
  );
  

  INSTPAT("??????? ????? ????? 000 ????? 0010011", addi   , I, R(rd) = src1 + imm);
  INSTPAT("??????? ????? ????? 111 ????? 0010011", andi   , I, R(rd) = src1 & imm);
  INSTPAT("??????? ????? ????? 110 ????? 0010011", ori    , I, R(rd) = src1 | imm);
  INSTPAT("??????? ????? ????? 100 ????? 0010011", xori   , I, R(rd) = src1 ^ imm);
  INSTPAT("0000000 ????? ????? 001 ????? 0010011", slli   , I, R(rd) = src1 << (imm & 0x1f));
  INSTPAT("0000000 ????? ????? 101 ????? 0010011", srli   , I, R(rd) = (uint32_t)src1 >> (imm & 0x1f));
  // WARNING: Ensure correct sign extension for 'srai' (Arithmetic Right Shift) operation.
  // This implementation uses (int32_t) to enforce sign extension during right shift.
  // Without sign extension, negative values will be incorrectly shifted, resulting in erroneous behavior.
  INSTPAT("0100000 ????? ????? 101 ????? 0010011", srai   , I, R(rd) = (int32_t)src1 >> (imm & 0x1f));
  INSTPAT("??????? ????? ????? 010 ????? 0010011", slti   , I, R(rd) = ((int32_t)src1 < (int32_t)imm) ? 1 : 0);
  INSTPAT("??????? ????? ????? 011 ????? 0010011", sltiu  , I, R(rd) = ((uint32_t)src1 < (uint32_t)imm) ? 1 : 0);
  
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, src2));

  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal, J, 
    log_write("jump @ pc = 0x%08x : jal to 0x%08x\n", s->pc, s->pc + imm);
  #ifdef CONFIG_FTRACE
    if (rd == 1) {
      ftrace_call(s->pc, s->pc + imm);
    }
  #endif
    R(rd) = s->pc + 4;
    s->dnpc = s->pc + imm;
  );  

  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq , B,
    log_write("branch @ pc = 0x%08x : beq %d == %d => %s\n", s->pc, src1, src2, ((int32_t)src1 == (int32_t)src2 ? "taken" : "not taken"));
    if ((int32_t)src1 == (int32_t)src2) s->dnpc = s->pc + imm;
  );
  
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne , B,
    log_write("branch @ pc = 0x%08x : bne %d != %d => %s\n", s->pc, src1, src2, ((int32_t)src1 != (int32_t)src2 ? "taken" : "not taken"));
    if ((int32_t)src1 != (int32_t)src2) s->dnpc = s->pc + imm;
  );
  
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt , B,
    log_write("branch @ pc = 0x%08x : blt %d < %d => %s\n", s->pc, src1, src2, ((int32_t)src1 < (int32_t)src2 ? "taken" : "not taken"));
    if ((int32_t)src1 < (int32_t)src2) s->dnpc = s->pc + imm;
  );
  
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge , B,
    log_write("branch @ pc = 0x%08x : bge %d >= %d => %s\n", s->pc, src1, src2, ((int32_t)src1 >= (int32_t)src2 ? "taken" : "not taken"));
    if ((int32_t)src1 >= (int32_t)src2) s->dnpc = s->pc + imm;
  );
  
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu , B,
    log_write("branch @ pc = 0x%08x : bltu %u < %u => %s\n", s->pc, src1, src2, ((uint32_t)src1 < (uint32_t)src2 ? "taken" : "not taken"));
    if ((uint32_t)src1 < (uint32_t)src2) s->dnpc = s->pc + imm;
  );
  
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu , B,
    log_write("branch @ pc = 0x%08x : bgeu %u >= %u => %s\n", s->pc, src1, src2, ((uint32_t)src1 >= (uint32_t)src2 ? "taken" : "not taken"));
    if ((uint32_t)src1 >= (uint32_t)src2) s->dnpc = s->pc + imm;
  );
  

  // I-type Control and Status Register Instructions
  INSTPAT("??????? ????? ????? 010 ????? 1110011", csrrs   , I, 
    switch (imm) {
      case 0x300: R(rd) = cpu.csr.mstatus; cpu.csr.mstatus |= src1; break;
      case 0x305: R(rd) = cpu.csr.mtvec;   cpu.csr.mtvec   |= src1; break;
      case 0x341: R(rd) = cpu.csr.mepc;   cpu.csr.mepc    |= src1; break;
      case 0x342: R(rd) = cpu.csr.mcause;  cpu.csr.mcause  |= src1; break;
      default: INV(s->pc);
    }
  );
  INSTPAT("??????? ????? ????? 001 ????? 1110011", csrrw  , I, 
    switch (imm) {
      case 0x300: R(rd) = cpu.csr.mstatus; cpu.csr.mstatus = src1; break;
      case 0x305: R(rd) = cpu.csr.mtvec;   cpu.csr.mtvec = src1; break;
      case 0x341: R(rd) = cpu.csr.mepc;    cpu.csr.mepc = src1; break;
      case 0x342: R(rd) = cpu.csr.mcause;  cpu.csr.mcause = src1; break;
      default: INV(s->pc);
    }
  );
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, s->dnpc = cpu.csr.mtvec; isa_raise_intr(EXC_CODE_ECALL_U, s->pc));
  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , N, s->dnpc = cpu.csr.mepc); 
  
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));

  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
