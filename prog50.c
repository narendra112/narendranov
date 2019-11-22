/*Write a C program to check whether character is an alphabet or not using
conditional/ternary operator.*/
#include<stdio.h>
void main()
{
	char a;
	printf("enter any value to check charcter or not\n");
	scanf("%c",&a);
	((a>='a' && a<='z') || (a>='A' && a<='Z'))?printf("entered value is alphabet\n"):printf("entered value is not alphabet\n");
}
