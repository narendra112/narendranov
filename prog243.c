//Write a C program to find sum of each row and column of a matrix.
#include<stdio.h>
void main()
{
	int i,j,a[100][100],sum,n;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
		printf("Sum of Row %d=%d\n",i+1,sum);
	}
	for(i=0;i<n;i++)
	{
sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+a[j][i];
		}
		printf("Sum of coloumn %d=%d\n",i+1,sum);
	}
}
