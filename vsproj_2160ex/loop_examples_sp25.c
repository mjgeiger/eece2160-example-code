#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	/* Part (a): Print all multiples of 3 between 0 and 100 */

	// NEW CODE HERE
	int i = 0;
	do {
		printf("%d\n", i);
		i = i + 3;
	} while (i <= 100);

	/* Part (b): Given two variables, x and y, repeatedly
	   increment x by 1 and decrement y by 1 until x is greater
	   than y. Count the number of loop iterations and print 
	   it when loop is done. */
	int x, y;
	printf("Enter x & y: ");		// Assume x & y are inputs
	scanf("%d %d", &x, &y);
	printf("x = %d, y = %d\n", x, y);

	// NEW CODE HERE
	int n = 0;
	while (x <= y) {
		x = x + 1;
		y = y - 1;
		n = n + 1;
	}
	printf("Loop executes %d iterations\n", n);

	/* Part (c): Repeatedly prompt for and read a non-space 
	   character into cmd until user enters either 'X' or 'x' */
	char cmd = ' ';

	// ADD THE APPROPRIATE LOOP HERE
	// Exit: cmd == 'X' || cmd == 'x'
	// So could code loop condition as:
	//    while (!(cmd == 'X' || cmd == 'x'))
	while (cmd != 'X' && cmd != 'x') {
		printf("Enter character: ");
		scanf(" %c", &cmd);
	}
}