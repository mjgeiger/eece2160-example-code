/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * scanf() basics (Topic #4)
 *
 * Simple scanf() examples
 ***********************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;		// Input integers
	double z;		// Input double
	char c1, c2, c3;	// Input chars
	int nvals;		// scanf() return value

	printf("Enter two numbers and a character: ");
	nvals = scanf(" %c %d %lf%c", &c2, &x, &z, &c1);
	printf("x = %d, z = %lf, c1 = %c, c2 = %c?\n", x, z, c1, c2);
	printf("nvals = %d\n", nvals);

	/*
	// c1 can be any character; c2 and c3 will be non-space chars
	//   &x = "address of x"
	printf("Enter an integer followed by 3 characters: ");
	nvals = scanf("%d%c %c %c", &x, &c1, &c2, &c3);

	printf("x = %d, c1 = %c, c2 = %c, c3 = %c\n", x, c1, c2, c3);
	printf("scanf() read %d values\n", nvals);

	// Can use this block to test for formatting errors and other
	//    input behavior
	// For example, try entering: 1 2.3 4
	//                        or: 1.2 3 4
	printf("Enter two integers and a double: ");
	nvals =	scanf("%d %d %lf", &x, &y, &z);

	printf("x = %d, y = %d, z = %lf\n", x, y, z);
	printf("scanf() read %d values\n", nvals);
	*/
	return 0;
}