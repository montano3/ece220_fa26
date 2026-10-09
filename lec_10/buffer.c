/*
 * make buffer && ./buffer
 */
#include <stdio.h>

int main(void) {
    char password[16] = "ECE_TEST_CODE";
    char buffer[16];

    printf("Password:    [%s]\n", password);

    printf("\nEnter your search item: ");
    scanf("%16s", buffer);

    printf("\nPassword:    [%s]\n", password);
    printf("Search item: [%s]\n", buffer);
    return 0;
}
