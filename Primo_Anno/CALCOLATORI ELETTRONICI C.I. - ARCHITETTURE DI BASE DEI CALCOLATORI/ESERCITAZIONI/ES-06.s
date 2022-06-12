@ void
@ increment_array(int *array, size_t size);

.global increment_array

increment_array:

    array 	.req r0
    size 	.req r1
    value	.req r2
    index   .req r3

    mov index, #0       @ index = 0


1: 
    ldr value, [array]              @ value = array[index]
    add value, value, index         @ value += index
    add value, value, #1            @ value += 1
    str value, [array], #4          @ array[index] = value and ADD 4 to array address
    add index, index, #1            @ index += 1
    subs size, size, #1
    bne 1b

    .unreq array
    .unreq size
    .unreq value
    .unreq indice

end:
    bx lr
