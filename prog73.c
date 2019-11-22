//Write a C program to find power of any number using for loop.
#include<stdio.h>
void main()
{
	int a,b,power=1,i;
	printf("enter any value to find power\n");
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++)
{
power*=a;
}
printf("power of number=%d\n",power);
}

