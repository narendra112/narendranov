//Write a C program to enter P, T, R and calculate Simple Interest//
#include<stdio.h>
void main()
{
	int p,t;
	float r,si;
	printf("enter p,t,r\n");
	scanf("%d %d %f",&p,&t,&r);
	si=(p*t*r)/100;
	printf("simple interest=%f\n",si);
}
