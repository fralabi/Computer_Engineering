#include <stdio.h>
#include <stdlib.h>

#define DIM 3

void mat_print(size_t dim, int mat[][dim]);
void array_print(int *array, size_t size);

int mat_prime(int dim, int mat[][dim]);
int row_prime(int *row, size_t size);

int main() {
    int mat[DIM][DIM] = {{12,13,14},{15,16,17},{18,19,20}};

    mat_print(DIM, mat);

    printf("%d \n", mat_prime(DIM,mat));
}

int is_prime( int number) {
    
    for(size_t i=3; i<=number/2; ++i) {
        if (number%i == 0) {
            return 0;
        }
    }
    return 1;
}

int row_prime(int *row, size_t size) {

    for(size_t i=0; i<size; ++i) {
        if ((is_prime(row[i]))) {
            return 1;
        }
        continue;
    }
    return 0;
}

int mat_prime(int dim, int mat[][dim]) {

    for(size_t i=0; i<dim; ++i) {
        if (!(row_prime(mat[i], dim))) {
            return 0;
        }
    }
    return 1;
}

void mat_print(size_t dim, int mat[][dim]) {

    for(size_t i=0; i<dim; ++i) {
        for(size_t j=0; j<dim; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n\n");
    }
}

/*
void array_print(int *array, size_t size) {
    size_t i;
    for(i=0; i<size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
*/