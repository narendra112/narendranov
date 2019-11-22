#include<stdio.h>
void main()
{
	int i,j;
		for(i=1;i<=5*2-1;i++)
		{
		for(j=1;j<=5*2-1;j++)
		{
			if((i==5)||(j==5))
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		}
}
