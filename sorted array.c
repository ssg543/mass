#include<stdio.h>
void main()
{
int n,b,i,j;
scanf("%d",&n);
int b[n];
printf("the inputs of the array is");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
printf("the outputs of the array is");
for(j=0;j<n;j++)
{
printf("%d",b[j]);
}
}
