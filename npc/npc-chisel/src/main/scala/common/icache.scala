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
  })

  val validArray = RegInit(VecInit(Seq.fill(p.numSets)(VecInit(Seq.fill(p.numWays)(false.B)))))
  val tagArray   = Reg(Vec(p.numSets, Vec(p.numWays, UInt(p.tagBits.W))))

  io.read.valid := validArray(io.read.index)
  io.read.tag   := tagArray(io.read.index)

  when(io.write.enable) {
    validArray(io.write.index)(io.write.way) := io.write.valid
    tagArray(io.write.index)(io.write.way) := io.write.tag
  }
}

/**
 * Instruction Cache (supports 4-word read with 1-cycle gap between)
 */
class ICache(implicit val p: ICacheParams) extends Module with RISCVConstants {
  val io = IO(new Bundle {
    val ifu    = Flipped(new AXI4IO)
    val memory = new AXI4IO
    // Debug signals
    val icache_state_debug = Output(UInt(3.W))
  })

  AXI4Defaults(io.memory)
  AXI4FlippedDefaults(io.ifu)

  val reqAddr = io.ifu.ar.addr
  val index = reqAddr(p.offsetBits + p.indexBits - 1, p.offsetBits)
  val tag   = reqAddr(31, p.offsetBits + p.indexBits)
  val wordOffset = reqAddr(p.offsetBits - 1, 2)

  val dataArray = Reg(Vec(p.numSets, Vec(p.numWays, Vec(p.wordsPerBlock, UInt(32.W)))))

  val metadata = Module(new Metadata)
  metadata.io.read.index := index
  metadata.io.write.enable := false.B
  metadata.io.write.index := 0.U
  metadata.io.write.way := 0.U
  metadata.io.write.valid := false.B
  metadata.io.write.tag := 0.U

  val hits = VecInit(metadata.io.read.valid.zip(metadata.io.read.tag).map {
    case (v, t) => v && t === tag
  })
  val hit = hits.reduce(_ || _)
  val hitWay = OHToUInt(hits)

  val fetchedWord = Reg(UInt(32.W))
  val replaceWay = RegInit(0.U(log2Ceil(p.numWays).W))

  val blockBuffer = Reg(Vec(p.wordsPerBlock, UInt(32.W)))
  val bufferIndex = RegInit(0.U(log2Ceil(p.wordsPerBlock).W))

  val baseAddr = Cat(reqAddr(31, p.offsetBits), 0.U(p.offsetBits.W))
  val isSDRAM = baseAddr >= SDRAM_BASE && baseAddr <= SDRAM_TOP
  val singleReadAddr = RegInit(baseAddr)

  val burstLen = (p.wordsPerBlock - 1).U
  val burstCnt = RegInit(0.U(log2Ceil(p.wordsPerBlock).W))

  val sIdle :: sLookup :: sResp :: sMemReq :: sMemRead :: sWaitGap :: sUpdate :: Nil = Enum(7)
  val state = RegInit(sIdle)

  io.ifu.ar.ready := state === sIdle
  io.ifu.r.valid := false.B
  io.memory.ar.valid := false.B
  io.memory.r.ready := false.B

  switch(state) {
    is(sIdle) {
      when(io.ifu.ar.valid) { 
        state := sLookup 
      }
    }

    is(sLookup) {
      state := sResp
    }

    is(sResp) {
      when(hit) {
        io.ifu.r.valid := true.B
        io.ifu.r.data := dataArray(index)(hitWay)(wordOffset)
        state := sIdle
      }.otherwise {
        bufferIndex := 0.U
        burstCnt := 0.U
        singleReadAddr := baseAddr
        state := sMemReq
      }
    }

    is(sMemReq) {
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
      state := sMemReq
    }

    is(sUpdate) {
      metadata.io.write.enable := true.B
      metadata.io.write.index := index
      metadata.io.write.way := replaceWay
      metadata.io.write.valid := true.B
      metadata.io.write.tag := tag

      for (i <- 0 until p.wordsPerBlock) {
        dataArray(index)(replaceWay)(i) := blockBuffer(i)
      }

      io.ifu.r.valid := true.B
      io.ifu.r.data := blockBuffer(wordOffset)

      replaceWay := replaceWay + 1.U
      state := sIdle
    }
  }

  // Debug signals assignment
  io.icache_state_debug := state;
}