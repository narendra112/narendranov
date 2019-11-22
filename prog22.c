//Write a C program to check whether a number is even or odd//
#include<stdio.h>
void main()
{
	int x;
	printf("enter any number\n");
	scanf("%d",&x);
	if(x%2==0)
	{
	printf("%d is even\n",x);
	}
	else
	{
	printf("%d is odd\n",x);
	}
}
