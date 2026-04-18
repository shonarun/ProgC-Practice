// Write a function to check if an array of integers is sorted in ascending order.

#include <stdio.h>

int array_is_sorted(int arr[], size_t size);

int main(void) {
    int arr[] = {1, 5, 6, 8, 9};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int flag = array_is_sorted(arr, size);
    if (flag) {
        printf("Array is sorted.\n");
    } else {
        printf("Array is not sorted.\n");
    }
    return 0;
}

int array_is_sorted(int arr[], size_t size) {
    for (size_t i = 1; i < size - 1; i++) {
        if (arr[i - 1] > arr[i]) {
            return 0;
        }
    }
    return 1;
}
