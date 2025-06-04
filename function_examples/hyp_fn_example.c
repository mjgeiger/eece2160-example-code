/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 * 
 * Functions (Lecture 17)
 * 
 * This program shows the basic hypotenuse function 
 *   example from the lecture as a single file. A 
 *   separate set of files shows that same example in
 *   a more traditional, multi-file format, which we
 *   prefer in this class.
 ***********************************************************/

#define _CRT_SECURE_NO_WARNINGS     // Required in Visual Studio to remove scanf() warnings
#include <stdio.h>
#include <math.h>

double hyp(double a, double b);     // Function prototype--indicates all that's necessary
                                    //   for compiler to process function call
                                    //   (return type, name, argument list)
double perimeter(double a, double b);	// Calculates perimeter of right triangle with legs a & b

int main() { 
    double x, y, h;     // Horizontal & vertical legs of triangle and hypotenuse

    printf("Enter two legs of triangle: ");
    scanf("%lf %lf", &x, &y);
    
    h = hyp(x, y);      // Call to hyp() function
                        //   x and y passed by value (value of each variable copied)
						//   Arguments: a = x, b = y
                        //   Return value stored in h

    printf("Trgle w legs %lf and %lf has hyp of %lf\n", x, y, h); 

    return 0;
}

// hyp() function definition--given right triangle with legs a & b, 
//   calculate and return the length of the hypotenuse using
//   Pythagorean theorem

double hyp(double a, double b) {    // The function returns a value of type double--the return value
                                    //   is effectively the final result of the function
                                    // a and b are its arguments--inputs to the function

    double sum, result;         // Sum of squared sides and final result
                                // These variables are local--declared inside a 
                                //   function and therefore only accessible
                                //   by name in that function
    sum = a * a + b * b;
    result = sqrt(sum);
    return result;              // A return statement ends the function and causes 
                                //   the program to return to where the function was called
                                // The value of result is copied back to that point as well
                                // Since main() contains the statement h = hyp(x, y), the 
                                //   return value computed inside this function is stored in h
}

// Perimeter function demonstrates that one
//   user-defined function can call another one
double perimeter(double a, double b) {
	double h;

	h = hyp(a, b);

	return a + b + h;
}