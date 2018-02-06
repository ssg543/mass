#include<stdio.h>
void main()
{
    int a,b;
    int c;
    printf("enter the a value:");
    scanf("%d",&a);
    printf("enter the b value:");
    scanf("%d",&b);
    c=a+b;
    if(c%2==0)
    {
        printf("even");
    }
 else
 {
     printf("odd");
 }
 }
