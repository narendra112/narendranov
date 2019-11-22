//Write a C program to find power of any number using recursion.
#include<stdio.h>	
double power(double base,int expo);
void main()
{
	double base,expo;
	int po;
	printf("Enter base\n ");
	scanf("%lf",&base);
	printf("Enter expo\n");
	scanf("%lf",&expo);
	po=power(base,expo);
	printf("Power of given number=%d\n",po);
}

double power(double base,int expo)
{
	if(expo==0)
		return 1;
	else if(expo>0)
		return base*power(base,expo-1);
	else
		return 1 / power(base,-expo);
}

