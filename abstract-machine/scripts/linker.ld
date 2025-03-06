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
    } > mrom AT> mrom : data

    .bss : {
        _bss_start = .;
        *(.bss*)
        *(.sbss*)
        *(.scommon*)
        _bss_end = .;
    } > mrom AT> mrom : data

    _stack_top = ORIGIN(sram) + LENGTH(sram);
    . = _stack_top - 0x8000; 
    _stack_pointer = .;

    _heap_start = .;
    _heap_end = ORIGIN(sram) + LENGTH(sram);
    _heap_size = _heap_end - _heap_start;

    end = .;
    _end = .;
}
