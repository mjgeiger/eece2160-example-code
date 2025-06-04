#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* infp;
	FILE* outfp;
	char fname[30] = "file1.txt";

	// Arguments: file name & access mode
	//   Text access modes: "r" = read, "w" = write, "a" = append
	//   Binary access modes: "rb", "wb", "ab"
	infp = fopen(fname, "r");
	if (infp == NULL) {
		printf("Couldn't open %s; reading from stdin\n", fname);
		infp = stdin;
	}

	outfp = fopen("file2.txt", "w");
	if (outfp == NULL) {
		printf("Could not open file2.txt; printing to stdout\n");
		outfp = stdout;
	}

	// Do something with file
	int v1;
	int count = 0;
	while (fscanf(infp, "%d", &v1) != EOF) {
		count++;
	}
	printf("File contains %d integers\n", count);

	fclose(outfp);
	fclose(infp);

	FILE* binFile = fopen("resfile1.bin", "rb");
	if (binFile == NULL) 
		return 0;
	double res[20];
	int n;

	// If file contains 20 doubles, loop executes twice:
	//    1st iteration: reads 20 values, does not reach EOF
	//    2nd iteration: reads 0 values, reaches EOF 
	// If file contains 200 doubles, loop executes 11 times:
	//    1st-10th iter: reads 20 values, does not reach EOF
	//	  11th iteration: reads 0 values, reaches EOF
	// If file contains 50 doubles, loop executes 3 times:
	//    1st iteration: reads 20 values, does not reach EOF
	//    2nd iteration: reads 20 values, does not reach EOF
	//    3rd iteration: reads 10 values, reaches EOF
	do {
		n = fread(res, sizeof(double), 20, binFile);

	} while (!feof(binFile));


	return 0;
}