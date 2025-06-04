
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;

	printf("Enter two ints: ");
	scanf("%d %d", &a, &b);

	switch (a) {
	case 0:				// if (a == 0)
		b = b + 1;
		break;

	case 1: case 2:		// else if (a == 1 || a == 2)
		b = b - 1;
		break;

	default:			// else
		b = 2160;
	}
	printf("b = %d\n", b);






	char bldg;
	printf("Enter building: ");
	scanf(" %c", &bldg);

	switch (bldg) {
	case 'S': case 'F':
		printf("Go to Perry Hall\n");
	case 'P':
		printf("Go to Ball Hall\n");
	case 'B':
		printf("Go to 3rd floor, go to end of hall\n");
	}
		

	return 0;
}