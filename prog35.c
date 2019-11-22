//Write a C program to calculate profit or loss//
#include<stdio.h>
void main()
{
	int cp,sp,profit,loss,amount;
	printf("enter the cp,sp\n");
	scanf("%d %d",&cp,&sp);
	if(sp>cp)
	{
	amount=sp-cp;
	printf("profit=%d\n",amount);
	}
	else 
	{
	amount=cp-sp;
	printf("loss=%d\n",amount);
	}
}
