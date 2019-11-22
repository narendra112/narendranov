//Write a C program to swap first and last digits of any number
#include<stdio.h>
#include<math.h>
void main()
{
	long int num,last,first,swap,digits;
	printf("enter any value\n");
	scanf("%ld",&num);
	last=num%10;
	digits= log10(num);
	printf("%d",digits);
	first=(num/pow(10,digits));
	swap=last;
	swap*=(pow(10,digits));
	swap+=(num%(int)pow(10,digits));
	swap-=last;
	swap+=first;

	printf("swapped numbers=%ld\n",swap);
}
