ENTRY(_start)

PHDRS {
    text PT_LOAD FILEHDR PHDRS;
    data PT_LOAD;
    mrom PT_LOAD;
}

MEMORY {
    mrom (rx) : ORIGIN = 0x20000000, LENGTH = 4K
    sram (rwx) : ORIGIN = 0x0F000000, LENGTH = 1M
}

SECTIONS {
    . = ORIGIN(mrom);
    .text : {
        *(entry)
        *(.text*)
        *(.rodata*)
    } > mrom : mrom

    .data : {
        *(.data*)
        *(.sdata*)
    } > sram : data

    .bss : {
        _bss_start = .;
        *(.bss*)
        *(.sbss*)
        *(.scommon*)
        _bss_end = .;
    } > sram : data

    _stack_top = ALIGN(0x1000);
    . = _stack_top + 0x8000;
    _stack_pointer = .;
    end = .;
    _end = .;
    _heap_start = ALIGN(0x1000);
}
