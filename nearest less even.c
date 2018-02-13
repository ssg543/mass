#include<stdio.h>
void main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
if(num%2==0)
{
    printf("even");
}
else
{
    printf("the nearest less even number is%d",num-1);
}
}
