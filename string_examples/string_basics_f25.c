#include <stdio.h>
#include <string.h>

int main() {

    // Basic string declarations
    char s1[] = "Hello World!\n";
    char s2[10] = "Hi";     // { 'H', 'i', '\0' }
    s2[3] = 'x';

    // Printing/reading strings with printf() / scanf()
    printf("\n\n");
    printf(s1);
    printf("s2 = %s\n", s2);
    /*printf("Enter new s2: ");
    scanf("%s", s2);
    printf("Now, s2 = %s\n", s2);*/

    // Using string library functions
    strcpy(s1, s2);       // s1 = s2 (if that were a valid stmt)
    strcpy(s2, "Constant");
    strncpy(s1, s2, 14);

    strcpy(s1, "ABC");
    strcpy(s2, "ABD");

    if (strcmp(s1, s2) == 0) {
        printf("s1 & s2 match\n");
    }
    if (strncmp(s1, s2, 2) == 0) {
        printf("s1 & s2 match?\n");
    }

    printf("Length of %s is %d\n", s1, strlen(s1));

    strcat(s1, s2);
    printf("Now, s1 = %s\n", s1);
    strncat(s2, s1, 2);
    printf("Now, s2 = %s\n", s2);

    char s3[20];
    printf("Enter entire line: ");
    fgets(s3, 10, stdin);
    printf("s3 = %s\n", s3);

    printf("\n\n");     // Extra space
    return 0;
}