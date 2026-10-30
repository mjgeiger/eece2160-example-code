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
	
	i = 0;
	while (i <= 10)	{
		iSquared = i * i;
		printf("%2d%10d\n", i, iSquared);
		i = i + 1;
	}
	
	// FOR LOOP ORDER:
	//  1. Initialize index (i = 0)
	//  2. For each iteration
	//     a. Check condition (i <= 10)--exit loop if false
	//     b. Execute entire loop body
	//     c. Change index (i = i + 1)
	//     d. Return to step a.
	for (i = 0; i <= 10; i++) {		// i++ --> i += 1 --> i = i + 1
		iSquared = i * i;
		printf("%2d%10d\n", i, iSquared);
	}
	printf("i = %d after loop\n", i);

	for (i = 0; i < 100; i += 3)
		printf("%d\n", i);






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