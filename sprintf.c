#include<stdio.h>
void main()
{
	char value[100];
	int a=10,b=12,c;
	c=a+b;
	sprintf(value,"Sum of two numbers=%d\n",c);
	printf("%s",value);
}
