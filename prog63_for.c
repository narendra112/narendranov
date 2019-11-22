//Write a C program to find sum of first and last digit of any number. using for loop
#include<stdio.h>
void main()
{
	int i,a,sum,last,first;
	printf("enter any number to find sum od first & last digit\n");
	scanf("%d",&a);
	last=a%10;
	for(i=0;a>10;)
	{
		a=a/10;
	}
		sum=last+a;
	printf("sum=%d\n",sum);
}
