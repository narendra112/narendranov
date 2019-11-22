#include<stdio.h>
void main()
{
	int i,j,k,num=1;
	for(i=1;i<=5;i++)
	{
	for(j=i;j<5;j++)
	{
	printf(" ");
	}
	for(k=1;k<=(2*i-1);k++)	
	{
	printf("%3d",num);
	num++;
	}
	printf("\n");
	}
}

