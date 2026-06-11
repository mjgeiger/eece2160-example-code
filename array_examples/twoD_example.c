/*
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * In-class example problem on two-dimensional arrays
 *   Solution to problem
 */

#include <stdio.h>

// #define in this case gives name to constants
#define NRows 3  	// # of rows
#define NCols 4		// # of columns

int main() {

	double x[NRows][NCols] =		// 2-D array
		{ {  10,  2.5,    0,  1.5},
		  {-2.3, -1.1, -0.2,    0},
		  {10.5, -6.1, 23.4, -9.2} };
	  

	int negCnt[NRows] = { 0 };	// Initialize entire row count array to 0
	int i, j;                   // Row and column indices

	/* INSERT CODE HERE--Visit every element in array x and
		count the number of negative values in each row */
	for (i = 0; i < NRows; i++) {
		for (j = 0; j < NCols; j++) {
			if (x[i][j] < 0)
				negCnt[i]++;
		}
	}

	// Now print the row counts 
	for (i = 0; i < NRows; i++)
		printf("Row % d has % d negative values.\n", i, negCnt[i]);

	return 0;
}