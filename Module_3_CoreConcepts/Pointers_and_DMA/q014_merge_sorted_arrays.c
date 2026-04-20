// Write a C program to merge two sorted arrays of different sizes into a single dynamically allocated sorted array.

#include <stdio.h>
#include <stdlib.h>

int* merge_sorted(int *a, int *b, size_t na, size_t nb);

int main(void) {
    int a[] = {1, 3, 8, 9, 10};
    int b[] = {3, 6, 7, 9, 11};
    size_t na = sizeof(a) / sizeof(a[0]);
    size_t nb = sizeof(b) / sizeof(b[0]);

    int *res = merge_sorted(a, b, na, nb);
    for (size_t i = 0; i < na + nb; i++) {
        printf("%d ", *(res + i));
    } printf("\n");
    return 0;
}

int* merge_sorted(int *a, int *b, size_t na, size_t nb) {
    int *res = (int *) malloc((na + nb) * sizeof(int));
    if (!res) return NULL;

    size_t i = 0, j = 0, k = 0;
    while (i < na && j < nb) {
        res[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    }
    while (i < na) res[k++] = a[i++];
    while (j < nb) res[k++] = b[j++];

    return res;
}
