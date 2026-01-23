//
//  Name.c
//  PE4_structures
//
//  Created by Michael Geiger on 4/8/16.
//  Copyright © 2016 Michael Geiger. All rights reserved.
//

#include "Name.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
typedef struct {
	char first[50];
	char middle;
	char last[50];
} Name;
*/
// Print contents of Name struct (format: John Q. Doe)
void printName(Name* n) {	// n->first == (*n).first
	printf("%s %c. %s\n", n->first, n->middle, n->last);
}

// Prompt for and read information into existing Name
void readName(Name* n) {
	printf("Enter name: ");
	scanf("%s %c %s", n->first, &(n->middle), n->last);
}