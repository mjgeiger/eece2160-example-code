#include <stdio.h>

int main()
{
    char cmd;     // Input command
    int n, nVals;
    
    // Input process
    int flag;
    do {
        flag = 0;
        printf("Enter cmd and n: ");
        nVals = scanf(" %c %d", &cmd, &n);
        if (nVals != 2) {
            printf("Formatting error!\n");
            flag = 1;

            // Clear line
            char junk;
            do {
                scanf("%c", &junk);
            } while (junk != '\n');
        }
        else if (n < 0) {
            flag = 1;
            printf("Negative n\n");
        }
    } while (flag == 1);

    // Factorial
    int result;
    int i;
    result = 1;
    for (i = n; i > 1; i--)
        result = result * i;
    printf("%d! = %d\n", n, result);

    // 2^n
    result = 1;
    for (i = 0; i < n; i++)
        result = result * 2;
    printf("2^%d = %d\n", n, result);

    int j;

    // NESTED LOOP EXAMPLE
    for (i = 0; i < 5; i++) {       // ROUND
        printf("i = %d\n", i);
        
        for (j = 0; j < 5; j++) {   // GUESSES
            printf("%d %d\n", i, j);
        }

        // ROUND DONE; GO TO NEXT ROUND
    }


    return 0;
}