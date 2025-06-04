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
 * This file contains the main() function
 ***********************************************************/


#define _CRT_SECURE_NO_WARNINGS     // Required in Visual Studio to remove scanf() warnings
#include <stdio.h>
#include <math.h>

#include "basic_functions.h"        // Including a header file allows you to call any
                                    //   function that is prototyped in that file

double d1;	// Global variable--NOT A GOOD IDEA
			// Global variables are declared outside of all functions and can therefore
			//   be accessed by name in any function, which makes the program hard to debug

int main() {
	int x, y;       // Local variables within main()

	x = f1();		// If user enters 21 60, 
					//   becomes: x = 81

	y = x / 2;		//  y = 40
	f1();
	f2(x, y);			// v1 = first value = x
						// v2 = second value = y
	
	printf("x = %d, y = %d\n", x, y);

	return 0;
}