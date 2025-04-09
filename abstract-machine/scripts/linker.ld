ENTRY(_start)

MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 256M
  psram : ORIGIN = 0x80000000, LENGTH = 4M
  sram : ORIGIN = 0x0f000000, LENGTH = 8k
  sdram : ORIGIN = 0xa0000000, LENGTH = 128M
}

SECTIONS {
  _sdram_end = ORIGIN(sdram) + LENGTH(sdram);

  _flash_lma = ORIGIN(flash);

  /* Flash sections */
  . = ORIGIN(flash);
  .FSBL : AT( _flash_lma ) {
    *(entry)
    *(.FSBL*)
    . = ALIGN(4);
  } > flash 

  _flash_lma += SIZEOF(.FSBL);

  /* SRAM sections */
  . = ORIGIN(sram);
  .SSBL : AT( _flash_lma ) {
    _SSBL_lma = LOADADDR(.SSBL);
    _SSBL = .;
    *(.SSBL*)
    . = ALIGN(4);
    _eSSBL = .;
  } > sram 

  _flash_lma += SIZEOF(.SSBL);

  /* SDRAM sections */
  . = ORIGIN(sdram);

  /* .data.extra and .bss.extra will be inserted here from extra.ld, starting at ORIGIN(sdram) */

  .text : AT( _flash_lma ) {
    _text_lma = LOADADDR(.text);
    _text = .;
    *(.text*)
    . = ALIGN(4);
    _etext = .;
  } > sdram 

  _flash_lma += SIZEOF(.text);

  .rodata : AT( _flash_lma ) {
    _rodata_lma = LOADADDR(.rodata);
    _rodata = .;
    *(.rodata*)
    *(.rodata.*)
    *(.srodata.*)
    . = ALIGN(4);
    _erodata = .;
  } > sdram 

  _flash_lma += SIZEOF(.rodata);

  .data : AT(_flash_lma) {
    _data_lma = LOADADDR(.data);
    _data = .;
    *(.data) *(.data.*) *(.sdata.*)
    /* Removed *(.data.extra) */
    . = ALIGN(4);
    _edata = .;
  } > sdram 

  .bss : {
    . = ALIGN(4);
    _bss_start = .;
    *(.bss*)
    /* Removed *(.bss.extra) */
    *(.sbss*)
    *(.scommon)
    . = ALIGN(4);
    _ebss = .;
  } > sdram 

  . = _eSSBL;
  . = ALIGN(4);
  _stack_bottom = .;
  . = ORIGIN(sram) + LENGTH(sram);
  _stack_top = .;
  _stack_pointer = .;

  . = _ebss;
  _heap_start = ALIGN(0x1000);

  end = .;
  _end = .;
}