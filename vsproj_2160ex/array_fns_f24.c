/*
	EECE.2160: ECE Application Programming
	Instructor: M. Geiger

	In-class examples on arrays as function arguments
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double findAvg(double arr[], int n);
int findMax(int arr[], int n);
void sclAry(int test[], int n, int s);

int main() {

	double list1[] = { 1.2, 3.4, 5.6, 7.8, 9, 21.60, 11.8 };

	// "list1" = &list1[0]
	double avg1 = findAvg(list1, 7);

	int list2[] = { 80, 35, 47, 92, 89 };
	int m = findMax(list2, 5);		// Should be 92

/*	double list3[100];
	int count;
	printf("Enter number of inputs: ");
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		printf("Enter list3[%d]: ", i);
		scanf("%lf", &list3[i]);
	}
	double avg2 = findAvg(list3, count);
	*/
	sclAry(list2, 5, 10);
	for (int i = 0; i < 5; i++)
		printf("%d ", list2[i]);
	printf("\n");

	return 0;
}

// Calculate and return average of all n values in arr[]
double findAvg(double arr[], int n) {
	double sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];		// sum = sum + arr[i]
	}

	double avg = sum / n;
	return avg;
}

// Find and return largest value in n-element array arr[]
int findMax(int arr[], int n) {
	int max = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

// Scale all n values in test[] array by s
void sclAry(int test[], int n, int s) {
	for (int i = 0; i < n; i++)
		test[i] += s;
}
