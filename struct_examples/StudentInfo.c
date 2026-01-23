#include "StudentInfo.h"

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Print contents of StudentInfo struct
// Format: Michael J. Geiger
//         ID: 12345678
//         GPA: 3.75
void printStudent(StudentInfo* sp) {
	printf("%s %c. %s\n", sp->first, sp->middle, sp->last);
	printf("ID: %u\n", sp->ID);
	printf("GPA: %.2lf\n", sp->GPA);
}

// Calculate average GPA for array of students
double avgGPA(StudentInfo stlist[], unsigned n) {
	double total = 0;
	int i;

	for (i = 0; i < n; i++) {
		total = total + stlist[i].GPA;
	}

	return total / n;
}

// Read info about student and return struct
//   Uses same format as printStudent output but your function
//   generates prompts
StudentInfo readStudent() {
	StudentInfo temp;

	// Read everything into temp
	printf("Enter name: ");
	scanf("%s %c %s", temp.first, &temp.middle, 
		temp.last);
	printf("Enter ID: ");
	scanf("%u", &temp.ID);
	printf("Enter GPA: ");
	scanf("%lf", &temp.GPA);

	return temp;
}