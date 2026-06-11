/*
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * In-class examples on one-dimensional arrays
 *   generated during Fall 2020 semester
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr1[20];
	int i;

	// Declare and initialize array without size
	//    Compiler determines size from size of initial list
	double arr2[] = { 1.2, 3.4, 5.6, 7.8 };
	
	// Partial array initializations
	int arr3[5] = { 1, -1 };	// arr3[] = {1, -1, 0, 0, 0}
	double arr4[2160] = { 0 };	// arr4[] = 2160 copies of 0

	arr1[0] = 5;			// Sets first element in arr1 to 5
	arr1[1] = arr1[0] + 3;	// Sets second element in arr1 to 8
	i = 19;
	arr1[i] = 2160;			// Sets last element in arr1 to 2160
							//   since i = 19 (OR DOES IT?)

	// Set every element in array = 5
	for (i = 0; i < 20; i++)
		arr1[i] = 5;

	// Read a new user input value into each array element
	for (i = 0; i < 20; i++) {
		printf("Enter value for arr[%d]: ", i);
		scanf("%d", &arr1[i]);
	}

	// Print entire array from last to first element
	for (i = 19; i >= 0; i--)
		printf("arr[%d] = %d\n", i, arr1[i]);

	// Read inputs into array until negative # entered
	int count = 0;
	int v;		// Input number
	do {
		printf("Enter value: ");
		scanf("%d", &v);
		if (v >= 0) {
			arr1[count++] = v;
		}
	} while (v >= 0 && count < 20);
	// count = # values actually in array

	return 0;
}