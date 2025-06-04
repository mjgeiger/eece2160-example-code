
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i;
	int iSquared;

	printf(" i        i^2\n");

	// For loops:
	// 1st part: init. index, execute exactly once
	// 2nd part: condition, check @ start of iteration
	//    If true, execute loop body
	// 3rd part: change index, execute AFTER loop body
	//    Then go back and test condition again
	for (i = 0; i <= 10; i++) {
		iSquared = i * i;
		printf("%2d%10d\n", i, iSquared);
	}

	for (i = 0; i <= 100; i += 3)
		printf("%d\n", i);

	/*** Original while example
	i = 0;
	while (i <= 10) {
		iSquared = i * i;
		printf("%2d%10d\n", i, iSquared);
		i = i + 1;
	}
	***/



	return 0;
}