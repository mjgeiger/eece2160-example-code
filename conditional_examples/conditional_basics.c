/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * If statements (Topic #5)
 *
 * Basic if, else if, and else blocks
 ***********************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, X;			// Input values

	printf("Enter A, B, and X: ");
	scanf("%d %d %d", &A, &B, &X);

	
	if (A == 0) {			// Simple if statement
		X = X + 1; 
	}
	
	else if (B == 0) {		// Only executes if A != 0
		X = X - 1;
	}
	else {					// Only executes if A != 0 && B != 0
		X = 0;
	}

	printf("A = %d, B = %d, X = %d\n", A, B, X);

	return 0;
}