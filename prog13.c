//Write a C program to enter base and height of a triangle and find its area//
#include<stdio.h>
void main ()
{
	int area,base,height;
	printf("enter  base & height of triangle\n");
	scanf("%d %d",&base,&height);
	area=(base*height)/2;
	printf("area of triangle:%f\n",(float)area);
}
