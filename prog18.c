//Write a C program to find maximum between two numbers//
#include<stdio.h>
void main()
{
	int num1,num2;
	printf("enter two numbers to compare\n");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	{
	printf("%d is maximum\n",num1);
	}
	else
	{
	printf("%d is maximum\n",num2);
	}
}
