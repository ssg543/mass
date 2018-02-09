#include<stdio.h>
void main()
{
    int n,d=0,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            d=1;
        }
        
    if(d==0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
}}
