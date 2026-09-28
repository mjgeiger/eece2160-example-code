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
	int x;					// Uninitialized (and unused) variable
	int y = 5;				// Initialized integer
	double z = 9.92675832;	// Initialized double
	char ch = 'x';

	// Simple print statements for different number formats
	/*printf("x = %d, y = %d\n", x, y);
	printf("z = %lf\n", z);
	printf("ch = %c\n", ch);

	// Different precisions for double outputs
	printf("z with precision 2: %.2lf\n", z);
	printf("z with precision 4: %.4lf\n", z);
	printf("z with precision 0: %.0lf\n", z);
	printf("z with precision 10: %.10lf\n", z);
	*/
	int n;
	printf("Enter integer and character: ");
	n = scanf("%d %c", &x, &ch);
	printf("Now, x = %d, ch = %c\n", x, ch);

	return 0;
}