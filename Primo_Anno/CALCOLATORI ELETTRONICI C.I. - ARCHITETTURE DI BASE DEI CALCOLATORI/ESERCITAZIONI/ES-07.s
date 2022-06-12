@ int
@ greather_than_fifteen(int *array, size_t size);

.global

greather_than_fifteen:

    array       .req r0
    size        .req r1
    value       .req r2
    greather    .req r3

    mov greather, #0

1:
    ldr value, [array], #4
    
    cmp value, #15      @ cmp make difference between value and 15

    @ if the difference is positive, the value is greather than 15
    addpl greather, greather, #1    @ pl = plus/positive or zero

    subs size, size, #1
    bne 1b

    .unreq array
    .unreq size
    .unreq value

    mov r0, greather     @ return greather

    .unreq greather

end:
    bx lr