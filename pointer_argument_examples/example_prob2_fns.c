/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Pointers (Lecture 21)
 *
 * Second example problem in lecture slides
 *
 * Function definitions (to be completed in class)
 ***********************************************************/

// Compute quotient & remainder of x / y
void divQR(int x, int y, int* q, int* r) {
	*q = x / y;
	*r = x % y;
}

// Swap values at addresses a & b
void swap(double* p1, double* p2) {
	double temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}