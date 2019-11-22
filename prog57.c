//Write a C program to find sum of all even numbers between 1 to n using for loop
#include<stdio.h>
void main()
{
	int sum=0,i,n;
	printf("enter till where even number need to sum\n");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
	
		sum+= i;
	}
	printf("sum=%d\n",sum);	

}

