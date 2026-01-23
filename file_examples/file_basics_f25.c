#include <stdio.h>

int main()
{
    FILE *fp; // File pointer/handle
    int v1, v2, v3;
    char fname[50];

    fp = fopen("file1.txt", "r"); // First arg: name
                                  // Second arg: access mode
                                  // "r" = read
                                  // "w" = write
                                  // "a" = append
                                  // "rb", "wb", "ab" -- binary
    if (fp == NULL)
    {
        printf("Error: cannot open file1.txt, using stdin\n");
        fp = stdin;
    }

    int count = 0;
    while (fscanf(fp, "%d", &v1) != EOF) {
        printf("Current input: %d\n", v1);
        count++;
    }
    printf("Total fscanf() calls: %d\n", count + 1);

    /*
    FILE *fp2 = fopen("outfile.txt", "w");
    if (fp2 == NULL)
    {
        printf("Couldn't open outfile.txt; using stdout\n");
        fp2 = stdout;
    }
    fprintf(fp2, "First 3 values: %d %d %d\n", v1, v2, v3);

    fclose(fp2);
    */
    fclose(fp);

    return 0;
}