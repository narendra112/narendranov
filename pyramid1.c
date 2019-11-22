	#include<stdio.h>
void main()
{
	int i,j,n;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=5*2-2;j>=i;j--)
		{
			printf(" ");
		}
		for(j=n;j>=1;j--)
		{
			printf("%d",j);
	n++;
		}
		printf("\n");
	}
}
