//Write a C program to enter length in centimeter and convert it into meter and kilometer//
#include<stdio.h>
void main()
{
float c,k,m;
printf("enter the c\n");
scanf("%f",&c);
k=c/100000;
m=c/100;
printf("%f in kilometer  \n%f in meter ",k,m);



}
