#include <stdio.h>

void print_val(int x, int y, int z)
{
	printf("%d %d %d\n", x, y, z);
}

int main()
{
	int val = 10;

	//what is the value being printed? Is it what you would expect?
	print_val(val, ++val, val++);
	// 12, 12, 10

	return 0;
}
