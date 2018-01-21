#include<stdio.h>
int main()
{
int minimum.,loc,n;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
minimum=a[0];
for(int j=1;j<n;j++)
{
if(minimum<a[j])
{
a[j]=minimum;
loc=j+1;
}
printf("The loc is ==%dthe minimum value is==%d",minimum,loc);
}
return 0;
}
