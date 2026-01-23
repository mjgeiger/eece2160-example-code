#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "StudentInfo.h"

int compare(StudentInfo* p1, StudentInfo* p2);

int main() {
	// Initialization must be in order:
	//   first, middle, last, ID, GPA
	StudentInfo student1 = { "Michael", 'J', "Geiger",
							 12345678, 1.23 };
	StudentInfo student2;

	StudentInfo list[10];
	StudentInfo* sptr = &student1;

	double av = avgGPA(list, 10);

	// Examples of structure accesses
	student1.GPA = 3.5;	// Single struct: 	.
	list[0].GPA = 3.75;	// Struct in array: .
	sptr->GPA = 3.9;	// Pointer:			->

	printf("%s %s\n", student1.first, student1.last);
	
	student2 = readStudent();
	// Variation: readStudent(&student2);

	int n = strlen(student1.first);
	student1.GPA = 3.5;
	student2.GPA = student1.GPA - 1.1;

	//void printStudent(StudentInfo* sp);
	printStudent(&student1);
	printStudent(&student2);

	if (compare(&student1, &student2)) {
		printf("match\n");
	}

	return 0;
}

int compare(StudentInfo* p1, StudentInfo* p2) {
	if (p1->GPA == p2->GPA)		// p1->GPA same as (*p1).GPA
		printf("Match!\n");
}