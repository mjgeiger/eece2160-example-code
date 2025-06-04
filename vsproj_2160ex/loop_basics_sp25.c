
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i;
	int iSquared;

	printf(" i        i^2\n");

	i = 0;
	while (i <= 10) {
		iSquared = i * i;
		printf("%2d%10d\n", i, iSquared);
		i = i + 1;
	}
	
	i = 0;
	do {
		iSquared = i * i;
		printf("%2d%10d\n", i, iSquared);
		i = i + 1;
	} while (i <= 10);

	printf("Now, i = %d\n", i);
	
	return 0;
}