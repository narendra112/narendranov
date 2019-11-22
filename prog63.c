//Write a C program to find sum of first and last digit of any number
#include<stdio.h>
void main()
{
	long long int num,sum,last;
	printf("enter any value\n");
	scanf("%lld",&num);
	last = num % 10;
	while(num>=10)
	{
	num=num/10;
	}
	sum=num+last;
	printf("sum of first and last digit of given number:%lld\n",sum);
	
}
