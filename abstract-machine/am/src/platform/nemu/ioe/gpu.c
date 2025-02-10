#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  int i;
  int w = 12;  // TODO: get the correct width
  int h = 9;  // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t vga_ctl = inl(VGACTL_ADDR);  

  uint32_t width = (vga_ctl >> 16) & 0xFFFF;  
  uint32_t height = vga_ctl & 0xFFFF;         

  uint32_t vmemsz = width * height * 4;

  *cfg = (AM_GPU_CONFIG_T) {
    .present = true,  
    .has_accel = false, 
    .width = width,    
    .height = height,  
    .vmemsz = vmemsz   
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x = ctl->x;
  int y = ctl->y;
  int w = ctl->w;
  int h = ctl->h;
  uint32_t *pixels = (uint32_t *)ctl->pixels;

  if (w <= 0 || h <= 0) return;

  uint32_t screen_w = inl(VGACTL_ADDR) >> 16;  
  uint32_t screen_h = inl(VGACTL_ADDR) & 0xFFFF;  

  for (int row = 0; row < h; row++) {
    if (y + row >= screen_h) break; 
    for (int col = 0; col < w; col++) {
      if (x + col >= screen_w) break; 
      uintptr_t pixel_addr = FB_ADDR + ((y + row) * screen_w + (x + col)) * 4;
      outl(pixel_addr, pixels[row * w + col]);  
    }
  }

  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
