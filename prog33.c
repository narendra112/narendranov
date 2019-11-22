//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle//
#include<stdio.h>
void main()
{
 	int x,y,z,d;
	printf("enter 3 sides of triangle\n");
	scanf("%d %d %d",&x,&y,&z);
	d=x+y+z;
	if(d<=180)
	{
	if(x==y && y==z && z==x  )
	{
	printf("triangle is equilateral\n");
	}
	else if(x==y || y==z|| y!=z && z==x)  
	{
	printf("triangle is isosceles\n");
	}	
	else
	{	
	printf("scalene\n");
	}
}
}
