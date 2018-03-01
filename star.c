#include<stdio.h>
void main()
{
    char a[20],ln;
    printf("enter the charecter:");
    scanf("%s",a);
    ln=strlen(a);
      if((ln%2)!=0)
    {
    len=a/2;
    a[ln]='*';
    print("%s",a)
    }
else
{
    ln=a/2;
    a[ln]='*';
    a[ln-1]='*';
    print("%s",a);
}
}


