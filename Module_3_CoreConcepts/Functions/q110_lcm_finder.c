// Write a function to find the least common multiple (LCM) of two numbers.

#include <stdio.h>

unsigned long lcm(unsigned int a, unsigned int b);

int main(void) {
    unsigned a, b;
    printf("Enter a: ");
    scanf("%u", &a);
    printf("Enter b: ");
    scanf("%u", &b);
    printf("The LCM of %u and %u is %lu.\n", a, b, lcm(a, b));
    return 0;
}

unsigned long lcm(unsigned int a, unsigned int b) {
    if (a == 0 || b == 0) return 0;
    unsigned int max = (a > b) ? a : b;
    unsigned int min = (a < b) ? a : b;
    for (unsigned int i = max; i <= a * b; i += max) {
        if (i % min == 0) {
            return i;
        }
    }
}
