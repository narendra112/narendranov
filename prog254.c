#include<stdio.h>
void main()
{
	char a[100],i;
int count=0;
	printf("Enter any string\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	printf("Length of string=%d\n",count);
}
