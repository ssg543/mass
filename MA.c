#include<stdio.h>
void main()
{
int n, a[10],maxi;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
maxi=a[0];
for(int i=0;i<n;i++)
{
if(maxi<a[i])
maxi=a[i];
}
printf("%d",maxi);
returns 0;
}
