/*
    Scrivere in assembly ARM 32 una subroutine richiamabile da C che modifichi un array di 
    unsigned int passato come argomento sommando a ciascun elemento il valore della 
    rispettiva posizione più uno (array[i]+=(i+1);). 
    Includere nella risposta anche un esempio d'uso in C.
*/

#include <stdio.h>
#include <stdlib.h>

void increment_array(int *array, size_t size);

int main(void)
{
    int array[] = {1, 2, 3};
    size_t size;
    size = sizeof(array)/sizeof(int);
    
    increment_array(array, size);

    return 0;
}
