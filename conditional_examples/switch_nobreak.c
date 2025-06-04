/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Range checking and switch statements (Topic #6)
 *
 * Switch statement example using no break statements
 * Program prints directions from (most) connected 
 *   North Campus buidings to the ECE office in Ball 301A
 ***********************************************************/

#include <stdio.h>

int main() {
	char bldg;			// Building

	printf("Enter first letter of building name: ");
	scanf(" %c", &bldg);

	switch (bldg) {
	case 'D':							// Dandeneau Hall
		printf("Go to Falmouth Hall\n");
	case 'F': case 'S':					// Falmouth & Shah Halls
		printf("Go to Perry Hall\n");
	case 'P':							// Perry Hall
		printf("Go to Ball Hall\n");
	case 'B':							// Ball Hall
		printf("Go to the 3rd floor--Ball 301A is at the southwest end of the hall\n");
	}

	return 0;
}