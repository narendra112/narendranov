#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
	{
	if(j==i||j==1||i==5)
	{
	printf("*");
	}
	else
	{
	printf(" ");
	}
	}
	printf("\n");
	}

}
