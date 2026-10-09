#include <stdio.h>
#include <stdlib.h>
/*
 * Recursive Fibonacci with look-up table. 
 */

int table[1000];

int fib(int n)
{
	if (table[n] != -1)
		return table[n];

	if (n == 0)
		table[n] = 0;
	else if (n == 1)
		table[n] = 1;
	else 
		table[n] = fib(n-1) + fib(n-2);

	return table[n];
}

int main(int argc, char **argv)
{
	int i,num,n=3;
	for(i=0;i<100;i++)
		table[i] = -1;

	if (argc > 0)
		printf("%s\n", argv[0]);
	if (argc > 1)
		n = atoi(argv[1]);
	num = fib(n);
	printf("fib(%d) = %d\n", n, table[n]);
	printf("Print Table: %d, %d, %d, %d, %d, %d\n", table[0], table[1], table[2],table[3],table[4],table[5]);
	return 0;
}
