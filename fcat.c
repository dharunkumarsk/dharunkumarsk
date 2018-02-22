#include <stdio.h>
#include<conio.h>
void main()   
{
  int d,fact=1;
  scanf("%d",&d);
  for(int i=1;i<=d;i++)
  {
    fact=fact*i;
  }
  printf("%d",fact);
  getch();
}
