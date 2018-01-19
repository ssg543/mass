#include<stdio.h>
#include<math.h>
int main()
{
double base,expo,power;
printf("enter the base value:");
scanf("%lf",&base);
printf("enter the exponent value:");
scanf("%1f",&expo);
power=pow(base,expo);
printf("%.2l^%.2lf=%.2lf",base,expo,power);
return 0;
}
