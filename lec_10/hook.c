/*
 * make hook && ./hook
 */
#include <stdio.h>

int main(void) {
    int exam[4] = {55, 62, 71, 48};   /* exam scores for 4 students */
    int hw[4];                        /* homework scores            */
    int i;

    /* Everyone gets full homework credit. */
    for (i = 0; i <= 4; i++) {
        hw[i] = 100;
    }

    printf("hw:   %d %d %d %d\n", hw[0], hw[1], hw[2], hw[3]);
    printf("exam: %d %d %d %d\n", exam[0], exam[1], exam[2], exam[3]);
    return 0;
}
