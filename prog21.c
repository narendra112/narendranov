//Write a C program to check whether a number is divisible by 5 and 11 or not//
#include<stdio.h>
void main()
{
 	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	if(num % 5==0 && num % 11==0) 
	{
	printf("number is divisible  by 5 and 11\n");
	} 
	else
	{
	printf("num is divisible by 5 or 11\n");
	}	
}
