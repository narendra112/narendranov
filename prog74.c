//Write a C program to enter any number and print all factors of the number.
#include<stdio.h>
void main()
{
	int i,n;
	printf("enter n value to find factors of the number\n");
	scanf("%d",&n);
	printf("factors of numbers=");
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	{
	printf("%d  ",i);
	}
	}
	
}
