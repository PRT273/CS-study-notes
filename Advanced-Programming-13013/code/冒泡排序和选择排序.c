#include <stdio.h>
int main(void)
{
	int n,i,j,k,temp,a[200];
	scanf("%d",&n);
	for (k=0;k<n;k++)
	scanf("%d",&a[k]);
	for(i=1;i<=n-1;i++)
	for(j=n-1;j>=i;j--)
	if(a[j]<a[j-1])
	{
		temp=a[j];a[j]=a[j-1];a[j-1]=temp;
	}
	for(k=0;k<n;k++)
	printf("%d ",a[k]);
	printf("\n");
	
	return 0;
}

#include <stdio.h>
int main(void)
{
	int i,j,temp,k,n,a[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		if(a[j]<a[k])
		k=j;
		if(k!=i)
		{
			temp=a[i];a[i]=a[k];a[k]=temp;
		}
	}
	    printf("the sorted numbers:\n");
		for(i=0;i<n;i++)
		printf("%d",a[i]);
		return 0;
}