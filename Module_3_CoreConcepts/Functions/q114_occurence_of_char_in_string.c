// Write a function to count the occurrences of a specific character in a string.

#include <stdio.h>

unsigned count_occ(char c, char *s);

int main(void) {
    char *s = "Hello";
    char c = 'l';
    unsigned count = count_occ(c, s);
    printf("Count of char '%c' in '%s' is %u.\n", c, s, count);
    return 0;
}

unsigned count_occ(char c, char *s) {
    unsigned count = 0;
    while (*s) {
        if (*s == c) {
            count++;
        }
        s++;
    }
    return count;
}
