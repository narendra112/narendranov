//Write a C program to enter two angles of a triangle and find the third angle//
#include<stdio.h> 
void main()
{
	int x,y,z;
	printf("enter two sides of angle\n");
	scanf("%d %d",&x,&y);
	z=180-(x+y);
	printf("third angle is:%d\n",z);
}
