#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter the charecter:");
scanf("%d",&c);
if(c==rev(c))
{
printf("palindrome");
}
else
{
printf("not");
}
}
