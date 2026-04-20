// Write a program to reallocate memory for an integer array from size `n` to `2n` using `realloc()` and initialize the newly added elements to zero.

#include <stdio.h>
#include <stdlib.h>

int* double_and_init(int *arr, size_t n);

int main(void) {
    size_t size = 3;
    int *arr = (int *) malloc(size * sizeof(int));
    arr[0] = 5; arr[1] = 4; arr[2] = 6;
    arr = double_and_init(arr, size);
    for (size_t i = 0; i < 2 * size; i++) {
        printf("%d ", arr[i]);
    } printf("\n");
    free(arr);
    return 0;
}

int* double_and_init(int *arr, size_t n) {
    int *new_arr = (int *) realloc(arr, n * 2 * sizeof(int));
    if (!new_arr) return NULL;

    for (size_t i = n; i < 2 * n; i++) {
        new_arr[i] = 0;
    }
    return new_arr;
}
