#include<stdio.h>

void main() {
  int i,a,n,s,r=0,count=0;
   printf("number to be entered:");
   scanf("%d",&a);
   for(i=2;i<a;i++)
   {
       if((a%i)==0)
       count++;
   }
   if(count==0)
   {
   printf("yes it is prime");
   printf("\n");
   }
   else
   {
       printf("no it is not a prime");
   }
  
}
