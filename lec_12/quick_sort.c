#include <stdio.h>

#define LENGTH 8

void quicksort(int array[], int start, int end);
int partition(int array[], int low, int high);
void swap(int *x, int *y);
void printarray(int array[]);

int main(){
	int array[LENGTH] = {8,4,13,2,7,6,3,10};

	printf("Unsorted Array:    ");
	printarray(array);

	quicksort(array, 0, LENGTH-1);

	printf("Sorted Array:      ");
	printarray(array);
	return 0;
}

/* Sort array[start..end] in ascending order. */
void quicksort(int array[], int start, int end){
	/* TODO: base case? partition, then "sort subarrays using the same method" */

	if (start > end)
		return;

	int piv_ind = partition(array, start, end);
	quicksort(array, start, piv_ind - 1);// recurse left
	quicksort(array, piv_ind + 1, end);// recurse right



}

/* Given. Chooses array[low] as the pivot, partitions array[low..high]
 * so that everything < pivot is to its left and everything >= pivot
 * is to its right, and returns the pivot's final index.            */
int partition(int array[], int low, int high){
	int pivot = array[low];
	int store_idx = low + 1;
	int i;

	printf("pivot = %2d, range [%d..%d]\n", pivot, low, high);

	for(i=low+1;i<=high;i++){
		if(array[i] < pivot){
			swap(&array[i], &array[store_idx]);
			store_idx++;
		}
	}
	swap(&array[low], &array[store_idx-1]);

	printf("Partitioned Array: ");
	printarray(array);

	return store_idx-1;
}

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void printarray(int array[]){
	int i;
	for(i=0;i<LENGTH;i++)
		printf("%d ", array[i]);
	printf("\n");
}
