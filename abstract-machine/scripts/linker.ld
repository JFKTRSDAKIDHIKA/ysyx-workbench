ENTRY(_start)

PHDRS { 
  FSBL PT_LOAD;  
  SSBL PT_LOAD;  
  text PT_LOAD; 
  data PT_LOAD;
  bss  PT_NULL;
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
  _flash_lma = ORIGIN(flash);

  _sdram_start = ORIGIN(sdram);
  _sdram_end = ORIGIN(sdram) + LENGTH(sdram);

  /* First stage Bootloader */
  .FSBL : {
    *(entry)   
    *(.FSBL*)  
  } > flash AT> flash : FSBL

  _flash_lma = _flash_lma + SIZEOF(.FSBL);

  /* Second stage Bootloader */
  .SSBL : {
    _SSBL_lma = _flash_lma;  /* Fix: Set correct LMA for SSBL */
    . = ORIGIN(sram);
    _SSBL = .;
    *(.SSBL*)
    _eSSBL = .;
  } > sram AT> flash : SSBL

  _flash_lma = _flash_lma + SIZEOF(.SSBL);

  .text : {
    _text_lma = _flash_lma;  /* Fix: Use tracked LMA */
    _text = .;
    *(.text*)
    *(.rodata*)
    *(.srodata*)
    . = ALIGN(8);  /* Fix: Better alignment */
    _etext = .;
  } > sdram AT> flash : text

  _flash_lma = _flash_lma + SIZEOF(.text);

  /* Add data.extra section */
  .data.extra : {
    _data_extra_lma = _flash_lma;
    _data_extra = .;
    *(.data.extra*)
    . = ALIGN(4);
    _edata_extra = .;
  } > sdram AT> flash : data

  _flash_lma = _flash_lma + SIZEOF(.data.extra);

  .data : {
    _data_lma = _flash_lma;
    _data = .;
    *(.data .data.* .sdata.*)
    . = ALIGN(4);
    _edata = .;
  } > sdram AT> flash : data

  /* Add bss.extra section */
  .bss.extra (NOLOAD) : {
    . = ALIGN(8);
    _bss_extra_start = .;
    *(.bss.extra*)
    . = ALIGN(8);
    _bss_extra_end = .;
  } > sdram : bss

  .bss (NOLOAD) : {
    . = ALIGN(8);
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(8);
    _ebss = .;
  } > sdram : bss

  /* Stack in SRAM */
  .stack (NOLOAD) : {
    . = _eSSBL;
    . = ALIGN(8);         
    _stack_bottom = .;        
    . = ORIGIN(sram) + LENGTH(sram);  
    _stack_top = .;            
    _stack_pointer = .;       
  } > sram : bss

  . = _ebss;
  _heap_start = ALIGN(0x1000);

  end = .;
  _end = .;
}