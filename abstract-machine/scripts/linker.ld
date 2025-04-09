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
  _sdram_end = ORIGIN(sdram) + LENGTH(sdram);

  _flash_lma = ORIGIN(flash);
  .FSBL : AT( _flash_lma ) {
    *(entry)
    *(.FSBL*)
    . = ALIGN(4);
  } > flash : FSBL
  _flash_lma += SIZEOF(.FSBL);
  .SSBL : AT( _flash_lma ) {
    _SSBL_lma = LOADADDR(.SSBL);
    . = ORIGIN(sram);
    _SSBL = .;
    *(.SSBL*)
    _eSSBL = .;
  } > sram : SSBL
  _flash_lma += SIZEOF(.SSBL);
  .text : AT( _flash_lma ) {
    _text_lma = LOADADDR(.text);
    _text = .;
    *(.text*)
    *(.rodata*)
    *(.srodata*)
    . = ALIGN(4);
    _etext = .;
  } > sdram : text
  _flash_lma += SIZEOF(.text);
  .data.extra : AT( _flash_lma ) {
    *(.data.extra)
  } > sdram : data
  _flash_lma += SIZEOF(.data.extra);
  .data : AT( _flash_lma ) {
    _data_lma = LOADADDR(.data);
    _data = .;
    *(.data) *(.data.*) *(.sdata.*)
    _edata = .;
  } > sdram : data

  .bss : {
    . = ALIGN(4);
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(4);
    _ebss = .;
  } > sdram : bss

  /* 将栈分配到 SRAM 中 */
  .stack : {
    . = _eSSBL;    
    . = ALIGN(4);       
    _stack_bottom = .;        
    . = ORIGIN(sram) + LENGTH(sram);  
    _stack_top = .;            
    _stack_pointer = .;       
  } > sram
  
  /* 堆起始地址仍放在 SDRAM 中，紧跟 .bss 之后 */
  . = _ebss;
  _heap_start = ALIGN(0x1000);

  end = .;
  _end = .;

}