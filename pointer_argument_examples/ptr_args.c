/*
 * EECE.2160: ECE Application Programming
 * Short example program to illustrate use
 *   of pointer arguments
 * Function definitions
 *
 * Written 3/19/19 by M. Geiger
 */

// Basic example of pointer dereferencing
//   (accessing contents of an address)
int f(int *addr_y) {
	int temp = *addr_y;		// Pointer dereferencing to read value outside function
							// *addr_y = "the value that addr_y points to"
	                        // addr_y = &i1 --> *addr_y = i1 = 10
    *addr_y = temp * 2;		// Pointer dereferencing to write value outside function
                            // addr_y = &i1 --> *addr_y = 10 * 2 = 20
                            //     Therefore, i1 = 10 * 2 = 20
    return temp / 2;
}

// More complex example of pointer dereferencing
void f2(double *ptr1, double *ptr2, double *ptr3) {
                                    // f2(&d1, &d2, &d3);
                                    // Therefore, ptr1 = &d1, etc.
	*ptr1 = *ptr2 + *ptr3;          // *ptr1 = d1, *ptr2 = d2, *ptr3 = d3
                                    // Therefore, this statement
                                    //  sets d1 = d2 + d3
	*ptr2 = *ptr2 * 2;
	*ptr3 = *ptr1 - *ptr3;
}