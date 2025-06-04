/*
	EECE.2160: ECE Application Programming
	Instructor: M. Geiger

	Simple examples of input and output
*/

#define _CRT_SECURE_NO_WARNINGS	// Stops VS whining about scanf()
#include <stdio.h>

int main() {
	int i = 10;
	double d = 1.2385;
	char c = 'A';
	int n;

	printf("Enter int, double, & char: ");
	n = scanf("%d %lf %c", &i, &d, &c);	// &i = "address of i"

	printf("Number of inputs read: %d\n", n);
	printf("i = %d\n", i);
	printf("d = %lf\n", d);
	printf("d with precision 4 = %.4lf\n", d);
	printf("d with precision 2 = %.2lf\n", d);
	printf("d with precision 0 = %.0lf\n", d);
	printf("c = %c\n", c);

	return 0;
}