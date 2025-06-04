#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char cmd = '@';
	int n;

	while (cmd != 'X' && cmd != 'x') {

		// Read inputs until no formatting error

		switch (cmd) {
		case 'F': case 'f':
			// Compute n!
			break;

		case 'P': case 'p':
			// Compute 2^n
			break;

		default:
			if (cmd != 'X' && cmd != 'x')
				printf("Invalid command %c\n", cmd);
		}
		
	}

	return 0;
}