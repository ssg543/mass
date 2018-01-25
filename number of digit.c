#include<stdio.h>
void main()
{
    int n,count=0,temp;
    printf("\nenter the digit");
    scanf("%d,&n");
    
    while(n!=0)
    {
        n=n%10;
        temp=n;
        count++;
        
        
    }
    printf("\nnumber of digit is %d",count);
}
