#include<stdio.h>
void main()
{
int a,b,d;
printf("enter the limit");
scanf("%d%d",&a,&b);
for(d=a;d<=b;d++)
{
  if(d%2==0)
  printf("%d\n",d);
}
}
