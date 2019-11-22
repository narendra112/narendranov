#include<stdio.h>
#include<stdlib.h>
int main ()
{
int age;
printf("enter the age\n");
scanf("%d",&age);
if (age>18) 
{
printf("the age is greater than 18\n");
if (age<=21)
{
printf("the age is greater than 18 but within 21\n");
}
else
{
printf("the age is not greater than 18 or not  equal to 21\n");
}
}
else if (age<18)
{
printf("the age is less than  to 18\n");
}
else {
printf("the age is not lesser or equal to 18\n");
}
}














