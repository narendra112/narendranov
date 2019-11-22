//Write a C program to check Most Significant Bit (MSB) of a number is set or not.
#include<stdio.h>
#define BITS sizeof(int)*8
int main()
{
	int num,msb;
	printf("enter any number to find MSB\n");
	scanf("\n%d",&num);
	msb=1<<(BITS-1);
	if(num & msb)
	{
	printf("%d of msb is set 1\n",num);
	}
	else
	{
	printf("%d of msb is unset 0\n",num);
	}
	return 0;
}
