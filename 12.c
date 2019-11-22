#include<stdio.h>
void main()
{
	char h;
	printf("enter the alphabet\n ");
	scanf("%c",&h);
	switch(h)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is a vowel\n",h);
			break;
		default:
			printf("%c is a consonent\n",h);
			break;
	}
} 
