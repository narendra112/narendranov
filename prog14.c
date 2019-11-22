//Write a C program to calculate area of an equilateral triangle//
#include<stdio.h>
#include<math.h>
void main()
{
	float sides,area;
	printf("enter sides of triangle\n");
	scanf("%f",&sides);
	area=(sqrt(3)/4)*sides*sides;
	printf("area of equilateral triangle is:%f\n",area);
}
