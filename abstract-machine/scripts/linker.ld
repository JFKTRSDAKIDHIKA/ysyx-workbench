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

  /* FSBL: 加载地址和运行地址都在 flash */
  .FSBL : {
    *(entry)
    *(.FSBL*)
  } > flash AT> flash : FSBL
  . = ALIGN(4);  /* 对齐下一个段 */

  /* SSBL: 运行地址在 sram，加载地址在 flash */
  _SSBL_load = .;  /* SSBL 在 flash 中的 LMA */
  .SSBL : AT(_SSBL_load) {
    . = ORIGIN(sram);
    _SSBL = .;
    *(.SSBL*)
    _eSSBL = .;
  } > sram : SSBL
  . = _SSBL_load + SIZEOF(.SSBL);
  . = ALIGN(4);

  /* text: VMA 在 sdram，LMA 继续在 flash 末尾 */
  _text_load = .;
  .text : AT(_text_load) {
    _text = .;
    *(.text*)
    *(.rodata*)
    . = ALIGN(4);
    _etext = .;
  } > sdram : text
  . = _text_load + SIZEOF(.text);
  . = ALIGN(4);

  /* data: VMA 在 sdram，LMA 继续在 flash 后 */
  _data_load = .;
  .data : AT(_data_load) {
    _data = .;
    *(.data .data.* .sdata.*)
    _edata = .;
  } > sdram : data
  _data_len = _edata - _data;
  . = _data_load + SIZEOF(.data);
  . = ALIGN(4);

  /* bss: 运行时分配，不需要 LMA */
  .bss : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _ebss = .;
  } > sdram : bss

  /* stack: 放在 sram 的末尾 */
  .stack : {
    . = _eSSBL;
    _stack_bottom = .;
    . = ORIGIN(sram) + LENGTH(sram);
    _stack_top = .;
    _stack_pointer = .;
  } > sram

  . = _ebss;
  _heap_start = ALIGN(0x1000);

  end = .;
  _end = .;
}
