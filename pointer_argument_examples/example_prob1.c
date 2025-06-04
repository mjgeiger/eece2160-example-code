// EECE.2160: ECE Application Programming
// Instructor: M. Geiger
// First in-class example problem related to pointers

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int* a, int* b);

int main() {
	int x = 1;
	int y = 2;
	int result1, result2, result3;

	result1 = f(&x, &y);
	result2 = f(&y, &result1);			
	result3 = f(&result1, &result2);	// Before call, result1 = 4, result2 = 4
										// After call, result1 = 1, result2 = 16

	printf("x = %d, y = %d\n", x, y);
	printf("Result 1: %d\n", result1);
	printf("Result 2: %d\n", result2);
	printf("Result 3: %d\n", result3);

	return 0;
}

int f(int* a, int* b) {
	int copyB = *b;
	while (*a > 1) {
		*b += copyB;	// *b = *b + copyB;
		(*a)--;			// *a = *a - 1
	}
	return *b;
}