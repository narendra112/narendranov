#include<stdio.h>
void main()
{
	int a[2][3][3],b[2][3][3],c[2][3][3],i,j,k;
	printf("Enter elements of array\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
	for(k=0;k<3;k++)
	{
	scanf("%d",&a[i][j][k]);
	}
	}
	}
	printf("Enter elements of array\n");
	for(i=0;i<2;i++)
        {
        for(j=0;j<3;j++)
        {
        for(k=0;k<3;k++)
        {	
	scanf("%d",&b[i][j][k]);
        }
        }
        }
	for(i=0;i<2;i++)
        {
        for(j=0;j<3;j++)
        {
        for(k=0;k<3;k++)
        {
        c[i][j][k]=a[i][j][k]+b[i][j][k];
	printf("Addition of two array=%d\n",c[i][j][k]);
        }
        }
        }
}
