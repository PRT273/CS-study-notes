#include <stdio.h>
int main(void)
{
	int i,n,k;
	for(i=0;i<5;i++)
	{
		for(n=0;n<i;n++)
		printf(" ");
		
		for(k=9-2*i;k>0;k--)
		printf("&");
		
		printf("\n");
	}
	return 0;
}