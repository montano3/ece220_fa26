#include <stdio.h>
#include <stdbool.h>

/* use nested for loops to print an n x n identity matrix */
#define N 5

int main(){ 
	int row, col;
	bool flag = 0;
	for (row=0;row<N;row++){
		for(col=0;col<N;col++){
			if (col == row){
				printf("1 ");
				if (col == 2){
					flag = 1;
					break;
				}
			}
			else
				printf("0 ");
		}
		printf("\n");
		if (flag)
			break;
	}
}
