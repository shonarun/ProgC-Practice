// Write a function to convert a decimal number to binary.

#include <stdio.h>

unsigned long long binary(unsigned int n);

int main(void) {
    unsigned int num;
    printf("Enter num: ");
    scanf("%u", &num);
    printf("The binary of %u is %llu.\n", num, binary(num));
    return 0;
}

unsigned long long binary(unsigned int n) {
    unsigned long long result = 0;
    unsigned long long power = 1;
    while (n > 0) {
        result += power * (n % 2);
        n /= 2;
        power *= 10;
    }
    return result;
}
