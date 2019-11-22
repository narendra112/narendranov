/*Write a C program to check whether year is leap year or not using conditional/ternary
operator.*/
#include<stdio.h>
void main()
{
	int a,leap;
	printf("enter any year\n");
	scanf("%d",&a);
	leap=((a % 4 == 0) || (a % 400 == 0) && (a%100 ==0))?printf("entered number is leap year"):printf("entered number is not leap year\n");
}
