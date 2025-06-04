//
//  SINew.c (previously StudentInfo.c)
//  PE4_structures
//
//  Created by Michael Geiger on 4/8/16.
//  Revised 11/15/16: Rename StudentInfo type to SINew
//  Copyright © 2016 Michael Geiger. All rights reserved.
//

#include "SINew.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Print information about student
void printStudent(SINew *s) {
	printName(&s->sname);
	printf("ID #%.8u\n", s->ID);
	printf("GPA: %.2lf\n", s->GPA);
}

// Reads student information into existing structure
void readStudent(SINew *s) {
	readName(&s->sname);
	printf("Enter ID: ");
	scanf("%u", &s->ID);
	printf("Enter GPA: ");
	scanf("%lf", &s->GPA);
}

// Print list of students
void printList(SINew list[], int n) {
	int i;		// Loop/array index

	for (i = 0; i < n; i++) {
		printStudent(&list[i]);
		printf("\n");
	}
}

// Find student in list, based on last name
// Returns index if student found, -1 otherwise
int findByLName(SINew list[], int n, char lname[]) {
	int i;		// Loop array index

	for (i = 0; i < n; i++) {
		if (strcmp(lname, list[i].sname.last) == 0)
			return i;
	}

	// If you go through entire loop, no match
	return -1;
}

// Find student in list, based on ID #
// Returns index if student found, -1 otherwise
int findByID(SINew list[], int n, unsigned int sID) {
	int i;		// Loop/array index

	for (i = 0; i < n; i++) {
		if (sID == list[i].ID)
			return i;
	}

	// If you go through entire loop, no match
	return -1;
}
