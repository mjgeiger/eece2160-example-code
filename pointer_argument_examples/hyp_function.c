// EECE.2160: ECE Application Programming
// Instructor: M. Geiger
// In-class example problem related to pointers

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void get_r_theta(double x, double y, double* adr_r, double* adr_th); //double* adr_r, double* adr_th);

int main() { 
	double x1, y1, r1, th1;
	double x2, y2, r2, th2;

	printf("Enter x, y components of vector: ");
	scanf("%lf %lf", &x1, &y1);

	get_r_theta(x1, y1, &r1, &th1);		// a = x
									// b = y
									// adr_r = &r
									// adr_th = &th
	
	printf("Vector with x=%lf and y=%lf has r=%lf, theta=%lf\n", x, y, r, th);
 	return 0;
}

void get_r_theta(double a, double b, double* adr_r, double* adr_th) {
	double sum;
	
	sum = pow(a, 2) + pow(b, 2); //or a*a+b*b;

	*adr_r = sqrt(sum);
	*adr_th = atan2(b,a);
}
