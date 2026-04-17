// Write a recursive function to calculate the factorial of a given positive integer.

#include <stdio.h>

unsigned long long calculate_factorial(int n);

int main(void) {
    int num;
    printf("Enter number num: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("num can't be less than zero.\n");
        return 1;
    }
    unsigned long long result = calculate_factorial(num);
    printf("The factorial of %d is %llu. \n", num, result);
    return 0;
}

unsigned long long calculate_factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * calculate_factorial(n - 1);
}
