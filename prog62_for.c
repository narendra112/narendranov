//Write a C program to find first and last digit of any number. for loop
#include<stdio.h>
void main()
{
	int i,a,first,last;
	printf("enter value\n");
	scanf("%d",&a);
	last=a%10;
	for(i=0;a>10;)
	{

		a=a/10;
	}
	printf("first=%d\nlast=%d\n",a,last);
}
