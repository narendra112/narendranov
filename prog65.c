//Write a C program to calculate sum of digits of any number.
#include<stdio.h>
void main()
{
	long int n,sum=0,remainder;	
	printf("enter any number\n");
	scanf("%ld",&n);
	while(n>0)
	{
	remainder=n%10;
	sum+=remainder;
	n=n/10;
	}
	printf("sum=%ld\n",sum);
}
