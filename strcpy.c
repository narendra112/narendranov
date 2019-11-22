#include<stdio.h>

#include<string.h>

void main()
{
	char a[100],b[100];
	printf("Enter two  string \n");
	scanf("%s%s",a,b );
	printf("before copy=%s\n",a);
	strcpy(a,b);
	printf("After copy is %s\n",a);
}
