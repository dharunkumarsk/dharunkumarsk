#include<stdio.h>
#include<conio.h>
void main()
{
    int d,b,c;
    printf("enter the value=");
    scanf("%d%d%d",&d,&b,&c);
    if((d>b) && (d>c))
    {
        printf("%d",d);
    }
    else if((b>d) && (b>c))
    {
        printf("%d",b);
    }
    else if((c>d) && (c>b))
    {
        printf("%d",c);
   }
