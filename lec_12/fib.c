#include <stdio.h>
#include <stdlib.h>


// F_0 = 0
// F_1 = 1
int fib(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	return fib(n-1) + fib(n-2);

}

int main(int argc, char **argv)
{

	int n=3;

	if (argc > 1)
		n = atoi(argv[1]);

	printf("fibonacci(%d)=%d \n",n,fib(n));

	return 0;
}
