#include<stdio.h>
void main()
{
	int n,i;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		n=n%2;
		if(n==n/2)
		{
		
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}
}
