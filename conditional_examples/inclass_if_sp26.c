#include <stdio.h>

int main() {
    int A, B, X;

    printf("Enter A, B, X: ");
    scanf("%d %d %d", &A, &B, &X);

    /*
        Comparisons:
        ==      !=      equal / not equal
        <       >       less than / greater than
        <=      >=      lte / gte
        Operators:
        &&              AND
        ||              OR
        !               NOT
    */
    if (A == 0) {      
        X = X + 1;
    }
    else if (B == 1) {      
        X = X - 1;
    }
    else {                  
        X = 0;
    }

    printf("X = %d\n", X);

    return 0;
}