/*
	Michael Geiger
	EECE.2160 example program
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x;
	int y;

	printf("Enter two ints: ");
	scanf("%d %d", &x, &y);		// &x = "address of x"

	printf("Hello World!\n");
	printf("x = %d, y = %d\n", x, y);
	printf("2x = %d\n", 2 * x);

	return 0;
}