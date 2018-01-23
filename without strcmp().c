#include<stdio.h>
void main()
{
    
    char a, b;
    printf("\nenter the first string");
    scanf("%s",&a);
    printf("\nenter the second string");
    scanf("%s",&b);
    if(a==b||a>b||b>a)
    {
        printf("\nthe string is%s");
    }
}
