//Write a C program to find first and last digit of any number// using for loop
#include<stdio.h>
void main()
{
	long long int num,last;
	printf("enter any value\n");
	scanf("%lld",&num);
	last=num%10;
	while(num>=10)
	{
	num=num/10;
	}
	printf("first digit=%lld\n",num);
	
	printf("last digit=%lld\n",last);
}
