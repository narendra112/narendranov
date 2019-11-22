//Write a C program to print multiplication table of any number using for loop
#include<stdio.h>
void main()
{
	 int a,i;
	printf("enter table number which to print\n");
	scanf("%d",&a);
	for(i=1;i<=10;++i)
	{
	printf("%d * %d = %d\n",a,i,a*i);
	}
}
