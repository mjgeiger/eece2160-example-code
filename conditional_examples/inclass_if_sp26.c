#include <stdio.h>

int main() {
    int A, B, X;

    printf("Enter A, B, X: ");
    scanf("%d %d %d", &A, &B, &X);

    /*
        COMPARISONS
            ==      !=      equal/not equal
            <       >       less than/greater than
            <=      >=      LTE/GTE
    */
    if (A == 0) {
        X = X + 1;
    }
    else if (B == 1) {  // Only get here if A != 0
        X = X - 1;
    }
    else {          // Only get here if A != 0 && B != 1
        X = 0;
    }

    printf("X = %d\n", X);

    return 0;
}