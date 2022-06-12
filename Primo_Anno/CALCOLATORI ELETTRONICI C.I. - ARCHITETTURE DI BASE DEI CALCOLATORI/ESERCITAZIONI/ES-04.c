/*
    Scrivere in assembly ARM 32 una subroutine richiamabile da C che restituisca il numero 
    di valori negativi contenuti in un array di int, di lunghezza non predeterminata, 
    passato come argomento e li sostituisca con un valore passato come ulteriore argomento. 
    Includere nella risposta anche un esempio d'uso in C.
*/

#include <stdio.h>
#include <stdlib.h>

int return_neg(int *array, size_t size, int substitute);

int main(void) {

    int array[] = {1, -1, 4, -2, 4, 4, -5};
    size_t size;
    size = sizeof(array)/sizeof(int);

    printf("Changed values: %d", return_neg(array, size, 10));

    return 0;
}