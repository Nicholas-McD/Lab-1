.section .bss
.global ram
.lcomm ram, 256

.section .text
.global fill_ram
fill_ram:

    mov $ram, %rbx
    add $0x50, %rbx

    movb $0xFF, (%rbx)
    add $1, %rbx
    movb $0xFF, (%rbx)
    add $1, %rbx
    movb $0xFF, (%rbx)
    add $1, %rbx
    movb $0xFF, (%rbx)
    add $1, %rbx
    movb $0xFF, (%rbx)
    add $1, %rbx
    movb $0xFF, (%rbx)
    add $1, %rbx
    movb $0xFF, (%rbx)
    add $1, %rbx
    movb $0xFF, (%rbx)
    add $1, %rbx
    movb $0xFF, (%rbx)

    ret 

.section .note.GNU-stack,"",@progbits
