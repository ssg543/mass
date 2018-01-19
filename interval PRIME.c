
#include<stdio.h>
void main()
{
	int r1,r2,i,j,count=0;
	printf("Enter Range to enter the prime numbers");
	scanf("%d%d",&r1,&r2);
	for(i=r1+1;i<r2;i++)
	{
		for(j=i;j>0;j--)
		{
			if(i%j==0)
			count++;
		}
		if(COUNT==2)
		printf("%d\t",i);
		count=0;
	}
}
