/*
    Michael Geiger
    Brief example program for basic program structure
    EECE.2160
    1/23/26
*/

#include <stdio.h>

int main() {
    printf("Hello World!\n");       // Prints "Hello World!"

    int x, y;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);     // &x = address of x

    printf("x = %d\n", x);
    printf("x / 150 = %d, 2x = %d\n", x / 150, 2 * x);

    return 0;
}