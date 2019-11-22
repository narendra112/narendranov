// Write a C program to count total number of notes in given amount//
#include<stdio.h>
void main()
{
	int amount,a;
	printf("Enter amount\n");
	scanf("%d",&amount);
	if(amount>=500)
	{
	a=amount/500;
	amount=amount-(500*a);
	printf("500=%d\n",a);
	}
	 if(amount>=200)
	{
	a=amount/200;
	amount=amount-(200*a);
	printf("200=%d\n",a);
	}
	if(amount>=100)
	{
	a=amount/100;
	amount=amount-(100*a);
	printf("100=%d\n",a);
	}	
	if(amount>=50)
	{
	a=amount/50;
	amount=amount-(50*a);
	printf("50=%d\n",a);
	}
	if(amount>=10)
	{
	a=amount/10;
	amount=amount-(10*a);
	printf("10=%d\n",a);
	}
	if(amount>=1)
	{
	a=amount/1;
  	amount=amount-(1*a);
        printf("1=%d\n",a);
	}

}
