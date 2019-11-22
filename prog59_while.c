//Write a C program to print multiplication table of any number. using while loop
#include<stdio.h>
void main()
{
	 int a,n=1;
	printf("enter table number which to print\n");
	scanf("%d",&a);
	while(n<=10)
	{
	printf("%d*%d=%d\n",a,n,a*n);
	n++;
	}
	
}
