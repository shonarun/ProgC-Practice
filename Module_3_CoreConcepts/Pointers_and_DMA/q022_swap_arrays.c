// Write a program using pointers to swap two arrays of the same size.

#include <stdio.h>

void swap_a(void **arr1, void **arr2);

int main(void) {
    int a[] = {1, 2, 3, 8, 9};
    int b[] = {8, 4, 3, 1, 0};
    size_t size = sizeof(a) / sizeof(*a);
    printf("Printing array a:\n");
    for (unsigned int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Printing array b:\n");
    for (unsigned int i = 0; i < size; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    printf("Swapping...\n");
    swap_a((void **) &a, (void **) &b);
    printf("Printing array a:\n");
    for (unsigned int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Printing array b:\n");
    for (unsigned int i = 0; i < size; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}

void swap_a(void **arr1, void **arr2) {
    void *temp = *arr1;
    *arr1 = *arr2;
    *arr2 = temp;
}
