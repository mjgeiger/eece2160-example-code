/***********************************************************
 * EECE.2160: ECE Application Programming
 * Instructor: M. Geiger
 *
 * Loops (Topic #7)
 *
 * Solutions to the example problems on while/do-while loops
 ***********************************************************/

int main() {

	// First example: print all multiples of 3 < 100, including 0
	printf("MULTIPLES OF 3:\n");
	int i = -3;
	while (i <= 96) {
		i = i + 3;
		printf("%d\n", i);
	}

	i = 0;
	do {
		printf("%d\n", i);
		i = i + 3;
	} while (i < 100);

	// 2nd example: given 2 vars x & y, repeatedly
	//   increment x & decrement y until x > y
	// Count # of iterations & print when done
	printf("INCREMENT/DECREMENT:\n");

	int x, y;			// Input values
	int count = 0;		// # iterations

	printf("Enter x and y: ");
	scanf("%d %d", &x, &y);
	printf("Initial x and y values: %d %d\n", x, y);
	
	while (x <= y) {
		x = x + 1;
		y = y - 1;
		count = count + 1;
	}
	
	printf("Total # iterations: %d\n", count);

	// 3rd example: repeatedly prompt for & read
	//   non-space char into cmd until user enters
	//   either 'X' or 'x'
	printf("COMMAND INPUT LOOP:\n");
	char cmd;

	do {
		printf("Enter command: ");
		scanf(" %c", &cmd);
	} while (cmd != 'x' && cmd != 'X');

	return 0;
}