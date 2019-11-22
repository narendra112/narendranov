//Write a C program to enter any number and print its reverse
#include<stdio.h>
void main()
{
	int a,remainder,reverse=0;	
	printf("enter any number\n");
	scanf("%d",&a);
	while(a>0)
	{
	remainder=a%10;
	reverse=reverse*10+remainder;
	a=a/10;
	}
	printf("Reversed number=%d\n",reverse);
}
