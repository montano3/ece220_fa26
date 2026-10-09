#include <stdio.h>
#include <stdlib.h>

#define LENGTH 9

int binary(int array[], int item, int start, int end);

int main(int argc, char *argv[]){
	int array[LENGTH] = {1,3,5,7,9,11,13,15,17};
	int item = (argc > 1) ? atoi(argv[1]) : 3;   /* ./recursive_binary 3 */

	int idx = binary(array, item, 0, LENGTH-1);

	if(idx >= 0)
		printf("%d found at index %d\n", item, idx);
	else
		printf("%d not found\n", item);
	return 0;
}

/* array is sorted in ascending order; search only between
 * index start and index end (inclusive).
 * Returns the index of item, or -1 if it is not in the array. */
int binary(int array[], int item, int start, int end){
	/* TODO: same algorithm as the iterative version --
	 *       what is the base case? what are the two recursive calls? */

	int mid_ind = (start + end) / 2;
	int mid = array[mid_ind];

	if (start > end)
		return -1; // not found base case

	if (mid == item)
		return mid_ind; // found base case

	if (item < mid)
		return binary(array, item, start, mid_ind - 1); // left recursive case

	if (item > mid)
		return binary(array, item, mid_ind + 1, end); // right recursive case

}
