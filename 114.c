#include<stdio.h>
void main()
{
    int n,k,v[20],count=0,i;
    printf("enter the n value:");
    scanf("%d",&n);
    printf("enter the k value:");
    scanf("%d",&k);
    printf("enter the values:");
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&v[i]);
        }
        for(i=0;i<n;i++)
        {
            if(v[i]%2!=0)
            {
            count++;
            }
            if(count==k);
            {
                printf("%d",v[k]);
            }
            
        }
    }
}
