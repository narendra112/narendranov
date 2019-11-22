#include<stdio.h>
void main()
{
	int n,i,temp,pali=0,rem;
	printf("enter any value\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
	rem=n%10;
	pali=pali*10+rem;
	n/=10;
	}
	n=temp;
	if(temp==pali)
	{
	printf("%d is palindrome\n",n);
	}
	else
	{
	printf("%d is not palindrome\n",n);
	}
}
