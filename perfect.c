#include<stdio.h>
void main()
{
	int j,n,i,sum;
	printf("enter any no to check perfect no\n");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
	sum=0;
	for(i=1;i<j;i++)
	{
	if(j%i==0)
	{
	sum=sum+i;
	}
	}
	if(sum==i)
	{
	printf("%d\t",i);
	}
	}
}
