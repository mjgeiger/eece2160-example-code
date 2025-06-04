/*
	While/do-while loop examples
	ECE Application Programming
*/

#include <stdio.h>

int main() {

	// Part (a): Print all multiples of 3 between 0 and some input n
	int x, i;
	x = i = 0;
	while (x < 100) {
		printf("Iteration %d, %d\n", i, x);
		x = x + 3;
		i = i + 1;
	}

	// Part (b): Given two integers, x and y, repeatedly
	//    increment x by 1 and decrement y by 1 until x > y
	// Also, count number of iterations and print at end
	int x, y;
	int i = 0;
	printf("Enter x, y: ");
	scanf("%d %d", &x, &y);
	printf("x = %d, y = %d\n", x, y);
	while (x <= y) {
		x = x + 1;
		y = y - 1;
		i = i + 1;
	}
	printf("Iterations: %d\n", i);

	// Part (c): Repeatedly read a single non-space character 
	//    into a variable, cmd,
	//    until the user enters 'X' or 'x'
	char cmd;
	do {
		scanf(" %c", &cmd);
	} while (cmd != 'X' && cmd != 'x');

	return 0;
}