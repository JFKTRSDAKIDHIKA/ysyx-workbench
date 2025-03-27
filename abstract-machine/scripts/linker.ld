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
  sdram : ORIGIN = 0xa4000000, LENGTH = 4M
}

SECTIONS {
  . = ORIGIN(flash);
  _flash_start = .;

  _sdram_start = ORIGIN(sdram);
  _sdram_end = ORIGIN(sdram) + LENGTH(sdram);

  /* First stage Bootloader 段：VMA 和 LMA 都在 Flash 中 */
  .FSBL : {
    *(entry)   /* 程序入口点 */
    *(.FSBL*)  /* 匹配所有 .FSBL 段 */
  } > flash AT> flash : FSBL

  /* Second stage Bootloader 段：VMA 在SRAM， LMA 都在 Flash 中 */
  .SSBL : {
    _SSBL_lma = LOADADDR(.SSBL);
    . = ORIGIN(sram);
    _SSBL = .;
    *(.SSBL*)  /* 匹配所有 .SSBL 段 */
    _eSSBL = .;
  } > sram AT> flash : SSBL

  .text : {
    _text_lma = LOADADDR(.text);
    _text = .;    /* .text段在sdram的起始地址 */
    *(.text*)
    *(.rodata*)
    . = ALIGN(4);
    _etext = .;   /* .text段在sdram的结束地址 */
  } > sdram AT> flash : text

  .data : {
    _data_lma = LOADADDR(.data);  /* LMA（加载地址）来自 flash */
    _data = .;                    /* VMA（运行时地址）在 sdram */
    *(.data .data.* .sdata.*)     /* 匹配所有 .data 和 .data.* 子段 和.sdata.* 子段*/
    _edata = .;
  } > sdram AT> flash : data
  _data_len = _edata - _data;

  .bss : {
	  _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _ebss = .;
  } > sdram : bss

  /* 将栈分配到 SRAM 中 */
  .stack : {
    . = _eSSBL;         
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
