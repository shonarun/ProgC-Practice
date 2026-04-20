// Write a program to rotate a square 2D matrix by 90 degrees clockwise in-place.

#include <stdio.h>

void rotate_90_clockwise(int **mat, size_t n);

int main(void) {
    return 0;
}

void rotate_90_clockwise(int **mat, size_t n) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = i + 1; j < n; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    for (size_t i = 0; i < n; i++) {
        size_t start = 0;
        size_t end = n - 1;
        while (start < end) {
            int temp = mat[i][start];
            mat[i][start] = mat[i][end];
            mat[i][end] = temp;
            start++;
            end--;
        }
    }
}
