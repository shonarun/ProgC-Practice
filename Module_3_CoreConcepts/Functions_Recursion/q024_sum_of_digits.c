// Write a recursive function to sum the digits of a given positive integer.

#include <stdio.h>

int sum_digits(int num);

int main(void) {
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    int sum = sum_digits(num);
    printf("Sum of digits in %d is %d.\n", num, sum);
    return 0;
}

int sum_digits(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + sum_digits(num / 10);
}
