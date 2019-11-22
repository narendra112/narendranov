#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=n/2;i<=10;i+=2)
	{
		for(j=1;j<10-i;j+=2)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<=10-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	for(i=10;i>=1;i--)
	{
		for(j=10;j>i;j--)
			printf(" ");
		for(j=1;j<=2*i;j++)
			printf("*");
		printf("\n");
	}
}
