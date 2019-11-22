#include<stdio.h>

void main()
{
	int a[100][100],b[100][100],add[100][100],i,j,row,coloumn;
	printf("enter array size of row\n");
scanf("%d",&row);
printf("enter size of coloumn\n");
scanf("%d",&coloumn);
 printf("enter elements of a\n");//elements of a
	for(i=0;i<row;i++)
	{
		for(j=0;j<coloumn;j++)
		{
			scanf("%d",&a[i][j]);
		}
//			printf("\n");
	}
	printf("enter elements of b array\n");//elements of b
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		//	printf("\t");
		}
		
	}
	for(i=0;i<row;i++)//performing addition
	{
		for(j=0;j<2;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
		}
	}

	printf("addition of elements\n");//addition of elements
	for(i=0;i<row;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",add[i][j]);
			printf(" ");
		} 
		printf("\n");
	}
}



