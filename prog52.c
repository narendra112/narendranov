//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include<stdio.h>
void main()
{
	int n;
	printf("enter maximum limit of natural number\n");
	scanf("%d",&n);
	while(n>=1)
	{
	printf("%d\n",n);
	n--;
	}
	 
}
