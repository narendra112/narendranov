// C program to clear nth bit of a number.
#include<stdio.h>
void main()
{
	int num,clear,n;
	printf("Enter any number\n");
	scanf("%d",&num);
	printf("Enter any bit to clear a bit\n");
	scanf("%d",&n);
	clear=num&(~0x01<<n);
	printf("number after clearing bit=%d\n",clear);
}
