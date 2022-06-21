@ int
@ less_than(int *array, int size, int limite);

.global less_than

less_than:

    array   .req r0
    size    .req r1
    limite  .req r2
    value   .req r3

    push {r4}

    less    .req r4

    mov less, #0    @ less = 0

1:
    ldr value, [array], #4
    cmp value, limite

    addlt less, less, #1    @ less++;

    subs size, size, #1
    bne 1b

    .unreq array
    .unreq size
    .unreq limite
    .unreq value

    mov r0, less    @ return less

    pop {r4}

end:
    bx lr
