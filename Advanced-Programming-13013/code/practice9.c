#include <stdio.h>
int main(void)
{
	int x,y,z;
	for(x=1;x<20;x++)
	for(y=1;y<33;y++)
    for(z=3;z<=100;z+=3)
    {
    	if((x+y+z==100)&&(5*x+3*y+z/3==100))
    	printf("cook=%d,hen=%d,chiken=%d\n",x,y,z);
    }
    return 0;
}

#include <stdio.h>
int main(void)
{
	long int f1=1,f2=1;
	int i;
	
	for(i=1;i<=20;i++)
	{
		printf("%15ld,%15ld",f1,f2);
		f1+=f2;
		f2+=f1;
		if(i%2==0) printf("\n");
	}
	
	return 0;
}