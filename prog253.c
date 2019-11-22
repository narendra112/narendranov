#include<stdio.h>
void main()
{
	int a[100][100],b[100][100],i,j,flag=0,n;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("Enter elements of a matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
//flag=0;
	for(i=0;i<n && flag;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=b[j][i])

			flag=1;

			break;
		}
	}
	if(flag==0)
	{
		printf("Given matrix is symmetric\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
	else 
	{
		printf("Given matrix is not symmetric\n");
	}
}
