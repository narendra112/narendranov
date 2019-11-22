// Write a C program to find maximum between two numbers using switch case
#include<stdio.h>
void main()
{
 	int num1,num2;
	printf("enter any 2 numbers\n");
	scanf("%d %d",&num1,&num2);
	switch(num1>num2)
	{
	case 0:
	printf("entered %d is maximum\n",num2);
	break;
	case 1:
	printf("entered %d is maximum\n",num1);
	break;
	default:
	printf("invalid input\n");
	}
}
