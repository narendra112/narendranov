/*Write a C program to interchange diagonals of a matrix*/
#include<stdio.h>
	void main()
	{
	int a[100],n,i,temp,j,size;
	printf("Enter array size\n");
	scanf("%d"&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);
	}
	}
	size=(i<j)?i:j;
