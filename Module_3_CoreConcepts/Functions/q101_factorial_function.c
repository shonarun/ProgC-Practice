// Write a function to calculate the factorial of a given positive integer.

#include <stdio.h>

unsigned long long factorial(int n);

int main(void) {
    int num;
    unsigned long long fact;
    printf("Enter num: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("Factorial of %d is %llu.\n", num, fact);
    return 0;
}

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    while (n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}
