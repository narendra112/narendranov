#include<stdio.h>
void main()
{
	char a[100];
	int count=0,i=1;
	printf("Enter any array\n");
	scanf("%[^\n]",a);

	do
	{
			
			if((a[i] == ' ') || (a[i] == '\n') || (a[i] == '\t') || (a[i] == '\0'))
			{
			++count;
			}
			i++;
	}while(a[i]!='\0');
	printf("Count of total number of words=%d\n",count++);
}
