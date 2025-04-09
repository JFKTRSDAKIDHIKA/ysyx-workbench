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

  _sdram_start = ORIGIN(sdram);
  _sdram_end = ORIGIN(sdram) + LENGTH(sdram);

  /* First stage Bootloader: VMA and LMA in flash */
  .FSBL : {
    *(entry)   /* Program entry point */
    *(.FSBL*)  /* Match all .FSBL sections */
    . = ALIGN(4);
  } > flash AT> flash : FSBL

  /* Advance location counter in flash */
  . = _flash_start + SIZEOF(.FSBL);

  /* Second stage Bootloader: VMA in SRAM, LMA in flash */
  .SSBL : {
    _SSBL_lma = LOADADDR(.SSBL);
    . = ORIGIN(sram);  /* VMA starts in SRAM */
    _SSBL = .;
    *(.SSBL*)  /* Match all .SSBL sections */
    _eSSBL = .;
  } > sram AT> flash : SSBL

  /* Advance location counter in flash */
  . = _flash_start + SIZEOF(.FSBL) + SIZEOF(.SSBL);

  /* Text section: VMA in SDRAM, LMA in flash */
  .text : {
    _text_lma = LOADADDR(.text);
    _text = .;    /* Start of .text in SDRAM */
    *(.text*)
    *(.rodata*)
    . = ALIGN(4);
    _etext = .;   /* End of .text in SDRAM */
  } > sdram AT> flash : text

  /* Advance location counter in flash */
  . = _flash_start + SIZEOF(.FSBL) + SIZEOF(.SSBL) + SIZEOF(.text);

  /* Data section: VMA in SDRAM, LMA in flash */
  .data : {
    _data_lma = LOADADDR(.data);  /* LMA from flash */
    _data = .;                    /* VMA in SDRAM */
    *(.data)                      /* Standard .data */
    *(.data.*)                    /* All .data.* sections */
    *(.sdata.*)                   /* Small data sections */
    *(.data.extra)                /* Explicitly include .data.extra */
    . = ALIGN(4);
    _edata = .;
  } > sdram AT> flash : data
  _data_len = _edata - _data;

  /* BSS section: VMA in SDRAM, no LMA */
  .bss : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _ebss = .;
  } > sdram : bss

  /* Stack in SRAM */
  .stack : {
    . = _eSSBL;         
    _stack_bottom = .;        
    . = ORIGIN(sram) + LENGTH(sram);  
    _stack_top = .;            
    _stack_pointer = .;       
  } > sram
  
  /* Heap starts in SDRAM after .bss */
  . = _ebss;
  _heap_start = ALIGN(0x1000);

  end = .;
  _end = .;
}