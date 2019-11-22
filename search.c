//search given value is present
#include<stdio.h>
void main()
{
	int i,a[100],n,k,flag=0;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter key to search\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
		flag=1;
		break;
		}
	}
		if(flag==1)
		{
		printf("Key found=%d\n",k);
		}
		else
		{
		printf("Key not found=%d\n",k);
		}
}

