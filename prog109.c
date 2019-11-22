//Write a C program to check Least Significant Bit (LSB) of a number is set or not.//
#include<stdio.h>
void main()
{
	int num,l_set;
	printf("enter any number to find LSB\n");
	scanf("%d",&num);
	l_set=num&(0x01<<0);
	printf("%d\n",l_set);
	if(l_set == 1)
	{
	printf("%d of LSB is set 1\n",num);
	}
	else
	{
	printf("%d of LSB is not set\n",num);
	}
}
