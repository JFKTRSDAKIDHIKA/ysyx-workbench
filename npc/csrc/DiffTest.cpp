#include <dlfcn.h>
#include <assert.h>
#include "Vysyx_24120009_core.h"
#include "verilated.h"

typedef uint32_t paddr_t;
extern int rf_values[32];  // 声明外部变量
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

// 定义来自 NEMU 动态库的 DiffTest API 函数指针
extern "C" {
    void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
    void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
    void (*ref_difftest_exec)(uint64_t n) = NULL;
    void (*ref_difftest_init)(int port) = NULL;
}

void init_difftest(const char *ref_so_file, long img_size, int port) {
    // 加载 NEMU 动态库
    void *handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);
    
    // 获取 DiffTest API 函数
    ref_difftest_memcpy = (void (*)(paddr_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);

    ref_difftest_init = (void (*)(int))dlsym(handle, "difftest_init");
    assert(ref_difftest_init);

    // 初始化 DiffTest
    ref_difftest_init(port);
}

void difftest_step(Vysyx_24120009_core* top, uint32_t pc) {
    // 1. 获取 NPC 的寄存器状态
    int rf[32];
    for (int i = 0; i < 32; ++i) {
        rf[i] = rf_values[i];
    }
    
    // 2. 同步寄存器到 NEMU
    ref_difftest_regcpy(rf, DIFFTEST_TO_REF);
    
    // 3. 执行指令
    ref_difftest_exec(1);  // 执行 1 条指令
    
    // 4. 比较寄存器和内存状态
    ref_difftest_regcpy(rf, DIFFTEST_TO_DUT);
    // ref_difftest_memcpy(top->mem_addr, top->mem_data, sizeof(top->mem_data), DIFFTEST_TO_REF);
}
