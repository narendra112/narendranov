//Write a C program to print all natural numbers from 1 to n using for loop
#include<stdio.h>
void main()
{
	int i,n;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
	}
}
