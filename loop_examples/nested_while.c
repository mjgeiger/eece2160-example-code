/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Loops (Topic #7)
 *
 * An example using nested while loops (one loop inside
 *   another loop) that isn't in the lecture slides,
 *   from Prof. Rachel Wakim
 ***********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c;				// Input character
	int wrong;			// Flag variable
	int numTries = 0;	// Number of attempts
	int i;				// Inner loop index

	do {
		numTries = numTries + 1;
		wrong = 0;					// clear flag
		printf("Please type the letter 'a': ");
		scanf(" %c", &c);

		// User didn't follow directions--print "NO"
		//   with increasing number of 'O's
		if (c != 'a') {	
			printf("N");
			i = 1;
			while (i <= numTries) {
				printf("O");
				i = i + 1;
			}
			printf("!\n");
			wrong = 1;
		}
	} while (wrong);		// Remember, this condition is same as (wrong != 0)

	// Once you leave the loop, user must have finally followed directions!
	printf("Good job. You took %d attempt(s) to type the letter 'a'.\n", numTries);

	return 0;
}