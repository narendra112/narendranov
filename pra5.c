#include<stdio.h>
void main()
{
	int n,fact=1,i;
	printf("enter any number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	fact*=i;
	}
	printf("factorial of number =%d\n",fact);	
}
