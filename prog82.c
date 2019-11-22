#include<stdio.h>
void main()
{
	int n,isprime,i,j,sum=0;
	printf("enter any num to print n prime numbers\n");
	scanf("%d",&n);
	printf("prime  factors of %d are=",n);
	for(i=2;i<=n;i++)
	{
	if(n%i==0)
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
	printf("%d\t",i);
	
	}
	}
	}
}

