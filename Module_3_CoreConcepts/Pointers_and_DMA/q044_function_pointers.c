// Write a program to dynamically allocate an array of function pointers and call them in a loop.

#include <stdio.h>
#include <stdlib.h>

void func_A(void) { printf("A\n"); }
void func_B(void) { printf("B\n"); }

int main(void) {
    void (**func_arr)(void) = malloc(2 * sizeof(void(*)(void)));
    func_arr[0] = func_A;
    func_arr[1] = func_B;

    for (int i = 0; i < 2; i++) {
        func_arr[i]();
    }
    
    free(func_arr);
    return 0;
}
