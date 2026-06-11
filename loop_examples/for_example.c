/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Loops (Topic #7)
 *
 * Demonstrates for loops by recoding the squares
 *  program (print squares of values 0-10) used
 *  to introduce while loops
 ***********************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i;			// Loop index
	int iSquared;
	
	printf(" i         i^2\n");
	
	// Order of operations:
	// 1. Initialize loop index (i = 0)
	// 2. For each iteration:
	// 		a. Check loop condition (i <= 10)
	//		b. Entire loop body
	//		c. Change loop index (i = i + 1)
	//		d. Return to step a.
	for (i = 0; i <= 10; i++) 
		printf("%2d%10d\n", i, i * i);
	
	// i = 11 after loop
	int n = ++i;	// i = i + 1 = 12, then n = i = 12 
	
	for (i = 0; i < 100; i += 3)	// i = i + 3
		printf("%d ", i);

	int j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d %d\n", i, j);		
		}
	}

	return 0;
}