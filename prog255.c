#include<stdio.h>
void main()
{
	char a[100],b[100];
	printf("Enter any character\n");
	scanf("%s",a);
	printf("Enter any character\n");
	scanf("%s",b);
	for(int i=0;a[i]!='\0';i++)
		b[i]=a[i];
	printf("After copying string1 to string2=%s\n",b);
}
