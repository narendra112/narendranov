//Write a C program to enter any number and check whether the number is palindrome or not
#include<stdio.h>
void main()
{
	int n,remainder,reverse=0,temp;
	printf("enter any number to check whether palindrome\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
	remainder=n%10;
	reverse=reverse*10+remainder;
	n/=10;
	}
	if (temp==reverse)
	{
	printf("given number is palindrome\n");
	}
	else
	{
	printf("given number is not palindrome\n");
	}
}
