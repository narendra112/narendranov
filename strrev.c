#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	printf("Enter a string\n");
	scanf("%s",a);
	strrev(a);
	printf("Reversed=%s\n",a);//strrev(a));
}
