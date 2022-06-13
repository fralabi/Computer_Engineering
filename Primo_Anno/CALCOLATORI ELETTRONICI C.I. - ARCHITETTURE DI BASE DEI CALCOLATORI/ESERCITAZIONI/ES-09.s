@ void
@ divide_by_16(unsigned int *array, size_t size);

.global

divide_by_16:

    array       .req r0
    size        .req r1
    value       .req r2
    index       .req r3

    mov index, #0

1: 
    cmp index, size
    beq 2f

    ldr value, [array, index, lsl #2]

    @ apply a mask on the first 4 bits to extract the last 4 bits
    bic value, value, 0x11110000

    str value, [array, index, lsl #2]

@   and value, value, 0x00001111   

    add index, index, #1
    b 1b

2:
    .unreq array
    .unreq size
    .unreq value
    .unreq index

end:
    bx lr
