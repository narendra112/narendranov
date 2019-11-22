//Write a C program to enter length and breadth of a rectangle and find its area//
#include<stdio.h>
void main()
{
	int area,length,breadth;
	printf("enter length and breadth\n");
	scanf("%d %d",&length,&breadth);
	area=length*breadth;
	printf("area=%d\n",area);
}
