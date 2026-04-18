// Write a function to compute `x` raised to the power `y` (x^y).

#include <stdio.h>

long long int x_power_y(int x, int y);

int main(void) {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    long long int result = x_power_y(x, y);
    printf("%d^%d is %lli.\n", x, y, result);
    return 0;
}

long long int x_power_y(int x, int y) {
    long long int result = 1;
    while (y > 0) {
        result *= x;
        y--;
    }
    return result;
}
