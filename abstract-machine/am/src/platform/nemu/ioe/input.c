#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000  // 确保与keyboard.c中的定义一致

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  // 从MMIO地址读取32位键盘码
  uint32_t keycode = inl(KBD_ADDR);

  if (keycode == AM_KEY_NONE) {
    kbd->keydown = 0;
    kbd->keycode = AM_KEY_NONE;
  } else {
    // 解析按键状态和键码
    kbd->keydown = (keycode & KEYDOWN_MASK) ? 1 : 0;
    kbd->keycode = keycode & ~KEYDOWN_MASK;  // 清除高位
  }
}