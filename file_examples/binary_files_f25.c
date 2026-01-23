#include <stdio.h>

int main() {

    FILE* fp;       // Input file pointer
    int arr[20];
    int n;

    // Open binary file
    fp = fopen("file10.dat", "rb");
    if (fp == NULL) {
        printf("ERROR\n");
        return 0;
    }

    // Read contents into arr
    n = fread(arr, sizeof(int), 20, fp);
    if (n < 20) {
        if (feof(fp))
            printf("Reached end of file\n");
        else if (ferror(fp))
            printf("Error occurred\n");
        else
            printf("Reaching this point should be impossible\n");
    }
    fclose(fp);

    for (int i = 0; i < n; i++) {
        printf("Value %d = %d\n", i, arr[i]);
    }

    return 0;
}