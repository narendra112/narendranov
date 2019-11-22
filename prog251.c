#include<stdio.h>
void main()
{
	int i,j,a[100][100],n,flag=0;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{

			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j && a[i][j]!=1)
			{
				flag=1;
			} 
			else if(i!=j && a[i][j]!=0)
			{
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		printf("given matrix is identity matrix\n");
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
		printf("given matrix is Not identity matrix\n");
	}
}
