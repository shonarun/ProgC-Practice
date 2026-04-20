// Write a function that takes an integer array and its size, and returns the maximum element using pointer arithmetic instead of array indexing.

#include <stdio.h>

int find_max(const int *arr, size_t size);

int main(void) {
    int arr[] = {15, 42, 7, 89, 22};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    if (size == 0) {
        printf("Array is empty.\n");
        return 1;
    }

    int max = find_max(arr, size);
    printf("The maximum element is %d.\n", max);
    return 0;
}

int find_max(const int *arr, size_t size) {
    int max = *arr;
    for (const int *ptr = arr + 1; ptr < arr + size; ptr++) {
        if (*ptr > max) {
            max = *ptr;
        }
    }

    return max;
}
