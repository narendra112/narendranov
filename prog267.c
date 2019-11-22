//Write a C program to check whether a string is palindrome or not
#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],i,temp,rev=0,rem,reverse[100];
	int flag;	
	printf("Enter any string\n");
	scanf("%s",a);
	
    strcpy(reverse, a); 
    strrev(reverse);
	
    flag = strcmp(a, reverse); 
    if(flag == 0)
	if(a==reverse)
	{
		printf("Given string is palindrome\n");
	}
	else
	{
		printf("Given string is not a palindrome\n");
	}
}
