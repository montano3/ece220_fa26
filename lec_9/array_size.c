#include <stdio.h>

void arraysize(int x[10])
{
        printf("Size of x in arraysize() is %ld bytes\n", sizeof(x));
}

int main()
{
        int x[10];
        int *ptr;
        printf("Size of x is %ld bytes\n", sizeof(x));
        printf("Size of ptr is %ld bytes\n", sizeof(ptr));
        arraysize(x);
        return 0;
}
