#include<stdio.h>
void main()
{
    int n,i,b=0,c=1,d=2;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=1)
    {
        n=n%2;
        b++;
    }
for(i=0;i<b+1;i++)
{
    c=c*d;
}
    printf("%d",c);
}
    
    
    
    
    
    
