/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * printf() basics (Topic #3)
 *
 * Simple print statement examples
 ***********************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x;				// Uninitialized (and unused) variable
	int y = 5;			// Initialized integer
	double z = 9.9;		// Initialized double
	
	// Simple print statements for different number formats
	printf("y = %d\n", y);

	printf("z = %lf\n", z);
	printf("z with precision 2 = %.2lf\n", z);
	printf("z with precision 0 = %.0lf\n", z);
	
	return 0;
}