//Write a C program to convert days into years, weeks and days//
#include<stdio.h>
void main()
{
	float days,months,years,weeks;
	printf("enter number of days\n");
	scanf("%f",&days);
	years=days/365;
	months=days/30;
	weeks=days/7;
	printf("years:%f\nmonths:%f\nweeks:%f\n",years,months,weeks);
}

