//Write a C program to print all even numbers between 1 to 100. - using while loop
#include<stdio.h>
void main()
{
	int i=1,n=100;
	printf("print all even numbers from 1 to 100\n");
	while(i<=n)
	{
		if(i % 2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}

}
