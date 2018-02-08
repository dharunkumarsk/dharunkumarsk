#include <stdio.h>

#include <stdio.h>

int main()
{
    int d,b,power=1;
    printf("Enter the number:");
    scanf("%d",&d);
    printf("Enter the power for that number:");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        power=power*d;
    }
    printf("Power of %d^%d is %d",d,b,power);

    return 0;
}
