//74. Write a C program to enter any number and print all factors of the number. using while loop
#include<stdio.h>
void main()
{
	int i=1,n;	
	printf("enter any numbers\n");
	scanf("%d",&n);
	printf("factors of numbers=");
	while(i<=n)
	{
	if(n%i==0)
	{
	printf("%d\t",i);
	}
	i++;
	}
}

