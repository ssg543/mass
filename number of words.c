#include<stdio.h>
void main()
{
    char n[300],count=0,i;
    printf("enter the sentence:");
    scanf("%c",&n);
    for(i=0;n[i]!=0;i++)
    {
     if(n[i]==' ')
     count++;
        
    }
printf("the number of word is: %d",count+1);
}
