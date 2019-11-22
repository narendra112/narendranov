//Write a C program to input all sides of a triangle and check whether triangle is valid or not//
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter sides of triangles\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c)
	{
	printf("triangle is valid\n");
	}
	else if (b+c>a)
	{
	printf("triangle is valid\n");
	}
	else if(a+c>b)
	{	
	printf("triangle is valid\n");
	}
	else
	{
	printf("triangle is invalid\n");
	}
}
