//Write a C program to enter P, T, R and calculate Compound Interest//
#include<stdio.h>
#include<math.h>
void main()
{
	float p,t,r,ci;
	printf("enter P,T,R\n");
	scanf("%f %f %f",&p,&t,&r);
	ci=p*(pow((1+r/100),t));
	printf("compound interest=%f",ci);
}
