//Write a C program to check whether a character is uppercase or lowercase alphabet//
#include<stdio.h>
void main()
{
	char a;
	printf("enter any value\n");
	scanf("%c",&a);
	if(a>='a' && a<='z')
	{
	printf("Entered character is lower case\n");
	}
	else if(a>='A' && a<='Z')
	{
	printf("Entered character in uppercase\n");
	}else
        {
        printf("invalid\n");
        }

	
}
