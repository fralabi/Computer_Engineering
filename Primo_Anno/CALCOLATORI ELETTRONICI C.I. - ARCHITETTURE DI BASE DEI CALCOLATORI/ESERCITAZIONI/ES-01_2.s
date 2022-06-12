@ size_t
@ bit0sum(int *array, size_t size);

.global bit0sum
bit0sum:
    array   .req r0
    size    .req r1
    sum     .req r2
    value   .req r3

    mov sum, #0                     @INIZIALIZZO VARIABILE
    array_end .req r1
    add r1, array, size, lsl #2  @array_end  = array+4*size
    .unreq size

1:  cmp array, array_end

    ldrne value, [array], #4
    andne value, value, #0x00000001   @ULTIMO BIT
    addne sum, sum, value
    bne 1b                          @BACK TO LOOP

    .unreq array
    .unreq size
    .unreq value

    mov r0, sum

    .unreq sum

    bx lr   @ return