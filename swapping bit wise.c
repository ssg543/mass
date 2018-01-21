#include<stdio.h>
int main()
{
int g,h,i;
scanf("%d,%d",&g,&h);
i=g;
g=h;
h=i;
printf("%d,%d",g,h);
return 0;
}
