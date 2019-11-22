#include<stdio.h>
void main()
{
	char str1[100], str2[100],str[100],i,j;
	printf("Enter sting1\n");
	scanf("%s",str1);
	printf("Enter string2\n");
	scanf("%s",str2);
	strcat(str1, str2);
	printf("Concatenate of two string=%s\n", str1);
}
