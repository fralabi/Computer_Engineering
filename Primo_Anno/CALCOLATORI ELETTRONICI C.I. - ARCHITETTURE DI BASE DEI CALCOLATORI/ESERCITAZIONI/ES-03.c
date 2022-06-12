/*
    Scrivere in assembly ARM 32 una subroutine richiamabile in C che azzeri i valori
    del generico array di int passato come argomento di valore inferiore a quello
    passato come ulteriore argomento. La funzione deve restituire il numero di elementi
    modificati. Includere nella risposta anche un esempio d'uso in C.

    ESEMPIO D'USO (con soglia pari a 5):

    $ ./threshold

    INPUT 
    -1
    -3
    5
    8

    OUTPUT
    0
    0
    5
    8

    Changed values: 2
*/

#include <stdio.h>
#include <stdlib.h>

int threshold(int *array, size_t size);

int main(void)
{
    int array[] = {-1, -3, 5, 8};
    size_t size;
    size = sizeof(array)/sizeof(int);
    
    printf("Changed values: %d", threshold(array, size));

    return 0;
}