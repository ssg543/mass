#include <stdio.h>
int main(void) 
{
int z[1000],i,j,t,lim;
scanf("%d",&lim);
for(i=0;i<lim;i++)
scanf("%d",&a[i]);
for(i=0;i<lim;i++)
{
for(j=0;j<lim;j++)
{
if(z[i]>z[j])
{
t=z[j];
z[j]=z[i];
z[i]=t;
}	
}
}
printf("%d\t",a[lim%2]);
return 0;
}
