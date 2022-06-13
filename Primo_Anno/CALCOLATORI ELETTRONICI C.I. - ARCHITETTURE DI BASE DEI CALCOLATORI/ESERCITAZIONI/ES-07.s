@ int
@ greather_than_fiftheen(int *array, size_t size);

.global greather_than_fiftheen

greather_than_fiftheen:

    array       .req r0
    size        .req r1
    value       .req r2
    greather    .req r3

//  push {r4}
//  index       .req r4

    mov greather, #0
//  mov index, #0

1:
    ldr value, [array], #4
    
    cmp value, #15      @ cmp make difference between value and 15

    @ if the difference is positive, the value is greather than 15
    addgt greather, greather, #1    @ gt = greather than

    subs size, size, #1
    bne 1b

/*
1:  
    cmp index, size
    beq 2f

    ldr value, [array, index, lsl #2]   @ value = [array+(index*4)]

    cmp value, #15                     
    addgt greather, greather, #1

    add index, index, #1                @ index += 1
    b 1b

2:    
 */
    .unreq array
    .unreq size
    .unreq value

    mov r0, greather     @ return greather

    .unreq greather

    pop {r4}

end:
    bx lr