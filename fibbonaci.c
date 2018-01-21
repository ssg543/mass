#include<stdio.h>
void main()
{
	int a=0, b=1,c,i,n;
	printf("enter  number");
	scanf("%d",&n);
	printf("fibo series");
	for(i=0;i<n;i++)
	{
		printf("%d",a);
	c=a+b;
	a=b;
	b=c;
	}
}
