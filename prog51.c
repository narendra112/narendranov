//Write a C program to print all natural numbers from 1 to n. - using while loop
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("enter any value to print natural numbers from 1 to \n ");
	scanf("%d",&n);
	
	while(i<=n)
	{
	printf("%d\t",i);
	i++;
	}
}
