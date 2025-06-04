/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Functions (Lecture 17)
 *
 * Second example problem in lecture slides
 * 
 * Main function to test functions you have to write
 ***********************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "example_prob2_fns.h"
/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Functions (Lecture 17)
 *
 * Second example problem in lecture slides
 *
 * Main function to test user-written functions
 ***********************************************************/
int main() {
    int i;      // Loop index

    printf("TESTING printLine():");
    printf("Next line should be -----\n");
    printLine(5);
    printf("Next line should be ------------\n");
    printLine(12);

    printf("\nTESTING checkEvenOdd:\n");
    for (i = 0; i < 10; i++) {
        if (checkEven())        // True if function returns 1
            printf("Input is even\n");
        else
            printf("Input is odd\n");
    }

    printf("\nTESTING avgFour:\n");
    printf("avgFour(1.1, 2.2, 3.3, 4.4) returns %.2lf (should be 2.75)\n",
        avgFour(1.1, 2.2, 3.3, 4.4));
    printf("avgFour(i, i * 2, i * 3, i * 4) returns %.2lf (should be 25.00)\n",
        avgFour(i, i * 2, i * 3, i * 4));

    return 0;
}