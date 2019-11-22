//Write a C program to find sum of lower triangular matrix.
#include<stdio.h>
void main()
{
int i,j,n,sum=0,a[100][100];
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
for(j=0;j<n;j++)
{
if(j<i)
{
sum=sum+a[i][j];
}
}
}
printf("sum of lower triangular matrix=%d\n",sum);
}

