#include <stdio.h>     */第1题
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

#include <stdio.h>    */第4题
int main(void)
{
	int n=2044;
	int count=0;
	while(n>0)
	{
		n=n/2-2;
	    count++;
	}
	
	printf("%d\n",count);
	
	return 0;
}

#include <stdio.h>    */第5题
int main(void)
{
	int n;
	for(n=100;n<=999;n++)
	{
		int a=n/100;
		int b=(n/10)%10;
		int c=n%10;
		if(n==a*a*a+b*b*b+c*c*c)
		printf("%d\n",n);
	}
	return 0;
}