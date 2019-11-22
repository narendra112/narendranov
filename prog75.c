//Write a C program to enter any number and calculate its factorial.
#include<stdio.h>
void main()
{
	int i=1,n,fact=1;
	printf("enter any number to find factorial\n");
	scanf("%d",&n);
	while(i<=n)
	{
	fact=fact*i;
	i++;
	}
	printf("factorial=%d\n",fact);
}
