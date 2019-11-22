//Write a C program to calculate product of digits of any number. using for loop
#include<stdio.h>
void main()
{
int i,rem,pro=1,n;
printf("enter any value\n");
scanf("%d",&n);
for(i=0;n>0;)
{
rem=n%10;
pro*=rem;
n=n/10;
}
printf("product=%d\n",pro);
}
