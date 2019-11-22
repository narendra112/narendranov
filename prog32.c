//Write a C program to input all sides of a triangle and check whether triangle is valid or not//
#include<stdio.h>
void main()
{
	int x,y,z;
	printf("enter sides of triangles\n");
	scanf("%d %d %d",&x,&y,&z);
	if((x+y>z)&&(x+z>y)&&(y+z>x))
	{
	printf("triangle is valid\n");
	}
	else
	{
	printf("triangle is invalid\n");
	}
}
