#include<stdio.h>
void main()
{
	int a,i,k=0;
	printf("Enter any number\n");
	scanf("%d",&a);
	for(i=7;i>=0;i--)
	{
	if(a&(0x01<<7-i))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	}
	printf("reverse of bit=%d\n",k);
}
