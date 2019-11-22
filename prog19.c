//Write a C program to find maximum between three numbers//
#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("enter 3 numbers to compare\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("%d in maximum\n",num1);
		}
		else
		{
			printf("%d is maximum\n",num3);
		}
	}
 if(num2>num3)
	{
		printf("%d is maximum\n",num2);
	}
	else
	{
		printf("%d is maximum\n",num3);
	}
}
