/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Loops (Topic #7)
 *
 * while3.c: Grade averaging program
 ***********************************************************/

#include <stdio.h>

int main() {
	double grade;				// User input
	double gradeSum = 0;		// Running total of all grades entered
	unsigned gradeCount = 0;	// Number of grades entered

	// Prompt for and read first grade
	printf("Enter grade: ");
	scanf("%lf", &grade);

	/* Continue reading/accumulating grades until invalid value entered */
	while ((grade >= 0.0) && (grade <= 100.0)) {
		gradeSum = gradeSum + grade;	// Accumulate grade
		gradeCount = gradeCount + 1;	// Increment grade count
		printf("Enter grade: ");		// Prompt for and
		scanf("%lf", &grade);			//   read next grade
	}

	printf("Average grade = %.2lf\n", gradeSum / gradeCount);

	return 0;
}