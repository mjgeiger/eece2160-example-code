/*
	EECE.2160: ECE Application Programming
	Instructor: M. Geiger

	Solutions to in-class pointer argument examples
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Calculate quotient & remainder of dividing x / y
//   and store at locations represented by q & r, respectively
void divQR(int x, int y, int* q, int* r) {
	*q = x / y;
	*r = x % y;
}

// Exchange the values stored at addresses p1 and p2
void swap(double* p1, double* p2) {
	double temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main() {
	int var1, var2;
	int quot, rem;
	double var3, var4;

	printf("Enter two ints, two doubles: ");
	scanf("%d %d %lf %lf", &var1, &var2, &var3, &var4);

	divQR(var1, var2, &quot, &rem);
	printf("After dividing %d / %d, quotient = %d, remainder = %d\n",
		var1, var2, quot, rem);

	printf("Before swap, var3 = %lf, var4 = %lf\n", var3, var4);
	swap(&var3, &var4);
	printf("After swap, var3 = %lf, var4 = %lf\n", var3, var4);

	return 0;
}