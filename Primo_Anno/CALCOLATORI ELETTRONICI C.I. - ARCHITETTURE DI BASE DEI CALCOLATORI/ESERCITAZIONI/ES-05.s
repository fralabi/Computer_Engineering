@ void
@ divide_by_four(int *array, size_t size);

.global

divide_by_four:

    array       .req r0
    size        .req r1
    value       .req r2

1:
    ldr value, [array]

    mov value, value, lsr #2    @ division by four

    str value, [array], #4

    subs size, size, #1
    bne 1b

    .unreq array
    .unreq size
    .unreq value

end: 
    bx lr