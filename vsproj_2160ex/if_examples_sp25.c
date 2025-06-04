
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// Part a: given int x, print x if it is more than 5 
	//   and less than or equal to 10
	int x;
	// Something that initializes x ...

	if (x > 5 && x <= 10)
		printf("%d", x);

	// Part b: Prompt for and read temperature; print 
	//   "It's too hot" if 90 or higher, "It's freezing" if
	//   32 or lower, and "It's okay" in all other cases
	double temp;
	printf("Enter temperature: ");
	scanf("%lf", &temp);

	if (temp >= 90)
		printf("It's too hot!\n");
	else if (temp <= 32)
		printf("It's freezing!\n");
	else
		printf("It's okay\n");

	// Part c: Read 3 int values and print error if input problem
	//   Print error message if fewer than 3 values read
	int v1, v2, v3;
	
	printf("Enter three ints: ");
	int n = scanf("%d %d %d", &v1, &v2, &v3);
	if (n < 3)
		printf("Error: only %d values read\n", n);
}