* File: pointer_basic.c
 * Purpose: Demonstrate basic pointer usage in C
 * Notes:
 *   - Show relationship between variable, address, and pointer
 *   - This is intentionally simple and readable
 */

#include <stdio.h>

int main() {
    int a = 10;
    int b = 30;

    int *p = &a;

    printf("a = %d\n", a);
    printf("&a = %p\n", &a);

    printf("p (address stored in p) = %p\n", p);
    printf("*p (value pointed by p) = %d\n", *p);

    *p = 20;
    printf("After modifying *p, a = %d\n", a);

    p = &b;
    printf("Now p points to b\n");
    printf("*p = %d\n", *p);

    return 0;
}