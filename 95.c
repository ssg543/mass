#include<stdio.h>
void main()
{
    int si, p,r,t;
    printf("enter the p value:");
    scanf("%d",&p);
     printf("enter the r value:");
    scanf("%d",&r);
     printf("enter the t value:");
    scanf("%d",&t);
    si=p*(1+r*t);
    printf("si is %d",si);
}
