@ int
@ return_neg(int *array, size_t size, int substitute);

.global 

return_neg:

    array       .req r0
    size        .req r1
    substitute  .req r2
    value       .req r3

    push {r4}

    changed     .req r4

1:
    ldr value, [array]

    @ negative or positive value?
    cmp value, #0                   @ compare with zero to find negative number
    
    @ if is a negative number
    strmi substitute, [array], #4   @ mi = minus/negative
    addmi changed, changed, #1

    @ if is a positive number
    strpl array, array, #4

    subs size, size, #1
    bne 1b

    .unreq array
    .unreq size
    .unreq substitute
    .unreq value

    mov r0, changed     @ return changed

    pop {r4}

end:
    bx lr
