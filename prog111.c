//Write a C program to get nth bit of a number.
#include<stdio.h>
void main()
{
	int num,n,extract;
	printf("Enter number to find nth bit\n");
	scanf("%d",&num);
	printf("Enter nth bit which bit to find\n");
	scanf("%d",&n);
	extract=(num>>n)&1;
	printf("nth bit =%d\n",extract);
}
