# 定义变量
VERILATOR = verilator
TOP_MODULE = ../ysyxSoC/build/ysyxSoCFull.v
CSRC = $(wildcard csrc/*.cpp)
V_FILES = $(shell find vsrc -name "*.v")
SV_FILES = $(shell find vsrc -name "*.sv")
VSRC = $(V_FILES) $(SV_FILES)
INCLUDE_DIRS = -Ivsrc/perip/uart16550/rtl -Ivsrc/perip/spi/rtl
CHISEL_DIR := ./npc-chisel
OBJ_DIR = obj_dir
EXEC = $(OBJ_DIR)/VysyxSoCFull
STEP_MODE = run
FLAGS += -Wno-lint -Wno-style --timescale "1ns/1ns" --no-timing  --autoflush 


# 默认目标
all: $(EXEC)

# 编译 Verilator 模型并生成可执行文件
$(EXEC): $(TOP_MODULE) $(CSRC) $(VSRC)
	$(VERILATOR) $(FLAGS) --cc $(TOP_MODULE) --exe $(CSRC) $(VSRC) $(INCLUDE_DIRS) \
                    --build -j 0 --top-module ysyxSoCFull \
                    --Mdir $(OBJ_DIR)  \
                    -LDFLAGS "-lreadline -L/usr/local/lib "
	+make -C $(OBJ_DIR) -f VysyxSoCFull.mk 

verilog: 
	$(MAKE) -C $(CHISEL_DIR)

# 运行仿真
sim: $(EXEC)
	$(call git_commit, "sim RTL")  
	$(call git_commit, "sim RTL")  
	$(EXEC) $(IMG) $(STEP_MODE)

# 清理生成文件
clean:
	rm -rf $(OBJ_DIR)

# 包含上级目录的 Makefile
include ../Makefile
