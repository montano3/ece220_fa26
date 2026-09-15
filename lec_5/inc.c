/* pre vs post inc */
#include <stdio.h>

int main(){
	int x,y;
	x = 4;
	y = ++x;
	printf("value of x, y are %d, %d\n",x, y);

	x = 4;
	y = x++;
	printf("value of x, y are %d, %d\n",x, y);

	return 0;
}
