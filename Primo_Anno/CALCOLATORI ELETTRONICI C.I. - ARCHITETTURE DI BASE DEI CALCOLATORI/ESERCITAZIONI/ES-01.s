@ size_t
@ bit0sum(int *array, size_t size);

.global bit0sum
bit0sum:
    array   .req r0
    size    .req r1
    sum     .req r2
    value   .req r3

    mov sum, #0                     @INIZIALIZZO VARIABILE

1:  
    ldr value, [array], #4
    and value, value, #0x00000001   @ULTIMO BIT
    add sum, sum, value
    subs size, size, #1
    bne 1b                          @BACK TO LOOP

    .unreq array
    .unreq size
    .unreq value

    mov r0, sum

    .unreq sum

    bx lr   @ return