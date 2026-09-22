#include <stdio.h>


void array_reverse(int array[], int n);
void print_array(int array[], int n);

int main(){

	int arr[6] = {1,2,3,4,5,6};

	print_array(arr, sizeof(arr)/sizeof(arr[0]));
	array_reverse(arr, sizeof(arr)/sizeof(arr[0]));
	print_array(arr, sizeof(arr)/sizeof(arr[0]));

	return 0;
}

void array_reverse(int array[], int n){

	int i;
	for(i=0; i < n/2; i++){
		int temp = array[i];
		array[i] = array[(n-1)-i];
		array[(n-1)-i] = temp;
	}

}

void print_array(int array[], int n){
	int i;
	for(i=0;i < n; i++)
		printf("%d ", array[i]);
	printf("\n");
}

