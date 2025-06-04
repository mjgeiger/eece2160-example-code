#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f1(int* p1, int* p2);

int main() {
	int x = 21, y = 60;
	
	printf("x = %d, y = %d\n", x, y);

	f1(&x, &y);		// p1 = &x,  p2 = &y

	printf("Now, x = %d, y = %d\n", x, y);
	return 0;
}

void f1(int* p1, int* p2) {
	*p1 = 100;		// *p1 = variable p1 points to = x
					//    x = 100
	*p2 = *p1 + 50;	// *p2 = variable p2 points to = y
}