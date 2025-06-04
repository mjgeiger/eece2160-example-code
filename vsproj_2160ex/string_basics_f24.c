#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	/*
	char s1[6] = "Hello";
	char s2[100] = "Hi";

	s1[0] = 'J';

	printf(s1);
	printf("\ns2 = %s\n", s2);
	
	printf("Enter new s2: ");
	scanf("%s", s2);			// s2 = &s2[0]
	printf("Now, s2 = %s\n", s2);
	*/
	/* strlen() example *
	int n = strlen(s2);
	printf("%s contains %d characters\n", s2, n);
	printf("Array needs %d characters\n", n + 1);

	char s3[100];
	*/
	/* String copy examples *
	strcpy(s3, s2);		// Copies from s2 to s3
	strncpy(s3, s2, 2);	// Copies first 2 chars of s2 to s3
						// Does not necessarily copy '\0'
						//  If s2 == "This", s3 == { 'T', 'h' }
	s3[2] = '\0';
	*/
	/* String compare examples *
	if (strcmp(s1, s3) == 0)
		printf("s1 & s3 match!\n");
*/
	/* String concatenation */
	char s4[100] = "November ";
	char s5[100] = "15, 2024";
	strcat(s4, s5);				// "Add" s5 to s4
	printf("s4 now = %s\n", s4);
	strncat(s5, s4, 3);
	printf("s5 now = %s\n", s5);

	/* fgets example */
	fgets(s5, 100, stdin);
	printf("s5 = %s\n", s5);

	return 0;
}