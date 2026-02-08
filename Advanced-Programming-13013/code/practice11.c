#include <stdio.h>
int main(void)
{
	char a[10];
	int i;
	for(i=0;i<10;i++)
	scanf("%c",&a[i]);
	for(i=9;i>=0;i--)
	printf("%c",a[i]);
	printf("\n");
}

#include <stdio.h>
int main(void)
{
	int n,f[20]={1,1};
	for(n=2;n<20;n++)
	f[n]=f[n-1]+f[n-2];
	for(n=0;n<20;n++)
	printf("%10d",f[n]);
	return 0;
}