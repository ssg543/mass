#include<stdio.h>
void main()
{
int n,k,a[70],i,j;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the k value:");
scanf("%d",&k);
printf("enter the values:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    int temp;
for(j=i+1;j<=n;j++)
{
    if(a[i]>a[j]);
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

}
}
}
printf("%d",a[k]);
}
