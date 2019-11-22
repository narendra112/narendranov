//Write a C program to find sum of main diagonal elements of a matrix.//

#include<stdio.h>
void main()
{
	int a[10][10],i,j,n,sum=0; 
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i][i];
	}
	printf("%d\n",sum);
}



