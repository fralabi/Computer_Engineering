/*
    Scrivere in assembly arm 32 una subroutine richiamabile da C che restituisca il numero di 
    valori dispari contenuti in un array di int passato come argomento. 
    Includere nella risposta anche un esempio d'uso in C.
*/

#include <stdio.h>
#include <stdlib.h>

int odd(int *array, size_t size);

int main(void) {

    int array[] = {1,2,3,4,5,6,7,8,9};
    size_t size;
    size = sizeof(array)/sizeof(int);

    printf("There are %d odd numbers", odd(array, size));

    return 0;
} 