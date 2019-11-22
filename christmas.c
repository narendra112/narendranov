#include<stdio.h>
void main()
{
	int i,j,k,stars=1,space=7;
	for(i=1;i<=7;i++)
	{
	for(j=i;j<7;j++)
	{
	printf(" ");
	}
	for(k=1;k<=2*i-1;k++)
	{
	printf("*");
	}
	printf("\n");

	}
	for(i=7;i>=1;i--)
	{
	for(j=7;j>=i;j--)
	{
	printf(" ");
	}
	for(k=7-1;k>=1;k--)
	{
	printf("*");
	}
	printf("\n");
}
}
