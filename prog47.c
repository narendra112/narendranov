//Write a C program to find maximum between three numbers using conditional/ternary operator.
#include<stdio.h>
void main()
{
	int max,num1,num2,num3;
	printf("enter  any 3 number\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	max=(num1>num2 && num1>num3)?num1:(num2>num3)?num2:num3;
	printf("maximum number=%d\n",max);
}
