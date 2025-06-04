/* 
	EECE.2160: ECE Application Programming
	Instructor: M. Geiger

	Solutions to in-class example problems using while
	   and do-while loops
*/

#include <stdio.h>

int main() {

	// PART (A): Print all multiples of 3 between 0 & 100
	int i = 0;
	do {
		printf("%d\n", i);
		i = i + 3;
	} while (i < 100);

	// PART (B): Given two ints, x and y, repeatedly increment
	//   x by 1 and decrement y by 1 until x is greater than y
	// Print initial values of x and y before loop; count 
	//   number of iterations and print after loop
	int x, y;
	int loopcount = 0;

	// Kinda need some code to get values of x & y ...
	printf("Enter x & y: ");
	scanf("%d %d", &x, &y);

	printf("Initially, x = %d, y = %d\n", x, y);
	while (x <= y) {
		loopcount = loopcount + 1;
		x = x + 1;
		y = y - 1;
	}
	printf("Number of iterations: %d\n", loopcount);

	// PART (C): Repeatedly prompt for & read non-space char
	//   into variable, cmd, until user enters 'X' or 'x'
	char cmd;
	do {
		printf("Enter command: ");
		scanf(" %c", &cmd);
	} while (cmd != 'X' && cmd != 'x');

	return 0;
}