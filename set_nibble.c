#include<stdio.h>
void main()
{
	int num,k;
	printf("Enter any number\n");
	scanf("%d",&num);
	k=~((~0)<<(7-4+1))<<4|num;
	printf("setting nibble=%d\n",k);
}
