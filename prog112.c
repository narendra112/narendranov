//Write a C program to set nth bit of a number.
#include<stdio.h>
void main()
{
	int num,n,set;
	printf("Enter number to set bit\n");
	scanf("%d",&num);
	printf("Enter which bit to set\n");
	scanf("%d",&n);
	set=num|(0x01<<n);
	printf("after setting bit=%d\n",set);
}
