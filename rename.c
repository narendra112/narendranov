//Program to rename a file using rename() function
#include<stdio.h>
void main()
{
	char old[100],new[100];
	printf("Enter old file path\n");
	scanf("%s",old);
	printf("Enter new file path\n");
	scanf("%s",new);
	if(rename(old,new)==0)
		printf("File name replaced successfully\n");
	else
		printf("Unable to replace name\n");
}
