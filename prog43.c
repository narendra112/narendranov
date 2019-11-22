//Write a C program to check whether a number is even or odd using switch case
#include<stdio.h>
void main()
{
	int a;
	printf("enter any number to check even od odd\n");
	scanf("%d",&a);
	switch(a%2==0)
	{
	case 0:
	printf("entered number is odd\n");
	break;
	case 1:
	printf("entered number is even\n");
	break;
	default:
	printf("invalid input\n");
	}
	
}
