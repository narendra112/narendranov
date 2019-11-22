//Write a C program to enter any number and calculate its square root//
#include<stdio.h>
#include<math.h>
void main()
{
	float a,c;
	printf("enter number to find square root\n");
	scanf("%f",&a);
	c=sqrt(a);
	printf("square root of a number=%f\n",c);
}
