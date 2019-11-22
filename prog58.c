//Write a C program to find sum of all odd numbers between 1 to n using for loop
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter maximum limit to print odd number");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		sum+=i;	
	}
	printf("%d\n",sum);
}
