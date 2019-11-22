#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	printf("Enter two values\n");
	scanf("%s %s",a,b);
	//printf("i");
	if(strcmp(a,b)==0)
		printf("Strings are equal\n");
	else
		printf("Strings are not equal\n");
}
