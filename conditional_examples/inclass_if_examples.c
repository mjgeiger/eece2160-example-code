/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Range checking and switch statements (Topic #6)
 *
 * Solutions to the example problems on if statements
 ***********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// Part 1: if x is greater than 5 
	//   and less than or equal to 10, print x
	int x;

	printf("Enter x: ");
	scanf("%d", &x);

	if (x > 5 && x <= 10)
		printf("x = %d\n", x);
	
	// Part 2: prompt for/read temperature, then
	//   print feedback based on too hot/cold/ok
	double temp;

	printf("Enter temperature: ");
	scanf("%lf", &temp);
	
	if (temp >= 90)
		printf("It's too hot!\n");
	else if (temp <= 32)
		printf("It's freezing!\n");
	else 
		printf("It's okay\n");

	// Part 3: prompt for and read three inputs
	//   and detect format errors
	int v1, v2, v3;
	int num;

	printf("Enter 3 integers: ");
	num = scanf("%d %d %d", &v1, &v2, &v3);
	if (num < 3)
		printf("Only %d values entered\n", num);

	return 0;
}