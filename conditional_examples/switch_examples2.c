/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Range checking and switch statements (Topic #6)
 *
 * In-class example program demonstrating switch statement
 * Students must determine what program prints if user enters:
 *     'A'
 *     'X'
 *     'B+'
 *     'c'
 ***********************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char grd;		// User input
	
	printf("Enter Letter Grade: ");
	scanf(" %c", &grd);
	printf("You are ");		

	switch (grd) {				
	case 'A':
		printf("excellent");
		break;
	case 'B': 
		printf("good");
		break;
	case 'C':
		printf("average");
		break;
	case 'D': 
		printf("poor");
		break;
	case 'F':
		printf("failing");
		break;
	default:
		printf("incapable of reading directions");
		break;
	}
	
	return 0;
}
