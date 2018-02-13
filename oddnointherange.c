#include<stdio.h>
void main()
{
	int l,u,d;
	scanf("%d %d",&l,&u);
	for(d=l;d<=u;d++)
	{
	    if(d%2!=0)
	    {
	        printf("%d ",d);
	    }
	}
}
