/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Loops (Topic #7)
 *
 * Simple example using while loops to print values 0-10
 *   and their squares
 * printf() in loop uses field width to ensure each row
 *   lines up with prior row(s)
 ***********************************************************/
#include <stdio.h>

int main() {
	int i, iSquared;

	printf(" i       i ^ 2\n");

	i = 0;
	while (i <= 10) {
		iSquared = i * i;
		printf("%2d%10d\n", i, iSquared);
		i = i + 1;
	}
	printf("After loop, i = %d\n", i);
	
	i = 0;
	do {
		iSquared = i * i;
		printf("%2d%10d\n", i, iSquared);
		i = i + 1;
	} while (i <= 10);

	return 0;
}