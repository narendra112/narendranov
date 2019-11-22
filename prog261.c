//Write a C program to toggle case of each character of a string.
#include<stdio.h>
void main()
{
	char a[100];
	int i;
	printf("Enter any word to toggle\n");
	gets(a);
	printf("Entered string is %s\n",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		else if (a[i]<='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}

	}
	printf("After toggle=%s\n",a);
}

