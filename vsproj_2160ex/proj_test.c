/*
	EECE.2160: ECE Application Programming
	Instructor: M. Geiger

	Testing Battleship project idea
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/****


	HERE'S A MULTI-LINE COMMENT TO HIDE THE CODE BELOW :)


****/

void printGrid(char g[][10], unsigned dim, char hidden);

int main() {

	char grid[10][10];		// Actual Battleship grid
	unsigned dim;			// Dimensions--should be at least 5, at most 10
	unsigned nShips;		// # ships--at least 3, at most 5?
	int i, j;				// Indexes
	int row, col;			// Attack pos

	printf("EECE.2160 BATTLESHIP PROJECT DEMO: BASIC GAMEPLAY\n\n");

	printf("Enter # rows/cols (5-10): ");
	scanf("%u", &dim);
	printf("Enter # ships (3-5): ");
	scanf("%u", &nShips);

	// HARDCODING 5x5 GRID, ALL SHIPS HORIZONTAL AT (0, 1), (1, 2)
	//   AND (3, 4)
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			grid[i][j] = '-';
		}
	}
	grid[0][1] = grid[1][1] = grid[1][2] = grid[2][2] =
		grid[3][4] = grid[4][4] = '*';

	printGrid(grid, 5, 'N');

	// HARDCODE IN 3 ROUNDS
	for (int R = 0; R < 3; R++) {
		printGrid(grid, 5, 'H');

		printf("\nEnter row & col (0-4): ");
		scanf("%d %d", &row, &col);

		if (grid[row][col] == '*') {
			printf("HIT!\n");
			grid[row][col] = 'H';
		}
		else if (grid[row][col] == '-') {
			printf("MISS!\n");
			grid[row][col] = 'M';
		}
	}

	printf("\nAfter 3 rounds:\n");
	printGrid(grid, 5, 'N');

	return 0;
}

void printGrid(char g[][10], unsigned dim, char hidden) {
	int i, j;

	printf(" ");
	for (i = 0; i < dim; i++)
		printf(" %d", i);

	for (i = 0; i < dim; i++) {
		printf("\n%d", i);
		for (j = 0; j < dim; j++) {
			if (hidden == 'H' && g[i][j] == '*')
				printf(" -");
			else
				printf(" %c", g[i][j]);
		}
	}
	printf("\n\n");
}
