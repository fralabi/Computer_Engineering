/*
    Scrivere in assembly ARM 32 una subroutine richiamabile da C che restituisca il numero di valori
    minori di un valore arbitrario (soglia) contenuti in un array di int, di lunghezza non predefinita, passato come argomento. Il
    valore soglia deve essere passato alla subroutine come terzo argomento. 
    Includere nella risposta anche un esempio d’uso in C.
*/

#include <stdio.h>
#include <stdlib.h>

int less_than(int *array, int size, int limite);

int main() {

    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int size;
    size = sizeof(array)/sizeof(int);

    int limite = 5;

    printf("I numeri minori di %d sono: %d", limite, less_than(array, size, limite));

}