#include<stdio.h>
void main()
{
    int k, count=0;
    printf("enter the integers:");
    scanf("%d",&k);
    while(k!=0)
    {
        k=k/10;
        ++count;

    }
 printf("%d",count);
}
