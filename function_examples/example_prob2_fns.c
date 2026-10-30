/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Functions (Lecture 17)
 *
 * Second example problem in lecture slides
 *
 * Source file containing function definitions
 * Students must fill in definitions
 ***********************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Print a line of specified length
void printLine(int length) {
    int i;
    for (i = 0; i < length; i++)
        printf("-");
    printf("\n");
}

// Returns 1 if user input value is even, 0 if odd
int checkEven() {
    int value;
    printf("Enter int: ");
    scanf("%d", &value);

    if (value % 2 == 0)
        return 1;
    else
        return 0;
}

// Returns average of four arguments
double avgFour(double a, double b, double c, double d) {
    return (a + b + c + d) / 4.0;
}