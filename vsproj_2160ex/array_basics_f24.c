#include <stdio.h>

int main() {
	int arr[5] = {1, 1, 1, 1, 1};

	arr[1] = 10;			// arr[1] --> second value in arr
	arr[0] = arr[1] * 2;	// arr[0] --> first value in arr
	arr[4] = 2160;			// arr[4] --> last value in arr
	// arr[5] = 1;			GOES OUTSIDE ARRAY

	for (int i = 0; i < 5; i++) {
		printf("Enter value: ");
		scanf("%d", &arr[i]);	// "arr sub i" --> arr[i]
	}

	int arr2[] = { 2, 3, 4 };

	// Below equivalent to: 
	//   int arr3[] = {10, 20, 30, 0, 0, 0};
	int arr3[6] = { 10, 20, 30 };

	double giantArray[20000] = { 0 };

}