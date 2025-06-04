#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	double real;
	double imag;
} Complex;

void printCpx(Complex* c) {
	// Print real + imag(i) with 2 decimal precision
	printf("%.2lf + %.2lfi", c->real, c->imag);
}

// Read in an array of structures, list, of size n
void scaleCpx(Complex list[], Complex* scl, int n) {

	// Scale a list of complex numbers by adding another complex number to them
	for (int i = 0; i < n; i++) {

		// Note: "list" is a pointer, but "list[i]" is not!!
		list[i].real += scl->real;
		list[i].imag += scl->imag;
	}
}

int main() {
	Complex numList[] = { {1.2, -3}, {2.4, 6}, {-26, 0} };
	Complex scaleFact = { 3, 4 };
	int listSize = 3;
	int i;

	printf("Original numbers\n");
	for (i = 0; i < listSize; i++)
		printCpx(&numList[i]);

	printf("Scale factor is: ");
	printCpx(&scaleFact);

	scaleCpx(numList, &scaleFact, listSize);

	printf("\nNew numbers:\n");
	for (i = 0; i < listSize; i++)
		printCpx(&numList[i]);

	return 0;
}

