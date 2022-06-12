/*
    Scrivere in assembly ARM 32 una subroutine richiamabile da C che restituisca la somma dei bit a 0
    dei valori contenuti in un array di int passato come argomento. Includere nella risposta anche un esempio d'uso in C.
*/

#include <stdio.h>
#include <stdlib.h>

void array_print(int *array, size_t size);
bit0sum(int *array, size_t size);

void
array_print(int *array, size_t size){
	size_t i;

	for(i=0; i<size; ++i){
		printf("%i\n",array[i]); 
	}
}

int 
main(){
    int array[]={1,2,3};
    size_t size;
    
    size=sizeof(array)/sizeof(int);

    printf("Input array: \n");
    array_print(array, size);

    printf("bit0sum: %zu\n", bit0sum(array,size));

    return 0;
}