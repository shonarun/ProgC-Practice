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
    if (num < 2) {
        return false;
    } else if (num == 2) {
        return true;
    } else if (!(num % 2)) {
        return false;
    } else {
        for (unsigned long long i = 3; i * i <= num; i += 2) {
            if (!(num % i)) {
                return false;
            }
        }
        return true;
    }
}
