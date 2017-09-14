#include <stdio.h>
int main()
{
    char d;
    printf("Enter a character: ");
    scanf("%d",&d);

    if( (d>='a' && d<='z') || (d>='A' && de<='Z'))
        printf("%c is an alphabet.",d);
    else
        printf("%c is not an alphabet.",d);

    return 0;
}
