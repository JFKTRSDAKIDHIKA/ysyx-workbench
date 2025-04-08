ENTRY(_start)

PHDRS { 
  FSBL PT_LOAD;  
  SSBL PT_LOAD;  
  text PT_LOAD; 
  rodata PT_LOAD;
  data PT_LOAD;
  bss PT_NULL;
}

MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 256M
  psram : ORIGIN = 0x80000000, LENGTH = 4M
  sram : ORIGIN = 0x0f000000, LENGTH = 8k 
  sdram : ORIGIN = 0xa0000000, LENGTH = 128M
}

SECTIONS {
  . = ORIGIN(flash);
  _flash_start = .;
  _sdram_start = ORIGIN(sdram);
  _sdram_end = ORIGIN(sdram) + LENGTH(sdram);

  /* First stage bootloader */
  .FSBL : ALIGN(8) {
    *(entry)   
    *(.FSBL*)  
    . = ALIGN(8);
  } > flash AT> flash : FSBL

  . = ALIGN(4);

  /* Second stage bootloader - VMA in SRAM, LMA in flash */
  .SSBL : ALIGN(8) {
    _SSBL_lma = LOADADDR(.SSBL);
    _SSBL = .;
    *(.SSBL*)  
    . = ALIGN(8);
    _eSSBL = .;
  } > sram AT> flash : SSBL

  . = ALIGN(4);

  /* Text section */
  .text : ALIGN(8) {
    _text_lma = LOADADDR(.text);
    _text = .;    
    *(.text*)
    . = ALIGN(8);
    _etext = .;   
  } > sdram AT> flash : text

  /* Read-only data */
  .rodata : ALIGN(8) {
    _rodata_lma = LOADADDR(.rodata);
    _rodata = .;
    *(.rodata*)
    *(.srodata*)
    . = ALIGN(8);
    _erodata = .;
  } > sdram AT> flash : rodata

  /* Data sections */
  .data : ALIGN(8) {
    _data_lma = LOADADDR(.data);
    _data = .;                    
    *(.data*)
    *(.sdata*)
    *(.data.extra)
    . = ALIGN(8);
    _edata = .;
  } > sdram AT> flash : data
  _data_len = _edata - _data;

  /* BSS section */
  .bss (NOLOAD) : ALIGN(8) {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(8);
    _ebss = .;
  } > sdram : bss

  /* Stack section in SRAM */
  .stack (NOLOAD) : {
    . = _eSSBL;
    _stack_bottom = .;
    . = ORIGIN(sram) + LENGTH(sram) - 8;
    _stack_top = .;
    _stack_pointer = .;
  } > sram

  /* Heap starts after BSS */
  . = ALIGN(0x1000);
  _heap_start = .;
  
  end = .;
  _end = .;

  /* Discard unused sections */
  /DISCARD/ : {
    *(.eh_frame)
    *(.note.GNU-stack)
  }
}