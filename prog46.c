//Write a C program to find maximum between two numbers using conditional/ternary operator.
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter any 2 values\n");
	scanf("%d %d",&num1,&num2);
	(num1>num2) ?printf("%d is maximum\n",num1):printf("%d is maximum\n",num2);
}
