// Write a function to print the binary representation of an integer value.

#include <stdio.h>

void binary(unsigned int n);

int main(void) {
    unsigned int num;
    printf("Enter num: ");
    scanf("%u", &num);
    printf("The binary of %u is ", num);
    binary(num);
    return 0;
}

void binary(unsigned int n) {
    if (n == 0) printf("%d", 0);
    unsigned int p = 1;
    while (n >= p ) p *= 2;
    while (p != 1) {
        p /= 2;
        printf("%u", (n / p) % 2);
    }
    printf(".\n");
}
