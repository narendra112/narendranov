#include<stdio.h>
void main()
{
	int i,j,n1,n2;
	printf("enter i\n");
	scanf("%d",&n1);
	printf("enter j\n");
	scanf("%d",&n2);
	for(i=1;i<=n1;i++)
	{
		for(j=i;j<=n1;j++)
		{
			printf("*");
		}
		for(j=1;j<=2*i-2;j++)
		{
			printf(" ");
		}
		for(j=n1;j>=i;j--)
			printf("*");
		printf("\n");
	}
	for(i=1;i<=n1;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=2*i-2;j<2*n1-2;j++)
			if((i==1)&&(j==9))
				printf("M");
			else
				printf(" ");
		for(j=i;j>=1;j--)
			printf("*");
		printf("\n");
	}
}
