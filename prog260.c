//Write a C program to convert uppercase string to lowercase
#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	printf("Enter any characters\n");
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A' && a[i]<='z')
		{
			a[i]=a[i]+32;
		}
	}
	printf("string in lower string are:%s\n",a);
}
