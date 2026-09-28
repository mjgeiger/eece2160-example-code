/* 
    EECE.1160: ECE Application Programming
    M. Geiger
    9/4/2026
    Basic intro program
*/

#include <stdio.h>

int main() {
    int x = 10;
    int y, z;

    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("x = %d, x squared = %d\n", x, x * x);
    printf("y = %d, z = %d\n", y, z);
    return 0;
}