#include<stdio.h>
void main()
{
    int num,i,temp=0;
    printf("enterthe number:");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
      if(num%i)  
      {
        temp=1;
      }
    if(temp!=0)
    {
        printf("composite");
    }
    else
    {
    printf("prime");
    }
    }
}
