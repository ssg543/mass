#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    d=a*b % c;
    printf("%d",d);
}
