//Write a C program to calculate product of digits of any number
#include<stdio.h>
void main()
{
	int a,pro=1,remainder;
	printf("enter any value\n");
	scanf("%d",&a);
	while(a!=0)
	{
	remainder=a%10;
	pro*=remainder;
	a=a/10;
	}
	printf("product=%d\n",pro);
}
