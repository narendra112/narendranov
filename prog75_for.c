//75. Write a C program to enter any number and calculate its factorial. using for loop
#include<stdio.h>
void main()
{
	int i,n,fact=1;	
	printf("enter any number to find factorial\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	fact*=i;
	}
	printf("factorial of number:%d\n",fact);
}
