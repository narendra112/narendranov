#include<stdio.h>
void main()
{
	int n,temp,rem,num=0;
	printf("enter any value\n");
	scanf("\n%d",&n);
	temp=n;
	while(temp!=0)
	{
	rem=temp%10;
	num=num*10+rem;
	temp/=10;
	}
	if(n==num)
	{
	printf("%d is palindrome\n",n);
	}
	else	
	{
	printf("%d is not palindrome\n",n);
	}
}
