//Write a C program to check whether an alphabet is vowel or consonant using switch case
#include<stdio.h>
void main()
{
 	char a;
	printf("enter any charcter\n");
	scanf("%c",&a);
	switch(a)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	printf("enter character is vowel\n");
	break;
	default:
	printf("entered character is constant\n");
	
	}
}
