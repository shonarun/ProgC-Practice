// Write a function to return a pointer to the largest element in an array of integers.

#include <stdio.h>

int *max_ele(int *arr, size_t size);

int main(void) {
    int arr[] = {1, 2, 5, 8, 9, 1, 0};
    size_t size = sizeof(arr) / sizeof(*arr);
    printf("The largest element in the array ");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("is %d.\n", *max_ele(arr, size));
    return 0;
}

int *max_ele(int *arr, size_t size) {
    unsigned int max_idx = 0;
    int max = *(arr + max_idx);
    for (size_t i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max_idx = i;
            max = *(arr + i);
        }
    }
    return arr + max_idx;
}
