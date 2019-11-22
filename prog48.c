/*Write a C program to check whether a number is even or odd using
conditional/ternary operator.*/
#include<stdio.h>
void main()
{
	int a,n;
	printf("enter any value\n");
	scanf("%d",&a);
	n=(a % 2 == 0 )	? printf("entered value is even\n") :printf("entered value is odd\n");  ;
	
}
