#include<stdio.h>
void main()
{
    int a[20],sum=0,avg,i,n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the numbers:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
        {
            sum=sum+i;
        }
    avg=sum/n;
    printf("%d",avg);
}
