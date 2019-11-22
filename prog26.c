//Write a C program to input any character and check whether it is alphabet, digit or special character//
#include<stdio.h>
void main()
{
 	char a;
	printf("enter any value\n");
	scanf("%c",&a);
	if((a>='a' && a<='z') || (a>='A' && a<='Z'))
	{
	printf("entered value is character\n");
	}
	else if ( a >='0' && a<='9')
	{
	printf("entered value is digit\n");
	}
	else
	{
	printf("entered value is special character\n");
	}	
	
}
