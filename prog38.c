/*Write a C program to input electricity unit charges and calculate total electricity bill
according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
void main()
{
	int unit;
	float bill,d;
	printf("enter unit consumed\n");
	scanf("%d",&unit);
	if(unit<=50)
	{
	bill=(unit*0.50);
	d=0.20*bill;
	printf("total bill amount including tax=%f\n",d+bill);
	}
	else if(unit<=150)
	{
	bill=0.75*unit;
	d=0.20*bill;
	printf("total bill amount including tax=%f\n",d+bill);
	}
	else if(unit<=250)
	{
	bill=(unit*1.20);
	d=0.2*bill;
	 printf("total bill amount including tax=%f\n",d+bill);
	}
	else if(unit>250)
	{
	bill=(unit*1.50);
	d=(0.20*bill);
	  printf("total bill amount including tax=%f\n",d+bill);
	}
	else 
	  printf("enter valid details");


	
}
