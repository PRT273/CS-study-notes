#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	if(n<0) n=-n;
	printf("|n|=%d\n",n);
	return 0;
}

#include <stdio.h>
int main(void)
{
	int n=1,sum=0;
	while(n<=100)
	{
		sum=sum+n;
		n++;
	}
	printf("sum=%d\n",sum);
	return 0;
}
   
   
