#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fpIn, * fpOut;

	char fname[50];
	do {
		printf("Enter file name: ");
		scanf("%s", fname);
		fpIn = fopen(fname, "r");	// Text access modes: "r", "w", "a"
									// Bin. access modes: "rb", "wb", "ab"
		if (fpIn == NULL) {
			printf("Could not open %s; please try again\n", fname);
		}
	} while (fpIn == NULL);

	fpOut = fopen("file2.txt", "w");
	if (fpOut == NULL) {
		printf("Couldn't open file2.txt; using stdout\n");
		fpOut = stdout;
	}

	// Add code to read/write ...
	int arr[7];
	for (int i = 0; i < 7; i++) {
		printf("Reading input %d ... \n", i);
		fscanf(fpIn, "%d", &arr[i]);

		fprintf(fpOut, "Input %d: %d\n", i, arr[i]);
	}

	fclose(fpIn);
	fclose(fpOut);

	fpOut = fopen("file10.dat", "wb");
	fwrite(arr, sizeof(int), 7, fpOut);
	if (feof(fpOut)) {
		printf("End of file?\n");
	}

	fclose(fpOut);

	return 0;
}