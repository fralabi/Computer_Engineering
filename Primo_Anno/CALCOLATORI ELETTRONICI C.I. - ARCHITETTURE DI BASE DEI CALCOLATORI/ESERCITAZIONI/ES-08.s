@ int
@ odd(int *array, size_t size);

.global

odd:
    array   .req r0
    size    .req r1
    value   .req r2
    odd     .req r3

    mov odd, #0

1: 
    ldr value, [array], #4

    and value, value, #0x00000001   @ULTIMO BIT

    cmp value, 0x00000001

    @ if is odd increment odd variable
    addeq odd, odd, #1

    subs size, size, #1
    bne 1b                          @BACK TO LOOP

    .unreq array
    .unreq size
    .unreq value

    mov r0, odd

    .unreq odd

end:
    bx lr