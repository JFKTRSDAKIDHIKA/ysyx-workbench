# 定义变量
VERILATOR = verilator
TOP_MODULE = vsrc/cpu/ysyx_24120009_core.v
CSRC = $(wildcard csrc/*.cpp)
VSRC = $(wildcard vsrc/**/*.v)
INCLUDE_DIRS = -Ivsrc/include -Ivsrc/common -Ivsrc/cpu
OBJ_DIR = obj_dir
EXEC = $(OBJ_DIR)/Vysyx_24120009_core
STEP_MODE = run

# 默认目标
all: $(EXEC)

# 编译 Verilator 模型并生成可执行文件
$(EXEC): $(TOP_MODULE) $(CSRC) $(VSRC)
	$(VERILATOR) -Wno-lint -Wno-style --cc $(TOP_MODULE) --exe $(CSRC) $(INCLUDE_DIRS) \
                    --build -j 0 --top-module ysyx_24120009_core \
                    --Mdir $(OBJ_DIR) --trace \
                    -LDFLAGS "-lreadline" 
	make -C $(OBJ_DIR) -f Vysyx_24120009_core.mk 

# 运行仿真
sim: $(EXEC)
	$(call git_commit, "sim RTL")  
	$(EXEC) $(IMG) $(STEP_MODE)

# 清理生成文件
clean:
	rm -rf $(OBJ_DIR)

# 包含上级目录的 Makefile
include ../Makefile
