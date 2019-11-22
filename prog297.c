/*Write a C program to find cube of any number using function.*/
#include<stdio.h>
int cube(int);//function declaration
void main()
{
	int n;
	printf("Enter any number to find cube\n");
	scanf("%d",&n);
	printf("%d",cube(n)); //function call
}
int cube(int a)  //function definition
{
	int d;
	d=a*a*a;
	//printf("Cube of number=%d\n",d);
	return d;
}
