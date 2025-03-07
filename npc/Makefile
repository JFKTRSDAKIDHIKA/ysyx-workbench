# 定义变量
VERILATOR = verilator
TOP_MODULE = npc-chisel/generated/Core.sv
CSRC = $(wildcard csrc/*.cpp)
VSRC = $(wildcard npc-chisel/generated/*.sv)
OBJ_DIR = obj_dir
EXEC = $(OBJ_DIR)/VCore
STEP_MODE = run
FLAGS += -Wno-lint -Wno-style

# 默认目标
all: $(EXEC)

# 编译 Verilator 模型并生成可执行文件
$(EXEC): $(TOP_MODULE) $(CSRC) $(VSRC)
	$(VERILATOR) $(FLAGS) --cc $(TOP_MODULE) --exe $(CSRC) \
                    --build -j 0 --top-module Core \
                    --Mdir $(OBJ_DIR) --trace \
                    -LDFLAGS "-lreadline" 
	make -C $(OBJ_DIR) -f VCore.mk 

# 运行仿真
sim: $(EXEC)
	$(call git_commit, "sim RTL")  
	$(EXEC) $(IMG) $(STEP_MODE)

# 清理生成文件
clean:
	rm -rf $(OBJ_DIR)

# 包含上级目录的 Makefile
include ../Makefile
