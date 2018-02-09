#include<stdio.h>
void main()
{
char v[600];
int count=0;
int i,n;
printf("enter the string");
scanf("%s",v);
n=strlen(v);
for(i=0;i<=n;i++)
{
if(v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u')
{
    printf("vowel");
}
else
{
    count++;
}
if(count!=0)
{
    printf("not a vowel");
}}
}
