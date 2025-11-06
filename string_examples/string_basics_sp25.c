#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char s1[] = "Hello";	// "Hello" = string constant/literal
							// Includes '\0' at end
	char s2[10] = { 'E', 'E', 'C', 'E', '.', '2', '1', '6', '0' };

	printf(s1);
	printf("\n s2 = %s\n", s2);
	/*
	printf("Enter new s2: ");
	scanf("%s", s2);			// s2 = &s2[0]
	printf("Now, s2 = %s\n", s2);

	strcpy(s2, s1);
	strncpy(s2, s1, 2);
	s2[2] = '\0';

	if (strcmp(s1, "Hello") == 0)
		printf("s1 = Hello\n");
	if (strncmp(s1, "Heaven", 2) == 0)
		printf("s1 = Heaven?\n");
	*/

	int n = strlen(s2);
	printf("Length of s2 = %d\n", n);

	char s3[50];
	printf("Enter line of input: ");
	fgets(s3, 50, stdin);		// Inputs: array, size, input
	printf("s3 = %s\n", s3);
	printf("Extra line?\n");

	return 0;
}