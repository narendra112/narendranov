//Write a C program to input any alphabet and check whether it is vowel or consonant//
#include<stdio.h>
void main()
{
  	char a;
	printf("enter any alphabet\n");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	{
	printf("%c is a vowel\n",a);
	}
	else if (a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
	 printf("%c is a vowel\n",a);
	}
	else
	{
	printf("enter valid input\n");
	}
}
	
