ENTRY(_start)

PHDRS { 
  text PT_LOAD; 
  data PT_LOAD;
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
  } > flash : text

  _flash_lma += SIZEOF(.FSBL);
  .SSBL : AT( _flash_lma ) {
    _SSBL_lma = LOADADDR(.SSBL);
    . = ORIGIN(sram);
    _SSBL = .;
    *(.SSBL*)
    . = ALIGN(4);
    _eSSBL = .;
  } > sram : text

  _flash_lma += SIZEOF(.SSBL);
  .text : AT( _flash_lma ) {
    _text_lma = LOADADDR(.text);
    _text = .;
    *(.text*)
    . = ALIGN(4);
    _etext = .;
  } > sdram : text

  _flash_lma += SIZEOF(.text);
  .rodata : AT( _flash_lma ) {
    _rodata_lma = LOADADDR(.rodata);
    _rodata = .;
    *(.rodata*)
    *(.rodata.*)
    *(.srodata.*)
    . = ALIGN(4);
    _erodata = .;
  } > sdram : text

  _flash_lma += SIZEOF(.rodata);
  .data : AT(_flash_lma) {
    _data_lma = LOADADDR(.data);
    _data = .;
    *(.data) *(.data.*) *(.sdata.*) *(.data.extra)  
    . = ALIGN(4);
    _edata = .;
  } > sdram : data

  .bss : {
    . = ALIGN(4);
	  _bss_start = .;
    *(.bss*)
    *(.bss.extra)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(4);
    _ebss = .;
  } > sdram : data

  .stack : {
    . = _eSSBL;    
    . = ALIGN(4);       
    _stack_bottom = .;        
    . = ORIGIN(sram) + LENGTH(sram);  
    _stack_top = .;            
    _stack_pointer = .;       
  } > sram : NONE
  
  . = _ebss;
  _heap_start = ALIGN(0x1000);

  end = .;
  _end = .;

}