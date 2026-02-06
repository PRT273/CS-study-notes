#include <stdio.h>

int main (void)
{
    int n;
    printf ("input a number");
    scanf ("%d",&n);

    if(n<0) n=-n;
    
    printf("|n|=%d\n",n);
    return 0;
}

