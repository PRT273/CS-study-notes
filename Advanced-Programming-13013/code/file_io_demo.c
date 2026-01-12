/*
 * File: file_io_demo.c
 * Purpose: Demonstrate basic file input/output
 * Notes:
 *   - Write data to file
 *   - Read data from file
 */

#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Failed to open file for writing.\n");
        return 1;
    }

    fprintf(fp, "Hello C File IO\n");
    fprintf(fp, "Score: %d\n", 90);
    fclose(fp);

    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Failed to open file for reading.\n");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}