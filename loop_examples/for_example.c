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

	printf(" i         i^2\n");
	
	/*
	* ORDER OF OPERATIONS IN FOR LOOP
	* 1. Initialize loop index--executes exactly once
	* 2. At the start of each iteration, test loop condition
	*    If true, execute entire loop body
	* 3. After loop body executes, update loop index
	*/
	for (i = 0; i <= 10; i = i + 1) {
		printf("%2d%10d\n", i, i * i);
	}

	int j;
	for (i = 0; i < 3; i++) {		// Outer loop
		for (j = 0; j < 5; j++) {	// Inner loop
			printf("%d %d\n", i, j);
		}
	}

	return 0;
}