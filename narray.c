#include<stdio.h>
#include<conio.h>
void main()
{
int sum,i,n,k,d[5];
printf("Enter The values for N and K");
scanf("%d",&n);
sum=0;
for(i=0;i<n;++i)
{
    scanf("%d",&d[i]);
}
for(i=0;i<k;++i)
{
    sum+=d[i];
}
printf("%d",sum);
}
