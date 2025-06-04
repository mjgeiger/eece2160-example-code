/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Loops (Topic #7)
 *
 * Simple while/do-while loops shown in class
 ***********************************************************/

#include <stdio.h>

int main() {
	int x;		// Variable used in examples

	// Simple while loop; prints: 7 8 9
	printf("FIRST LOOP OUTPUT: ");
	x = 7;
	while (x < 10) { 
		printf("%d ", x);
		x = x + 1; 
	}
	printf("\n");

	// Simple while loop with false
	//   initial condition; prints nothing
	printf("SECOND LOOP OUTPUT: ");
	x = 7;
	while (x < 3) {
		printf("%d ", x);
		x = x + 1;
	}
	printf("\n");

	// Simple do-while loop; prints: 8 9 10
	printf("THIRD LOOP OUTPUT: ");
	x = 7;
	do {
		x = x + 1;
		printf("%d ", x);
	} while (x < 10);
	printf("\n");

	// Simple do-while loop with false
	//   initial condition; prints: 7
	printf("FOURTH LOOP OUTPUT: ");
	x = 7;
	do {
		printf("%d ", x);
		x = x + 1;
	} while (x < 3);
	printf("\n");

	return 0;
}