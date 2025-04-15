package common 

import chisel3._
import chisel3.util._

import common.constants.RISCVConstants 

class Metadata extends Bundle with RISCVConstants {
    val valid = Reg(Vec(num_blocks, Bool()))
    val tag = Reg(Vec(num_blocks, UInt(32.W)))
}

class ICache extends Module with RISCVConstants {
    val io = IO(new Bundle {
        // ifu interface 
        val ifu = Flipped(new AXI4IO)
        // memory interface 
        val memory = new AXI4IO
    })

    // Set AXI4 default values
    AXI4Defaults(io.memory)
    AXI4FlippedDefaults(io.ifu)

    // 
    val offset_bits = log2Up(block_size)
    val index_bits = log2Up(num_blocks)

    // Extract ...
    val index = io.ifu.ar.addr(offset_bits + index_bits - 1, offset_bits)
    // val tag = io.ifu.ar.addr(31, offset_bits + index_bits) 

    // 
    val cache = Reg(Vec(num_blocks, UInt(32.W)))
    val metadata = new Metadata()
    val if_inst_buffer = RegInit(0.U(32.W)) 


    // State machine state definition
    val sIdle :: sLookup :: sCache_Hit :: sCache_Miss :: sWait_Mem :: sUpdate :: Nil = Enum(6)
    val state = RegInit(sIdle)

    switch(state) {
        is(sIdle) {
            io.ifu.r.valid := false.B
            io.ifu.ar.ready := true.B
            when(io.ifu.ar.valid) {
                state := sLookup
            }
        }

        is(sLookup) {
            when(metadata.valid(index) && metadata.tag(index) === io.memory.ar.addr) {
                state := sCache_Hit
            } .otherwise {
                state := sCache_Miss
            } 
        }

        is(sCache_Hit) {
            io.ifu.r.valid := true.B
            io.ifu.r.data := cache(index)
            state := sIdle
        }

        is(sCache_Miss) {
            // 
            io.ifu.r.valid := false.B
            // Read Address Channel
            io.memory.ar.addr := io.ifu.ar.addr
            io.memory.ar.valid := true.B
            io.memory.ar.len := io.ifu.ar.len
            io.memory.ar.size := io.ifu.ar.size
            io.memory.ar.burst := io.ifu.ar.burst
            io.memory.ar.id := io.ifu.ar.id
            // Read Data Channel
            io.memory.r.ready := false.B
            //
            state := sWait_Mem
        }

        is(sWait_Mem) {
            // 
            io.ifu.r.valid := false.B
            // Wait memory ready to process request
            io.memory.r.ready := true.B
            when(io.memory.r.valid) {
                if_inst_buffer := io.memory.r.data 
                state := sUpdate
            }
        }

        is(sUpdate) {
            // 
            io.ifu.r.valid := true.B
            // 
            cache(index) := io.memory.r.data 
            metadata.valid(index) := true.B
            metadata.tag(index) := io.ifu.ar.addr
            //
            io.ifu.r.data := if_inst_buffer
            //
            state := sIdle
        }
    }
}