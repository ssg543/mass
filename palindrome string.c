#include<stdio.h>
void main()
{
    int a[60];
    printf("enter the a value");
    scanf("%d",&a);
    if(rev(a)==a)
    {
        printf("palindrome")
    }
else
{
    printf("not");
}
}
