#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	if(n<0) n=-n;
	printf("|n|=%d\n",n);
	return 0;
}