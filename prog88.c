//Write a C program to print all Strong numbers between 1 to n.
#include<stdio.h>
void main()
{
	int n,temp,sum,last,i,fact,j;
	printf("enter any number to find n strong numbers\n");
	scanf("%d",&n);
	printf("strong numbers of 1 to  %d=",n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		temp=i;
		while(temp>0)
		{
			fact=1ll;
			last=temp%10;
			for(j=1;j<=last;j++)
			{
				fact*=j;
			}
			sum+=fact;
			temp/=10;
		}
		if(sum==i)
		{
			printf("%d\t",i);
		}
	}
}
