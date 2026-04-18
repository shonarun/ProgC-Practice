// Write a function to check if a number is prime.

#include <stdio.h>
#include <stdbool.h>

bool is_prime(unsigned long long num);

int main(void) {
    unsigned long long num;
    printf("Enter num: ");
    scanf("%llu", &num);
    if (is_prime(num)) {
        printf("Number %llu is a prime number.\n", num);
    } else {
        printf("Number %llu is not a prime number.\n", num);
    }
    return 0;
}

bool is_prime(unsigned long long num) {
    unsigned long long i;
    for (i = 2; i * i <= num; i++) {
        if (!(num % i)) {
            return false;
        }
    }
    return true;
}
