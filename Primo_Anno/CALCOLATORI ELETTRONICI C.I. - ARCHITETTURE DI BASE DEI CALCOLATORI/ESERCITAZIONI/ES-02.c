/*
    Scrivere in assembly ARM 32 una subroutine richiamabile da C che restituisca l'indice
    del primo elemento con valore massimo di un array di int passato come argomento. 
    Includere nella risposta anche un esempio d'uso in C

// ESEMPIO D'USO
$ ./max_index

Input array:
-1
3
4
4
max index: 2, max value: 4
*/

#include <stdio.h>
#include <stdlib.h>

void array_print(int *array, size_t size);
max_index(int *array, size_t size);

void
array_print(int *array, size_t size){
	size_t i;

	for(i=0; i<size; ++i){
		printf("%i\n",array[i]); 
	}
}

int 
main(){
    int array[]={-1,3,4,4};
    size_t size, index;
    
    size=sizeof(array)/sizeof(int);

    printf("Input array: \n");
    array_print(array, size);

    index = max_index(array, size);
    printf("max index: %zu, max value: %i\n", index, array[index]);

    return 0;
}