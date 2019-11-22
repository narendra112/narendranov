#include<stdio.h>
void main()
{
	int a[10],i,max,secmax;
	printf("Enter  5 elements:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	secmax=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>secmax && a[i]<max)
		{
			secmax=a[i];
		}
	}
	printf("In the given array max=%d\nsecond max=%d\n",max,secmax);
}
