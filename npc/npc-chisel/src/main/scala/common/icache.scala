package common

import chisel3._
import chisel3.util._
import common.constants.RISCVConstants

/**
 * Cache configuration parameters
 */
trait ICacheParams {
  val blockBytes = 16          // Size of each cache block in bytes
  val numSets    = 4           // Number of cache sets
  val numWays    = 2           // Number of ways per set
  val wordBytes  = 4           // Size of each word in bytes
  val wordsPerBlock = blockBytes / wordBytes

  val indexBits  = log2Ceil(numSets)
  val offsetBits = log2Ceil(blockBytes)
  val wordOffsetBits = log2Ceil(wordsPerBlock)
  val tagBits    = 32 - indexBits - offsetBits
}

object DefaultICacheParams extends ICacheParams {}

/**
 * Metadata storage with read/write interface
 */
class Metadata(implicit val p: ICacheParams) extends Module {
  val io = IO(new Bundle {
    val read = new Bundle {
      val index = Input(UInt(p.indexBits.W))
      val valid = Output(Vec(p.numWays, Bool()))
      val tag   = Output(Vec(p.numWays, UInt(p.tagBits.W)))
    }
    val write = new Bundle {
      val enable = Input(Bool())
      val index  = Input(UInt(p.indexBits.W))
      val way    = Input(UInt(log2Ceil(p.numWays).W))
      val valid  = Input(Bool())
      val tag    = Input(UInt(p.tagBits.W))
    }
    val fenceIEnable = Input(Bool())
  })

  val validArray = RegInit(VecInit(Seq.fill(p.numSets)(VecInit(Seq.fill(p.numWays)(false.B)))))
  val tagArray   = Reg(Vec(p.numSets, Vec(p.numWays, UInt(p.tagBits.W))))

  io.read.valid := validArray(io.read.index)
  io.read.tag   := tagArray(io.read.index)

  when (io.fenceIEnable) {
    (0 until p.numSets).foreach { i =>
      (0 until p.numWays).foreach { j =>
        validArray(i)(j) := false.B
      }
    }    
  } .elsewhen(io.write.enable) {
    validArray(io.write.index)(io.write.way) := io.write.valid
    tagArray(io.write.index)(io.write.way) := io.write.tag
  }
}

class ICacheRequestBundle extends Bundle {
  val pc = Output(UInt(32.W))
}

class ICacheStage1ToStage2Bundle(implicit val p: ICacheParams) extends Bundle {
  val pc         = Output(UInt(32.W))
  val index      = Output(UInt(p.indexBits.W))
  val tag        = Output(UInt((32 - p.offsetBits - p.indexBits).W)) 
  val wordOffset = Output(UInt((p.offsetBits - 2).W)) 
  val redirect_valid = Output(Bool())
}

class ICacheRespBundle extends Bundle {
  val pc = Output(UInt(32.W))
  val inst = Output(UInt(32.W))
}

/**
 * Instruction Cache (supports 4-word read with 1-cycle gap between)
 */
class ICache(implicit val p: ICacheParams) extends Module with RISCVConstants {
  val io = IO(new Bundle {
    // Signals passed from IFU
    val in = Flipped(Decoupled(new ICacheRequestBundle))
    // Signals passed to IDU
    val out = Decoupled(new ICacheRespBundle)
    // AXI memory interface
    val memory = new AXI4IO
    // Arbiter handshake
    val arbiter = new ValidReadyBundle
    // Signals to handle control hazard
    val redirect_valid = Input(Bool())  
    // Trigger signal for fence.i — invalidates the instruction cache
    val fenceIEnable = Input(Bool())
    // Debug signals
    val icache_state_debug = Output(UInt())
    val icache_miss_count = Output(UInt(64.W)) 
  })

  // Set default values
  AXI4Defaults(io.memory)
  io.out.valid := false.B
  io.out.bits.pc := 0.U
  io.out.bits.inst := 0.U
  io.arbiter.valid := false.B
  io.icache_state_debug := 1.U

  // Instantiate frontend stage: address parsing and first-stage pipeline registers
  val frontend = Module(new ICacheFrontend)

  // Instantiate core stage: hit/miss logic, cache refill, and data return
  val core = Module(new ICacheCore)

  // Connect Stage 1 output to Stage 2 input using generic pipeline handshake
  StageConnect(frontend.io.out, core.io.in)

  // Connect top-level input to frontend
  frontend.io.in <> io.in

  // Connect core output to top-level output
  io.out <> core.io.out

  // Forward AXI memory interface to core
  io.memory <> core.io.memory

  // Forward arbiter handshake signals
  io.arbiter <> core.io.arbiter

  // Pass signals which handle control hazard
  frontend.io.redirect_valid := io.redirect_valid
  core.io.redirect_valid := io.redirect_valid

  // Pass the signal which handle fence.i inst
  core.io.fenceIEnable := io.fenceIEnable

  // Expose internal FSM state for debugging purposes
  io.icache_state_debug := core.io.icache_state_debug
  io.icache_miss_count := core.io.icache_miss_count
}

class ICacheFrontend(implicit val p: ICacheParams) extends Module with RISCVConstants {
  val io = IO(new Bundle {
    // Signals passed from IFU
    val in = Flipped(Decoupled(new ICacheRequestBundle))
    // Signals passed to next stage in ICache
    val out = Decoupled(new ICacheStage1ToStage2Bundle)
    // Signals to handle control hazard
    val redirect_valid = Input(Bool())  
  })

  // Pipeline registers
  val icache_frontend_reg_pc = RegEnable(io.in.bits.pc, io.in.fire)
  val icache_core_reg_redirect_valid = RegEnable(io.redirect_valid, io.in.fire)

  val reqAddr = icache_frontend_reg_pc
  val index = reqAddr(p.offsetBits + p.indexBits - 1, p.offsetBits)
  val tag   = reqAddr(31, p.offsetBits + p.indexBits)
  val wordOffset = reqAddr(p.offsetBits - 1, 2)

  // Connect signals to output
  io.out.bits.pc         := icache_frontend_reg_pc
  io.out.bits.index      := index
  io.out.bits.tag        := tag
  io.out.bits.wordOffset := wordOffset
  io.out.bits.redirect_valid := icache_core_reg_redirect_valid

  // Handshake logic for the decoupled interface
  io.out.valid := io.in.fire 
  io.in.ready := io.out.ready 
}

class ICacheCore (implicit val p: ICacheParams) extends Module with RISCVConstants {
  val io = IO(new Bundle {
    // Signals passed from previous stage in ICache
    val in = Flipped(Decoupled(new ICacheStage1ToStage2Bundle))
    // Signals passed to IDU
    val out = Decoupled(new ICacheRespBundle)
    // memory interface
    val memory = new AXI4IO
    // Arbiter handshake
    val arbiter = new ValidReadyBundle
    // Signals to handle control hazard
    val redirect_valid = Input(Bool())  
    // Trigger signal for fence.i — invalidates the instruction cache
    val fenceIEnable = Input(Bool())
    // Debug signals
    val icache_state_debug = Output(UInt())
    val icache_miss_count = Output(UInt(64.W))
  })

  // Set default values
  AXI4Defaults(io.memory)
  io.out.valid := false.B
  io.in.ready := true.B
  io.out.bits.pc := 0.U
  io.out.bits.inst := 0.U
  io.arbiter.valid := false.B

  // Performance counter
  val icacheMissCounter = RegInit(0.U(64.W))

  // Pipeline registers
  val icache_core_reg_pc = RegEnable(io.in.bits.pc, io.in.fire)
  val icache_core_reg_index = RegEnable(io.in.bits.index, io.in.fire)
  val icache_core_reg_tag = RegEnable(io.in.bits.tag, io.in.fire)
  val icache_core_reg_wordOffset = RegEnable(io.in.bits.wordOffset, io.in.fire)
  val icache_core_reg_redirect_valid = RegEnable(io.in.bits.redirect_valid, io.in.fire)

  // Remember redirect request when input fires
  val redirect_pending = RegEnable(io.redirect_valid, io.in.fire)

  // Data storage array for the I$.
  val dataArray = Reg(Vec(p.numSets, Vec(p.numWays, Vec(p.wordsPerBlock, UInt(32.W)))))

  // Read metadata (tags and valid bits) for the current cache index.
  val metadata = Module(new Metadata)
  metadata.io.read.index := icache_core_reg_index
  metadata.io.write.enable := false.B
  metadata.io.write.index := 0.U
  metadata.io.write.way := 0.U
  metadata.io.write.valid := false.B
  metadata.io.write.tag := 0.U
  metadata.io.fenceIEnable := io.fenceIEnable

  // Check for a hit in the cache: valid && tag match
  val hits = VecInit(metadata.io.read.valid.zip(metadata.io.read.tag).map {
    case (v, t) => v && t === icache_core_reg_tag
  })
  val hit = hits.reduce(_ || _)
  val hitWay = OHToUInt(hits)

  val baseAddr = Cat(icache_core_reg_pc(31, p.offsetBits), 0.U(p.offsetBits.W))
  val isSDRAM = baseAddr >= SDRAM_BASE && baseAddr <= SDRAM_TOP
  val singleReadAddr = RegInit(baseAddr)

  val burstLen = (p.wordsPerBlock - 1).U
  val burstCnt = RegInit(0.U(log2Ceil(p.wordsPerBlock).W))

  val replaceWay = RegInit(0.U(log2Ceil(p.numWays).W))

  val blockBuffer = Reg(Vec(p.wordsPerBlock, UInt(32.W)))
  val bufferIndex = RegInit(0.U(log2Ceil(p.wordsPerBlock).W))

  val sIdle :: sMemReq :: sMemPrepare :: sMemRead :: sWaitGap :: sUpdate :: Nil = Enum(6)
  val state = RegInit(sIdle)

  switch(state) {
    is(sIdle) {
      // Arbiter interface
      io.arbiter.valid := false.B
      // Remember to reset burstCnt
      burstCnt := 0.U
      when(hit) {
        io.out.valid := true.B
        io.in.ready := io.out.ready
        io.out.bits.inst := Mux(redirect_pending || icache_core_reg_redirect_valid || io.redirect_valid, BUBBLE, dataArray(icache_core_reg_index)(hitWay)(icache_core_reg_wordOffset))
      } .elsewhen (!hit) {
        icacheMissCounter := icacheMissCounter + 1.U
        io.in.ready := false.B
        io.out.valid := false.B
        state := sMemPrepare
      }
    }

    is(sMemPrepare) {
      io.in.ready := false.B
      io.out.valid := false.B
      // Arbiter interface
      io.arbiter.valid := true.B
      singleReadAddr := baseAddr
      // Wait arbiter ready
      when(io.arbiter.ready) {
        state := sMemReq
      }     
    }

    is(sMemReq) {
      io.in.ready := false.B
      io.out.valid := false.B
      // Arbiter interface
      io.arbiter.valid := true.B
      // memory interface
      io.memory.ar.valid := true.B
      io.memory.ar.addr := Mux(isSDRAM, baseAddr, singleReadAddr)
      io.memory.ar.len := Mux(isSDRAM, burstLen, 0.U)
      io.memory.ar.size := 2.U
      io.memory.ar.burst := Mux(isSDRAM, 1.U, 0.U)
      when(io.memory.ar.ready) {
        state := sMemRead
      }
    }

    is(sMemRead) {
      io.in.ready := false.B
      io.out.valid := false.B
      // Arbiter interface
      io.arbiter.valid := true.B
      // memory interface
      io.memory.r.ready := true.B
      when(io.memory.r.valid) {
        blockBuffer(burstCnt) := io.memory.r.data
        when(isSDRAM) {
          when(io.memory.r.last) {
            state := sUpdate
          }.otherwise {
            burstCnt := burstCnt + 1.U
          }
        }.otherwise {
          when(burstCnt === (p.wordsPerBlock - 1).U) {
            state := sUpdate
          }.otherwise {
            burstCnt := burstCnt + 1.U
            singleReadAddr := baseAddr + ((burstCnt + 1.U) << 2)
            state := sWaitGap 
          }
        }
      }
    }

    is(sWaitGap) {
      io.in.ready := false.B
      io.out.valid := false.B
      // Arbiter interface
      io.arbiter.valid := true.B
      // memory interface
      state := sMemReq
    }

    is(sUpdate) {
      // Arbiter interface
      io.arbiter.valid := false.B
      // memory interface
      metadata.io.write.enable := true.B
      metadata.io.write.index := icache_core_reg_index
      metadata.io.write.way := replaceWay
      metadata.io.write.valid := true.B
      metadata.io.write.tag := icache_core_reg_tag

      (0 until p.wordsPerBlock).foreach { i =>
        dataArray(icache_core_reg_index)(replaceWay)(i) := blockBuffer(i)
      }      

      io.out.valid := true.B
      io.in.ready := io.out.ready
      io.out.bits.inst := Mux(redirect_pending || icache_core_reg_redirect_valid || io.redirect_valid, BUBBLE, blockBuffer(icache_core_reg_wordOffset))  // Insert Bubble when mispredict next pc!

      replaceWay := replaceWay + 1.U
      state := sIdle
    }
  }

  // Assign output and debug signals
  io.out.bits.pc := icache_core_reg_pc
  io.icache_state_debug := state
  io.icache_miss_count := icacheMissCounter

}

