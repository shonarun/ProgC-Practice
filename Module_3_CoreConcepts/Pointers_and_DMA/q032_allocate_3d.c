// Write a program to dynamically allocate a 3D array of integers and initialize all elements to 1.

#include <stdio.h>
#include <stdlib.h>

int*** allocate_3d(size_t x, size_t y, size_t z);

int main(void) {
    return 0;
}

int*** allocate_3d(size_t x, size_t y, size_t z) {
    int ***matrix = (int ***) malloc(x * sizeof(int **));
    if (!matrix) return NULL;
    for (size_t i = 0; i < x; i++) {
        matrix[i] = (int **) malloc(y * sizeof(int *));
        if (!matrix[i]) return NULL;
        for (size_t j = 0; j < y; j++) {
            matrix[i][j] = (int *) malloc(z * sizeof(int));
            if (!matrix[i][j]) return NULL;
            for (size_t k = 0; k < z; k++) {
                matrix[i][j][k] = 1;
            }
        }
    }
    return matrix;
}
