/*
 * File: array_vs_pointer.c
 * Purpose: Compare array and pointer behavior in C
 * Notes:
 *   - Demonstrates sizeof difference
 *   - Shows equivalent access methods
 */

#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;

    printf("sizeof(a) = %lu\n", sizeof(a));
    printf("sizeof(p) = %lu\n", sizeof(p));

    printf("a[2] = %d\n", a[2]);
    printf("*(a + 2) = %d\n", *(a + 2));
    printf("p[2] = %d\n", p[2]);
    printf("*(p + 2) = %d\n", *(p + 2));

    printf("Address of a[0]: %p\n", &a[0]);
    printf("Value of p: %p\n", p);

    return 0;
}