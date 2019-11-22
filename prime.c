#include<stdio.h>
void main()
{
	int a;
	printf("enter any number\n");
	scanf("%d",&a);
	while(a!=0)
	{
	a=(a%1==0 && a%a==0);
	}
	if(a==0)
	{
	printf("prime");
	}
	
	else
	{	
	printf("not prime");
	
	}
}

