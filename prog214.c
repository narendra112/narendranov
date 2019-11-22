#include<stdio.h>
void main()
{
	int sum=0,n,i;
        int a[100];
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("%d\n",sum);
}

