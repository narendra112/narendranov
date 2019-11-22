//Write a C program to print all Prime numbers between 1 to n.
#include<stdio.h>
void main()
{
	int n,isprime,i,j;
	printf("enter any num to print n prime numbers\n");
	scanf("%d",&n);
	printf("prime numbers are:");
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
	printf("%d\t",i);
	}
	}
}
