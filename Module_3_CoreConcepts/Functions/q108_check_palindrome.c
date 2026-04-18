// Write a function to check whether a given string is a palindrome.

#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(char *s, size_t n);

int main(void) {
    char s[] = "HelleH";
    size_t n = sizeof(s) / sizeof(s[0]) - 1;
    if (is_palindrome(s, n)) {
        printf("'%s' is a palindrome.\n", s);
    } else {
        printf("'%s' is not a palindrome.\n", s);
    }
    return 0;
}

bool is_palindrome(char *s, size_t n) {
    for (unsigned long i = 0; i < n / 2; i++) {
        if (*(s + i) != *(s + n - i - 1)) {
            return false;
        }
    }
    return true;
}
