//Write a C program to check whether a number is Perfect number or not.
#include<stdio.h>
void main()
{
	int n,i,sum=0;;
	printf("enter any number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	{
	sum+=i;
	}
	}
	if(n==sum)
	{
	printf("%d is a perfect number\n",n);
	}
	else
	{
	printf("%d is not a perfect number\n",n);
	}
}
