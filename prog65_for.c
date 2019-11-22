//Write a C program to calculate sum of digits of any number using for loop
#include<stdio.h>
void main()
{
int n,a,sum=0,rem;
printf("enter any value\n");
scanf("%d",&n);
for(a=0;n>0;)
{
rem=n%10;
sum+=rem;
n=n/10;
}
printf("sum=%d",sum);
}
