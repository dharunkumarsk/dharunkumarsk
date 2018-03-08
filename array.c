#include<stdio.h>
int main()
{
int b[50],n,i,m;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
m=b[0];
for(i=1;i<n;i++)
{
if(m>b[i])
m=b[i];
}
printf("the minimum value is %d",m);
}
