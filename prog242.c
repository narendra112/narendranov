// C program to find sum of minor diagonal elements of a matrix.//

#include<stdio.h>
void main()
{
int a[100][100],i,j,n,sum=0;
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
for(j=0;j<n;j++)
{
if(i+j==(n+1)-2)
{
sum+=a[i][j];
}
}
}
printf("Sum of minor diagonal=%d\n",sum);
}

