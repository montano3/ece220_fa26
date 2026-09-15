#include <stdio.h>

int main(){
	/* declare integer variables x, y and z */
	int x,y,z;

	/* set x to 3, set y to x square */
	x = 3;
	y = x * x;
	//printf("%d,%d\n", x, y);

	// 0d3 = 0b0011
	// 0d6 = 0b0110
	// 0d7 = 0b0111
	/* left shift y by x number of bits */
	y = y << x;

	/* perform bitwise OR on x and y, store the result to z */
	/* what would happen if we have 'z=x||y;' ? */
	z = x || y;

	/* print z */
	printf("%X\n", z);

	return 0;
}

