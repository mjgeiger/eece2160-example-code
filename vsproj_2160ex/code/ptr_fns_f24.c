/*
	EECE.2160: ECE Application Programming
	Instructor: M. Geiger

	Solution to in-class example requiring function
	definitions that use pointer arguments
*/

void divQR(int x, int y, int* q, int* r);
void swap(double* p1, double* p2);

int main() {

	int v1 = 10;
	int v2 = 3;
	int q1, r1;

	divQR(v1, v2, &q1, &r1);

	return 0;
}

// Put quotient of x / y at addr. q and remainder at addr. r
void divQR(int x, int y, int* q, int* r) {
	*q = x / y;
	*r = x % y;
}

// Exchange contents of addresses p1 & p2
//   Example: if d1 = 1.2 & d2 = 3.4,
//            after calling swap(&d1, &d2);
//               d1 = 3.4 & d2 = 1.2
void swap(double* p1, double* p2) {
	double swap1;

	swap1 = *p1;
	*p1 = *p2;
	*p2 = swap1;
}