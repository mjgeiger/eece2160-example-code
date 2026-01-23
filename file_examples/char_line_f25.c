/*
* EECE.2160: ECE Application Programming
* Instructor: M. Geiger
* 
* Simple examples of character/line input functions
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    // Example loop 1: reads file 1 char at a time 
    //    and reprints to screen to demonstrate fgetc()
    FILE* fp = fopen("file1.txt", "r");

    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    fclose(fp);

    // Example loop 2: read 1 char at a time from stdin
    //   until you get non-digit value; place non-digit
    //   back in input
    printf("\n\nEnter digits (non-digit to stop): ");
    
    while (isdigit(c = fgetc(stdin))) {
        printf("%c\n", c);
    }
    ungetc(c, stdin);

    return 0;
}