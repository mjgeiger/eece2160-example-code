/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Range checking and switch statements (Topic #6)
 *
 * Basic example of a switch statement
 ***********************************************************/

#include <stdio.h>

int main() {
	int a, x;			// Inputs

	printf("Enter a, x: ");
	scanf("%d %d", &a, &x);

	switch (a) {
	case 0:				// if (a == 0)
		x = x + 1;
		break;

	case 1: case 2:		// else if (a == 1 || a == 2)
		x = x - 1;
		break;

	default:			// else
		x = 100;
	}

	printf("x = %d\n", x);

	// Example below demonstrates switch statement that wouldn't
	//    need default case--val % 4 only has 4 possible values,
	//    all of which the case labels cover
	unsigned val;

	printf("Enter unsigned number: ");
	scanf("%u", &val);

	switch (val % 4) {
	case 0:
		printf("%u is divisible by 4\n", val);
		break;
	case 1:
		printf("%u %% 4 is 1\n", val);		// %% used to print '%' character
		break;								//   since % is usually start of
											//   format specifier in printf()
	case 2:
		printf("%u %% 4 is 2\n", val);
		break;
	case 3:
		printf("%u %% 4 is 3\n", val);
		// No break needed in last case
	}

	return 0;
}