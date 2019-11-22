//Write a C program to enter any number and check whether the number is palindrome or not. using for loop
#include<stdio.h>
void main()
{
	int temp,i,n,rem,rev=0;
	printf("enter any value\n");
	scanf("%d",&n);
	temp=n;
	for(i=n;n>=10;)
	{
		rem=n%10;
		rev+=rem;
		n=n/2;
	}
	if(temp==rev)
	{
		printf("given number is palindrome\n");
	}
	else
	{
		printf("given number is not palindrome");
	}
}
