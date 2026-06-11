/*
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * In-class examples demonstrating arrays
 *    as function arguments
 * Students are given function specs and must 
 *    write definitions as in-class exercise
 */


/*
 *	1-D array functions--typically take array size
 *     as argument since arrays passed by address
 */

// Given an array of doubles that contains n values,
//   calculate and return the average of those values
double findAvg(double arr[], int n) {
	int i;
	double sum = 0;

	for (i = 0; i < n; i++)
		sum = sum + arr[i];

	return sum / n;
}

// Given an array of integers that contains n values,
//   find and return the maximum (i.e., most positive) value
//   in the array
int findMax(int arr[], int n) {
	int max = arr[0];
	int i;

	for (i = 1; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

/*
 *	2-D array functions--typically take row size
 *     as argument since arrays passed by address
 *  Column size must be fixed so compiler can generate
 *     appropriate code--must know where one row ends
 *     and next row starts
 *     (unless you have a dynamically allocated array,
 *      but that's usually outside the scope of EECE.2160)
 */
 // Average all values in 2-D array
double find2DAvg(double arr2[][5], int nr) {
	double sum = 0;		// Total of all array elements

	for (int i = 0; i < nr; i++) {
		for (int j = 0; j < 5; j++) {
			sum += arr2[i][j];
		}
	}

	return sum / (nr * 5);	// Total # elements = # rows * # cols
}

int main() {

	double myArr[5] = { 1.1, 9.3, 7.777, 8.5, 3.2 };
	double avg;

	/* Examples below show arrays passed by "name", but 
	   remember, array name = address of first element   */
	avg = findAvg(myArr, 5);		// myArr == &myArr[0]

	double my2DArr[25][5];
	avg = find2DAvg(my2DArr, 25);

	return 0;
}