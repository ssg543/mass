#include <stdio.h>
void main()
{
     int a, d, n,  tn;
     int sums = 0;
     printf("Enter the first term value of the A.P. seres: ");
     scanf("%d", &a);
     printf("Enter the total numbers in the A.P. series: ");
     scanf("%d", &n);
     printf("Enter the common different of A.P. series: ");
     scanf("%d", &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     tn = a + (n - 1) * d;
     printf("Sums of the  series is: ");
     for (int i = a; i <= tn; i = i + d )

     {

          if (i != tn)

               printf("%d + ", i);

          else

               printf("%d = %d ", i, sums);

     }

     



}
