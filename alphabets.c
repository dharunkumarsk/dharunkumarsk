#include <stdio.h>
int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("%c  an alphabet.",c);
    else
        printf("%c not an alphabet.",c);

    return 0;
}


