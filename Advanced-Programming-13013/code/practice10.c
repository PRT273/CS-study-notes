#include <stdio.h>
int main(void)
{
	int n=0,i=0,j=0;
	long result=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int tem=1;
		for(j=i;j>0;j--)
		tem=tem*j;
		result=result+tem;
	}
	printf("The result is %ld\n",result);
}

#include <stdio.h>
int main(void)
{
	int i,j;
	for (i=0;i<5;i++)
	{
		for (j=0;j<i;j++)
		printf(" ");
		
		for (j=0;j<9-2*i;j++)
		printf("&");
		
		printf("\n");
	}
	return 0;
}