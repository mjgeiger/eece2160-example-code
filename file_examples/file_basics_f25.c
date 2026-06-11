#include <stdio.h>

int main()
{
    FILE *fp; // File pointer/handle
    int v1, v2, v3;
    char fname[50];

    fp = fopen("file1.txt", "r"); // First arg: file name/path
                                   // Second arg: access mode
                                   // "r", "w", "a" --> text file
                                   //   Read, write, append
                                   // "rb", "wb", "ab" --> binary file
    if (fp == NULL) {
        printf("Could not open file1.txt; reading from stdin\n");
        fp = stdin;
    }
    // Do something with the file
    fscanf(fp, "%d %d %d", &v1, &v2, &v3);

    FILE *fp2 = fopen("out.txt", "w");
    if (fp2 == NULL)
        fp2 = stdout;
        
    fprintf(fp2, "Three inputs: %d %d %d\n", v1, v2, v3);
    fclose(fp2);

    fclose(fp);

    return 0;
}