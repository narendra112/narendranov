#include<stdio.h>
void main()
{
	int n,fact,sum,j,d,i,temp;
	printf("enter any number\n");
	scanf("%d",&n);
	for(j=1;j<n;j++)
	{
	sum=0;
	temp=j;
	while(temp>0)
	{
	d=temp%10;
	fact=1;
	for(i=1;i<=d;i++)
	{
	fact*=i;
	}
	sum+=fact;
	temp/=10;
	}
	if(sum==j)
	{
	printf("%d\t",j);
	}
	}
}
