package empty

import chisel3._
import chiseltest._
import org.scalatest._
import org.scalatest.flatspec.AnyFlatSpec

class FourToOneMuxTest extends AnyFlatSpec with ChiselScalatestTester {
  "FourToOneMux" should "correctly select inputs based on Y" in {
    test(new Mux4to1) { c =>
      // 设置输入信号
      c.io.X0.poke(0.U)
      c.io.X1.poke(1.U)
      c.io.X2.poke(2.U)
      c.io.X3.poke(3.U)

      // 测试 Y = 00
      c.io.Y.poke(0.U)
      c.io.F.expect(0.U)

      // 测试 Y = 01
      c.io.Y.poke(1.U)
      c.io.F.expect(1.U)

      // 测试 Y = 10
      c.io.Y.poke(2.U)
      c.io.F.expect(2.U)

      // 测试 Y = 11
      c.io.Y.poke(3.U)
      c.io.F.expect(3.U)
    }
  }
}