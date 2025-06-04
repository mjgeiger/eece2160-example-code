/*
	EECE.2160: ECE Application Programming
	Instructor: Michael Geiger
	Switch statement examples
*/

#include <stdio.h>

int main() {
	int x, y;

	printf("Enter x & y: ");
	scanf("%d %d", &x, &y);


	switch (x) {
	case 0:				// if (x == 0)
		y = y + 1;
		break;

	case 1: case 2:		// else if (x == 1 || x == 2)
		y = y - 1;
		break;
	
	default:			// else
		y = 2160;
	}
	printf("Final y value: %d\n");

	char bldg;		// Building on N. Campus

	printf("Enter first letter of building name: ");
	scanf(" %c", &bldg);

	switch (bldg) {

	case 'F': case 'S':		// Falmouth & Shah
		printf("Go to Perry Hall\n");
	case 'P':		// Perry Hall
		printf("Go to Ball Hall\n");
	case 'B':		// Ball Hall
		printf("Go to third floor, go to end of hall\n");
		break;
	default:
		printf("You aren't on North Campus\n");
	}

	return 0;
}