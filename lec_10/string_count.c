/*
 * ECE 220 Lecture 10 - count a character in a string using a pointer
 * Build and run:  make string_count && ./string_count
 */
#include <stdio.h>

int count_char(const char *str, char target);

int main(void) {
    char text[50];
    char target = 'e';

    printf("Enter a line of text: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    printf("'%c' appears %d times\n", target, count_char(text, target));
    return 0;
}

/* Return how many times target appears in str.
 * Walk the string with the pointer, not with an index. */
int count_char(const char *str, char target) {
    /* TODO */
    return 0;
}
