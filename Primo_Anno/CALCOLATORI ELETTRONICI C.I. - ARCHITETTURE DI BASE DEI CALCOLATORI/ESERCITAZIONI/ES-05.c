/*
    Scrivere in assembly ARM 32 una subroutine richiamabile da C che modifichi un array 
    di unsigned int passato come argomento dividendo ciascun valore per 4 (array[i]=array[i]/4;). 
    Includere nella risposta anche un esempio d'uso in C.
*/

#include <stdio.h>
#include <stdlib.h>

void divide_by_four(unsigned int *array, size_t size);

int main(void) {

    unsigned int array[] = {8, 4, 12, 16, 8};
    size_t size;
    size = sizeof(array)/sizeof(unsigned int);

    divide_by_four(array, size);
}

