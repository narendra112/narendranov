//arrange in ascending order
#include<stdio.h>
void main()
{
	int i,j,a[100],n,temp;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
