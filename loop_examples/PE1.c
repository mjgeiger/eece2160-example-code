#include <stdio.h>

int main()
{
    char cmd;     // Input command
    int n, nVals; // Numeric input & # inputs
    int flag;
    do {
        printf("Enter cmd and n: ");
        nVals = scanf(" %c %d", &cmd, &n);
        if (nVals < 2) {
            printf("Formatting error!\n");

            // Line-clearing loop
            char junk;
            do {
                scanf("%c", &junk);
            } while (junk != '\n');
        }
    } while (nVals < 2);

    int result, i; // Loop index & result for n!, 2^n

    switch (cmd)
    {
    case 'F':
    case 'f':
        // Factorial
        result = 1;
        for (i = n; i > 1; i--)
            result *= i;
        printf("%d! = %d\n", n, result);
        break;

    case 'P':
    case 'p':
        // 2^n
        result = 1;
        for (i = 0; i < n; i++)
            result *= 2;
        printf("2^%d = %d\n", n, result);
        break;

    case 'X':
    case 'x':
        return 0;

    default:
        printf("Invalid command %c\n", cmd);
    }
    return 0;
}