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

/*
typedef struct {
	Name sname;
	unsigned int ID;
	double GPA;
} SINew;
*/

// Print information about student
void printStudent(SINew *s) {
	// Print name
	printName(&s->sname);

	// Print ID
	printf("ID #%u\n", s->ID);

	// Print GPA
	printf("GPA: %.2lf\n", s->GPA);
}

// Prompts for and reads student information into existing structure
void readStudent(SINew* s) {
	// Read name
	readName(&s->sname);

	// Read ID
	printf("Enter ID: ");
	scanf("%u", &s->ID);

	// Read GPA
	printf("Enter GPA: ");
	scanf("%lf", &s->GPA);
}

// Print list of students (all data for each student)
void printList(SINew list[], int n) {
	for (int i = 0; i < n; i++) {
		printStudent(&list[i]);
		printf("\n");
	}
}

// Find student in list, based on last name
// Returns index if student found, -1 otherwise
int findByLName(SINew list[], int n, char lname[]) {

	// Search all elements of array
	for (int i = 0; i < n; i++) {
		if (strcmp(lname, list[i].sname.last) == 0)
			return i;
	}

	// If we reach this point, no match!
	return -1;
}

// Find student in list, based on ID #
// Returns index if student found, -1 otherwise
int findByID(SINew list[], int n, unsigned int sID) {

	// Search all elements of array
	for (int i = 0; i < n; i++) {
		if (sID == list[i].ID)
			return i;
	}

	// If we reach this point, no match!
	return -1;
}