//Write a C program to enter temperature in Fahrenheit(°F) and convert it into Celsius(°C)//
#include<stdio.h>
void main()
{
	float calc,fahr;
	printf("enter temperature in fahrenhit\n");
	scanf("%f",&fahr);
	calc=(5.0/9)*(fahr-32);
	printf("temperature in celsius:%f\n",calc);
}
