#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  uint32_t vga_ctl = inl(VGACTL_ADDR);
  int w = (vga_ctl >> 16) & 0xFFFF; 
  int h = vga_ctl & 0xFFFF; 

  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (int i = 0; i < w * h; i++) fb[i] = i; 
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

  uint32_t vga_ctl = inl(VGACTL_ADDR);
  uint32_t screen_w = (vga_ctl >> 16) & 0xFFFF;
  uint32_t screen_h = vga_ctl & 0xFFFF;
  
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t *pixels = (uint32_t *)ctl->pixels;

  for (int row = 0; row < h; row++) {
    int current_y = y + row;
    if (current_y >= screen_h) break;
    
    for (int col = 0; col < w; col++) {
      int current_x = x + col;
      if (current_x >= screen_w) break;
      
      fb[current_y * screen_w + current_x] = pixels[row * w + col];
    }
  }

  if (ctl->sync) {
    outl(SYNC_ADDR, 1); 
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}