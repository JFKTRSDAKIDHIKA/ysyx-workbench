ENTRY(_start)

PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 256M
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  . = ORIGIN(flash);
  _sram_start = ORIGIN(sram);

  .text : {
    *(entry)
    *(.text*)
    *(.rodata*)
    _etext = .;   /* .text段在flash的结束地址 */
  } > flash AT> flash : text

  .data : {
    _data_lma = LOADADDR(.data);  /* LMA（加载地址）来自 flash */
    _data = .;                    /* VMA（运行时地址）在 sram */
    *(.data .data.* .sdata.*)     /* 匹配所有 .data 和 .data.* 子段 和.sdata.* 子段*/
    _edata = .;
  } > sram AT> flash : data
  _data_len = _edata - _data;

  .bss : {
	  _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _ebss = .;
  } 

  _stack_top = ALIGN(0x1000);
  . = _stack_top + 0x1000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);
}
