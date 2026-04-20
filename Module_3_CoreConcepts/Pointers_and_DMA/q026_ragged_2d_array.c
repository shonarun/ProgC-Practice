// Write a program to allocate memory for a ragged 2D array (where each row has a different number of columns) and populate it.

#include <stdio.h>
#include <stdlib.h>

int** allocate_ragged(size_t rows, const size_t *cols_per_row);

int main(void) {
    return 0;
}

int** allocate_ragged(size_t rows, const size_t *cols_per_row) {
    int **matrix = (int **) malloc(rows * sizeof(int *));
    if (!matrix) return NULL;
    for (size_t i = 0; i < rows; i++) {
        matrix[i] = (int *) malloc(cols_per_row[i] * sizeof(int));
        if (!matrix[i]) return NULL;
    }
    return matrix;
}
