// Write a function to find the maximum element in an array.

#include <stdio.h>

unsigned max_ele(int arr[], unsigned size);

int main(void) {
    int arr[] = {1, 2, 114, 5, 8, 9};
    unsigned size = sizeof(arr) / sizeof(arr[0]);
    unsigned max_idx = max_ele(arr, size);
    printf("Maximum element is %d at the index %d.\n", arr[max_idx], max_idx);
    return 0;
}

unsigned max_ele(int arr[], unsigned size) {
    unsigned max_idx = 0;
    int max = arr[0];
    for (unsigned i = 1; i < size; i++) {
        if (arr[i] > max) {
            max_idx = i;
            max = arr[i];
        }
    }
    return max_idx;
}
