//Write a C program to check whether a number is negative, positive or zero//
#include<stdio.h>
void main()
{
	int x;
	printf("enter any number\n");
	scanf("%d",&x);
	if(x>0)
	{
	printf("entered number is positive\n");
	}
	if(x<0)
	{
	printf("entered number is negative\n");
	}
	else if(x==0)
	{
	printf("entered number is equal to zero\n");
	}
}
