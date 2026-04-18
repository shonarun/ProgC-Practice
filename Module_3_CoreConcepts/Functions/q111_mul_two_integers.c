// Write a function to multiply two positive integers without using the `*` operator (use repeated addition).

#include <stdio.h>

long int mul(int x, int y);

int main(void) {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    long int prod = mul(a, b);
    printf("The product of %d and %d is %ld.\n", a, b, prod);
    return 0;
}

long int mul(int x, int y) {
    long int prod = 0;
    while (y > 0) {
        prod += x;
        y--;
    }
    return prod;
}
