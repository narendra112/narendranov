//Write a C program to enter temperature in °Celsius and convert it into °Fahrenheit//
#include<stdio.h>
void main()
{
	float temp,fahrenhit;
	printf("enter temperature\n");
	scanf("%f",&temp);
	fahrenhit=temp*1.8+32;
	printf("fahrenhit:%f\n",fahrenhit);
}

