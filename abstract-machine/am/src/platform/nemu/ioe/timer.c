#include <am.h>
#include <nemu.h>

static uint64_t start_time = 0;

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
  uptime->us = current_time - start_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
