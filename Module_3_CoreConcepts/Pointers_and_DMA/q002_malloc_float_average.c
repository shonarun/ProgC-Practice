// rite a program to allocate memory dynamically for an array of `n` floats using `malloc()`, calculate their average, and then free the memory.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t n;
    printf("Enter number of elements: ");
    scanf("%zu", &n);
    if (n == 0) {
        printf("Invalid input.\n");
        return 1;
    }

    float *arr = (float *) malloc(n * sizeof(float));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 2;
    }
    float sum = 0.0f;
    for (size_t i = 0; i < n; i++) {
        printf("Enter element %zu: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    printf("The average is: %.2f.\n", sum / n);
    free(arr);

    return 0;
}
