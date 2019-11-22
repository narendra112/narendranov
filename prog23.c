//Write a C program to check whether a year is leap year or not//
#include<stdio.h>
void main()
{
	int year;
	printf("enter year\n");
	scanf("%d",&year);
	if((year%400==0)||(year%4==0))
	{
	printf("%d is a leap year\n",year);
	}
	else if((year%100==0)|| year)
	{
	printf("%d is not a leap year\n",year);
	}
}
