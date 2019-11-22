//Write a C program to find diameter, circumference and area of circle using functions.
#include<stdio.h>
	void circle(int r);
void main()
{
	int r; 
	printf("Enter radius of circle\n");
	scanf("%d",&r);
	circle(r);
}

void circle(int r)
{
	float pi=3.14159,area,circumference,diameter;
	area=pi*r*r;
	diameter=2*r;
	circumference=2*pi*r;
	printf("Diameter of circle=%f units\n",diameter);
	printf("Circumference of circle=%f units\n",circumference);
	printf("Area of circle=%f sq.units\n",area);
}
