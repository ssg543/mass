
#include<stdio.h>

void main() {
   int a,b,i;
   printf("Enter two limits TO DISPLAY THE  EVEN numbers:");
   scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++)
   {
       if((i%2)==0)
       {
           printf("the even numbers are :%d",i);
          printf("\n");
                 }
   }
}
