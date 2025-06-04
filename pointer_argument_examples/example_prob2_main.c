/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Pointers (Lecture 21)
 *
 * Second example problem in lecture slides
 *
 * Main function to test functions you have to write
 ***********************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "example_prob2_fns.h"

int main() {

    printf("TESTING divQR():\n");
    int var1 = 10;
    int var2 = 3;
    int q1, q2;
    int r1, r2;

    divQR(var1, var2, &q1, &r1);
    divQR(var2, var1, &q2, &r2);

    printf("10 / 3 = %d R%d (should be 3 R1)\n", q1, r1);
    printf("3 / 10 = %d R%d (should be 0 R3)\n", q2, r2);

    printf("\nTESTING swap()\n");
    double var3 = 21.60;
    double var4 = 3.25;
    printf("Initially, var3 = %.2lf, var4 = %.2lf\n", var3, var4);
    swap(&var3, &var4);
    printf("After 1st swap, var3 = %.2lf, var4 = %.2lf\n", var3, var4);
    swap(&var4, &var3);
    printf("After 2nd swap, var3 = %.2lf, var4 = %.2lf\n", var3, var4);

    return 0;
}