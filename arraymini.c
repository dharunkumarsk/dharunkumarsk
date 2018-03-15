#include<stdio.h>
void main()
{
    int d[50],i,g,min;
    printf("enter the range\n");
    scanf("%d",&g);
    printf("enter the array value\n");
    for(i=0;i<g;i++)
    {
        scanf("%d",&d[i]);
    }
    min=d[0];
    for(i=0;i<g;i++)
    {
        if(d[i]<min)
        {
            min=d[i];
        }
    }
    printf("%d",min);return 0;
}
