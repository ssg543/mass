#include<stdio.h>
void main()
{
    int f=0,s=1,n,last,i;
    printf("enter the number:");
    scanf("%d",&last);
    
    printf("\n %d %d",f,s);
    for(i=0;i<last;i++)
    {
        n=f+s;
        f=s;
        s=n;
    }
    printf("%d",n);
}
