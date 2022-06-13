/*
    Scrivere in assembly ARM 32 una subroutine richiamabile in C che modifiche un Array 
    di unsigned int passato come argomento sostituendo a ciascun valore il resto della 
    sua divisione per 16. La subroutine deve restituire il numero dei valori modificati. 
    Includere nella risposta anche un esempio d'uso in C.
*/

#include <stdio.h>
#include <stdlib.h>

void divide_by_16(unsigned int *array, size_t size);

int main(void) {

    unsigned int array[] = {8, 16, 123, 345, 32, 45};
    size_t size;
    size = sizeof(array)/sizeof(unsigned int);
}