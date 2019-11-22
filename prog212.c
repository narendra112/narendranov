//Write a C program to read and print elements of array
#include<stdio.h>
void main()
{
	int arr[10],i,n;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("entered array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
