#include<stdio.h>
void main()
{
	int n,isprime,i,j,sum=0;
	printf("enter any num to print n prime numbers\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	isprime=1;
	for(j=2;j<=i/2;j++)
	{
	if(i%j==0)
	{
	isprime=0;
	break;
	}
	}
	if(isprime==1)
	{
	sum+=i;
	
	}
	}
	printf("sum of numbers=%d\n",sum);
}

