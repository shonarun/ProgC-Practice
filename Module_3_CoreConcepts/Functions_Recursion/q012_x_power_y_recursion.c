// Write a recursive function to compute `x` raised to the power `y` (x^y).

#include <stdio.h>

long long int x_power_y(int x, int y);

int main(void) {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    long long int result = x_power_y(x, y);
    printf("Enter %d^%d is %lli.\n", x, y, result);
    return 0;
}

long long int x_power_y(int x, int y) {
    if (y == 0) {
        return 1;
    }
    return x * x_power_y(x, y - 1);
}
