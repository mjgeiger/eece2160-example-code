#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char cmd;
	int n;
	int nvals;

	do {
		printf("Enter command and n: ");
		nvals = scanf(" %c %d", &cmd, &n);

		if (nvals < 2) {
			printf("Formatting error!\n");

			// Clear line
			char junk;
			do {
				scanf("%c", &junk);
			} while (junk != '\n');
		}
	} while (nvals < 2);

	int i;
	int result;
	switch (cmd) {
	case 'F': case 'f':
		printf("%d! = %d\n", n, result);
		break;

	case 'P': case 'p':
		printf("2^%d = %d\n", n, result);
		break;

	case 'X': case 'x':
		printf("Exiting ... \n");
		break;

	default:
		printf("Invalid command %c\n", cmd);
	}
	return 0;
}