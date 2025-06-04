#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x[8] = { 10, 10, 10, 10, 10, 10, 10, 10 };
	int y[] = { 1, 2, 3, 4, -5, -6, -7, -8 };
	int z[8] = { 1, 10, 100 };
	//  z[]  = { 1, 10, 100, 0, 0, 0, 0, 0 };

	x[0] = 15;		// "x sub 0" -- value in array x @ index 0
	x[1] = 23;
	x[7] = 2160;

	for (int i = 0; i < 8; i++)
		x[i] = 100;


	double arr[2][5] = { {1.1, 2.2},		 // {1.1, 2.2, 0, 0, 0} 
						 {3.3, 4.4, 5.5} };  // {3.3, 4.4, 5.5, 0, 0}

	double arr2[10000][20000] = { 0 };

	char str[10] = { 'H', 'e', 'l', 'l', 'o' };
	char str2[2][10] = { {'O', 'n', 'e'},
						 {'T', 'w', 'o'} };

	return 0;
}