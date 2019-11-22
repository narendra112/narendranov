//Write a C program to check whether a number is Strong number or not.
#include<stdio.h>
void main()
{
	int n,fact,sum=0,i,last,temp;
	printf("enter any number\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
	last=n%10;
	fact=1;
	for(i=1;i<=last;i++)
	{
	fact=fact*i;
	}
	sum=sum+fact;
	n/=10;
	
	}
	if(temp==sum)
	{
	printf("%d is strong number\n",temp);
	}
	else
	{
	printf("%d is not strong number\n",temp);
	}

}
