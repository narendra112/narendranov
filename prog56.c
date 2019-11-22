//Write a C program to find sum of all natural numbers between 1 to n using for loop
#include<stdio.h>
void main()
{
	int sum=0, i,n;
	printf("enter num\n");
	scanf("%d",&n);
	printf("Sum of natural numbers\n");
	for(i=0;i<=n;i++)
	{	
	sum+=i;
 	}
		printf("%d\n",sum);

}
