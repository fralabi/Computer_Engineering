#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 5

//void array_print(int ++arr, size_t rows, size_t, cols)
void mat_print(size_t rows, size_t cols, int mat[][cols]);

void array_print(int *array, size_t size);

int array_max(int *array, size_t size);
int array_min(int *array, size_t size);

int *function_01(int rows, int cols, int mat[][cols], int *min_of_max);

int main() {
    int mat[ROWS][COLS] = {{3,8,5,2,1},{5,1,7,3,4},{3,1,9,7,2},{2,1,4,5,3}};
    int *max_of_rows;
    int min_of_max;
    
    mat_print(ROWS, COLS, mat);

    max_of_rows = function_01(ROWS, COLS, mat, &min_of_max);
    array_print(max_of_rows, ROWS);
    printf("min_of_max = %d\n", min_of_max);

    return 0;
}

void mat_print(size_t rows, size_t cols, int mat[][cols]) {

    for(size_t i=0; i<rows; ++i) {
        for(size_t j=0; j<cols; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n\n");
    }
}

void array_print(int *array, size_t size) {
    size_t i;
    for(i=0; i<size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int array_max(int *array, size_t size) {
    size_t i;
    int max=array[0];

    for(i=0; i<size; ++i) {
        if(array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

int array_min(int *array, size_t size) {
    size_t i;
    int min=array[0];

    for(i=0; i<size; ++i) {
        if(array[i] < min) {
            min = array[i];
        }
    }

    return min;
}

int *function_01(int rows, int cols, int mat[][cols], int *min_of_max) {

    int *max_of_rows = (int *) malloc(rows * sizeof(int));


    // int max_of_rows[rows] -> Non va bene perchè l'array viene allocato localmente
    for(size_t i=0; i<rows; ++i) {
        //printf("MAX of ROW %d = %d\n", i, array_max(mat[i], cols));
        max_of_rows[i] = array_max(mat[i], cols);
    }

    *min_of_max = array_min(max_of_rows, rows);

    return max_of_rows;
}
