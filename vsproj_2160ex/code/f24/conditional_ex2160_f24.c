#include <stdio.h>

int main() {
	/*
	// Part (a): given int x, if x is more than 5 and
	//   less than or equal to 10, print x
	int x;
	// PROBABLY OUGHT TO HAVE CODE TO ASSIGN x A VALUE ...

	if (x > 5 && x <= 10) {
		printf("x = %d\n", x);
	}

	// Part (b): Prompt for and read temperature (double temp)
	//   If temp is 90 or higher, print "It's too hot!"
	//   If temp is 32 or lower, print "It's freezing!"
	//   In all other cases, print "It's okay"
	double temp;
	printf("Enter temperature: ");
	scanf("%lf", &temp);

	if (temp >= 90)
		printf("It's too hot!\n");
	else if (temp <= 32)
		printf("It's freezing!\n");
	else				// if (temp > 32 && temp < 90)
		printf("It's okay\n");
*/
	// Part (c): Read 3 int values and print error if input problem
	int inval1, inval2, inval3;
	int nval;

	printf("Enter three ints: ");
	nval = scanf("%d %d %d", &inval1, &inval2, &inval3);
	if (nval != 3) {
		printf("Error: only %d inputs read correctly.\n", nval);
	}

	/*
	int A, B, X;

	printf("Enter A, B, and X: ");
	scanf("%d %d %d", &A, &B, &X);

	// Comparison operators
	//   ==   !=	<	>	<=	>=
	if (A == 0)	{
		X = X + 1;
	}
	else if (B == 1) {				
		X = X - 1;
	}
	else {					// if (B != 1)
		X = 0;
	}
	printf("X = %d\n", X);

	// Enter low & high endpoints of range; both positive
	// Errors: either value negative; low > high
	int lo, hi;
	int nerr = 0;		// # of errors
	printf("Enter positive lo/hi endpoints of range: ");
	scanf("%d %d", &lo, &hi);

	if (lo < 0) {
		printf("lo is negative\n");
		nerr = nerr + 1;
	}
	if (hi < 0) {
		printf("hi is negative\n");
		nerr = nerr + 1;
	}
	if (lo > hi) {
		printf("lo > hi\n");
		nerr = nerr + 1;
	}

	if (nerr > 0)
		printf("Something went wrong\n");
	*/
}