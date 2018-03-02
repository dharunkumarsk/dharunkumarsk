#include<stdio.h>
int main()
{
	int d,i,a=0,b=1,t;
	scanf("%d",&d);
	for(i=0;i<d;i++)
	{
	printf("%d\n",a);
	t=a+b;
	a=b;
	b=t;
	
	}
	return 0;
}
