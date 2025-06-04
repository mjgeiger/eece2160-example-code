// Divide x / y and store quotient & remainder in
//   addresses stored in q & r, respectively
void divQR(int x, int y, int* q, int* r) {
	*q = x / y;
	*r = x % y;
}

// Given pointers p1 & p2, swap the values to which they point
//   For example, if *p1 = 21 & *p2 = 60 before the function call,
//   *p1 = 60 & *p2 = 21 after the function call
void swap(double* p1, double* p2) {
	double temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	/*
	
	Common mistake:
	*p1 = *p2;
	*p2 = *p1;
	
	*/
}