#include<stdio.h>
void main()
{
char s[100];
printf("enter the charecter:");
scanf("%s",s);
int alpha=0,numeric=0,i;
for(i=0;s[i]!='\0';i++)
{
    if(s[i]>='a'&& s[i]<='z'||s[i]>='A'&& s[i]<='Z')
    {
    alpha++;
    }
}
{
if(s[i]<='0'&& s[i]>='9')
{
numeric++;
}}
if(numeric>=1&&alpha>=1)
{
    printf("yes");
}
}
