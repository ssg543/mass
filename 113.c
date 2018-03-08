#include<stdio.h>
void main()
{
    int N,K,a[190],i,count==0;
    printf("enter the nvalue:");
    scanf("%d",&N);
    printf("enter K value:");
    scanf("%d",&K);
    printf("enter the array:");
    for(i=1;i<=N;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=1;i<=N;i++)
    {
        if(a[i]==K)
        {
            count++;
        }
        printf("%d",count);
       
    }

}
