#include <stdio.h>

void divQR(int x, int y, int* q, int* r);
void swap(double* p1, double* p2);

int main() {
	int a, b, c, d, e, f, g, h, i, j;		// These names are terrible

	printf("Enter a & b: ");
	scanf("%d %d", &a, &b);

	c = a + b;
	d = a - b;
	
	// divQR example calls
	divQR(a, b, &e, &f);
	divQR(c, d, &g, &h);
	divQR(60, 21, &i, &j);

	// Swap example call
	double v1 = 2.1, v2 = 6.6;
	swap(&v1, &v2);				// v1 should now be 6.6, v2 2.1
}