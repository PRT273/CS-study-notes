#include <stdio.h>
int main(void)
{
	int m,n,r;
	scanf("%d%d",&m,&n);
	while(n)
	{
		r=m%n;
		m=n;
		n=r;
	}
	printf("Their greatest common divisor is %d\n",m);
	return 0;
}

#include <stdio.h>
int main(void)
{
	int x,max,min;
	scanf("%d",&x);
	max=min=x;
	for(;x!=0;)
	{
		if(x<min) min=x;
		if(x>max) max=x;
		scanf("%d",&x);
	}
	printf("min=%d,max=%d\n",min,max);
}


#include<stdio.h>
#define LIMIT 10
int main(void)
{
	int n=1;
	float sum=0.0;
	for(;;)
	{
		sum=sum+1.0/n;
		if(sum>LIMIT) break;
		n++;
	}
	printf("n=%d\n",n);
	return 0;