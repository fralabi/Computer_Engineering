@ void
@ max_index(int *array, size_t size);

.global max_index
max_index:
    array           .req r0
    size            .req r1
    index_of_max    .req r2
    max_value       .req r3

    push {r4-r5}

    index       .req r4
    value       .req r5

    mov index_of_max, #0                @ index_of_max = 0
    mov index, #0                       @ index = 0
    ldr max_value, [array]              @ max_value = array[0]

1:  
    add index, index, #1                @ index += 1
    cmp index, size
    beq 2f
    ldr value, [array, index, lsl #2]   @ value = array[index]
    cmp value, max_value
    movgt index_of_max, index
    movgt max_value, value
    b 1b

2: 
    .unreq array
    .unreq size
    .unreq value
    mov r0, index_of_max
    .unreq index_of_max
    pop {r4-r5}

    bx lr