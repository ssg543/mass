#include<stdio.h>
void main()
{
    int n1,c;
    printf("enter the first number:");
    scanf("%d",&n1);
    if(n1%2==0)
    {
    c=n1/2;
    printf("%d",c);
    }
    else
    {
        printf("%d",n1);
    }
    }
