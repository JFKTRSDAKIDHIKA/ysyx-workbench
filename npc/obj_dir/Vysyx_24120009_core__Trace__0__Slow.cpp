// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24120009_core__Syms.h"


VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_init_sub__TOP__0(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+409,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+410,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+411,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+412,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+413,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+414,"mem_wen_debug", false,-1);
    tracep->declBit(c+415,"mem_en_debug", false,-1);
    tracep->declBus(c+416,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+417,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+418,"rf_we_debug", false,-1);
    tracep->declBit(c+419,"wbu_active_debug", false,-1);
    tracep->declBus(c+420,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+421,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+422,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+423,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+424,"pc_wen_debug", false,-1);
    tracep->declBit(c+425,"mem_active_debug", false,-1);
    tracep->declBus(c+426,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+427,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+428,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+429,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+430,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+431,"mem_access_done_debug", false,-1);
    tracep->declBus(c+432,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+433,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+434,"ifu_state_debug", false,-1, 2,0);
    tracep->declBit(c+435,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+436,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+437,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+438,"idu_state_debug", false,-1, 1,0);
    tracep->declBit(c+439,"inst_valid_debug", false,-1);
    tracep->declBus(c+440,"arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+441,"axi4_lite_state_debug", false,-1, 1,0);
    tracep->pushNamePrefix("ysyx_24120009_core ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+409,"pc_debug", false,-1, 31,0);
    tracep->declBus(c+410,"inst_debug", false,-1, 31,0);
    tracep->declBus(c+411,"reg_write_data_debug", false,-1, 31,0);
    tracep->declBus(c+412,"x2_debug", false,-1, 31,0);
    tracep->declBus(c+413,"waddr_debug", false,-1, 4,0);
    tracep->declBit(c+414,"mem_wen_debug", false,-1);
    tracep->declBit(c+415,"mem_en_debug", false,-1);
    tracep->declBus(c+416,"Op1_debug", false,-1, 31,0);
    tracep->declBus(c+417,"Op2_debug", false,-1, 31,0);
    tracep->declBit(c+418,"rf_we_debug", false,-1);
    tracep->declBit(c+419,"wbu_active_debug", false,-1);
    tracep->declBus(c+409,"imem_addr_debug", false,-1, 31,0);
    tracep->declBus(c+421,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+422,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+423,"opcode_debug", false,-1, 6,0);
    tracep->declBit(c+424,"pc_wen_debug", false,-1);
    tracep->declBit(c+425,"mem_active_debug", false,-1);
    tracep->declBus(c+426,"result_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+427,"result_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBus(c+428,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+429,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+430,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBit(c+431,"mem_access_done_debug", false,-1);
    tracep->declBus(c+432,"dmem_rdata_from_MEM_to_WBU_debug", false,-1, 31,0);
    tracep->declBit(c+433,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+434,"ifu_state_debug", false,-1, 2,0);
    tracep->declBit(c+435,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+436,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+437,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+438,"idu_state_debug", false,-1, 1,0);
    tracep->declBit(c+439,"inst_valid_debug", false,-1);
    tracep->declBus(c+440,"arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+441,"axi4_lite_state_debug", false,-1, 1,0);
    tracep->declBus(c+393,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+447,"alu_op", false,-1, 4,0);
    tracep->declBus(c+151,"pc_sel", false,-1, 2,0);
    tracep->declBit(c+396,"rf_we", false,-1);
    tracep->declBit(c+448,"mem_en", false,-1);
    tracep->declBit(c+449,"mem_wen", false,-1);
    tracep->declBus(c+450,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+152,"Op1", false,-1, 31,0);
    tracep->declBus(c+153,"Op2", false,-1, 31,0);
    tracep->declBus(c+451,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+154,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+155,"br_target", false,-1, 31,0);
    tracep->declBus(c+156,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+394,"pc_wen", false,-1);
    tracep->declBus(c+409,"pc_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+410,"inst_from_IFU_to_IDU", false,-1, 31,0);
    tracep->declBus(c+157,"pc_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+158,"inst_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+159,"rdata2_from_IDU_to_EXU", false,-1, 31,0);
    tracep->declBus(c+160,"rd_addr_from_IDU_to_EXU", false,-1, 4,0);
    tracep->declBus(c+161,"pc_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+162,"inst_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+163,"result_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+164,"rdata2_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+165,"rd_addr_from_EXU_to_MEM", false,-1, 4,0);
    tracep->declBus(c+426,"dmem_addr_from_EXU_to_MEM", false,-1, 31,0);
    tracep->declBus(c+397,"dmem_rdata_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+166,"result_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+167,"rd_addr_from_MEM_to_WBU", false,-1, 4,0);
    tracep->declBus(c+168,"pc_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+169,"inst_from_MEM_to_WBU", false,-1, 31,0);
    tracep->declBus(c+170,"inst_from_WBU_to_MEM", false,-1, 31,0);
    tracep->declBit(c+431,"mem_access_done", false,-1);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBit(c+75,"ifu_arvalid", false,-1);
    tracep->declBit(c+76,"ifu_arready", false,-1);
    tracep->declBus(c+409,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+77,"ifu_rvalid", false,-1);
    tracep->declBit(c+78,"ifu_rready", false,-1);
    tracep->declBus(c+79,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+80,"mem_awvalid", false,-1);
    tracep->declBus(c+171,"mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+80,"mem_wvalid", false,-1);
    tracep->declBit(c+81,"mem_wready", false,-1);
    tracep->declBus(c+172,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+173,"mem_wstrb", false,-1, 7,0);
    tracep->declBit(c+82,"mem_bvalid", false,-1);
    tracep->declBit(c+83,"mem_bready", false,-1);
    tracep->declBit(c+84,"mem_arvalid", false,-1);
    tracep->declBus(c+171,"mem_araddr", false,-1, 31,0);
    tracep->declBit(c+85,"mem_rvalid", false,-1);
    tracep->declBit(c+86,"mem_rready", false,-1);
    tracep->declBus(c+87,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+88,"awvalid_wire", false,-1);
    tracep->declBit(c+89,"awready_wire", false,-1);
    tracep->declBus(c+90,"awaddr_wire", false,-1, 31,0);
    tracep->declBit(c+91,"wvalid_wire", false,-1);
    tracep->declBit(c+92,"wready_wire", false,-1);
    tracep->declBus(c+93,"wdata_wire", false,-1, 31,0);
    tracep->declBus(c+94,"wstrb_wire", false,-1, 7,0);
    tracep->declBit(c+95,"bvalid_wire", false,-1);
    tracep->declBit(c+96,"bready_wire", false,-1);
    tracep->declBit(c+97,"arvalid_wire", false,-1);
    tracep->declBit(c+98,"arready_wire", false,-1);
    tracep->declBus(c+99,"araddr_wire", false,-1, 31,0);
    tracep->declBit(c+100,"rvalid_wire", false,-1);
    tracep->declBit(c+101,"rready_wire", false,-1);
    tracep->declBus(c+102,"rdata_wire", false,-1, 31,0);
    tracep->declBus(c+174,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+175,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+176,"waddr", false,-1, 4,0);
    tracep->declBus(c+177,"rdata1", false,-1, 31,0);
    tracep->declBus(c+159,"rdata2", false,-1, 31,0);
    tracep->pushNamePrefix("axi4_lite_wrapper ");
    tracep->declBus(c+452,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBit(c+88,"awvalid", false,-1);
    tracep->declBit(c+89,"awready", false,-1);
    tracep->declBus(c+90,"awaddr", false,-1, 31,0);
    tracep->declBit(c+91,"wvalid", false,-1);
    tracep->declBit(c+92,"wready", false,-1);
    tracep->declBus(c+93,"wdata", false,-1, 31,0);
    tracep->declBus(c+94,"wstrb", false,-1, 7,0);
    tracep->declBit(c+95,"bvalid", false,-1);
    tracep->declBit(c+96,"bready", false,-1);
    tracep->declBus(c+103,"bresp", false,-1, 1,0);
    tracep->declBit(c+97,"arvalid", false,-1);
    tracep->declBit(c+98,"arready", false,-1);
    tracep->declBus(c+99,"araddr", false,-1, 31,0);
    tracep->declBit(c+100,"rvalid", false,-1);
    tracep->declBit(c+101,"rready", false,-1);
    tracep->declBus(c+102,"rdata", false,-1, 31,0);
    tracep->declBus(c+104,"rresp", false,-1, 1,0);
    tracep->declBus(c+441,"axi4_ifu_state_debug", false,-1, 1,0);
    tracep->declBus(c+105,"sram_data_out", false,-1, 31,0);
    tracep->declBit(c+106,"sram_rd_res_valid", false,-1);
    tracep->declBit(c+107,"sram_wt_res_valid", false,-1);
    tracep->declBus(c+108,"state", false,-1, 1,0);
    tracep->declBus(c+453,"IDLE", false,-1, 1,0);
    tracep->declBus(c+454,"WRITE", false,-1, 1,0);
    tracep->declBus(c+455,"READ", false,-1, 1,0);
    tracep->declBus(c+109,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+110,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+111,"wstrb_reg", false,-1, 7,0);
    tracep->declBit(c+112,"rd_req_valid", false,-1);
    tracep->declBit(c+113,"wt_req_valid", false,-1);
    tracep->pushNamePrefix("sram_inst ");
    tracep->declBus(c+456,"DELAY_CYCLES", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBit(c+112,"rd_req_valid", false,-1);
    tracep->declBus(c+109,"addr", false,-1, 31,0);
    tracep->declBus(c+105,"data_out", false,-1, 31,0);
    tracep->declBit(c+106,"rd_res_valid", false,-1);
    tracep->declBit(c+113,"wt_req_valid", false,-1);
    tracep->declBus(c+109,"waddr", false,-1, 31,0);
    tracep->declBus(c+110,"wdata", false,-1, 31,0);
    tracep->declBus(c+111,"wmask", false,-1, 7,0);
    tracep->declBit(c+107,"wt_res_valid", false,-1);
    tracep->declBus(c+114,"addr_delayed", false,-1, 31,0);
    tracep->declBit(c+115,"rd_req_valid_delayed", false,-1);
    tracep->declBus(c+116,"waddr_delayed", false,-1, 31,0);
    tracep->declBus(c+117,"wdata_delayed", false,-1, 31,0);
    tracep->declBus(c+118,"wmask_delayed", false,-1, 7,0);
    tracep->declBit(c+119,"wt_req_valid_delayed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("bus_arbiter_inst ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBit(c+75,"ifu_arvalid", false,-1);
    tracep->declBit(c+76,"ifu_arready", false,-1);
    tracep->declBus(c+409,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+77,"ifu_rvalid", false,-1);
    tracep->declBit(c+78,"ifu_rready", false,-1);
    tracep->declBus(c+79,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+80,"mem_awvalid", false,-1);
    tracep->declBit(c+120,"mem_awready", false,-1);
    tracep->declBus(c+171,"mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+80,"mem_wvalid", false,-1);
    tracep->declBit(c+81,"mem_wready", false,-1);
    tracep->declBus(c+172,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+173,"mem_wstrb", false,-1, 7,0);
    tracep->declBit(c+82,"mem_bvalid", false,-1);
    tracep->declBit(c+83,"mem_bready", false,-1);
    tracep->declBit(c+84,"mem_arvalid", false,-1);
    tracep->declBit(c+121,"mem_arready", false,-1);
    tracep->declBus(c+171,"mem_araddr", false,-1, 31,0);
    tracep->declBit(c+85,"mem_rvalid", false,-1);
    tracep->declBit(c+86,"mem_rready", false,-1);
    tracep->declBus(c+87,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+88,"awvalid_wire", false,-1);
    tracep->declBit(c+89,"awready_wire", false,-1);
    tracep->declBus(c+90,"awaddr_wire", false,-1, 31,0);
    tracep->declBit(c+91,"wvalid_wire", false,-1);
    tracep->declBit(c+92,"wready_wire", false,-1);
    tracep->declBus(c+93,"wdata_wire", false,-1, 31,0);
    tracep->declBus(c+94,"wstrb_wire", false,-1, 7,0);
    tracep->declBit(c+95,"bvalid_wire", false,-1);
    tracep->declBit(c+96,"bready_wire", false,-1);
    tracep->declBit(c+97,"arvalid_wire", false,-1);
    tracep->declBit(c+98,"arready_wire", false,-1);
    tracep->declBus(c+99,"araddr_wire", false,-1, 31,0);
    tracep->declBit(c+100,"rvalid_wire", false,-1);
    tracep->declBit(c+101,"rready_wire", false,-1);
    tracep->declBus(c+102,"rdata_wire", false,-1, 31,0);
    tracep->declBus(c+440,"arbiter_state_debug", false,-1, 1,0);
    tracep->declBus(c+453,"IDLE", false,-1, 1,0);
    tracep->declBus(c+454,"IFU_READ", false,-1, 1,0);
    tracep->declBus(c+455,"mem_WRITE", false,-1, 1,0);
    tracep->declBus(c+457,"mem_READ", false,-1, 1,0);
    tracep->declBus(c+122,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+152,"Op1", false,-1, 31,0);
    tracep->declBus(c+153,"Op2", false,-1, 31,0);
    tracep->declBus(c+157,"pc_i", false,-1, 31,0);
    tracep->declBus(c+158,"inst_i", false,-1, 31,0);
    tracep->declBus(c+159,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+160,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBus(c+426,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+162,"inst_o", false,-1, 31,0);
    tracep->declBus(c+161,"pc_o", false,-1, 31,0);
    tracep->declBus(c+163,"result", false,-1, 31,0);
    tracep->declBus(c+164,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+165,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+429,"alu_op_debug", false,-1, 4,0);
    tracep->declBus(c+430,"inst_from_EXU_to_MEM_debug", false,-1, 31,0);
    tracep->declBus(c+123,"state", false,-1, 1,0);
    tracep->declBus(c+178,"alu_op", false,-1, 4,0);
    tracep->declBus(c+179,"funct3", false,-1, 2,0);
    tracep->declBus(c+180,"funct7", false,-1, 6,0);
    tracep->declBus(c+181,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+152,"A", false,-1, 31,0);
    tracep->declBus(c+153,"B", false,-1, 31,0);
    tracep->declBus(c+178,"ALUFun", false,-1, 4,0);
    tracep->declBus(c+163,"Result", false,-1, 31,0);
    tracep->declBus(c+182,"add_result", false,-1, 31,0);
    tracep->declBus(c+183,"sub_result", false,-1, 31,0);
    tracep->declBus(c+184,"slt_result", false,-1, 31,0);
    tracep->declBus(c+185,"sltu_result", false,-1, 31,0);
    tracep->declBus(c+186,"xor_result", false,-1, 31,0);
    tracep->declBus(c+187,"or_result", false,-1, 31,0);
    tracep->declBus(c+188,"and_result", false,-1, 31,0);
    tracep->declBus(c+189,"sll_result", false,-1, 31,0);
    tracep->declBus(c+190,"srl_result", false,-1, 31,0);
    tracep->declBus(c+191,"sra_result", false,-1, 31,0);
    tracep->declBus(c+416,"op1_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu_mux ");
    tracep->declBus(c+458,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+459,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+163,"out", false,-1, 31,0);
    tracep->declBus(c+178,"key", false,-1, 4,0);
    tracep->declArray(c+192,"lut", false,-1, 406,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+458,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+459,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+163,"out", false,-1, 31,0);
    tracep->declBus(c+178,"key", false,-1, 4,0);
    tracep->declBus(c+461,"default_out", false,-1, 31,0);
    tracep->declArray(c+192,"lut", false,-1, 406,0);
    tracep->declBus(c+462,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+205+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+227+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+238,"lut_out", false,-1, 31,0);
    tracep->declBit(c+239,"hit", false,-1);
    tracep->declBus(c+463,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inst_reg_EXU ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+158,"din", false,-1, 31,0);
    tracep->declBus(c+162,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_EXU ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+157,"din", false,-1, 31,0);
    tracep->declBus(c+161,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_EXU ");
    tracep->declBus(c+459,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+466,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+160,"din", false,-1, 4,0);
    tracep->declBus(c+165,"dout", false,-1, 4,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_EXU ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+159,"din", false,-1, 31,0);
    tracep->declBus(c+164,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+410,"inst_i", false,-1, 31,0);
    tracep->declBus(c+409,"pc_i", false,-1, 31,0);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBus(c+177,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+159,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+174,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+175,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+160,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+152,"Op1", false,-1, 31,0);
    tracep->declBus(c+153,"Op2", false,-1, 31,0);
    tracep->declBus(c+157,"pc_o", false,-1, 31,0);
    tracep->declBus(c+158,"inst_o", false,-1, 31,0);
    tracep->declBus(c+159,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+73,"ID_done", false,-1);
    tracep->declBus(c+154,"jump_reg_target_o", false,-1, 31,0);
    tracep->declBus(c+155,"br_target_o", false,-1, 31,0);
    tracep->declBus(c+156,"jmp_target_o", false,-1, 31,0);
    tracep->declBus(c+151,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+438,"idu_state_debug", false,-1, 1,0);
    tracep->declBus(c+124,"state", false,-1, 1,0);
    tracep->declBit(c+240,"br_eq", false,-1);
    tracep->declBit(c+241,"br_lt", false,-1);
    tracep->declBit(c+242,"br_ltu", false,-1);
    tracep->declBus(c+243,"Op1Sel", false,-1, 1,0);
    tracep->declBus(c+244,"Op2Sel", false,-1, 1,0);
    tracep->declBus(c+160,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+245,"imm_i", false,-1, 11,0);
    tracep->declBus(c+246,"imm_s", false,-1, 11,0);
    tracep->declBus(c+247,"imm_b", false,-1, 11,0);
    tracep->declBus(c+248,"imm_u", false,-1, 19,0);
    tracep->declBus(c+249,"imm_j", false,-1, 19,0);
    tracep->declBus(c+250,"imm_i_sext", false,-1, 31,0);
    tracep->declBus(c+251,"imm_s_sext", false,-1, 31,0);
    tracep->declBus(c+252,"imm_b_sext", false,-1, 31,0);
    tracep->declBus(c+253,"imm_u_sext", false,-1, 31,0);
    tracep->declBus(c+254,"imm_j_sext", false,-1, 31,0);
    tracep->declBus(c+255,"funct3", false,-1, 2,0);
    tracep->declBus(c+256,"funct7", false,-1, 6,0);
    tracep->declBus(c+257,"opcode", false,-1, 6,0);
    tracep->declBit(c+258,"branch_taken", false,-1);
    tracep->pushNamePrefix("b_taken_mux ");
    tracep->declBus(c+467,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+468,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+456,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+258,"out", false,-1, 0,0);
    tracep->declBus(c+255,"key", false,-1, 2,0);
    tracep->declBus(c+259,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+467,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+468,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+456,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+258,"out", false,-1, 0,0);
    tracep->declBus(c+255,"key", false,-1, 2,0);
    tracep->declBus(c+469,"default_out", false,-1, 0,0);
    tracep->declBus(c+259,"lut", false,-1, 23,0);
    tracep->declBus(c+470,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+260+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+266+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+272,"lut_out", false,-1, 0,0);
    tracep->declBit(c+273,"hit", false,-1);
    tracep->declBus(c+471,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_reg_IDU ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+410,"din", false,-1, 31,0);
    tracep->declBus(c+158,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("op1_sel_mux ");
    tracep->declBus(c+472,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+472,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+152,"out", false,-1, 31,0);
    tracep->declBus(c+243,"key", false,-1, 1,0);
    tracep->declArray(c+274,"lut", false,-1, 67,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+472,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+472,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+152,"out", false,-1, 31,0);
    tracep->declBus(c+243,"key", false,-1, 1,0);
    tracep->declBus(c+461,"default_out", false,-1, 31,0);
    tracep->declArray(c+274,"lut", false,-1, 67,0);
    tracep->declBus(c+473,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+277+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+281+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+283,"lut_out", false,-1, 31,0);
    tracep->declBit(c+284,"hit", false,-1);
    tracep->declBus(c+474,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("op2_sel_mux ");
    tracep->declBus(c+470,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+472,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+153,"out", false,-1, 31,0);
    tracep->declBus(c+244,"key", false,-1, 1,0);
    tracep->declArray(c+285,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+470,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+472,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+153,"out", false,-1, 31,0);
    tracep->declBus(c+244,"key", false,-1, 1,0);
    tracep->declBus(c+461,"default_out", false,-1, 31,0);
    tracep->declArray(c+285,"lut", false,-1, 135,0);
    tracep->declBus(c+473,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+290+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+298+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+302,"lut_out", false,-1, 31,0);
    tracep->declBit(c+303,"hit", false,-1);
    tracep->declBus(c+475,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_IDU ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+409,"din", false,-1, 31,0);
    tracep->declBus(c+157,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+151,"pc_sel", false,-1, 2,0);
    tracep->declBus(c+154,"jump_reg_target", false,-1, 31,0);
    tracep->declBus(c+155,"br_target", false,-1, 31,0);
    tracep->declBus(c+156,"jmp_target", false,-1, 31,0);
    tracep->declBit(c+394,"pc_wen", false,-1);
    tracep->declBus(c+409,"pc_o", false,-1, 31,0);
    tracep->declBus(c+410,"inst_o", false,-1, 31,0);
    tracep->declBit(c+72,"inst_valid", false,-1);
    tracep->declBit(c+465,"idu_ready", false,-1);
    tracep->declBit(c+75,"arvalid", false,-1);
    tracep->declBit(c+76,"arready", false,-1);
    tracep->declBus(c+409,"araddr", false,-1, 31,0);
    tracep->declBit(c+77,"rvalid", false,-1);
    tracep->declBit(c+78,"rready", false,-1);
    tracep->declBus(c+79,"rdata", false,-1, 31,0);
    tracep->declBus(c+434,"state_debug", false,-1, 2,0);
    tracep->declBit(c+435,"rd_res_valid_debug", false,-1);
    tracep->declBus(c+125,"state", false,-1, 2,0);
    tracep->declBus(c+476,"IDLE", false,-1, 2,0);
    tracep->declBus(c+477,"FETCH_REQ", false,-1, 2,0);
    tracep->declBus(c+478,"FETCH_WAIT", false,-1, 2,0);
    tracep->declBus(c+479,"FETCH_DONE", false,-1, 2,0);
    tracep->declBus(c+304,"pc", false,-1, 31,0);
    tracep->declBus(c+305,"pc_next", false,-1, 31,0);
    tracep->declBus(c+306,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+480,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+461,"exception", false,-1, 31,0);
    tracep->declBus(c+126,"if_inst_buffer", false,-1, 31,0);
    tracep->pushNamePrefix("mux_pc_sel ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+468,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"out", false,-1, 31,0);
    tracep->declBus(c+151,"key", false,-1, 2,0);
    tracep->declArray(c+307,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+468,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+305,"out", false,-1, 31,0);
    tracep->declBus(c+151,"key", false,-1, 2,0);
    tracep->declBus(c+461,"default_out", false,-1, 31,0);
    tracep->declArray(c+307,"lut", false,-1, 174,0);
    tracep->declBus(c+481,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+313+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+323+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+328,"lut_out", false,-1, 31,0);
    tracep->declBit(c+329,"hit", false,-1);
    tracep->declBus(c+482,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+305,"din", false,-1, 31,0);
    tracep->declBus(c+304,"dout", false,-1, 31,0);
    tracep->declBit(c+394,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+161,"pc_i", false,-1, 31,0);
    tracep->declBus(c+162,"inst_i", false,-1, 31,0);
    tracep->declBus(c+163,"result_i", false,-1, 31,0);
    tracep->declBus(c+426,"dmem_addr_i", false,-1, 31,0);
    tracep->declBus(c+164,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+165,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+74,"EXU_done", false,-1);
    tracep->declBus(c+169,"inst_o", false,-1, 31,0);
    tracep->declBus(c+168,"pc_o", false,-1, 31,0);
    tracep->declBus(c+166,"result_o", false,-1, 31,0);
    tracep->declBus(c+397,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+167,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+431,"mem_access_done", false,-1);
    tracep->declBit(c+425,"mem_active", false,-1);
    tracep->declBit(c+80,"awvalid", false,-1);
    tracep->declBus(c+171,"awaddr", false,-1, 31,0);
    tracep->declBit(c+80,"wvalid", false,-1);
    tracep->declBit(c+81,"wready", false,-1);
    tracep->declBus(c+172,"wdata", false,-1, 31,0);
    tracep->declBus(c+173,"wstrb", false,-1, 7,0);
    tracep->declBit(c+82,"bvalid", false,-1);
    tracep->declBit(c+83,"bready", false,-1);
    tracep->declBit(c+84,"arvalid", false,-1);
    tracep->declBus(c+171,"araddr", false,-1, 31,0);
    tracep->declBit(c+85,"rvalid", false,-1);
    tracep->declBit(c+86,"rready", false,-1);
    tracep->declBus(c+87,"rdata", false,-1, 31,0);
    tracep->declBit(c+433,"wt_res_valid_debug", false,-1);
    tracep->declBus(c+436,"mem_ctl_state_debug", false,-1, 1,0);
    tracep->declBus(c+437,"axi4_mem_state_debug", false,-1, 1,0);
    tracep->declBus(c+127,"state", false,-1, 1,0);
    tracep->declBus(c+87,"dmem_rdata_raw", false,-1, 31,0);
    tracep->declBus(c+330,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+172,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+173,"wmask", false,-1, 7,0);
    tracep->declBus(c+331,"ctl_mem_access", false,-1, 2,0);
    tracep->declBit(c+128,"mem_en", false,-1);
    tracep->declBit(c+129,"mem_wen", false,-1);
    tracep->declBus(c+171,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+330,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+433,"wt_res_valid", false,-1);
    tracep->declBit(c+80,"wt_req_valid", false,-1);
    tracep->declBus(c+332,"funct3", false,-1, 2,0);
    tracep->declBus(c+333,"funct7", false,-1, 6,0);
    tracep->declBus(c+334,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("alignment_network ");
    tracep->declBus(c+87,"data_in", false,-1, 31,0);
    tracep->declBus(c+171,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+331,"control", false,-1, 2,0);
    tracep->declBus(c+397,"data_out", false,-1, 31,0);
    tracep->declBus(c+335,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+398,"shifted_data", false,-1, 31,0);
    tracep->declBus(c+399,"zero_ext_byte", false,-1, 31,0);
    tracep->declBus(c+400,"zero_ext_half", false,-1, 31,0);
    tracep->declBus(c+401,"sign_ext_byte", false,-1, 31,0);
    tracep->declBus(c+402,"sign_ext_half", false,-1, 31,0);
    tracep->pushNamePrefix("mem_mux ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+468,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+397,"out", false,-1, 31,0);
    tracep->declBus(c+331,"key", false,-1, 2,0);
    tracep->declArray(c+130,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+468,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+397,"out", false,-1, 31,0);
    tracep->declBus(c+331,"key", false,-1, 2,0);
    tracep->declBus(c+461,"default_out", false,-1, 31,0);
    tracep->declArray(c+130,"lut", false,-1, 174,0);
    tracep->declBus(c+481,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+136+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+146+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+403,"lut_out", false,-1, 31,0);
    tracep->declBit(c+336,"hit", false,-1);
    tracep->declBus(c+482,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmem_addr_reg_MEM ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+426,"din", false,-1, 31,0);
    tracep->declBus(c+171,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_MEM ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+162,"din", false,-1, 31,0);
    tracep->declBus(c+169,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_acces_ctl_mux ");
    tracep->declBus(c+483,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+484,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+468,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+331,"out", false,-1, 2,0);
    tracep->declBus(c+337,"key", false,-1, 9,0);
    tracep->declArray(c+485,"lut", false,-1, 103,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+483,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+484,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+468,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+331,"out", false,-1, 2,0);
    tracep->declBus(c+337,"key", false,-1, 9,0);
    tracep->declBus(c+476,"default_out", false,-1, 2,0);
    tracep->declArray(c+485,"lut", false,-1, 103,0);
    tracep->declBus(c+489,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+42+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+50+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+338,"lut_out", false,-1, 2,0);
    tracep->declBit(c+339,"hit", false,-1);
    tracep->declBus(c+490,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_MEM ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+161,"din", false,-1, 31,0);
    tracep->declBus(c+168,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_MEM ");
    tracep->declBus(c+459,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+466,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+165,"din", false,-1, 4,0);
    tracep->declBus(c+167,"dout", false,-1, 4,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_MEM ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+163,"din", false,-1, 31,0);
    tracep->declBus(c+166,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_MEM ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+164,"din", false,-1, 31,0);
    tracep->declBus(c+330,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wmask_gen ");
    tracep->declBus(c+331,"control", false,-1, 2,0);
    tracep->declBus(c+171,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+330,"dmem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+172,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+173,"wmask", false,-1, 7,0);
    tracep->declBus(c+335,"shift_amount", false,-1, 1,0);
    tracep->declBus(c+340,"base_mask", false,-1, 7,0);
    tracep->declBus(c+173,"shifted_mask", false,-1, 7,0);
    tracep->pushNamePrefix("mem_mux_write ");
    tracep->declBus(c+468,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+468,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+483,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+340,"out", false,-1, 7,0);
    tracep->declBus(c+331,"key", false,-1, 2,0);
    tracep->declQuad(c+491,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+468,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+468,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+483,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+340,"out", false,-1, 7,0);
    tracep->declBus(c+331,"key", false,-1, 2,0);
    tracep->declBus(c+493,"default_out", false,-1, 7,0);
    tracep->declQuad(c+491,"lut", false,-1, 32,0);
    tracep->declBus(c+458,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+58+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+61+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+64+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+341,"lut_out", false,-1, 7,0);
    tracep->declBit(c+342,"hit", false,-1);
    tracep->declBus(c+494,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+459,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBus(c+393,"wdata", false,-1, 31,0);
    tracep->declBus(c+176,"waddr", false,-1, 4,0);
    tracep->declBit(c+396,"wen", false,-1);
    tracep->declBus(c+174,"raddr1", false,-1, 4,0);
    tracep->declBus(c+175,"raddr2", false,-1, 4,0);
    tracep->declBus(c+177,"rdata1", false,-1, 31,0);
    tracep->declBus(c+159,"rdata2", false,-1, 31,0);
    tracep->declBus(c+412,"x2_debug", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+343+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+67,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+393,"reg_write_data_delayed", false,-1, 31,0);
    tracep->declBus(c+176,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+396,"rf_we", false,-1);
    tracep->declBus(c+168,"pc_i", false,-1, 31,0);
    tracep->declBus(c+169,"inst_i", false,-1, 31,0);
    tracep->declBus(c+166,"result_i", false,-1, 31,0);
    tracep->declBus(c+397,"dmem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+167,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+431,"mem_access_done", false,-1);
    tracep->declBit(c+394,"pc_wen", false,-1);
    tracep->declBus(c+410,"inst_from_IFU", false,-1, 31,0);
    tracep->declBit(c+419,"wbu_active", false,-1);
    tracep->declBus(c+170,"inst_o", false,-1, 31,0);
    tracep->declBus(c+421,"pc_plus4_debug", false,-1, 31,0);
    tracep->declBus(c+422,"wb_sel_debug", false,-1, 1,0);
    tracep->declBus(c+423,"opcode_debug", false,-1, 6,0);
    tracep->declBus(c+428,"result_from_WB_debug", false,-1, 31,0);
    tracep->declBus(c+395,"state", false,-1, 1,0);
    tracep->declBus(c+421,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+375,"pc_o", false,-1, 31,0);
    tracep->declBus(c+376,"result_o", false,-1, 31,0);
    tracep->declBus(c+495,"dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+377,"dmem_rdata_o", false,-1, 31,0);
    tracep->declBus(c+404,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+378,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+379,"funct3", false,-1, 2,0);
    tracep->declBus(c+380,"funct7", false,-1, 6,0);
    tracep->declBus(c+423,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("dmem_rdata_reg_WBU ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+397,"din", false,-1, 31,0);
    tracep->declBus(c+377,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_reg_WBU ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+169,"din", false,-1, 31,0);
    tracep->declBus(c+170,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_WBU ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+168,"din", false,-1, 31,0);
    tracep->declBus(c+375,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_addr_reg_WBU ");
    tracep->declBus(c+459,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+466,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+167,"din", false,-1, 4,0);
    tracep->declBus(c+176,"dout", false,-1, 4,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg_WBU ");
    tracep->declBus(c+452,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+464,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+166,"din", false,-1, 31,0);
    tracep->declBus(c+376,"dout", false,-1, 31,0);
    tracep->declBit(c+465,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_mux ");
    tracep->declBus(c+470,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+472,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+404,"out", false,-1, 31,0);
    tracep->declBus(c+378,"key", false,-1, 1,0);
    tracep->declBus(c+461,"default_out", false,-1, 31,0);
    tracep->declArray(c+442,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+470,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+472,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+452,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+456,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+404,"out", false,-1, 31,0);
    tracep->declBus(c+378,"key", false,-1, 1,0);
    tracep->declBus(c+461,"default_out", false,-1, 31,0);
    tracep->declArray(c+442,"lut", false,-1, 135,0);
    tracep->declBus(c+473,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+381+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+68+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+389+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+405,"lut_out", false,-1, 31,0);
    tracep->declBit(c+406,"hit", false,-1);
    tracep->declBus(c+475,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_init_top(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_init_top\n"); );
    // Body
    Vysyx_24120009_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24120009_core___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24120009_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_register(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_24120009_core___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_24120009_core___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_24120009_core___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_full_sub_0(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_24120009_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120009_core___024root*>(voidSelf);
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_24120009_core___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_24120009_core___024root__trace_full_sub_0(Vysyx_24120009_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120009_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120009_core___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<6>/*191:0*/ __Vtemp_hf0c5ea7d__0;
    VlWide<13>/*415:0*/ __Vtemp_hd74bf4d1__0;
    VlWide<3>/*95:0*/ __Vtemp_h3e4b9c5b__0;
    VlWide<5>/*159:0*/ __Vtemp_h4b1a9c47__0;
    VlWide<6>/*191:0*/ __Vtemp_h47858337__0;
    VlWide<5>/*159:0*/ __Vtemp_h650a5f8e__0;
    VlWide<4>/*127:0*/ __Vtemp_ha516852c__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[0]),5);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[1]),5);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[2]),5);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[3]),5);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[4]),5);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[5]),5);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[6]),5);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[7]),5);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[8]),5);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[9]),5);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__key_list[10]),5);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+21,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+28,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+30,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+31,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+32,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__key_list[4]),3);
    bufp->fullSData(oldp+34,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+35,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+36,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+37,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[3]),13);
    bufp->fullSData(oldp+38,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[4]),13);
    bufp->fullSData(oldp+39,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[5]),13);
    bufp->fullSData(oldp+40,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[6]),13);
    bufp->fullSData(oldp+41,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__pair_list[7]),13);
    bufp->fullSData(oldp+42,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[0]),10);
    bufp->fullSData(oldp+43,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[1]),10);
    bufp->fullSData(oldp+44,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[2]),10);
    bufp->fullSData(oldp+45,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[3]),10);
    bufp->fullSData(oldp+46,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[4]),10);
    bufp->fullSData(oldp+47,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[5]),10);
    bufp->fullSData(oldp+48,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[6]),10);
    bufp->fullSData(oldp+49,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__key_list[7]),10);
    bufp->fullCData(oldp+50,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+51,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+52,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+53,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+54,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+56,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+57,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__data_list[7]),3);
    bufp->fullSData(oldp+58,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+59,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+60,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullCData(oldp+61,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+62,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+63,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+65,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[1]),8);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__data_list[2]),8);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+68,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[0]),2);
    bufp->fullCData(oldp+69,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[1]),2);
    bufp->fullCData(oldp+70,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[2]),2);
    bufp->fullCData(oldp+71,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__key_list[3]),2);
    bufp->fullBit(oldp+72,(vlSelf->ysyx_24120009_core__DOT__inst_valid));
    bufp->fullBit(oldp+73,((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state))));
    bufp->fullBit(oldp+74,((2U == (IData)(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state))));
    bufp->fullBit(oldp+75,(vlSelf->ysyx_24120009_core__DOT__ifu_arvalid));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_24120009_core__DOT__ifu_arready));
    bufp->fullBit(oldp+77,(vlSelf->ysyx_24120009_core__DOT__ifu_rvalid));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_24120009_core__DOT__ifu_rready));
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24120009_core__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+80,(vlSelf->ysyx_24120009_core__DOT__mem_awvalid));
    bufp->fullBit(oldp+81,(vlSelf->ysyx_24120009_core__DOT__mem_wready));
    bufp->fullBit(oldp+82,(vlSelf->ysyx_24120009_core__DOT__mem_bvalid));
    bufp->fullBit(oldp+83,(vlSelf->ysyx_24120009_core__DOT__mem_bready));
    bufp->fullBit(oldp+84,(vlSelf->ysyx_24120009_core__DOT__mem_arvalid));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_24120009_core__DOT__mem_rvalid));
    bufp->fullBit(oldp+86,(vlSelf->ysyx_24120009_core__DOT__mem_rready));
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24120009_core__DOT__mem_rdata),32);
    bufp->fullBit(oldp+88,(vlSelf->ysyx_24120009_core__DOT__awvalid_wire));
    bufp->fullBit(oldp+89,(vlSelf->ysyx_24120009_core__DOT__awready_wire));
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24120009_core__DOT__awaddr_wire),32);
    bufp->fullBit(oldp+91,(vlSelf->ysyx_24120009_core__DOT__wvalid_wire));
    bufp->fullBit(oldp+92,(vlSelf->ysyx_24120009_core__DOT__wready_wire));
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24120009_core__DOT__wdata_wire),32);
    bufp->fullCData(oldp+94,(vlSelf->ysyx_24120009_core__DOT__wstrb_wire),8);
    bufp->fullBit(oldp+95,(vlSelf->ysyx_24120009_core__DOT__bvalid_wire));
    bufp->fullBit(oldp+96,(vlSelf->ysyx_24120009_core__DOT__bready_wire));
    bufp->fullBit(oldp+97,(vlSelf->ysyx_24120009_core__DOT__arvalid_wire));
    bufp->fullBit(oldp+98,(vlSelf->ysyx_24120009_core__DOT__arready_wire));
    bufp->fullIData(oldp+99,(vlSelf->ysyx_24120009_core__DOT__araddr_wire),32);
    bufp->fullBit(oldp+100,(vlSelf->ysyx_24120009_core__DOT__rvalid_wire));
    bufp->fullBit(oldp+101,(vlSelf->ysyx_24120009_core__DOT__rready_wire));
    bufp->fullIData(oldp+102,(vlSelf->ysyx_24120009_core__DOT__rdata_wire),32);
    bufp->fullCData(oldp+103,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__bresp),2);
    bufp->fullCData(oldp+104,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__rresp),2);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_data_out),32);
    bufp->fullBit(oldp+106,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_rd_res_valid));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_wt_res_valid));
    bufp->fullCData(oldp+108,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__state),2);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__addr_reg),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__wdata_reg),32);
    bufp->fullCData(oldp+111,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__wstrb_reg),8);
    bufp->fullBit(oldp+112,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__rd_req_valid));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__wt_req_valid));
    bufp->fullIData(oldp+114,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__addr_delayed),32);
    bufp->fullBit(oldp+115,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__rd_req_valid_delayed));
    bufp->fullIData(oldp+116,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__waddr_delayed),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__wdata_delayed),32);
    bufp->fullCData(oldp+118,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__wmask_delayed),8);
    bufp->fullBit(oldp+119,(vlSelf->ysyx_24120009_core__DOT__axi4_lite_wrapper__DOT__sram_inst__DOT__wt_req_valid_delayed));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_24120009_core__DOT__bus_arbiter_inst__DOT__mem_awready));
    bufp->fullBit(oldp+121,(vlSelf->ysyx_24120009_core__DOT__bus_arbiter_inst__DOT__mem_arready));
    bufp->fullCData(oldp+122,(vlSelf->ysyx_24120009_core__DOT__bus_arbiter_inst__DOT__state),2);
    bufp->fullCData(oldp+123,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__state),2);
    bufp->fullCData(oldp+124,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__state),2);
    bufp->fullCData(oldp+125,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__state),3);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__if_inst_buffer),32);
    bufp->fullCData(oldp+127,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__state),2);
    bufp->fullBit(oldp+128,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_en));
    bufp->fullBit(oldp+129,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_wen));
    __Vtemp_hf0c5ea7d__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                                           >> 0xfU)))) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))))));
    __Vtemp_hf0c5ea7d__0[1U] = ((0xfffffff8U & (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                                >> 7U)))) 
                                                 << 0xbU) 
                                                | (0x7f8U 
                                                   & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                      << 3U)))) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                                               >> 0xfU)))) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))))) 
                                           >> 0x20U)));
    __Vtemp_hf0c5ea7d__0[2U] = ((vlSelf->ysyx_24120009_core__DOT__mem_rdata 
                                 << 6U) | (7U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                                >> 7U)))) 
                                                 >> 0x15U)));
    __Vtemp_hf0c5ea7d__0[3U] = (0x80U | ((0x1fffe00U 
                                          & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                             << 9U)) 
                                         | (vlSelf->ysyx_24120009_core__DOT__mem_rdata 
                                            >> 0x1aU)));
    __Vtemp_hf0c5ea7d__0[4U] = (0xa00U | (0xff000U 
                                          & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                             << 0xcU)));
    __Vtemp_hf0c5ea7d__0[5U] = 0x4000U;
    bufp->fullWData(oldp+130,(__Vtemp_hf0c5ea7d__0),175);
    bufp->fullQData(oldp+136,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+138,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+140,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+142,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+144,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullCData(oldp+151,(vlSelf->ysyx_24120009_core__DOT__pc_sel),3);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_24120009_core__DOT__Op1),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_24120009_core__DOT__Op2),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_24120009_core__DOT__jump_reg_target),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_24120009_core__DOT__br_target),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_24120009_core__DOT__jmp_target),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_24120009_core__DOT__pc_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU),32);
    bufp->fullCData(oldp+160,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 7U))),5);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_24120009_core__DOT__pc_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_24120009_core__DOT__result_from_EXU_to_MEM),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_24120009_core__DOT__rdata2_from_EXU_to_MEM),32);
    bufp->fullCData(oldp+165,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_EXU_to_MEM),5);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_24120009_core__DOT__result_from_MEM_to_WBU),32);
    bufp->fullCData(oldp+167,(vlSelf->ysyx_24120009_core__DOT__rd_addr_from_MEM_to_WBU),5);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_24120009_core__DOT__pc_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o),32);
    bufp->fullIData(oldp+172,(((0x1fU >= (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                   << 3U)))
                                ? (vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o 
                                   << (0x18U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o 
                                                << 3U)))
                                : 0U)),32);
    bufp->fullCData(oldp+173,((0xffU & ((IData)(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask) 
                                        << (3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)))),8);
    bufp->fullCData(oldp+174,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+175,((0x1fU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+176,(vlSelf->ysyx_24120009_core__DOT__waddr),5);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_24120009_core__DOT__rdata1),32);
    bufp->fullCData(oldp+178,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_op),5);
    bufp->fullCData(oldp+179,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+180,((vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+181,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_EXU_to_MEM)),7);
    bufp->fullIData(oldp+182,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               + vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+183,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               - vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+184,(vlSelf->__VdfgTmp_h9d12977d__0),32);
    bufp->fullIData(oldp+185,(vlSelf->__VdfgTmp_h9d0653ad__0),32);
    bufp->fullIData(oldp+186,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               ^ vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+187,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               | vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+188,((vlSelf->ysyx_24120009_core__DOT__Op1 
                               & vlSelf->ysyx_24120009_core__DOT__Op2)),32);
    bufp->fullIData(oldp+189,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   << (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+190,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                   >> (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : 0U)),32);
    bufp->fullIData(oldp+191,(((0x1fU >= (0x1fU & vlSelf->ysyx_24120009_core__DOT__Op2))
                                ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                : (- (vlSelf->ysyx_24120009_core__DOT__Op1 
                                      >> 0x1fU)))),32);
    __Vtemp_hd74bf4d1__0[0U] = (IData)((0xa00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__Op1))));
    __Vtemp_hd74bf4d1__0[1U] = ((((0x1fU >= (0x1fU 
                                             & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, 
                                                    (0x1fU 
                                                     & vlSelf->ysyx_24120009_core__DOT__Op2))
                                   : (- (vlSelf->ysyx_24120009_core__DOT__Op1 
                                         >> 0x1fU))) 
                                 << 5U) | (IData)((
                                                   (0xa00000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__Op1))) 
                                                   >> 0x20U)));
    __Vtemp_hd74bf4d1__0[2U] = (0x120U | ((((0x1fU 
                                             >= (0x1fU 
                                                 & vlSelf->ysyx_24120009_core__DOT__Op2))
                                             ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->ysyx_24120009_core__DOT__Op2))
                                             : 0U) 
                                           << 0xaU) 
                                          | (((0x1fU 
                                               >= (0x1fU 
                                                   & vlSelf->ysyx_24120009_core__DOT__Op2))
                                               ? VL_SHIFTRS_III(32,32,32, vlSelf->ysyx_24120009_core__DOT__Op1, 
                                                                (0x1fU 
                                                                 & vlSelf->ysyx_24120009_core__DOT__Op2))
                                               : (- 
                                                  (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                   >> 0x1fU))) 
                                             >> 0x1bU)));
    __Vtemp_hd74bf4d1__0[3U] = (0x2000U | ((((0x1fU 
                                              >= (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                              : 0U) 
                                            << 0xfU) 
                                           | (((0x1fU 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                ? (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                : 0U) 
                                              >> 0x16U)));
    __Vtemp_hd74bf4d1__0[4U] = (0x38000U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                              & vlSelf->ysyx_24120009_core__DOT__Op2) 
                                             << 0x14U) 
                                            | (((0x1fU 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                 ? 
                                                (vlSelf->ysyx_24120009_core__DOT__Op1 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24120009_core__DOT__Op2))
                                                 : 0U) 
                                               >> 0x11U)));
    __Vtemp_hd74bf4d1__0[5U] = (0x600000U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                               | vlSelf->ysyx_24120009_core__DOT__Op2) 
                                              << 0x19U) 
                                             | ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                 & vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                >> 0xcU)));
    __Vtemp_hd74bf4d1__0[6U] = (0xa000000U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                ^ vlSelf->ysyx_24120009_core__DOT__Op2) 
                                               << 0x1eU) 
                                              | ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                  | vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                 >> 7U)));
    __Vtemp_hd74bf4d1__0[7U] = ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                 ^ vlSelf->ysyx_24120009_core__DOT__Op2) 
                                >> 2U);
    __Vtemp_hd74bf4d1__0[8U] = (1U | ((IData)(vlSelf->__VdfgTmp_h9d0653ad__0) 
                                      << 3U));
    __Vtemp_hd74bf4d1__0[9U] = (0x18U | (((IData)(vlSelf->__VdfgTmp_h9d12977d__0) 
                                          << 8U) | 
                                         ((IData)(vlSelf->__VdfgTmp_h9d0653ad__0) 
                                          >> 0x1dU)));
    __Vtemp_hd74bf4d1__0[0xaU] = (0x200U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                              - vlSelf->ysyx_24120009_core__DOT__Op2) 
                                             << 0xdU) 
                                            | ((IData)(vlSelf->__VdfgTmp_h9d12977d__0) 
                                               >> 0x18U)));
    __Vtemp_hd74bf4d1__0[0xbU] = (0x2000U | (((vlSelf->ysyx_24120009_core__DOT__Op1 
                                               + vlSelf->ysyx_24120009_core__DOT__Op2) 
                                              << 0x12U) 
                                             | ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                                 - vlSelf->ysyx_24120009_core__DOT__Op2) 
                                                >> 0x13U)));
    __Vtemp_hd74bf4d1__0[0xcU] = ((vlSelf->ysyx_24120009_core__DOT__Op1 
                                   + vlSelf->ysyx_24120009_core__DOT__Op2) 
                                  >> 0xeU);
    bufp->fullWData(oldp+192,(__Vtemp_hd74bf4d1__0),407);
    bufp->fullQData(oldp+205,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+207,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+209,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+211,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+213,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+215,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+217,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+219,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+221,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[8]),37);
    bufp->fullQData(oldp+223,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[9]),37);
    bufp->fullQData(oldp+225,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__pair_list[10]),37);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+236,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+239,(vlSelf->ysyx_24120009_core__DOT__exu__DOT__alu_instance__DOT__alu_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+240,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq));
    bufp->fullBit(oldp+241,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt));
    bufp->fullBit(oldp+242,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu));
    bufp->fullCData(oldp+243,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op1Sel),2);
    bufp->fullCData(oldp+244,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__Op2Sel),2);
    bufp->fullSData(oldp+245,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+246,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+247,(((0x800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+248,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+249,(((0x80000U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+250,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext),32);
    bufp->fullIData(oldp+251,((((- (IData)((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_b_sext),32);
    bufp->fullIData(oldp+253,((0xfffff000U & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),32);
    bufp->fullIData(oldp+254,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_j_sext),32);
    bufp->fullCData(oldp+255,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+256,((vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+257,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)),7);
    bufp->fullBit(oldp+258,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__branch_taken));
    bufp->fullIData(oldp+259,((0x28aceU | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq) 
                                            << 0x14U) 
                                           | ((0x10000U 
                                               & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_eq)) 
                                                  << 0x10U)) 
                                              | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt) 
                                                  << 0xcU) 
                                                 | ((0x100U 
                                                     & ((~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_lt)) 
                                                        << 8U)) 
                                                    | (((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu) 
                                                        << 4U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__br_ltu)))))))))),24);
    bufp->fullCData(oldp+260,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+261,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+262,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+263,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+264,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+265,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullBit(oldp+266,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+267,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+268,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+269,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+270,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+271,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+272,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+273,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__b_taken_mux__DOT__i0__DOT__hit));
    __Vtemp_h3e4b9c5b__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)))));
    __Vtemp_h3e4b9c5b__0[1U] = ((vlSelf->ysyx_24120009_core__DOT__rdata1 
                                 << 2U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU)))) 
                                                   >> 0x20U)));
    __Vtemp_h3e4b9c5b__0[2U] = (vlSelf->ysyx_24120009_core__DOT__rdata1 
                                >> 0x1eU);
    bufp->fullWData(oldp+274,(__Vtemp_h3e4b9c5b__0),68);
    bufp->fullQData(oldp+277,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+279,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullIData(oldp+281,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+282,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+283,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+284,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op1_sel_mux__DOT__i0__DOT__hit));
    __Vtemp_h4b1a9c47__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU))));
    __Vtemp_h4b1a9c47__0[1U] = ((0xfffffffcU & (((- (IData)(
                                                            (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                             >> 0x1fU))) 
                                                 << 0xeU) 
                                                | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s) 
                                                   << 2U))) 
                                | (IData)(((0x300000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__rdata2_from_IDU_to_EXU))) 
                                           >> 0x20U)));
    __Vtemp_h4b1a9c47__0[2U] = (8U | ((vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
                                       << 4U) | (3U 
                                                 & ((3U 
                                                     & ((- (IData)(
                                                                   (vlSelf->ysyx_24120009_core__DOT__inst_from_IDU_to_EXU 
                                                                    >> 0x1fU))) 
                                                        >> 0x12U)) 
                                                    | ((IData)(vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_s) 
                                                       >> 0x1eU)))));
    __Vtemp_h4b1a9c47__0[3U] = (0x10U | ((vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
                                          << 6U) | 
                                         (vlSelf->ysyx_24120009_core__DOT__idu__DOT__imm_i_sext 
                                          >> 0x1cU)));
    __Vtemp_h4b1a9c47__0[4U] = (vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc 
                                >> 0x1aU);
    bufp->fullWData(oldp+285,(__Vtemp_h4b1a9c47__0),136);
    bufp->fullQData(oldp+290,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+292,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+294,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+296,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+303,(vlSelf->ysyx_24120009_core__DOT__idu__DOT__op2_sel_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+304,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc_next),32);
    bufp->fullIData(oldp+306,(((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc)),32);
    __Vtemp_h47858337__0[0U] = 0U;
    __Vtemp_h47858337__0[1U] = (4U | (vlSelf->ysyx_24120009_core__DOT__jmp_target 
                                      << 3U));
    __Vtemp_h47858337__0[2U] = (0x18U | ((vlSelf->ysyx_24120009_core__DOT__br_target 
                                          << 6U) | 
                                         (vlSelf->ysyx_24120009_core__DOT__jmp_target 
                                          >> 0x1dU)));
    __Vtemp_h47858337__0[3U] = (0x80U | ((vlSelf->ysyx_24120009_core__DOT__jump_reg_target 
                                          << 9U) | 
                                         (vlSelf->ysyx_24120009_core__DOT__br_target 
                                          >> 0x1aU)));
    __Vtemp_h47858337__0[4U] = (0x200U | ((((IData)(4U) 
                                            + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc) 
                                           << 0xcU) 
                                          | (vlSelf->ysyx_24120009_core__DOT__jump_reg_target 
                                             >> 0x17U)));
    __Vtemp_h47858337__0[5U] = (((IData)(4U) + vlSelf->ysyx_24120009_core__DOT__ifu__DOT__pc) 
                                >> 0x14U);
    bufp->fullWData(oldp+307,(__Vtemp_h47858337__0),175);
    bufp->fullQData(oldp+313,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+315,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+317,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+319,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+321,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+323,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+329,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__mux_pc_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+330,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__rs2_data_o),32);
    bufp->fullCData(oldp+331,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__ctl_mem_access),3);
    bufp->fullCData(oldp+332,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+333,((vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+334,((0x7fU & vlSelf->ysyx_24120009_core__DOT__inst_from_MEM_to_WBU)),7);
    bufp->fullCData(oldp+335,((3U & vlSelf->ysyx_24120009_core__DOT__mem__DOT__dmem_addr_o)),2);
    bufp->fullBit(oldp+336,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+337,(vlSelf->ysyx_24120009_core__DOT__mem__DOT____Vcellinp__mem_acces_ctl_mux__key),10);
    bufp->fullCData(oldp+338,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+339,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__mem_acces_ctl_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+340,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__base_mask),8);
    bufp->fullCData(oldp+341,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+342,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__wmask_gen__DOT__mem_mux_write__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+343,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+349,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+350,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+351,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+352,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+353,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+354,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+360,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+363,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+364,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+365,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+370,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+371,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyx_24120009_core__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__pc_o),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o),32);
    bufp->fullCData(oldp+378,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_sel),2);
    bufp->fullCData(oldp+379,((7U & (vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+380,((vlSelf->ysyx_24120009_core__DOT__inst_from_WBU_to_MEM 
                               >> 0x19U)),7);
    bufp->fullQData(oldp+381,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+383,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+385,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+387,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+389,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyx_24120009_core__DOT__reg_write_data),32);
    bufp->fullBit(oldp+394,(vlSelf->ysyx_24120009_core__DOT__pc_wen));
    bufp->fullCData(oldp+395,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__state),2);
    bufp->fullBit(oldp+396,(vlSelf->ysyx_24120009_core__DOT__rf_we));
    bufp->fullIData(oldp+397,(vlSelf->ysyx_24120009_core__DOT__dmem_rdata_from_MEM_to_WBU),32);
    bufp->fullIData(oldp+398,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data),32);
    bufp->fullIData(oldp+399,((0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+400,((0xffffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data)),32);
    bufp->fullIData(oldp+401,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+402,((((- (IData)((1U & (vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__shifted_data))),32);
    bufp->fullIData(oldp+403,(vlSelf->ysyx_24120009_core__DOT__mem__DOT__alignment_network__DOT__mem_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+404,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__reg_write_data),32);
    bufp->fullIData(oldp+405,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+406,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__wb_mux__DOT__i1__DOT__hit));
    bufp->fullBit(oldp+407,(vlSelf->clk));
    bufp->fullBit(oldp+408,(vlSelf->rst));
    bufp->fullIData(oldp+409,(vlSelf->pc_debug),32);
    bufp->fullIData(oldp+410,(vlSelf->inst_debug),32);
    bufp->fullIData(oldp+411,(vlSelf->reg_write_data_debug),32);
    bufp->fullIData(oldp+412,(vlSelf->x2_debug),32);
    bufp->fullCData(oldp+413,(vlSelf->waddr_debug),5);
    bufp->fullBit(oldp+414,(vlSelf->mem_wen_debug));
    bufp->fullBit(oldp+415,(vlSelf->mem_en_debug));
    bufp->fullIData(oldp+416,(vlSelf->Op1_debug),32);
    bufp->fullIData(oldp+417,(vlSelf->Op2_debug),32);
    bufp->fullBit(oldp+418,(vlSelf->rf_we_debug));
    bufp->fullBit(oldp+419,(vlSelf->wbu_active_debug));
    bufp->fullIData(oldp+420,(vlSelf->imem_addr_debug),32);
    bufp->fullIData(oldp+421,(vlSelf->pc_plus4_debug),32);
    bufp->fullCData(oldp+422,(vlSelf->wb_sel_debug),2);
    bufp->fullCData(oldp+423,(vlSelf->opcode_debug),7);
    bufp->fullBit(oldp+424,(vlSelf->pc_wen_debug));
    bufp->fullBit(oldp+425,(vlSelf->mem_active_debug));
    bufp->fullIData(oldp+426,(vlSelf->result_from_EXU_to_MEM_debug),32);
    bufp->fullIData(oldp+427,(vlSelf->result_from_MEM_to_WBU_debug),32);
    bufp->fullIData(oldp+428,(vlSelf->result_from_WB_debug),32);
    bufp->fullCData(oldp+429,(vlSelf->alu_op_debug),5);
    bufp->fullIData(oldp+430,(vlSelf->inst_from_EXU_to_MEM_debug),32);
    bufp->fullBit(oldp+431,(vlSelf->mem_access_done_debug));
    bufp->fullIData(oldp+432,(vlSelf->dmem_rdata_from_MEM_to_WBU_debug),32);
    bufp->fullBit(oldp+433,(vlSelf->wt_res_valid_debug));
    bufp->fullCData(oldp+434,(vlSelf->ifu_state_debug),3);
    bufp->fullBit(oldp+435,(vlSelf->rd_res_valid_debug));
    bufp->fullCData(oldp+436,(vlSelf->mem_ctl_state_debug),2);
    bufp->fullCData(oldp+437,(vlSelf->axi4_mem_state_debug),2);
    bufp->fullCData(oldp+438,(vlSelf->idu_state_debug),2);
    bufp->fullBit(oldp+439,(vlSelf->inst_valid_debug));
    bufp->fullCData(oldp+440,(vlSelf->arbiter_state_debug),2);
    bufp->fullCData(oldp+441,(vlSelf->axi4_lite_state_debug),2);
    __Vtemp_h650a5f8e__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o))));
    __Vtemp_h650a5f8e__0[1U] = ((vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o 
                                 << 2U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_rdata_o))) 
                                                   >> 0x20U)));
    __Vtemp_h650a5f8e__0[2U] = (8U | ((vlSelf->pc_plus4_debug 
                                       << 4U) | (vlSelf->ysyx_24120009_core__DOT__wbu__DOT__result_o 
                                                 >> 0x1eU)));
    __Vtemp_h650a5f8e__0[3U] = (0x10U | (vlSelf->pc_plus4_debug 
                                         >> 0x1cU));
    __Vtemp_h650a5f8e__0[4U] = 0U;
    bufp->fullWData(oldp+442,(__Vtemp_h650a5f8e__0),136);
    bufp->fullCData(oldp+447,(vlSelf->ysyx_24120009_core__DOT__alu_op),5);
    bufp->fullBit(oldp+448,(vlSelf->ysyx_24120009_core__DOT__mem_en));
    bufp->fullBit(oldp+449,(vlSelf->ysyx_24120009_core__DOT__mem_wen));
    bufp->fullCData(oldp+450,(vlSelf->ysyx_24120009_core__DOT__wb_sel),2);
    bufp->fullIData(oldp+451,(vlSelf->ysyx_24120009_core__DOT__pc_plus4),32);
    bufp->fullIData(oldp+452,(0x20U),32);
    bufp->fullCData(oldp+453,(0U),2);
    bufp->fullCData(oldp+454,(1U),2);
    bufp->fullCData(oldp+455,(2U),2);
    bufp->fullIData(oldp+456,(1U),32);
    bufp->fullCData(oldp+457,(3U),2);
    bufp->fullIData(oldp+458,(0xbU),32);
    bufp->fullIData(oldp+459,(5U),32);
    bufp->fullIData(oldp+460,(0U),32);
    bufp->fullIData(oldp+461,(0U),32);
    bufp->fullIData(oldp+462,(0x25U),32);
    bufp->fullIData(oldp+463,(0xbU),32);
    bufp->fullIData(oldp+464,(0x80000000U),32);
    bufp->fullBit(oldp+465,(1U));
    bufp->fullCData(oldp+466,(0U),5);
    bufp->fullIData(oldp+467,(6U),32);
    bufp->fullIData(oldp+468,(3U),32);
    bufp->fullBit(oldp+469,(0U));
    bufp->fullIData(oldp+470,(4U),32);
    bufp->fullIData(oldp+471,(6U),32);
    bufp->fullIData(oldp+472,(2U),32);
    bufp->fullIData(oldp+473,(0x22U),32);
    bufp->fullIData(oldp+474,(2U),32);
    bufp->fullIData(oldp+475,(4U),32);
    bufp->fullCData(oldp+476,(0U),3);
    bufp->fullCData(oldp+477,(1U),3);
    bufp->fullCData(oldp+478,(2U),3);
    bufp->fullCData(oldp+479,(3U),3);
    bufp->fullIData(oldp+480,(vlSelf->ysyx_24120009_core__DOT__ifu__DOT__imem_addr),32);
    bufp->fullIData(oldp+481,(0x23U),32);
    bufp->fullIData(oldp+482,(5U),32);
    bufp->fullIData(oldp+483,(8U),32);
    bufp->fullIData(oldp+484,(0xaU),32);
    __Vtemp_ha516852c__0[0U] = 0x491808c9U;
    __Vtemp_ha516852c__0[1U] = 0xc9076a3U;
    __Vtemp_ha516852c__0[2U] = 0x903001c8U;
    __Vtemp_ha516852c__0[3U] = 6U;
    bufp->fullWData(oldp+485,(__Vtemp_ha516852c__0),104);
    bufp->fullIData(oldp+489,(0xdU),32);
    bufp->fullIData(oldp+490,(8U),32);
    bufp->fullQData(oldp+491,(0x83c81801ULL),33);
    bufp->fullCData(oldp+493,(0U),8);
    bufp->fullIData(oldp+494,(3U),32);
    bufp->fullIData(oldp+495,(vlSelf->ysyx_24120009_core__DOT__wbu__DOT__dmem_addr_o),32);
}
