#include<stdio.h>
void main()
{
	int i,j,k,rows,num=1;
	printf("enter number of rows:");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--)
	{
	for(j=rows;j>i;j--)
	{
	printf(" ");
	}
	for(k=5;k<=(i*2-1);k++)
	{
	printf("%d",num);
	num++;
	}
	printf("\n");
	}
}
