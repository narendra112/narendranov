//Write a C program to check whether a number is Prime number or not.
#include<stdio.h>
void main()
{
	int n,isprime=0,i;
	printf("enter any num\n");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
	if(n%i==0)
	{
	isprime=1;
	break;
	}
	}
	if(isprime==0)
	{
	printf("%d is a prime number\n",n);
	}
	else
	{
	printf("%d is not a prime number\n",n);
	}
}
	
