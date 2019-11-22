//Write a C program to count number of digits in any number using while loop
#include<stdio.h>
void main()
{
	long int a,n=0;
	printf("enter any value\n");
	scanf("%ld",&a);
	while(a!=0)
	{
	n++;
	a/=10;
	}
	printf("number of digit=%ld\n",n);
}
