#include<stdio.h>
#include<string.h>
void main()
{
char str[50];
int len;
printf("enter the string");
gets(str);
len=strlen(str);
printf("number of characters in string %d",len);
}
