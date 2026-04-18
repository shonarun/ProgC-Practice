// Write a function to sum the digits of a given positive integer.

#include <stdio.h>

int sum_digits(int num);

int main(void) {
    int num;
    int sum;
    printf("Enter num: ");
    scanf("%d", &num);
    sum = sum_digits(num);
    printf("Sum of digits in %d is %d.\n", num, sum);
    return 0;
}

int sum_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
