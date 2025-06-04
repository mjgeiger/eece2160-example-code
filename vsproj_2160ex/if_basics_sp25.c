/* 
	EECE.2160: ECE Application Programming
	Instructor: M. Geiger

	Conditional statement basics
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, X;

	printf("Enter A, B, X: ");
	scanf("%d %d %d", &A, &B, &X);

	/*
	* Comparison operators:
	*	==		!=
	*	<		>
	*	<=		>=
	*/
	if (A == 0) {
		X = X + 1;
	}
	else if (B == 1) {		// Only gets here if A != 0
		X = X - 1;
	}
	else {					// Only gets here if A != 0 && B != 1
		X = 0;
	}

	printf("X = %d\n", X);

	return 0;
}