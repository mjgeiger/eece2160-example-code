/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Functions (Lecture 17)
 *
 * First example problem in lecture slides
 ***********************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int a, int b);        

int main() {
    int x = 1;
    int y = 2;
    int result1, result2, result3;

    result1 = f(x, y);
    result2 = f(y, result1);
    result3 = f(result1, result2);

    printf("x = %d, y = %d\n", x, y);
    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);

    return 0;
}

int f(int a, int b) {
    int i;	    // Loop index
    int r = 0;	// Result

    for (i = 0; i < a; i++)
        r += b;     

    return r;
}

