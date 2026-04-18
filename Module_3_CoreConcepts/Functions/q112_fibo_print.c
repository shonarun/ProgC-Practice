// Write a function to print the Fibonacci series up to `n` terms.

#include <stdio.h>

void fibo_print(unsigned n);

int main(void) {
    unsigned n;
    printf("Enter n: ");
    scanf("%u", &n);
    fibo_print(n);
    return 0;
}

void fibo_print(unsigned n) {
    if (n == 0) return;
    if (n == 1) {
        printf("0.\n");
        return;
    }
    printf("0, 1");
    unsigned first = 0, second = 1, temp;
    for (unsigned i = 0; i < n - 2; i++) {
        temp = first + second;
        first = second;
        second = temp;
        printf(", %u", temp);
    }
    printf(".\n");
}
