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
  .data.extra : AT(_flash_lma) {
    /* section information for finsh shell */
    __fsymtab_start = .;
    KEEP(*(FSymTab))
    __fsymtab_end = .;
    . = ALIGN(8);
    __vsymtab_start = .;
    KEEP(*(VSymTab))
    __vsymtab_end = .;
    . = ALIGN(8);

    /* section information for initial. */
    . = ALIGN(8);
    __rt_init_start = .;
    KEEP(*(SORT(.rti_fn*)))
    __rt_init_end = .;
    . = ALIGN(8);

    __rt_utest_tc_tab_start = .;
    KEEP(*(UtestTcTab))
    __rt_utest_tc_tab_end = .;

    . = ALIGN(8);
    __am_apps_data_start = .;
    *(__am_apps.data*)
    *(__am_apps.sdata*)
    __am_apps_data_end = .;
    . = ALIGN(8);
  } > sdram

  _flash_lma += SIZEOF(.data.extra);
  .data : AT(_flash_lma) {
    _data_lma = LOADADDR(.data);
    _data = .;
    *(.data) *(.data.*) *(.sdata.*)
    *(.data.extra) 
    . = ALIGN(4);
    _edata = .;
  } > sdram 

  .bss.extra : {
    . = ALIGN(8);
    __am_apps_bss_start = .;
    *(__am_apps.bss*)
    *(__am_apps.sbss*)
    *(__am_apps.scommon*)
    __am_apps_bss_end = .;
    . = ALIGN(8);
  } > sdram 

  .bss : {
    . = ALIGN(4);
    _bss_start = .;
    *(.bss*)
    *(.bss.extra) 
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