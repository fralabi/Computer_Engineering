@ int
@ threshold(int *array, size_t size);

.global threshold

threshold:

    array   .req r0
    size    .req r1
    value   .req r2
    changed .req r3
    
    mov changed, #0

1:
    ldr value, [array]
    cmps value, #0          @ compare with zero to find negative number
    strmi #0, [array], #4   @ mi = minus/negative
    addmi changed, changed, #1
    subs size, size, #1
    bne 1b

    .unreq array
    .unreq size
    .unreq value

    mov r0, changed

end: 
    bx lr