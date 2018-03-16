#include<stdio.h>
void main()
{
    int m,n,rev=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        rev=rev*10+m;
        n=n/10;
    }
    printf("reversal is %d",rev);
}
