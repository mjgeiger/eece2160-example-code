/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Functions 
 *
 * This example, which is not part of the slides,
 *   demonstrates some of the basics of functions, namely:
 *     - Local vs. global variables
 *     - Organizing a program with functions in multiple files
 *     - Function prototypes
 *     - Function definitions
 *     - Argument passing by value
 *     - Return statements
 * Function prototypes for basic function example
 ***********************************************************/

int f1();                                   // f1() returns an integer but takes no arguments
void f2(int v1, int v2);                    // f2() takes two arguments but returns nothing
double f3(int val1, int val2, int val3);    // f3() takes three arguments and returns a double
void clearLine();                           // clearLine() takes no arguments and returns nothing