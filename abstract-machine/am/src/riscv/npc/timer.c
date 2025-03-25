#include <am.h>
#include "../riscv.h"
static uint64_t start_time = 0;
#define DEVICE_BASE     0x02000000
#define RTC_ADDR        (DEVICE_BASE + 0xbff8)
#define CYCLE_TO_US_NUMERATOR   6696  
#define CYCLE_TO_US_DENOMINATOR 10000 

void __am_timer_init() {
  uint32_t hi, lo, hi2;
  do {
    hi = inl(RTC_ADDR + 4);  
    lo = inl(RTC_ADDR);       
    hi2 = inl(RTC_ADDR + 4);  
  } while (hi != hi2);       
  start_time = ((uint64_t)hi << 32) | lo;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t hi, lo, hi2;
  do {
    hi = inl(RTC_ADDR + 4);  
    lo = inl(RTC_ADDR);       
    hi2 = inl(RTC_ADDR + 4);  
  } while (hi != hi2);        
  uint64_t current_time = ((uint64_t)hi << 32) | lo;
  uptime->us = (current_time - start_time) * CYCLE_TO_US_NUMERATOR / CYCLE_TO_US_DENOMINATOR;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}

