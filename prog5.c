//Write a C program to enter radius of a circle and find its diameter, circumference and area//
#include<stdio.h>
void main()
{
float a,c,d,r,pi=3.14;
printf("enter the radius\n");
scanf("%f",&r);
a=pi*r*r;
c=2*pi*r;
d=2*r;
printf("%f\n%f\n%f",a,c,d);



}
