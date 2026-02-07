#include <stdio.h>
int main(void)
{
	int i,n;
	long fact=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact*=i;
	printf("%d!=%ld\n",n,fact);
	return 0;
}