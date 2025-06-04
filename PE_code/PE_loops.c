/*
* EECE.2160: ECE Application Programming
* Instructor: M. Geiger
* Solution to 1st programming exercise
*   on conditional statements and loops
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char cmd = '@';	// User input command
	int n;			// User input value
	int nvals;		// scanf() return value
	char junk;		// Character used for line-clearing
	int i;			// Loop index
	int result;		// Result for factorial & exponential

	while (cmd != 'X' && cmd != 'x') {

		// Read inputs until no formatting error
		do {
			printf("Enter command & integer: ");
			nvals = scanf(" %c %d", &cmd, &n);
			if (nvals < 2) {
				printf("Formatting error!\n");
				do {
					scanf("%c", &junk);
				} while (junk != '\n');
			}
		} while (nvals < 2);

		switch (cmd) {
		case 'F': case 'f':

			// Compute n!
			result = 1;
			for (i = n; i > 1; i--)
				result *= i;
			printf("n! = %d\n", result);

			break;

		case 'P': case 'p':
			// Compute 2^n
			result = 1;
			for (i = 0; i < n; i++)
				result *= 2;
			printf("2^n = %d\n", result);
			break;

		default:
			if (cmd != 'X' && cmd != 'x')
				printf("Invalid command %c\n", cmd);
		}
		
	}

	return 0;
}