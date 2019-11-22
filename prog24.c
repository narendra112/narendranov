//Write a C program to check whether a character is alphabet or not//
#include<stdio.h>
void main()
{
	char c;
	printf("enter number or alphabet\n");
	scanf("%c",&c);
	if((c>='a' && c<='z')||(c>='A' && c<='Z'))
	{
	printf("%c is a alphabet\n",c);
	}
	else
	{
	printf("%c is not a alphabet\n",c);
	}
}
