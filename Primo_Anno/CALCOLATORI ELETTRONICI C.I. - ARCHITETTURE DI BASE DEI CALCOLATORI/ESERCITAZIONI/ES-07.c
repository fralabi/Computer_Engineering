/*
    Scrivere in assembly ARM 32 una subroutine richiamabile da C che restituisca il numero 
    di valori maggiori di 15 contenuti in un array di int passato come argomento. 
    Includere nella risposta anche un esempio d'uso in C. 
*/

#include <stdio.h>
#include <stdlib.h>

int greather_than_fiftheen(int *array, size_t size);

int main(void) {

    int array[] = {13, 17, 16, 89, 10, 2, 57};
    size_t size;
    size = sizeof(array)/sizeof(int);

    printf("There are %d values greather than 15", greather_than_fiftheen(array, size));
}