#include "StudentInfo.h"

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Print contents of StudentInfo struct
// Format: Michael J. Geiger
//         ID: 12345678
//         GPA: 3.75
void printStudent(StudentInfo* sp) {
	printf("%s %c. %s", sp->first, sp->middle, sp->last);		// sp->first == (*sp).first
	printf("ID #%u\n", sp->ID);
	printf("GPA: %.2lf\n", sp->GPA);
}

// Calculate average GPA for array of students
double avgGPA(StudentInfo stlist[], unsigned n) {
	double sum = 0;

	for (int i = 0; i < n; i++) {
		sum += stlist[i].GPA;
	}

	return sum / n;
}

// Read info about student and return struct
//   Uses same format as printStudent output but your function
//   generates prompts
StudentInfo readStudent() {
	StudentInfo temp;
	char dot;

	// Store all input in temp
	printf("Enter name: ");
	scanf("%s %c%c %s", temp.first, &temp.middle, &dot, temp.last);
	printf("Enter ID: ");
	scanf("%u", &temp.ID);
	printf("Enter GPA: ");
	scanf("%lf", &temp.GPA);

	return temp;
}