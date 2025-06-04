/* 
	EECE.2160: ECE Application Programming
	Instructor: M. Geiger

	PE1: Integrating conditional statement & loops;
		 learning high-level design
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char cmd;		// Input command
	int n;			// Input integer
	int nv;			// scanf() return value

	int flag;		// Error flag

	do {

		// Possible input errors: formatting, n < 0
		do {
			// Initialize flag
			flag = 0;

			// Prompt & read inputs
			printf("Enter command and n: ");
			nv = scanf(" %c %d", &cmd, &n);

			// Test all errors
			if (nv != 2) {
				printf("Formatting error!\n");
				flag = 1;
				char junk;
				do {
					scanf("%c", &junk);
				} while (junk != '\n');
			}
			else if (n < 0) {
				printf("Negative n value!\n");
				flag = 1;
			}

			// Repeat if *any* error occurs
		} while (flag);

		int result;
		switch (cmd) {
		case 'F': case 'f':		// n!
			result = 1;
			for (int i = n; i > 1; i--)
				result *= i;
			printf("n! = %d\n", result);
			break;

		case 'P': case 'p':		// 2^n
			result = 1;
			for (int i = 1; i <= n; i++)
				result *= 2;
			printf("2^n = %d\n", result);
			break;

		case 'X': case 'x':		// Exit
			break;

		default:
			printf("Invalid command %c\n", cmd);
		}

	} while (cmd != 'X' && cmd != 'x');

	return 0;
}