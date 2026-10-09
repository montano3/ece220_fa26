/*
 * ECE 220 Lecture 10 - string I/O and the terminating '\0'
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char input_string[20];
    int count;

    printf("Enter a word (fewer than 20 characters): ");
    scanf("%s", input_string);
    printf("You typed: [%s]\n", input_string);

    /* TODO: count the characters by hand, 
     * stopping at the terminating '\0' 
     * */
    count = 0;
    //while ( char != 0){
    while (input_string[count]){
	    count++;
    }

    printf("Manual count: %d\n", count);
    printf("strlen:       %zu\n", strlen(input_string));
    printf("sizeof:       %zu\n", sizeof(input_string));
    return 0;
}
