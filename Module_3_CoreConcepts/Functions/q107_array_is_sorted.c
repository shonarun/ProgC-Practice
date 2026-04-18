// Write a function to check if an array of integers is sorted in ascending order.

#include <stdio.h>

int array_is_sorted(int arr[], int size);

int main(void) {
    int arr[] = {1, 5, 6, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int flag = array_is_sorted(arr, size);
    if (flag) {
        printf("Array is sorted.\n");
    } else {
        printf("Array is not sorted.\n");
    }
    return 0;
}

int array_is_sorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
    }
    return 1;
}
