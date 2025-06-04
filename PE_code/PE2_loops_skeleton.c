#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char cmd;		// Input command
	char junk;		// Used to clear line
	int n, n2;			// Integer used in calculations
	int nVals;		// # values read
	
	do {		// Loop repeats until user enters 'X' or 'x'

		/* Read input command and number to be used */
		do {
			printf("Enter cmd and n: ");
			nVals = scanf(" %c %d", &cmd, &n);

			if (nVals < 2) {
				printf("Error: incorrectly formatted input\n");

				do {
					scanf("%c", &junk);
				} while (junk != '\n');
			}

		} while (nVals != 2);
		
		/* Evaluate cmd and perform appropriate operation */
		switch (cmd) {
		case 'F':
		case 'f':
			/* Calculate n! */
			printf("Will add code later to calculate n!\n");
			break;

		case 'P':
		case 'p':
			/* Calculate 2 to the nth power, if n >= 0; print error otherwise */
			printf("Will add code later to calculate 2 to the nth power\n"); 
			break;

		case 'X':
		case 'x':
			return 0;		// Exit program

		default:
			printf("Invalid command %c entered\n", cmd);
		}
	} while (cmd != 'X' && cmd != 'x');

	return 0;
}