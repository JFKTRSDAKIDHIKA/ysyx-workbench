# 定义变量
VERILATOR = verilator
TOP_MODULE = ./vsrc/ysyxSoCFull.v
CSRC = $(wildcard csrc/*.cpp)
HEADERS = $(wildcard csrc/include/*.h) $(wildcard include/*.hpp) $(wildcard csrc/*.h) $(wildcard csrc/*.hpp)
V_FILES = $(shell find vsrc -name "*.v" ! -name "ysyxSoCFull.v")
SV_FILES = $(shell find vsrc -name "*.sv")
VSRC = $(V_FILES) $(SV_FILES)
INCLUDE_DIRS = -Ivsrc/perip/uart16550/rtl -Ivsrc/perip/spi/rtl
CHISEL_DIR := ./npc-chisel
OBJ_DIR = obj_dir
EXEC = $(OBJ_DIR)/VysyxSoCFull
FLAGS += -Wno-lint -Wno-style --timescale "1ns/1ns" --no-timing  --autoflush --stats 
STEP_MODE = run


# 默认目标
all: $(EXEC)

# 编译 Verilator 模型并生成可执行文件
$(EXEC): $(TOP_MODULE) $(CSRC) $(VSRC) $(HEADERS)
	$(VERILATOR) $(FLAGS) --cc $(TOP_MODULE) --trace --exe $(CSRC) $(VSRC) $(INCLUDE_DIRS) \
                    --build -j 0 --top-module ysyxSoCFull \
                    --Mdir $(OBJ_DIR)  \
					-LDFLAGS "-lcapstone -lreadline -L/usr/local/lib"
	+make -C $(OBJ_DIR) -f VysyxSoCFull.mk 

# Compile chisel to verilog
verilog: 
	$(MAKE) -C $(CHISEL_DIR)

# 运行仿真
sim: $(EXEC)
	$(call git_commit, "sim RTL")  
	$(EXEC) $(IMG) $(STEP_MODE)

# 清理生成文件
clean:
	rm -rf $(OBJ_DIR)
	rm -rf ./sim_output
	$(MAKE) -C $(CHISEL_DIR) clean

# 包含上级目录的 Makefile
include ../Makefile
