//Write a C program to perform Scalar matrix multiplication.
#include<stdio.h>
void main()
{
	int i,j,a[100][100],n,mul;
	printf("Enter array size\n");
		scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("enter the value of multiplier\n");
	scanf("%d",&mul);
	printf("scalar matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=mul*a[i][j];
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}
}



