//*Two matrix are equale or not*//

#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],n,i,j,flag=0;
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
					printf("enter the elements of second array\n");
					for(i=0;i<n;i++)
					{
					for(j=0;j<n;j++)
					{
					scanf("%d",&b[i][j]);
					}
					}
					for(i=0;i<n;i++)
					{
					for(j=0;j<n;j++)
					{
					if(a[i][j]==b[i][j])
					{
					flag=1;
					}
					}
					}
			if(flag==1)
			{
				printf("matrix are equal\n");
			}
			else
				printf("matrix is not equal\n");
}


