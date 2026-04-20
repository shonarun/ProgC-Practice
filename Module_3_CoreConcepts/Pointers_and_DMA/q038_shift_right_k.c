// Write a function to shift all elements of a 1D array to the right by `k` steps using a dynamically allocated temporary array.

#include <stdio.h>
#include <stdlib.h>

void shift_right(int *arr, size_t n, size_t k);

int main(void) {
    return 0;
}

void shift_right(int *arr, size_t n, size_t k) {
    k = k % n;
    if (k == 0) return;
    int *temp = malloc(n * sizeof(int));
    for (size_t i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    for (size_t i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    free(temp);
}
