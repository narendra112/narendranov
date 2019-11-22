//Write a C program to enter two numbers and perform all arithmetic operations//
#include<stdio.h>
void main()
{
int a,b,add,sub,mult;
float divide;
printf("enter values\t");
scanf("\n%d  %d",&a, &b);
add=a+b;
sub=a-b;
mult=a*b;
divide=a/(float)b;
printf("sum=%d\nsub=%d\nmult=%d\ndivide=%f\n",add,sub,mult,divide);

}
