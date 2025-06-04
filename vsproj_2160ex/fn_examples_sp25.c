/*
	EECE.2160: ECE Application Programming

	Solutions to in-class examples for writing functions
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// printLine() : Print line of dashes; length determined by argument
void printLine(int length) {
	int i;
	for (i = 0; i < length; i++)
		printf("-");
	printf("\n");
}

// checkEven(): Read int from console; return 1 if even, 0 if odd
int checkEven() {
	int value;
	printf("Enter int: ");
	scanf("%d", &value);

	if (value % 2 == 0)
		return 1;
	else
		return 0;
}

// avgFour(): Take four doubles as arguments and return their avg
double avgFour(double a, double b, double c, double d) {
	return (a + b + c + d) / 4;
}

void f1(double* p1, double* p2) {
	*p1 = 21.6;			// *p1 = "value p1 points to"
	*p2 = *p1 + 13;		// *p2 = "value p2 points to"
	printf("%d\n", p1);
}

int main() {
	double x, y;
	int n = 5;

	printLine(10);
	printf("Enter 2 numbers: ");
	scanf("%lf %lf", &x, &y);
	printLine(7);
	
	double z = avgFour(x, y, 15, 37.5);		// a = x
											// b = y
											// c = 15
											// d = 37.5


	f1(&x, &y);
	
	printf("x = %lf, y = %lf\n", x, y);
	printLine(5);

	return 0;
}