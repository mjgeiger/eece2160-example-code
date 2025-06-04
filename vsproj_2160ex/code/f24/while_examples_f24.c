/* 
	EECE.2160: ECE Application Programming
	Instructor: Michael Geiger
	Fall 2024

	Program to develop in-class while loop examples
*/

#include <stdio.h>

int main() {

	/* First demonstration: replacing repetitive code
		with while loop */
	int i;			// Number to square
	int iSquared;	// Square of the number

	printf(" i       i^2\n");		// Column headings

	// Compute and display the squares of numbers 0 through 10
	i = 0;
	while (i <= 10) {
		i = i + 1;
		iSquared = i * i;
		printf("%2d%10d\n", i, iSquared);
	}

	// In each iteration:
	//   1. Check loop condition (i <= 10)
	//   2. Execute entire loop body
	//   3. Change loop index (i = i + 1)
	//      then return to step 1
	for (i = 0; i <= 10; ++i)
		printf("%2d%10d\n", i, i * i);

	printf("At end of loop, i = %d\n", i);

	
	return 0;
}