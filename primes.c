#include<stdio.h>
void main()
{
int n,s=0,i;
printf("enter the n value");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
s++;
}
}
if(s==0)
{
printf("prime");
}
else
{
printf("composite");
}
return 0;
}
